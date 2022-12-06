#include "Network/UFRequestManager_WB.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "FoundationSettings.h"
#include "Network/RequestUtils.h"
#include "TimerManager.h"
#include <execution>

int64 LastMessageID_WB = 0;
FTimerHandle HeartbeatHandler;

int64 UFRequestManager_WB::GetNextSubID()
{
	return LastMessageID_WB++;
}

int64 UFRequestManager_WB::GetLastSubID()
{
	return LastMessageID_WB;
}

void UFRequestManager_WB::Init()
{
	Super::Init();
	FString Url = GetDefault<UFoundationSettings>()->GetNetworkURL();
    if( Url.IsEmpty() )
    {
        Url = GetDefault<UFoundationSettings>()->GetNetwork() == ESolanaNetwork::DevNet ? "ws://api.devnet.solana.com/" : "ws://api.mainnet-beta.solana.com/";
    }
    
	if (!FModuleManager::Get().IsModuleLoaded(("WebSockets")))
	{
		FModuleManager::Get().LoadModule("WebSockets");
	}
	WebSocket = FWebSocketsModule::Get().CreateWebSocket(Url);
	
	WebSocket->OnConnected().AddLambda([]()
	{
		OnConnected_Helper();
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Connection succesfull");
	});

	WebSocket->OnConnectionError().AddLambda([](const FString& Error)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, Error);
	});

	WebSocket->OnClosed().AddLambda([](int32 StatusCode, const FString& Reason, bool bWasClean)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, bWasClean ? FColor::Green : FColor::Red, "Connection closed " + Reason);
	});

	WebSocket->OnMessage().AddLambda([](const FString& Response)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, "Message received");
		OnResponse(Response);
	});
	
	WebSocket->Connect();
}

void UFRequestManager_WB::Shutdown()
{
	if(WebSocket->IsConnected())
	{
		// Stop the timer
		WebSocket->Close();
	}
	Super::Shutdown();
}

void UFRequestManager_WB::RequestSubscription(FSubscriptionData* SubData)
{
	if (!WebSocket->IsConnected())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Could not send message, no connection.");
		return;
	}
	WebSocket->Send(SubData->Body);
	ActiveSubscriptionsMap.Add(SubData->Id, SubData);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Subscription Requested");

}


void UFRequestManager_WB::Unsubscribe(int subID)
{
	WebSocket->Send(ActiveSubscriptionsMap[subID]->UnsubMsg);
}

FSubscriptionData* UFRequestManager_WB::GetSubData(int subID)
{
	 return ActiveSubscriptionsMap[subID]; 
}


void UFRequestManager_WB::OnConnected_Helper()
{
	OnConnected.Broadcast();
}

void UFRequestManager_WB::OnResponse(const FString& Response)
{
	GEngine->AddOnScreenDebugMessage(-1, 17.0f, FColor::Purple, Response);

	TSharedPtr<FJsonObject> ParsedJSON;
	TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<>::Create(Response);
	if (FJsonSerializer::Deserialize(Reader, ParsedJSON))
	{
		float SubId;
		const TSharedPtr<FJsonObject>* params;
		if(ParsedJSON->TryGetNumberField("id", SubId))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, "Attempting to parse confirmation");
			ParseSubConfirmation(Response);
		}
		if (ParsedJSON->TryGetObjectField("params", params))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, "Attempting to parse notification");
			ParseNotification(Response);
		}
	}
}

void  UFRequestManager_WB::HeartbeatHelper()
{
	// Check if wb != NULL
	if(WebSocket != nullptr)
	{
		if(WebSocket->IsConnected())
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "Heartbeat sent!");
			WebSocket->Send("ping");
			
		}	
	}
}

void UFRequestManager_WB::HeartbeatInit(){
	GetWorld()->GetTimerManager().SetTimer(HeartbeatHandler,this, &UFRequestManager_WB::HeartbeatHelper,30.0,true,-1);
}

void UFRequestManager_WB::ParseSubConfirmation(const FString& Response)
{
	TSharedPtr<FJsonObject> ParsedJSON;
	TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<>::Create(Response);

	if (FJsonSerializer::Deserialize(Reader, ParsedJSON))
	{
		int id = ParsedJSON->GetIntegerField("id");
		if( !ActiveSubscriptionsMap.IsEmpty())
		{
			FSubscriptionData* Subscription = ActiveSubscriptionsMap[id];
			if(Subscription)
			{
				Subscription->SubscriptionNumber = ParsedJSON->GetIntegerField("result");
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Subcription Confirmed");
				
			}
		}
		else
		{
			if(ParsedJSON->GetBoolField("result"))
			{
				// Delete the object from hashmap
				ActiveSubscriptionsMap.Remove(id);
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Unsubcription Confirmed");
				
			}else
			{
				// Declare on fail
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Unsubcription failed");
			}
				
		}
	}
}

void UFRequestManager_WB::ParseNotification(const FString& Response)
{
	TSharedPtr<FJsonObject> ParsedJSON;
	TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<>::Create(Response);

	if (FJsonSerializer::Deserialize(Reader, ParsedJSON))
	{
		int SubNum = ParsedJSON->GetObjectField("params")->GetIntegerField("subscription");
		if( ActiveSubscriptions.Num() > 0 )
		{
			const int SubNum = ParsedJSON->GetObjectField("params")->GetIntegerField("subscription");
			FSubscriptionData* Subscription;
			if(!ActiveSubscriptionsMap.IsEmpty())
			{
				for (const TTuple<int, FSubscriptionData*>& Elem : ActiveSubscriptionsMap)
				{
					if(Elem.Value->SubscriptionNumber == SubNum)
					{
						Subscription = Elem.Value;
						GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Subcription Updated");
						Subscription->Response = ParsedJSON.Get();
					}
				}
			}
		}
		
	}
	else
	{
		FRequestUtils::DisplayError("Failed to parse Response from the server");
	}
}


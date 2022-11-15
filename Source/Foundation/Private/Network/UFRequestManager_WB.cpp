#include "Network/UFRequestManager_WB.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "FoundationSettings.h"
#include "Network/SubscriptionUtils.h"
#include "Network/RequestUtils.h"
#include <execution>

int64 LastMessageID_WB = 0;

TArray<FSubscriptionData*> ActiveSubscriptions;
TMap<int, FSubscriptionData*> ActiveSubscriptionsMap;

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
		UFRequestManager_WB::OnConnected_Helper();
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
		OnResponse(Response);
	});
	
	WebSocket->Connect();
}

void UFRequestManager_WB::Shutdown()
{
	if(WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
	Super::Shutdown();
}

void UFRequestManager_WB::RequestSubscription(FSubscriptionData* SubData)
{
	if (!WebSocket->IsConnected())
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Could not send message, no connection.");
		return;
	}
	ActiveSubscriptions.Push(SubData);
	ActiveSubscriptionsMap.Add(SubData->Id, SubData);
	WebSocket->Send(SubData->Body);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "Subscription Requested");

}


void UFRequestManager_WB::Unsubscribe(int subID)
{
	FSubscriptionUtils::AccountUnsubscribe(ActiveSubscriptionsMap[subID]);
	WebSocket->Send(ActiveSubscriptionsMap[subID]->UnsubMsg);
	ActiveSubscriptionsMap.Remove(subID);
          	
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
	TSharedPtr<FJsonObject> ParsedJSON;
	TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<>::Create(Response);
	if (FJsonSerializer::Deserialize(Reader, ParsedJSON))
	{
		const TSharedPtr<FJsonObject>* outObject;
		if (ParsedJSON->TryGetObjectField("subscription", outObject))
		{
			ParseNotification(Response);
		}
		else
		{
			ParseSubConfirmation(Response);
		}	
	}
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
			FRequestUtils::DisplayError("Failed to parse Response from the server");
		}
	}
}

void UFRequestManager_WB::ParseNotification(const FString& Response)
{
	TSharedPtr<FJsonObject> ParsedJSON;
	TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<>::Create(Response);

	if (FJsonSerializer::Deserialize(Reader, ParsedJSON))
	{
		const TSharedPtr<FJsonObject>* outObject;
		
		if(!ParsedJSON->TryGetObjectField("error", outObject))
		{
			int SubNum = ParsedJSON->GetIntegerField("subscription");
			bool isValidSub = false;
			if(!ActiveSubscriptionsMap.IsEmpty())
			{
				for (auto& Elem : ActiveSubscriptionsMap)
				{
					if(Elem.Value->SubscriptionNumber == SubNum)
					{
						FSubscriptionData* Subscription = Elem.Value;
						isValidSub = true;
					}
				}
				FSubscriptionData* Subscription = *ActiveSubscriptions.FindByPredicate([&](FSubscriptionData* data){return data->SubscriptionNumber == SubNum;});
				if(isValidSub)
				{
					Subscription->Response = ParsedJSON.Get();
				}
			}
		}
		else
		{
			const TSharedPtr<FJsonObject> error = ParsedJSON->GetObjectField("error");
			FRequestUtils::DisplayError(error->GetStringField("message"));
		}
	}
	else
	{
		FRequestUtils::DisplayError("Failed to parse Response from the server");
	}
}


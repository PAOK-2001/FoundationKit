#include "Network/UFRequestManager_WB.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "FoundationSettings.h"
#include "Network/RequestUtils.h"
#include <execution>

int64 LastMessageID_WB = 0;
TArray<FRequestData_WB*> PendingRequests_WB;

int64 UFRequestManager_WB::GetNextMessageID()
{
	return LastMessageID_WB++;
}

int64 UFRequestManager_WB::GetLastMessageID()
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
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "We Did heheha!!!");
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
		UFRequestManager_WB::OnResponse(Response);
	});
	
	
	WebSocket->Connect();
	
}

void UFRequestManager_WB::Shutdown()
{
	Super::Shutdown();
	if(WebSocket->IsConnected())
	{
		WebSocket->Close();
	}
}

void UFRequestManager_WB::SendRequest(FRequestData_WB* RequestData)
{
	if (!WebSocket->IsConnected())
	{
		// Don't send if we're not connected.
		return;
	}
	PendingRequests_WB.Push(RequestData);
	WebSocket->Send(RequestData->Body);
}

void UFRequestManager_WB::OnResponse(const FString &Response){
	TSharedPtr<FJsonObject> ParsedJSON;
	TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<>::Create(Response);

	if (FJsonSerializer::Deserialize(Reader, ParsedJSON))
	{
		const TSharedPtr<FJsonObject>* outObject;
		if(!ParsedJSON->TryGetObjectField("error", outObject))
		{
			int id = ParsedJSON->GetIntegerField("id");
            if( PendingRequests_WB.Num() > 0 )
            {
            	FRequestData_WB* request = *PendingRequests_WB.FindByPredicate([&](FRequestData_WB* data){return data->Id == id;});
            	if(request)
            	{
            		request->Response = ParsedJSON.Get();
            		PendingRequests_WB.Remove(request);
            		delete request;
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

void UFRequestManager_WB::CancelRequest(FRequestData_WB* RequestData)
{
	PendingRequests_WB.Remove(RequestData);
	delete RequestData;
          	
}

void UFRequestManager_WB::OnConnected_Helper()
{
	OnConnected.Broadcast();
}
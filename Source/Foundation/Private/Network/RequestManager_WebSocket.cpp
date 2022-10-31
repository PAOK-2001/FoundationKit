#include <execution>
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "FoundationSettings.h"
#include "Network/RequestUtils.h"
#include "Network/RequestManager_WebSocket.h"

int64 LastMessageID = 0;
TArray<FRequestData_WB*> PendingRequests;

int64 UFRequestManager_WB::GetNextMessageID()
{
	return LastMessageID++;
}

int64 UFRequestManager_WB::GetLastMessageID()
{
	return LastMessageID;
}

void UFRequestManager_WB::Init()
{
	FString Url = GetDefault<UFoundationSettings>()->GetNetworkURL();
    if( Url.IsEmpty() )
    {
        Url = GetDefault<UFoundationSettings>()->GetNetwork() == ESolanaNetwork::DevNet ? "https://api.devnet.solana.com/" : "https://api.mainnet-beta.solana.com/";
    }

	// Sometimes the websocket modules doesn't load by default so adding a if to make sure it does
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
	PendingRequests.Push(RequestData);
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
            if( PendingRequests.Num() > 0 )
            {
            	FRequestData_WB* request = *PendingRequests.FindByPredicate([&](FRequestData_WB* data){return data->Id == id;});
            	if(request)
            	{
            		request->Response = ParsedJSON;
            		PendingRequests.Remove(request);
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
	PendingRequests.Remove(RequestData);
	delete RequestData;
          	
}

void UFRequestManager_WB::OnConnected_Helper(){
	OnConnected.Broadcast();

}
#include "Network/RequestManager_WebSocket.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "FoundationSettings.h"

DECLARE_LOG_CATEGORY_CLASS(RequestManager_WebSocket, Log, All);

static int64 LastMessageID = 0;
static TArray<FRequestData*> PendingRequests;

int64 FRequestManager_WB::GetNextMessageID()
{
	return LastMessageID++;
}

int64 FRequestManager_WB::GetLastMessageID()
{
	return LastMessageID;
}

void FRequestManager_WB::Init()
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

	// might have to add ws to the url (the protocal)
	// WebSocket = FWebSocketsModule::Get().CreateWebSocket("ws://localhost:8080");
	WebSocket = FWebSocketsModule::Get().CreateWebSocket(Url);

	WebSocket->OnConnected().AddLambda([]()
	{
		FRequestManager_WB::OnConnected_Helper();
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
		FRequestManager_WB::OnResponse(Response);
	});
	
	WebSocket->Connect();
	
}

void FRequestManager_WB::Shutdown()
{

	if(WebSocket->IsConnected())
	{
		WebSocket->Close();
	}

}

void FRequestManager_WB::SendRequest(FRequestData* RequestData)
{
	if (!WebSocket->IsConnected())
	{
		// Don't send if we're not connected.
		return;
	}
	PendingRequests.Push(RequestData);
	WebSocket->Send(RequestData->Body);

}

void FRequestManager_WB::OnResponse(const FString &Response){
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
            	FRequestData* request = *PendingRequests.FindByPredicate([&](FRequestData* data){return data->Id == id;});
            	if(request)
            	{
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

void FRequestManager_WB::CancelRequest(FRequestData* RequestData)
{
	PendingRequests.Remove(RequestData);
	delete RequestData;
          	
}

void FRequestManager_WB::OnConnected_Helper(){
	OnConnected.Broadcast();

}
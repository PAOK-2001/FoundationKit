#pragma once

#include "CoreMinimal.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
DECLARE_DELEGATE_OneParam( RequestCallback, FJsonObject&);
DECLARE_DELEGATE_OneParam( RequestErrorCallback, const FText& FailureReason);
struct FOUNDATION_API FRequestData
{
	FRequestData() {}
	FRequestData( UINT id ) { Id = id; }

	UINT Id;
	FString Body;
	TSharedPtr<FJsonObject> Response;
	RequestCallback Callback;
	RequestErrorCallback ErrorCallback;
};

UCLASS(BlueprintType)
class  FOUNDATION_API UFRequestManager_WB:  public UObject{
    GENERATED_BODY()
public:
    DECLARE_EVENT(UFRequestManager_WB, FSocketConnected);
    TSharedPtr<IWebSocket> WebSocket;
    virtual void Init();
    virtual void Shutdown();

    int64 GetNextMessageID();
    int64 GetLastMessageID();

    void SendRequest(FRequestData* RequestData);
    void CancelRequest(FRequestData* RequestData);

private:
    FSocketConnected OnConnected;
    void OnResponse(const FString &Response);
    void OnConnected_Helper();
};

#pragma once

#include "CoreMinimal.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
struct FOUNDATION_API FRequestData_WB
{
	FRequestData_WB() {}
	FRequestData_WB( UINT id ) { Id = id; }

	UINT Id;
	FString Body;
	FJsonObject Response;
};

UCLASS(BlueprintType)
class  FOUNDATION_API UFRequestManager_WB:  public UObject{
    GENERATED_BODY()
public:
    DECLARE_EVENT(UFRequestManager_WB, FSocketConnected);
    TSharedPtr<IWebSocket> WebSocket;
    virtual void Init();
    virtual void Shutdown();

    static int64 GetNextMessageID();
    static int64 GetLastMessageID();

    void SendRequest(FRequestData_WB* RequestData);
    void CancelRequest(FRequestData_WB* RequestData);

private:
    FSocketConnected OnConnected;
    void OnResponse(const FString &Response);
    void OnConnected_Helper();
};

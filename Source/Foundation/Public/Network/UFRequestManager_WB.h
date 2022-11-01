#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IWebSocket.h"
#include "UFRequestManager_WB.generated.h"

struct FOUNDATION_API FRequestData_WB
{
	FRequestData_WB() {}
	FRequestData_WB( UINT id ) { Id = id; }

	UINT Id;
	FString Body;
	FJsonObject* Response;
};

UCLASS()
class  FOUNDATION_API UFRequestManager_WB:  public UGameInstance{
    GENERATED_BODY()
public:
    virtual void Init() override;
    virtual void Shutdown() override;
    TSharedPtr<IWebSocket> WebSocket;
    DECLARE_EVENT(UFRequestManager_WB, FSocketConnected);

    static int64 GetNextMessageID();
    static int64 GetLastMessageID();

    void SendRequest(FRequestData_WB* RequestData);
    void CancelRequest(FRequestData_WB* RequestData);

private:
	inline static FSocketConnected OnConnected;
    static void OnResponse(const FString &Response);
    static void OnConnected_Helper();
};

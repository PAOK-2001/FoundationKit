#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IWebSocket.h"
#include "UFRequestManager_WB.generated.h"

struct FOUNDATION_API FSubscriptionData
{
	FSubscriptionData() {}
	FSubscriptionData( UINT id ) { Id = id; }

	UINT Id;
	UINT SubscriptionNumber;
	FString Body;
	FString UnsubMsg;
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

    static int64 GetNextSubID();
    static int64 GetLastSubID();

    void RequestSubscription(FSubscriptionData* SubData);
    void Unsubscribe(int subID);

private:
	inline static FSocketConnected OnConnected;
    static void OnResponse(const FString &Response);
	static void ParseNotification(const FString &Response);
	static void ParseSubConfirmation(const FString &Response);
    static void OnConnected_Helper();
};

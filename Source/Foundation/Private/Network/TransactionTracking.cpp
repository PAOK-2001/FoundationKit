#include "Network/TransactionTracking.h"
#include "Network/UFRequestManager_WB.h"
#include "Network/SubscriptionUtils.h"


void TransactionTracker::Sub2Transaction(FString TransactionSignature, UFRequestManager_WB*& SocketManager)
{
	FSubscriptionData* SubRequest = FSubscriptionUtils::SignatureSubscribe(TransactionSignature);
	SocketManager->RequestSubscription(SubRequest);
}

FString TransactionTracker::GetTransactionErr(int transactionID, UFRequestManager_WB*& SocketManager)
{
	FSubscriptionData* Transaction = SocketManager->ActiveSubscriptionsMap[transactionID];
	TSharedPtr<FJsonObject> Result = FSubscriptionUtils::GetSignatureSubInfo(Transaction);
	if(Result == NULL)
	{
		return "Not possible to fetch info";
	}else
	{
		return Result->GetObjectField("value")->GetStringField("err");
	}
}

int TransactionTracker::GetTransactionSlot(int transactionID, UFRequestManager_WB*& SocketManager)
{
	FSubscriptionData* Transaction = SocketManager->ActiveSubscriptionsMap[transactionID];
	TSharedPtr<FJsonObject> Result = FSubscriptionUtils::GetSignatureSubInfo(Transaction);
	return Result->GetObjectField("context")->GetIntegerField("slot");
}


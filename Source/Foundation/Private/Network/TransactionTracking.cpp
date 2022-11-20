#include "Network/SubscriptionUtils.h"
#include "JsonObjectConverter.h"
#include "Network/UFRequestManager_WB.h"
#include "Misc/MessageDialog.h"
#include "SolanaUtils/Utils/Types.h"

static FText ErrorMessage = FText::FromString("Error");
static FText InfoMessage = FText::FromString("Info")

TransactionData* TransactionUtils::GetTransaction(const FString& pubkey){
    FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"getTransaction","params":["%s"]})")
			,request->Id , *pubKey );
	return request;
}

FString TransactionUtils::GetTransactionErr(TransactionData* info2read){
    FJsonObject* data = info2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("result");
		const TSharedPtr<FJsonObject> value = params->GetObjectField("value");
		return result->GetStringField("signature");
	}
	return "empty";
} 
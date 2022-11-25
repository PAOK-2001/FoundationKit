#include "Network/SubscriptionUtils.h"
#include "JsonObjectConverter.h"
#include "Network/UFRequestManager_WB.h"
#include "Misc/MessageDialog.h"
#include "SolanaUtils/Utils/Types.h"

static FText ErrorMessage = FText::FromString("Error");
static FText InfoMessage = FText::FromString("Info")

TransactionData* TransactionUtils::GetTransaction(const FString& pubkey){
    TransactionData* request = new TransactionData(UFRequestManager_WB::GetNextSubID());
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"getTransaction","params":["%s"]})")
			,request->Id , *pubKey );
	return request;
}

FString TransactionUtils::GetTransactionErr(TransactionData* info2read)
{
    FJsonObject* data = info2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("result"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("meta");
        result->GetStringField("err")
        if ( result != NULL){
            return result
        }
	}
	return "NO ERROR, TRANSACTION SUCCEEDED";
} 

int TransactionUtils::GetTransactionFee(TransactionData* info2read)
{
    FJsonObject* data = info2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("result"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("meta");
		return result->GetStringField("fee");
	}
	return NULL;
}

TransactionData* TransactionUtils::GetTransactionCount(const FString& pubkey){
    TransactionData* request = new TransactionData(UFRequestManager_WB::GetNextSubID());
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"getTransactionCount"})")
			,request->Id , *pubKey );
	return request;
}

int TransactionUtils::GetTransactionCountInfo(TransactionData* info2read)
{
    FJsonObject* data = info2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("result"))
	{
		return result->GetStringField("result");
	}
	return NULL;
}

FString TransactionUtils::GetPreBalances(TransactionData* info2read) {
	FJsonObject* data = info2read->Response;
	if(TShared<FJsonObject> params = data->GetObjectField("result")) {
		const TSharedPtr<FJsonObject> result = params->GetObjectField("meta");
		return result->GetArrayField("preBalances");
	}
	return NULL;
}

FString TransactionUtils::GetPostBalances(Transaction* info2read) {
	FJsonObject* data = info2read->Reponse;
	if (TShared<FJsonObject> params = data->getObjectField("result")) {
		const TSharedPtr<FJsonObject> result = pramms-> GetObjectField("meta");
		return result->GetArrayField("postBalances");
	}
	return NULL;
}

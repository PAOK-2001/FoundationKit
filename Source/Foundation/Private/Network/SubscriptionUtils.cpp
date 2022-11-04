/*
Copyright 2022 ATMTA, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "Network/SubscriptionUtils.h"
#include "JsonObjectConverter.h"
#include "Network/UFRequestManager_WB.h"
#include "Misc/MessageDialog.h"
#include "SolanaUtils/Utils/Types.h"

static FText ErrorMessage = FText::FromString("Error");
static FText InfoMessage = FText::FromString("Info");

TMap<FString, FSubscriptionData*> SubcriptionMap;
FSubscriptionData* FSubscriptionUtils::AccountSubscribe(const FString& pubKey)
{
	int SubID = UFRequestManager_WB::GetNextSubID();
	FSubscriptionData* request = new FSubscriptionData(SubID);
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"accountSubscribe","params":["%s",{"encoding": "base58","commitment": "finalized"}]})")
			,request->Id , *pubKey );

	SubcriptionMap.Add("AccountInfo",request);
	return request;
}

double FSubscriptionUtils::GetAccountSubInfo()
{
	FJsonObject* data = SubcriptionMap["AccountInfo"]->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		if(TSharedPtr<FJsonObject> result = params->GetObjectField("result"))
		{
			return result->GetNumberField("lamports");
		}
	}
	return -1.0;
}

FSubscriptionData* FSubscriptionUtils::AccountUnsubscribe(const UINT& idAccount)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"accountUnsubscribe","params":[%d]})")
			,request->Id , idAccount );
	
	return request;
}

bool FSubscriptionUtils::ParseAccountUnsubscribeResponse(const FJsonObject& data)
{
    return data.GetBoolField("result");
}

FSubscriptionData* FSubscriptionUtils::LogsSubscribe()
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"logsSubscribe","params":["all"]})")
			,request->Id );
	
	return request;
}

int FSubscriptionUtils::ParseLogsSubscribeResponse(const FJsonObject& data)
{
    return data.GetNumberField("result");
}

FSubscriptionData* FSubscriptionUtils::LogsUnsubscribe(const UINT& suscriptionID)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"logsUnsubscribe","params":[%d]})")
			,request->Id , suscriptionID );
	
	return request;
}

bool FSubscriptionUtils::ParseLogsUnsubscribeResponse(const FJsonObject& data)
{
    return data.GetBoolField("result");
}

FSubscriptionData* FSubscriptionUtils::ProgramSubscribe(const FString& pubKey)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"programSubscribe","params":["%s"]})")
			,request->Id , *pubKey );
	
	return request;
}

int FSubscriptionUtils::ParseProgramSubscribeResponse(const FJsonObject& data)
{
    return data.GetNumberField("result");
}

FSubscriptionData* FSubscriptionUtils::ProgramUnsubscribe(const UINT& idAccount)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"programUnsubscribe","params":[%d]})")
			,request->Id , idAccount );
	
	return request;
}

bool FSubscriptionUtils::ParseProgramUnsubscribeResponse(const FJsonObject& data)
{
    return data.GetBoolField("result");
}

FSubscriptionData* FSubscriptionUtils::SignatureSubscribe(const FString& signature)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"signatureSubscribe","params":["%s"]})")
			,request->Id , *signature );
	
	return request;
}

int FSubscriptionUtils::ParseSignatureSubscribeResponse(const FJsonObject& data)
{
    return data.GetNumberField("result");
}

FSubscriptionData* FSubscriptionUtils::SignatureUnsubscribe(const UINT& suscriptionID)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"signatureUnsubscribe","params":[%d]})")
			,request->Id , suscriptionID );
	
	return request;
}

bool FSubscriptionUtils::ParseSignatureUnsubscribeResponse(const FJsonObject& data)
{
    return data.GetBoolField("result");
}

FSubscriptionData* FSubscriptionUtils::SlotSubscribe()
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"slotSubscribe"})")
			,request->Id );
	
	return request;
}

int FSubscriptionUtils::ParseSlotSubscribeResponse(const FJsonObject& data)
{
    return data.GetNumberField("result");
}

FSubscriptionData* FSubscriptionUtils::SlotUnsubscribe(const UINT& suscriptionID)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"slotUnsubscribe","params":[%d]})")
			,request->Id , suscriptionID );
	
	return request;
}

bool FSubscriptionUtils::ParseSlotUnsubscribeResponse(const FJsonObject& data)
{
    return data.GetBoolField("result");
}

FSubscriptionData* FSubscriptionUtils::RootSubscribe()
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"rootSubscribe"})")
			,request->Id );
	
	return request;
}

int FSubscriptionUtils::ParseRootSubscribeResponse(const FJsonObject& data)
{
    return data.GetNumberField("result");
}

FSubscriptionData* FSubscriptionUtils::RootUnsubscribe(const UINT& suscriptionID)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"rootUnsubscribe","params":[%d]})")
			,request->Id , suscriptionID );
	
	return request;
}

bool FSubscriptionUtils::ParseRootUnsubscribeResponse(const FJsonObject& data)
{
    return data.GetBoolField("result");
}

void FSubscriptionUtils::DisplayError(const FString& error)
{
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(error), &ErrorMessage);
}

void FSubscriptionUtils::DisplayInfo(const FString& info)
{
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(info), &InfoMessage);
}

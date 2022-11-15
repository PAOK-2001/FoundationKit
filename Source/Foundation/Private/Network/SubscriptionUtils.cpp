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

FSubscriptionData* FSubscriptionUtils::AccountSubscribe(const FString& pubKey){
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"accountSubscribe","params":["%s"]})")
			,request->Id , *pubKey );
	
	SubcriptionMap.Add("LogsSubscribe",request);
	
	return request;
}

void FSubscriptionUtils::AccountUnsubscribe(FSubscriptionData* sub2remove)
{
	int UnsubID = UFRequestManager_WB::GetNextSubID();
	sub2remove->UnsubMsg =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"accountUnsubscribe","params":[%d]})")
			,UnsubID , sub2remove->Id );
}

double FSubscriptionUtils::GetAccountSubInfo(FSubscriptionData* sub2read){
	FJsonObject* data = sub2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("result");
		const TSharedPtr<FJsonObject> value = result->GetObjectField("value");
		return value->GetNumberField("lamports");
	}
	return -1.0;
}

FSubscriptionData* FSubscriptionUtils::LogsSubscribe()
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"logsSubscribe","params":["all"]})")
			,request->Id );
	
	SubcriptionMap.Add("LogsSubscribe",request);
	
	return request;
}

void FSubscriptionUtils::LogsUnsubscribe(FSubscriptionData* sub2remove)
{
	int UnsubID = UFRequestManager_WB::GetNextSubID();
	sub2remove->UnsubMsg =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"logsUnsubscribe","params":[%d]})")
			,UnsubID , sub2remove->Id );
}

FString FSubscriptionUtils::GetLogsSubInfo(FSubscriptionData* sub2read)
{
	FJsonObject* data = sub2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("result");
		const TSharedPtr<FJsonObject> value = params->GetObjectField("value");
		return result->GetStringField("signature");
	}
	return "empty";
}

FSubscriptionData* FSubscriptionUtils::ProgramSubscribe(const FString& pubKey)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"programSubscribe","params":["%s"]})")
			,request->Id , *pubKey );
	
	SubcriptionMap.Add("ProgramSubscribe",request);

	return request;
}

void FSubscriptionUtils::ProgramUnsubscribe(FSubscriptionData* sub2remove)
{
	int UnsubID = UFRequestManager_WB::GetNextSubID();
	sub2remove->UnsubMsg =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"programUnsubscribe","params":[%d]})")
			,UnsubID , sub2remove->Id );
}

int FSubscriptionUtils::GetProgramSubInfo(FSubscriptionData* sub2read)
{
	FJsonObject* data = sub2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("result");
		const TSharedPtr<FJsonObject> value = result->GetObjectField("value");
		const TSharedPtr<FJsonObject> account = result->GetObjectField("account");
		return account->GetNumberField("lamports");
	}
	return -1.0;
}

FSubscriptionData* FSubscriptionUtils::SignatureSubscribe(const FString& signature)
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"signatureSubscribe","params":["%s"]})")
			,request->Id , *signature );
	
	SubcriptionMap.Add("SignatureSubscribe",request);
	
	return request;
}

void FSubscriptionUtils::SignatureUnsubscribe(FSubscriptionData* sub2remove)
{
	int UnsubID = UFRequestManager_WB::GetNextSubID();
	sub2remove->UnsubMsg =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"signatureUnsubscribe","params":[%d]})")
			,UnsubID , sub2remove->Id );
}

TSharedPtr<FJsonObject> FSubscriptionUtils::GetSignatureSubInfo(FSubscriptionData* sub2read)
{
	FJsonObject* data = sub2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("result");
		const TSharedPtr<FJsonObject> value = result->GetObjectField("value");
		return account->GetObjectField("err");
	}
	return NULL;
}

FSubscriptionData* FSubscriptionUtils::SlotSubscribe()
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"slotSubscribe"})")
			,request->Id );
	
	SubcriptionMap.Add("SlotSubscribe",request);

	return request;
}

void FSubscriptionUtils::SlotUnsubscribe(FSubscriptionData* sub2remove)
{
	int UnsubID = UFRequestManager_WB::GetNextSubID();
	sub2remove->UnsubMsg =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"slotUnsubscribe","params":[%d]})")
			,UnsubID , sub2remove->Id );
}

int FSubscriptionUtils::GetSlotSubInfo(FSubscriptionData* sub2read)
{
	FJsonObject* data = sub2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		const TSharedPtr<FJsonObject> result = params->GetObjectField("result");
		return result->GetNumberField("parent");
	}
	return -1;
}

FSubscriptionData* FSubscriptionUtils::RootSubscribe()
{
	FSubscriptionData* request = new FSubscriptionData(UFRequestManager_WB::GetNextSubID());
	
	request->Body =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"rootSubscribe"})")
			,request->Id );

	SubcriptionMap.Add("RootSubscribe",request);

	return request;
}

void FSubscriptionUtils::RootUnsubscribe(FSubscriptionData* sub2remove)
{
	int UnsubID = UFRequestManager_WB::GetNextSubID();
	sub2remove->UnsubMsg =
		FString::Printf(TEXT(R"({"jsonrpc":"2.0","id":%d,"method":"rootUnsubscribe","params":[%d]})")
			,UnsubID , sub2remove->Id );
}

int FSubscriptionUtils::GetRootSubInfo(FSubscriptionData* sub2read)
{
	FJsonObject* data = sub2read->Response;
	if(TSharedPtr<FJsonObject> params = data->GetObjectField("params"))
	{
		return params->GetNumberField("result");
	}
	return -1;
}

void FSubscriptionUtils::DisplayError(const FString& error)
{
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(error), &ErrorMessage);
}

void FSubscriptionUtils::DisplayInfo(const FString& info)
{
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(info), &InfoMessage);
}

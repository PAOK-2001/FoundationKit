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

#pragma once

#include "CoreMinimal.h"

struct FSubscriptionData;

class FOUNDATION_API FSubscriptionUtils
{
public:
	
	static FSubscriptionData* AccountSubscribe(const FString& pubKey);
	static int ParseAccountSubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* AccountUnsubscribe(const UINT& idAccount);
	static bool ParseAccountUnsubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* LogsSubscribe();
	static int ParseLogsSubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* LogsUnsubscribe(const UINT& suscriptionID);
	static bool ParseLogsUnsubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* ProgramSubscribe(const FString& pubKey);
	static int ParseProgramSubscribeResponse(const FJsonObject& data);
	
	static FSubscriptionData* ProgramUnsubscribe(const UINT& idAccount);
	static bool ParseProgramUnsubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* SignatureSubscribe(const FString& signature);
	static int ParseSignatureSubscribeResponse(const FJsonObject& data);
	
	static FSubscriptionData* SignatureUnsubscribe(const UINT& suscriptionID);
	static bool ParseSignatureUnsubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* SlotSubscribe();
	static int ParseSlotSubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* SlotUnsubscribe(const UINT& suscriptionID);
	static bool ParseSlotUnsubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* RootSubscribe();
	static int ParseRootSubscribeResponse(const FJsonObject& data);

	static FSubscriptionData* RootUnsubscribe(const UINT& suscriptionID);
	static bool ParseRootUnsubscribeResponse(const FJsonObject& data);

	static void DisplayError(const FString& error);
	static void DisplayInfo(const FString& info);
};

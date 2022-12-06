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
#include "UFRequestManager_WB.h"

class FOUNDATION_API TransactionUtils
{
public:
	static void Sub2Transaction(FString TransactionSignature, UFRequestManager_WB* &SocketManager); 
	static FString GetTransactionErr(int transactionID, UFRequestManager_WB* &SocketManager); 
	static int GetTransactionSlot(int transactionID, UFRequestManager_WB* &SocketManager);

	static void DisplayError(const FString& error);
	static void DisplayInfo(const FString& info);
};

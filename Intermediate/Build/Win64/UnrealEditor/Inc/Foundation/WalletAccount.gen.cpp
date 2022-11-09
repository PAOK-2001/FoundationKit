// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/WalletAccount.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalletAccount() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletAccount();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletAccount_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UTokenAccount_NoRegister();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWallet_NoRegister();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccount();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics
	{
		struct WalletAccount_eventOnTokenAccountAdded_Parms
		{
			UWalletAccount* WalletAccount;
			UTokenAccount* TokenAccount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalletAccount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenAccount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::NewProp_WalletAccount = { "WalletAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventOnTokenAccountAdded_Parms, WalletAccount), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::NewProp_TokenAccount = { "TokenAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventOnTokenAccountAdded_Parms, TokenAccount), Z_Construct_UClass_UTokenAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::NewProp_WalletAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::NewProp_TokenAccount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "OnTokenAccountAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::WalletAccount_eventOnTokenAccountAdded_Parms), Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics
	{
		struct WalletAccount_eventOnAccountNameChanged_Parms
		{
			UWalletAccount* WalletAccount;
			FString Name;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalletAccount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::NewProp_WalletAccount = { "WalletAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventOnAccountNameChanged_Parms, WalletAccount), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventOnAccountNameChanged_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::NewProp_WalletAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "OnAccountNameChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::WalletAccount_eventOnAccountNameChanged_Parms), Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics
	{
		struct WalletAccount_eventOnSolBalanceChanged_Parms
		{
			UWalletAccount* WalletAccount;
			float SolBalance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalletAccount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SolBalance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::NewProp_WalletAccount = { "WalletAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventOnSolBalanceChanged_Parms, WalletAccount), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::NewProp_SolBalance = { "SolBalance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventOnSolBalanceChanged_Parms, SolBalance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::NewProp_WalletAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::NewProp_SolBalance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "OnSolBalanceChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::WalletAccount_eventOnSolBalanceChanged_Parms), Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWalletAccount::execGetOwningWallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USolanaWallet**)Z_Param__Result=P_THIS->GetOwningWallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execSendTokenEstimate)
	{
		P_GET_OBJECT(UTokenAccount,Z_Param_TokenAccount);
		P_GET_PROPERTY(FStrProperty,Z_Param_RecipientPublicKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTokenEstimate(Z_Param_TokenAccount,Z_Param_RecipientPublicKey,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execSendToken)
	{
		P_GET_OBJECT(UTokenAccount,Z_Param_TokenAccount);
		P_GET_PROPERTY(FStrProperty,Z_Param_RecipientPublicKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToken(Z_Param_TokenAccount,Z_Param_RecipientPublicKey,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execGetSolBalance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetSolBalance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execSetAccountName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccountName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execGetPublicKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPublicKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletAccount::execGetAccountName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountName();
		P_NATIVE_END;
	}
	void UWalletAccount::StaticRegisterNativesUWalletAccount()
	{
		UClass* Class = UWalletAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccountName", &UWalletAccount::execGetAccountName },
			{ "GetOwningWallet", &UWalletAccount::execGetOwningWallet },
			{ "GetPublicKey", &UWalletAccount::execGetPublicKey },
			{ "GetSolBalance", &UWalletAccount::execGetSolBalance },
			{ "SendToken", &UWalletAccount::execSendToken },
			{ "SendTokenEstimate", &UWalletAccount::execSendTokenEstimate },
			{ "SetAccountName", &UWalletAccount::execSetAccountName },
			{ "Update", &UWalletAccount::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics
	{
		struct WalletAccount_eventGetAccountName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventGetAccountName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "GetAccountName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::WalletAccount_eventGetAccountName_Parms), Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_GetAccountName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_GetAccountName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics
	{
		struct WalletAccount_eventGetOwningWallet_Parms
		{
			USolanaWallet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventGetOwningWallet_Parms, ReturnValue), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "GetOwningWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::WalletAccount_eventGetOwningWallet_Parms), Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_GetOwningWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_GetOwningWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics
	{
		struct WalletAccount_eventGetPublicKey_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventGetPublicKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "GetPublicKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::WalletAccount_eventGetPublicKey_Parms), Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_GetPublicKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_GetPublicKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics
	{
		struct WalletAccount_eventGetSolBalance_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventGetSolBalance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "GetSolBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::WalletAccount_eventGetSolBalance_Parms), Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_GetSolBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_GetSolBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_SendToken_Statics
	{
		struct WalletAccount_eventSendToken_Parms
		{
			UTokenAccount* TokenAccount;
			FString RecipientPublicKey;
			float Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenAccount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipientPublicKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecipientPublicKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_TokenAccount = { "TokenAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSendToken_Parms, TokenAccount), Z_Construct_UClass_UTokenAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_RecipientPublicKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_RecipientPublicKey = { "RecipientPublicKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSendToken_Parms, RecipientPublicKey), METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_RecipientPublicKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_RecipientPublicKey_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSendToken_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_SendToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_TokenAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_RecipientPublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SendToken_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_SendToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_SendToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "SendToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_SendToken_Statics::WalletAccount_eventSendToken_Parms), Z_Construct_UFunction_UWalletAccount_SendToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SendToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_SendToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SendToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_SendToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_SendToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics
	{
		struct WalletAccount_eventSendTokenEstimate_Parms
		{
			UTokenAccount* TokenAccount;
			FString RecipientPublicKey;
			float Amount;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenAccount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipientPublicKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecipientPublicKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_TokenAccount = { "TokenAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSendTokenEstimate_Parms, TokenAccount), Z_Construct_UClass_UTokenAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_RecipientPublicKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_RecipientPublicKey = { "RecipientPublicKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSendTokenEstimate_Parms, RecipientPublicKey), METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_RecipientPublicKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_RecipientPublicKey_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSendTokenEstimate_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_TokenAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_RecipientPublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "SendTokenEstimate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::WalletAccount_eventSendTokenEstimate_Parms), Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_SendTokenEstimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_SendTokenEstimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics
	{
		struct WalletAccount_eventSetAccountName_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletAccount_eventSetAccountName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "SetAccountName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::WalletAccount_eventSetAccountName_Parms), Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_SetAccountName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_SetAccountName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletAccount_Update_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletAccount_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletAccount_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletAccount, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletAccount_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletAccount_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletAccount_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletAccount_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWalletAccount);
	UClass* Z_Construct_UClass_UWalletAccount_NoRegister()
	{
		return UWalletAccount::StaticClass();
	}
	struct Z_Construct_UClass_UWalletAccount_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccountData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenAccounts_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TokenAccounts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenAccounts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TokenAccounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTokenAccountAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTokenAccountAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccountNameChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccountNameChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSolBalanceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSolBalanceChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalletAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWalletAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWalletAccount_GetAccountName, "GetAccountName" }, // 4014129499
		{ &Z_Construct_UFunction_UWalletAccount_GetOwningWallet, "GetOwningWallet" }, // 3547628320
		{ &Z_Construct_UFunction_UWalletAccount_GetPublicKey, "GetPublicKey" }, // 357377152
		{ &Z_Construct_UFunction_UWalletAccount_GetSolBalance, "GetSolBalance" }, // 179877225
		{ &Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature, "OnAccountNameChanged__DelegateSignature" }, // 3684691210
		{ &Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature, "OnSolBalanceChanged__DelegateSignature" }, // 778447341
		{ &Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature, "OnTokenAccountAdded__DelegateSignature" }, // 2628665093
		{ &Z_Construct_UFunction_UWalletAccount_SendToken, "SendToken" }, // 2854767851
		{ &Z_Construct_UFunction_UWalletAccount_SendTokenEstimate, "SendTokenEstimate" }, // 2107302416
		{ &Z_Construct_UFunction_UWalletAccount_SetAccountName, "SetAccountName" }, // 1754959658
		{ &Z_Construct_UFunction_UWalletAccount_Update, "Update" }, // 2168815906
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletAccount_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UWalletAccount\n * \n * This class abstract a wallet account which is essentially a key pair.\n * We can have either a public key only or both private and public key.\n * The public key of the account represent the address in the network.\n * An account also contains a list of token accounts associated with its keypair.\n * \n */" },
		{ "IncludePath", "WalletAccount.h" },
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
		{ "ToolTip", "UWalletAccount\n\nThis class abstract a wallet account which is essentially a key pair.\nWe can have either a public key only or both private and public key.\nThe public key of the account represent the address in the network.\nAn account also contains a list of token accounts associated with its keypair." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletAccount_Statics::NewProp_AccountData_MetaData[] = {
		{ "Category", "WalletAccount" },
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_AccountData = { "AccountData", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletAccount, AccountData), Z_Construct_UScriptStruct_FAccount, METADATA_PARAMS(Z_Construct_UClass_UWalletAccount_Statics::NewProp_AccountData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::NewProp_AccountData_MetaData)) }; // 17670890
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_ValueProp = { "TokenAccounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTokenAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_Key_KeyProp = { "TokenAccounts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_MetaData[] = {
		{ "Category", "WalletAccount" },
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts = { "TokenAccounts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletAccount, TokenAccounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnTokenAccountAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnTokenAccountAdded = { "OnTokenAccountAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletAccount, OnTokenAccountAdded), Z_Construct_UDelegateFunction_UWalletAccount_OnTokenAccountAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnTokenAccountAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnTokenAccountAdded_MetaData)) }; // 2628665093
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnAccountNameChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnAccountNameChanged = { "OnAccountNameChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletAccount, OnAccountNameChanged), Z_Construct_UDelegateFunction_UWalletAccount_OnAccountNameChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnAccountNameChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnAccountNameChanged_MetaData)) }; // 3684691210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnSolBalanceChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalletAccount.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnSolBalanceChanged = { "OnSolBalanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletAccount, OnSolBalanceChanged), Z_Construct_UDelegateFunction_UWalletAccount_OnSolBalanceChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnSolBalanceChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnSolBalanceChanged_MetaData)) }; // 778447341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalletAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_AccountData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_TokenAccounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnTokenAccountAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnAccountNameChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletAccount_Statics::NewProp_OnSolBalanceChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalletAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletAccount>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWalletAccount_Statics::ClassParams = {
		&UWalletAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWalletAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWalletAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalletAccount()
	{
		if (!Z_Registration_Info_UClass_UWalletAccount.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalletAccount.OuterSingleton, Z_Construct_UClass_UWalletAccount_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWalletAccount.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UWalletAccount>()
	{
		return UWalletAccount::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletAccount);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWalletAccount, UWalletAccount::StaticClass, TEXT("UWalletAccount"), &Z_Registration_Info_UClass_UWalletAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalletAccount), 3658020760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_1028645231(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

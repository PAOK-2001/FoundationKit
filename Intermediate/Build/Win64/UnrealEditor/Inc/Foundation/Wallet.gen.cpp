// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/SolanaUtils/Wallet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallet() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UClass* Z_Construct_UClass_UWallet_NoRegister();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccountData();
	FOUNDATION_API UClass* Z_Construct_UClass_UWallet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics
	{
		struct _Script_Foundation_eventWalletDelegate_Parms
		{
			UWallet* Wallet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wallet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Foundation_eventWalletDelegate_Parms, Wallet), Z_Construct_UClass_UWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::NewProp_Wallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foundation, nullptr, "WalletDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::_Script_Foundation_eventWalletDelegate_Parms), Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccountData;
class UScriptStruct* FAccountData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccountData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccountData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountData, Z_Construct_UPackage__Script_Foundation(), TEXT("AccountData"));
	}
	return Z_Registration_Info_UScriptStruct_AccountData.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FAccountData>()
{
	return FAccountData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccountData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pubkey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pubkey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Balance_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Balance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Pubkey_MetaData[] = {
		{ "Category", "AccountData" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Pubkey = { "Pubkey", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountData, Pubkey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Pubkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Pubkey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Mint_MetaData[] = {
		{ "Category", "AccountData" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Mint = { "Mint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountData, Mint), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Mint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Mint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Balance_MetaData[] = {
		{ "Category", "AccountData" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountData, Balance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Balance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Balance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Pubkey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Mint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountData_Statics::NewProp_Balance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"AccountData",
		sizeof(FAccountData),
		alignof(FAccountData),
		Z_Construct_UScriptStruct_FAccountData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountData()
	{
		if (!Z_Registration_Info_UScriptStruct_AccountData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccountData.InnerSingleton, Z_Construct_UScriptStruct_FAccountData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AccountData.InnerSingleton;
	}
	DEFINE_FUNCTION(UWallet::execSetPublicKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pubKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPublicKey(Z_Param_pubKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWallet::execCheckPossibleAccounts)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_pubKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPossibleAccounts(Z_Param_Out_pubKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWallet::execUpdateAllTokenAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAllTokenAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWallet::execUpdateAccountBalance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pubKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAccountBalance(Z_Param_pubKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWallet::execUpdateWalletBalance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWalletBalance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWallet::execUpdateWalletData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWalletData();
		P_NATIVE_END;
	}
	void UWallet::StaticRegisterNativesUWallet()
	{
		UClass* Class = UWallet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPossibleAccounts", &UWallet::execCheckPossibleAccounts },
			{ "SetPublicKey", &UWallet::execSetPublicKey },
			{ "UpdateAccountBalance", &UWallet::execUpdateAccountBalance },
			{ "UpdateAllTokenAccounts", &UWallet::execUpdateAllTokenAccounts },
			{ "UpdateWalletBalance", &UWallet::execUpdateWalletBalance },
			{ "UpdateWalletData", &UWallet::execUpdateWalletData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics
	{
		struct Wallet_eventCheckPossibleAccounts_Parms
		{
			TArray<FString> pubKeys;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_pubKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pubKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pubKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys_Inner = { "pubKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys = { "pubKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Wallet_eventCheckPossibleAccounts_Parms, pubKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::NewProp_pubKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallet, nullptr, "CheckPossibleAccounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::Wallet_eventCheckPossibleAccounts_Parms), Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallet_CheckPossibleAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallet_CheckPossibleAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWallet_SetPublicKey_Statics
	{
		struct Wallet_eventSetPublicKey_Parms
		{
			FString pubKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pubKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pubKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_SetPublicKey_Statics::NewProp_pubKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWallet_SetPublicKey_Statics::NewProp_pubKey = { "pubKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Wallet_eventSetPublicKey_Parms, pubKey), METADATA_PARAMS(Z_Construct_UFunction_UWallet_SetPublicKey_Statics::NewProp_pubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_SetPublicKey_Statics::NewProp_pubKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallet_SetPublicKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallet_SetPublicKey_Statics::NewProp_pubKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_SetPublicKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallet_SetPublicKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallet, nullptr, "SetPublicKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWallet_SetPublicKey_Statics::Wallet_eventSetPublicKey_Parms), Z_Construct_UFunction_UWallet_SetPublicKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_SetPublicKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallet_SetPublicKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_SetPublicKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallet_SetPublicKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallet_SetPublicKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics
	{
		struct Wallet_eventUpdateAccountBalance_Parms
		{
			FString pubKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pubKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pubKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::NewProp_pubKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::NewProp_pubKey = { "pubKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Wallet_eventUpdateAccountBalance_Parms, pubKey), METADATA_PARAMS(Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::NewProp_pubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::NewProp_pubKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::NewProp_pubKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallet, nullptr, "UpdateAccountBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::Wallet_eventUpdateAccountBalance_Parms), Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallet_UpdateAccountBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallet_UpdateAccountBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallet, nullptr, "UpdateAllTokenAccounts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWallet_UpdateWalletBalance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_UpdateWalletBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallet_UpdateWalletBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallet, nullptr, "UpdateWalletBalance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallet_UpdateWalletBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_UpdateWalletBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallet_UpdateWalletBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallet_UpdateWalletBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWallet_UpdateWalletData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWallet_UpdateWalletData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWallet_UpdateWalletData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWallet, nullptr, "UpdateWalletData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWallet_UpdateWalletData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWallet_UpdateWalletData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWallet_UpdateWalletData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWallet_UpdateWalletData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWallet);
	UClass* Z_Construct_UClass_UWallet_NoRegister()
	{
		return UWallet::StaticClass();
	}
	struct Z_Construct_UClass_UWallet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SOLBalance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SOLBalance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWalletUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWalletUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccountsUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccountsUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWallet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWallet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWallet_CheckPossibleAccounts, "CheckPossibleAccounts" }, // 1439694578
		{ &Z_Construct_UFunction_UWallet_SetPublicKey, "SetPublicKey" }, // 2665046554
		{ &Z_Construct_UFunction_UWallet_UpdateAccountBalance, "UpdateAccountBalance" }, // 3744743373
		{ &Z_Construct_UFunction_UWallet_UpdateAllTokenAccounts, "UpdateAllTokenAccounts" }, // 2720240811
		{ &Z_Construct_UFunction_UWallet_UpdateWalletBalance, "UpdateWalletBalance" }, // 1211771129
		{ &Z_Construct_UFunction_UWallet_UpdateWalletData, "UpdateWalletData" }, // 3295631546
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SolanaUtils/Wallet.h" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallet_Statics::NewProp_PublicKey_MetaData[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWallet_Statics::NewProp_PublicKey = { "PublicKey", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallet, PublicKey), METADATA_PARAMS(Z_Construct_UClass_UWallet_Statics::NewProp_PublicKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallet_Statics::NewProp_PublicKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallet_Statics::NewProp_SOLBalance_MetaData[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWallet_Statics::NewProp_SOLBalance = { "SOLBalance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallet, SOLBalance), METADATA_PARAMS(Z_Construct_UClass_UWallet_Statics::NewProp_SOLBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallet_Statics::NewProp_SOLBalance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallet_Statics::NewProp_OnWalletUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWallet_Statics::NewProp_OnWalletUpdated = { "OnWalletUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallet, OnWalletUpdated), Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWallet_Statics::NewProp_OnWalletUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallet_Statics::NewProp_OnWalletUpdated_MetaData)) }; // 2077812342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWallet_Statics::NewProp_OnAccountsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Wallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWallet_Statics::NewProp_OnAccountsUpdated = { "OnAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWallet, OnAccountsUpdated), Z_Construct_UDelegateFunction_Foundation_WalletDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWallet_Statics::NewProp_OnAccountsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWallet_Statics::NewProp_OnAccountsUpdated_MetaData)) }; // 2077812342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallet_Statics::NewProp_PublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallet_Statics::NewProp_SOLBalance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallet_Statics::NewProp_OnWalletUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWallet_Statics::NewProp_OnAccountsUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWallet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWallet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWallet_Statics::ClassParams = {
		&UWallet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWallet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWallet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWallet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWallet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWallet()
	{
		if (!Z_Registration_Info_UClass_UWallet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWallet.OuterSingleton, Z_Construct_UClass_UWallet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWallet.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UWallet>()
	{
		return UWallet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWallet);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics::ScriptStructInfo[] = {
		{ FAccountData::StaticStruct, Z_Construct_UScriptStruct_FAccountData_Statics::NewStructOps, TEXT("AccountData"), &Z_Registration_Info_UScriptStruct_AccountData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccountData), 1433805488U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWallet, UWallet::StaticClass, TEXT("UWallet"), &Z_Registration_Info_UClass_UWallet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWallet), 2019982580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_4100237609(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

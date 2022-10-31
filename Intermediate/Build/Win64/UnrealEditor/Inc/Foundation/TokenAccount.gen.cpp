// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/TokenAccount.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTokenAccount() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_UTokenAccount();
	FOUNDATION_API UClass* Z_Construct_UClass_UTokenAccount_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccountData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics
	{
		struct TokenAccount_eventOnBalanceUpdated_Parms
		{
			UTokenAccount* TokenAccount;
			float Balance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenAccount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Balance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::NewProp_TokenAccount = { "TokenAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TokenAccount_eventOnBalanceUpdated_Parms, TokenAccount), Z_Construct_UClass_UTokenAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TokenAccount_eventOnBalanceUpdated_Parms, Balance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::NewProp_TokenAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::NewProp_Balance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TokenAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTokenAccount, nullptr, "OnBalanceUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::TokenAccount_eventOnBalanceUpdated_Parms), Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTokenAccount::execSend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PublicKey);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Send(Z_Param_PublicKey,Z_Param_Amount);
		P_NATIVE_END;
	}
	void UTokenAccount::StaticRegisterNativesUTokenAccount()
	{
		UClass* Class = UTokenAccount::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Send", &UTokenAccount::execSend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTokenAccount_Send_Statics
	{
		struct TokenAccount_eventSend_Parms
		{
			FString PublicKey;
			float Amount;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKey;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTokenAccount_Send_Statics::NewProp_PublicKey = { "PublicKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TokenAccount_eventSend_Parms, PublicKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTokenAccount_Send_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TokenAccount_eventSend_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTokenAccount_Send_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTokenAccount_Send_Statics::NewProp_PublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTokenAccount_Send_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTokenAccount_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TokenAccount.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTokenAccount_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTokenAccount, nullptr, "Send", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTokenAccount_Send_Statics::TokenAccount_eventSend_Parms), Z_Construct_UFunction_UTokenAccount_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTokenAccount_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTokenAccount_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTokenAccount_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTokenAccount_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTokenAccount_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTokenAccount);
	UClass* Z_Construct_UClass_UTokenAccount_NoRegister()
	{
		return UTokenAccount::StaticClass();
	}
	struct Z_Construct_UClass_UTokenAccount_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBalanceUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBalanceUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTokenAccount_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTokenAccount_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature, "OnBalanceUpdated__DelegateSignature" }, // 17815067
		{ &Z_Construct_UFunction_UTokenAccount_Send, "Send" }, // 580165128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenAccount_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTokenAccount\n * \n * This class abstract a token account that belongs to a wallet account.\n * It has its own address and mint.\n * \n */" },
		{ "IncludePath", "TokenAccount.h" },
		{ "ModuleRelativePath", "Public/TokenAccount.h" },
		{ "ToolTip", "UTokenAccount\n\nThis class abstract a token account that belongs to a wallet account.\nIt has its own address and mint." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenAccount_Statics::NewProp_AccountData_MetaData[] = {
		{ "Category", "TokenAccount" },
		{ "ModuleRelativePath", "Public/TokenAccount.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTokenAccount_Statics::NewProp_AccountData = { "AccountData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTokenAccount, AccountData), Z_Construct_UScriptStruct_FAccountData, METADATA_PARAMS(Z_Construct_UClass_UTokenAccount_Statics::NewProp_AccountData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenAccount_Statics::NewProp_AccountData_MetaData)) }; // 1433805488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenAccount_Statics::NewProp_OnBalanceUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/TokenAccount.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTokenAccount_Statics::NewProp_OnBalanceUpdated = { "OnBalanceUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTokenAccount, OnBalanceUpdated), Z_Construct_UDelegateFunction_UTokenAccount_OnBalanceUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTokenAccount_Statics::NewProp_OnBalanceUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenAccount_Statics::NewProp_OnBalanceUpdated_MetaData)) }; // 17815067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTokenAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTokenAccount_Statics::NewProp_AccountData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTokenAccount_Statics::NewProp_OnBalanceUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTokenAccount_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTokenAccount>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTokenAccount_Statics::ClassParams = {
		&UTokenAccount::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTokenAccount_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTokenAccount_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTokenAccount_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenAccount_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTokenAccount()
	{
		if (!Z_Registration_Info_UClass_UTokenAccount.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTokenAccount.OuterSingleton, Z_Construct_UClass_UTokenAccount_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTokenAccount.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UTokenAccount>()
	{
		return UTokenAccount::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTokenAccount);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTokenAccount, UTokenAccount::StaticClass, TEXT("UTokenAccount"), &Z_Registration_Info_UClass_UTokenAccount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTokenAccount), 3219181419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_1377678052(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

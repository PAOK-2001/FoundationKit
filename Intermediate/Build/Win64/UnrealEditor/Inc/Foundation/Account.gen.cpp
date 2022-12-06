// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/SolanaUtils/Account.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccount() {}
// Cross Module References
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccount();
	UPackage* Z_Construct_UPackage__Script_Foundation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Account;
class UScriptStruct* FAccount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Account.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Account.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccount, Z_Construct_UPackage__Script_Foundation(), TEXT("Account"));
	}
	return Z_Registration_Info_UScriptStruct_Account.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FAccount>()
{
	return FAccount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GenIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Account.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccount_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Account" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Account.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccount_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccount, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccount_Statics::NewProp_GenIndex_MetaData[] = {
		{ "Category", "Account" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Account.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccount_Statics::NewProp_GenIndex = { "GenIndex", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccount, GenIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_GenIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_GenIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PublicKey_MetaData[] = {
		{ "Category", "Account" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Account.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PublicKey = { "PublicKey", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccount, PublicKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PublicKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PublicKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PrivateKey_MetaData[] = {
		{ "Category", "Account" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Account.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PrivateKey = { "PrivateKey", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccount, PrivateKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PrivateKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PrivateKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccount_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccount_Statics::NewProp_GenIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccount_Statics::NewProp_PrivateKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"Account",
		sizeof(FAccount),
		alignof(FAccount),
		Z_Construct_UScriptStruct_FAccount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccount()
	{
		if (!Z_Registration_Info_UScriptStruct_Account.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Account.InnerSingleton, Z_Construct_UScriptStruct_FAccount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Account.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Account_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Account_h_Statics::ScriptStructInfo[] = {
		{ FAccount::StaticStruct, Z_Construct_UScriptStruct_FAccount_Statics::NewStructOps, TEXT("Account"), &Z_Registration_Info_UScriptStruct_Account, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccount), 17670890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Account_h_3920783299(TEXT("/Script/Foundation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Account_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Account_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

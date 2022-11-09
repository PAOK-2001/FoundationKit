// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/SolanaWallet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolanaWallet() {}
// Cross Module References
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FDerivationPath();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletData_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccount();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletSaveData_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletSaveData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWallet();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWallet_NoRegister();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature();
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletAccount_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DerivationPath;
class UScriptStruct* FDerivationPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DerivationPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DerivationPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDerivationPath, Z_Construct_UPackage__Script_Foundation(), TEXT("DerivationPath"));
	}
	return Z_Registration_Info_UScriptStruct_DerivationPath.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FDerivationPath>()
{
	return FDerivationPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDerivationPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DerivationPath;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivationPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FDerivationPath\n * \n * Path used by the key generation algorithm to generate new private keys in a deterministic way.\n * \n */" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "FDerivationPath\n\nPath used by the key generation algorithm to generate new private keys in a deterministic way." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDerivationPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDerivationPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_DerivationPath_MetaData[] = {
		{ "Category", "DerivationPath" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_DerivationPath = { "DerivationPath", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDerivationPath, DerivationPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_DerivationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_DerivationPath_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDerivationPath, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDerivationPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_DerivationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDerivationPath_Statics::NewProp_Segments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDerivationPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"DerivationPath",
		sizeof(FDerivationPath),
		alignof(FDerivationPath),
		Z_Construct_UScriptStruct_FDerivationPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivationPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivationPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivationPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDerivationPath()
	{
		if (!Z_Registration_Info_UScriptStruct_DerivationPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DerivationPath.InnerSingleton, Z_Construct_UScriptStruct_FDerivationPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DerivationPath.InnerSingleton;
	}
	void UWalletData::StaticRegisterNativesUWalletData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWalletData);
	UClass* Z_Construct_UClass_UWalletData_NoRegister()
	{
		return UWalletData::StaticClass();
	}
	struct Z_Construct_UClass_UWalletData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mnemonic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mnemonic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedDerivationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedDerivationPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Accounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoaded_MetaData[];
#endif
		static void NewProp_bLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalletData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWalletSaveData\n * \n * Utility class to save wallet data.\n * \n */" },
		{ "IncludePath", "SolanaWallet.h" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "UWalletSaveData\n\nUtility class to save wallet data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletData_Statics::NewProp_Mnemonic_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWalletData_Statics::NewProp_Mnemonic = { "Mnemonic", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletData, Mnemonic), METADATA_PARAMS(Z_Construct_UClass_UWalletData_Statics::NewProp_Mnemonic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletData_Statics::NewProp_Mnemonic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletData_Statics::NewProp_SelectedDerivationPath_MetaData[] = {
		{ "Category", "WalletData" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWalletData_Statics::NewProp_SelectedDerivationPath = { "SelectedDerivationPath", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletData, SelectedDerivationPath), Z_Construct_UScriptStruct_FDerivationPath, METADATA_PARAMS(Z_Construct_UClass_UWalletData_Statics::NewProp_SelectedDerivationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletData_Statics::NewProp_SelectedDerivationPath_MetaData)) }; // 836152293
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts_Inner = { "Accounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccount, METADATA_PARAMS(nullptr, 0) }; // 17670890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts_MetaData[] = {
		{ "Category", "WalletData" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts = { "Accounts", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletData, Accounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts_MetaData)) }; // 17670890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	void Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded_SetBit(void* Obj)
	{
		((UWalletData*)Obj)->bLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded = { "bLoaded", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWalletData), &Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalletData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletData_Statics::NewProp_Mnemonic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletData_Statics::NewProp_SelectedDerivationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletData_Statics::NewProp_Accounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletData_Statics::NewProp_bLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalletData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWalletData_Statics::ClassParams = {
		&UWalletData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWalletData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWalletData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWalletData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalletData()
	{
		if (!Z_Registration_Info_UClass_UWalletData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalletData.OuterSingleton, Z_Construct_UClass_UWalletData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWalletData.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UWalletData>()
	{
		return UWalletData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletData);
	void UWalletSaveData::StaticRegisterNativesUWalletSaveData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWalletSaveData);
	UClass* Z_Construct_UClass_UWalletSaveData_NoRegister()
	{
		return UWalletSaveData::StaticClass();
	}
	struct Z_Construct_UClass_UWalletSaveData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalletSaveData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletSaveData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SolanaWallet.h" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletSaveData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys_Inner = { "PublicKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys = { "PublicKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletSaveData, PublicKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalletSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletSaveData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletSaveData_Statics::NewProp_PublicKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalletSaveData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletSaveData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWalletSaveData_Statics::ClassParams = {
		&UWalletSaveData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWalletSaveData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWalletSaveData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWalletSaveData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletSaveData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalletSaveData()
	{
		if (!Z_Registration_Info_UClass_UWalletSaveData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalletSaveData.OuterSingleton, Z_Construct_UClass_UWalletSaveData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWalletSaveData.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UWalletSaveData>()
	{
		return UWalletSaveData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletSaveData);
	struct Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics
	{
		struct SolanaWallet_eventOnMnemonicUpdated_Parms
		{
			FString Mnemonic;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mnemonic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::NewProp_Mnemonic = { "Mnemonic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventOnMnemonicUpdated_Parms, Mnemonic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::NewProp_Mnemonic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when mnemonic is set, loaded or erased;\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Called when mnemonic is set, loaded or erased;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "OnMnemonicUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::SolanaWallet_eventOnMnemonicUpdated_Parms), Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics
	{
		struct SolanaWallet_eventOnWalletLocked_Parms
		{
			USolanaWallet* Wallet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wallet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventOnWalletLocked_Parms, Wallet), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::NewProp_Wallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called the wallet get locked.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Called the wallet get locked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "OnWalletLocked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::SolanaWallet_eventOnWalletLocked_Parms), Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics
	{
		struct SolanaWallet_eventOnWalletUnlocked_Parms
		{
			USolanaWallet* Wallet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wallet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventOnWalletUnlocked_Parms, Wallet), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::NewProp_Wallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called the wallet get unlocked using the right password.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Called the wallet get unlocked using the right password." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "OnWalletUnlocked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::SolanaWallet_eventOnWalletUnlocked_Parms), Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics
	{
		struct SolanaWallet_eventOnWalletWiped_Parms
		{
			USolanaWallet* Wallet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wallet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventOnWalletWiped_Parms, Wallet), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::NewProp_Wallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the wallet get wiped;\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Called when the wallet get wiped;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "OnWalletWiped__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::SolanaWallet_eventOnWalletWiped_Parms), Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "OnAccountsUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USolanaWallet::execClipboardCopy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		USolanaWallet::ClipboardCopy(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execUpdateTokenAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTokenAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execUpdateAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetPublicKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetPublicKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetAccountFromPublicKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PublicKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWalletAccount**)Z_Param__Result=P_THIS->GetAccountFromPublicKey(Z_Param_PublicKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetAccountsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAccountsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWalletAccount*>*)Z_Param__Result=P_THIS->GetAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execRemoveAllAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execRemoveAccount)
	{
		P_GET_OBJECT(UWalletAccount,Z_Param_Account);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAccount(Z_Param_Account);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execImportAccountFromPublicKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PublicKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWalletAccount**)Z_Param__Result=P_THIS->ImportAccountFromPublicKey(Z_Param_PublicKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execImportAccountFromPrivateKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrivateKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWalletAccount**)Z_Param__Result=P_THIS->ImportAccountFromPrivateKey(Z_Param_PrivateKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGenerateNewAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWalletAccount**)Z_Param__Result=P_THIS->GenerateNewAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGenerateAccountFromGenIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GenIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWalletAccount**)Z_Param__Result=P_THIS->GenerateAccountFromGenIndex(Z_Param_GenIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetAccountFromGenIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GenIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWalletAccount**)Z_Param__Result=P_THIS->GetAccountFromGenIndex(Z_Param_GenIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetAccountsFromPath)
	{
		P_GET_STRUCT(FDerivationPath,Z_Param_Path);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumAccounts);
		P_GET_TARRAY_REF(FAccount,Z_Param_Out_OutAccounts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAccountsFromPath(Z_Param_Path,Z_Param_NumAccounts,Z_Param_Out_OutAccounts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetDerivationPaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDerivationPath>*)Z_Param__Result=USolanaWallet::GetDerivationPaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execSetDerivationPath)
	{
		P_GET_STRUCT_REF(FDerivationPath,Z_Param_Out_DerivationPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDerivationPath(Z_Param_Out_DerivationPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execIsWalletLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWalletLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execWipeWallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WipeWallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execLockWallet)
	{
		P_GET_UBOOL(Z_Param_bSaveWallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockWallet(Z_Param_bSaveWallet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execUnlockWallet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnlockWallet(Z_Param_Password,Z_Param_Out_FailReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execSaveWallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveWallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execSetPassword)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewPassword);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPassword(Z_Param_NewPassword);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetMnemonicString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMnemonicString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execIsMnemonicValid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Mnemonic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USolanaWallet::IsMnemonicValid(Z_Param_Mnemonic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execRestoreMnemonic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMnemonic);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RestoreMnemonic(Z_Param_InMnemonic,Z_Param_Out_FailReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGenerateMnemonic)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MnemonicString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateMnemonic(Z_Param_Out_MnemonicString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execDoesWalletSaveExist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesWalletSaveExist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execGetSaveSlotName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSaveSlotName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWallet::execSetSaveSlotName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSaveSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSaveSlotName(Z_Param_NewSaveSlotName);
		P_NATIVE_END;
	}
	void USolanaWallet::StaticRegisterNativesUSolanaWallet()
	{
		UClass* Class = USolanaWallet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClipboardCopy", &USolanaWallet::execClipboardCopy },
			{ "DoesWalletSaveExist", &USolanaWallet::execDoesWalletSaveExist },
			{ "GenerateAccountFromGenIndex", &USolanaWallet::execGenerateAccountFromGenIndex },
			{ "GenerateMnemonic", &USolanaWallet::execGenerateMnemonic },
			{ "GenerateNewAccount", &USolanaWallet::execGenerateNewAccount },
			{ "GetAccountFromGenIndex", &USolanaWallet::execGetAccountFromGenIndex },
			{ "GetAccountFromPublicKey", &USolanaWallet::execGetAccountFromPublicKey },
			{ "GetAccounts", &USolanaWallet::execGetAccounts },
			{ "GetAccountsCount", &USolanaWallet::execGetAccountsCount },
			{ "GetAccountsFromPath", &USolanaWallet::execGetAccountsFromPath },
			{ "GetDerivationPaths", &USolanaWallet::execGetDerivationPaths },
			{ "GetMnemonicString", &USolanaWallet::execGetMnemonicString },
			{ "GetPublicKeys", &USolanaWallet::execGetPublicKeys },
			{ "GetSaveSlotName", &USolanaWallet::execGetSaveSlotName },
			{ "ImportAccountFromPrivateKey", &USolanaWallet::execImportAccountFromPrivateKey },
			{ "ImportAccountFromPublicKey", &USolanaWallet::execImportAccountFromPublicKey },
			{ "IsMnemonicValid", &USolanaWallet::execIsMnemonicValid },
			{ "IsWalletLocked", &USolanaWallet::execIsWalletLocked },
			{ "LockWallet", &USolanaWallet::execLockWallet },
			{ "RemoveAccount", &USolanaWallet::execRemoveAccount },
			{ "RemoveAllAccounts", &USolanaWallet::execRemoveAllAccounts },
			{ "RestoreMnemonic", &USolanaWallet::execRestoreMnemonic },
			{ "SaveWallet", &USolanaWallet::execSaveWallet },
			{ "SetDerivationPath", &USolanaWallet::execSetDerivationPath },
			{ "SetPassword", &USolanaWallet::execSetPassword },
			{ "SetSaveSlotName", &USolanaWallet::execSetSaveSlotName },
			{ "UnlockWallet", &USolanaWallet::execUnlockWallet },
			{ "UpdateAccounts", &USolanaWallet::execUpdateAccounts },
			{ "UpdateTokenAccounts", &USolanaWallet::execUpdateTokenAccounts },
			{ "WipeWallet", &USolanaWallet::execWipeWallet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics
	{
		struct SolanaWallet_eventClipboardCopy_Parms
		{
			FString String;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventClipboardCopy_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Copy the string parameter to the system clipboard.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Copy the string parameter to the system clipboard." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "ClipboardCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::SolanaWallet_eventClipboardCopy_Parms), Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_ClipboardCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_ClipboardCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics
	{
		struct SolanaWallet_eventDoesWalletSaveExist_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventDoesWalletSaveExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventDoesWalletSaveExist_Parms), &Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Check if there is an existing file for this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Check if there is an existing file for this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "DoesWalletSaveExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::SolanaWallet_eventDoesWalletSaveExist_Parms), Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics
	{
		struct SolanaWallet_eventGenerateAccountFromGenIndex_Parms
		{
			int32 GenIndex;
			UWalletAccount* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_GenIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::NewProp_GenIndex = { "GenIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGenerateAccountFromGenIndex_Parms, GenIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGenerateAccountFromGenIndex_Parms, ReturnValue), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::NewProp_GenIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get account from a generation index using the selected derivation path. \n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get account from a generation index using the selected derivation path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GenerateAccountFromGenIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::SolanaWallet_eventGenerateAccountFromGenIndex_Parms), Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics
	{
		struct SolanaWallet_eventGenerateMnemonic_Parms
		{
			FString MnemonicString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MnemonicString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::NewProp_MnemonicString = { "MnemonicString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGenerateMnemonic_Parms, MnemonicString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventGenerateMnemonic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventGenerateMnemonic_Parms), &Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::NewProp_MnemonicString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mnemonic" },
		{ "Comment", "// Generate a mnemonic if no mnemonic exists in this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Generate a mnemonic if no mnemonic exists in this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GenerateMnemonic", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::SolanaWallet_eventGenerateMnemonic_Parms), Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GenerateMnemonic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GenerateMnemonic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics
	{
		struct SolanaWallet_eventGenerateNewAccount_Parms
		{
			UWalletAccount* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGenerateNewAccount_Parms, ReturnValue), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Generate a new account increasing the generation index.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Generate a new account increasing the generation index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GenerateNewAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::SolanaWallet_eventGenerateNewAccount_Parms), Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GenerateNewAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GenerateNewAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics
	{
		struct SolanaWallet_eventGetAccountFromGenIndex_Parms
		{
			int32 GenIndex;
			UWalletAccount* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_GenIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::NewProp_GenIndex = { "GenIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountFromGenIndex_Parms, GenIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountFromGenIndex_Parms, ReturnValue), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::NewProp_GenIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get the account corresponding to the given generation index if it has been already generated.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get the account corresponding to the given generation index if it has been already generated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetAccountFromGenIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::SolanaWallet_eventGetAccountFromGenIndex_Parms), Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics
	{
		struct SolanaWallet_eventGetAccountFromPublicKey_Parms
		{
			FString PublicKey;
			UWalletAccount* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::NewProp_PublicKey = { "PublicKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountFromPublicKey_Parms, PublicKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountFromPublicKey_Parms, ReturnValue), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::NewProp_PublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get the account from the public key.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get the account from the public key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetAccountFromPublicKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::SolanaWallet_eventGetAccountFromPublicKey_Parms), Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics
	{
		struct SolanaWallet_eventGetAccounts_Parms
		{
			TArray<UWalletAccount*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccounts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get all accounts in this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get all accounts in this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetAccounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::SolanaWallet_eventGetAccounts_Parms), Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics
	{
		struct SolanaWallet_eventGetAccountsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get the number of accounts within the wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get the number of accounts within the wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetAccountsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::SolanaWallet_eventGetAccountsCount_Parms), Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetAccountsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetAccountsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics
	{
		struct SolanaWallet_eventGetAccountsFromPath_Parms
		{
			FDerivationPath Path;
			int32 NumAccounts;
			TArray<FAccount> OutAccounts;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAccounts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAccounts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAccounts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountsFromPath_Parms, Path), Z_Construct_UScriptStruct_FDerivationPath, METADATA_PARAMS(nullptr, 0) }; // 836152293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_NumAccounts = { "NumAccounts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountsFromPath_Parms, NumAccounts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_OutAccounts_Inner = { "OutAccounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccount, METADATA_PARAMS(nullptr, 0) }; // 17670890
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_OutAccounts = { "OutAccounts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetAccountsFromPath_Parms, OutAccounts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 17670890
	void Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventGetAccountsFromPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventGetAccountsFromPath_Parms), &Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_NumAccounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_OutAccounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_OutAccounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get accounts for a specific derivation path.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get accounts for a specific derivation path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetAccountsFromPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::SolanaWallet_eventGetAccountsFromPath_Parms), Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics
	{
		struct SolanaWallet_eventGetDerivationPaths_Parms
		{
			TArray<FDerivationPath> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDerivationPath, METADATA_PARAMS(nullptr, 0) }; // 836152293
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetDerivationPaths_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 836152293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Derivation Path" },
		{ "Comment", "// Get all available derivation paths.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get all available derivation paths." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetDerivationPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::SolanaWallet_eventGetDerivationPaths_Parms), Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetDerivationPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetDerivationPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics
	{
		struct SolanaWallet_eventGetMnemonicString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetMnemonicString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mnemonic" },
		{ "Comment", "// Get the Mnemonic string of this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get the Mnemonic string of this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetMnemonicString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::SolanaWallet_eventGetMnemonicString_Parms), Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetMnemonicString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetMnemonicString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics
	{
		struct SolanaWallet_eventGetPublicKeys_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetPublicKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Get public keys of the accounts in this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get public keys of the accounts in this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetPublicKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::SolanaWallet_eventGetPublicKeys_Parms), Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetPublicKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetPublicKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics
	{
		struct SolanaWallet_eventGetSaveSlotName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventGetSaveSlotName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Get the name of the file used to load or save this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Get the name of the file used to load or save this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "GetSaveSlotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::SolanaWallet_eventGetSaveSlotName_Parms), Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_GetSaveSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_GetSaveSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics
	{
		struct SolanaWallet_eventImportAccountFromPrivateKey_Parms
		{
			FString PrivateKey;
			UWalletAccount* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::NewProp_PrivateKey = { "PrivateKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventImportAccountFromPrivateKey_Parms, PrivateKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventImportAccountFromPrivateKey_Parms, ReturnValue), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::NewProp_PrivateKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Create an account from a private key.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Create an account from a private key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "ImportAccountFromPrivateKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::SolanaWallet_eventImportAccountFromPrivateKey_Parms), Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics
	{
		struct SolanaWallet_eventImportAccountFromPublicKey_Parms
		{
			FString PublicKey;
			UWalletAccount* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::NewProp_PublicKey = { "PublicKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventImportAccountFromPublicKey_Parms, PublicKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventImportAccountFromPublicKey_Parms, ReturnValue), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::NewProp_PublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Create an account from a public key.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Create an account from a public key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "ImportAccountFromPublicKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::SolanaWallet_eventImportAccountFromPublicKey_Parms), Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics
	{
		struct SolanaWallet_eventIsMnemonicValid_Parms
		{
			FString Mnemonic;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mnemonic;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::NewProp_Mnemonic = { "Mnemonic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventIsMnemonicValid_Parms, Mnemonic), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventIsMnemonicValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventIsMnemonicValid_Parms), &Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::NewProp_Mnemonic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mnemonic" },
		{ "Comment", "// Check if a Mnemonic string is valid.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Check if a Mnemonic string is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "IsMnemonicValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::SolanaWallet_eventIsMnemonicValid_Parms), Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_IsMnemonicValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_IsMnemonicValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics
	{
		struct SolanaWallet_eventIsWalletLocked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventIsWalletLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventIsWalletLocked_Parms), &Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Whether the wallet is locked or not.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Whether the wallet is locked or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "IsWalletLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::SolanaWallet_eventIsWalletLocked_Parms), Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_IsWalletLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_IsWalletLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_LockWallet_Statics
	{
		struct SolanaWallet_eventLockWallet_Parms
		{
			bool bSaveWallet;
		};
		static void NewProp_bSaveWallet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveWallet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::NewProp_bSaveWallet_SetBit(void* Obj)
	{
		((SolanaWallet_eventLockWallet_Parms*)Obj)->bSaveWallet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::NewProp_bSaveWallet = { "bSaveWallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventLockWallet_Parms), &Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::NewProp_bSaveWallet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::NewProp_bSaveWallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Lock the wallet, deleting mnemonic and private keys from memory.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Lock the wallet, deleting mnemonic and private keys from memory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "LockWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::SolanaWallet_eventLockWallet_Parms), Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_LockWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_LockWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics
	{
		struct SolanaWallet_eventRemoveAccount_Parms
		{
			UWalletAccount* Account;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Account;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::NewProp_Account = { "Account", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventRemoveAccount_Parms, Account), Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::NewProp_Account,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Remove an account from this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Remove an account from this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "RemoveAccount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::SolanaWallet_eventRemoveAccount_Parms), Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_RemoveAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_RemoveAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Remove an account from this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Remove an account from this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "RemoveAllAccounts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics
	{
		struct SolanaWallet_eventRestoreMnemonic_Parms
		{
			FString InMnemonic;
			FText FailReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMnemonic;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_InMnemonic = { "InMnemonic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventRestoreMnemonic_Parms, InMnemonic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventRestoreMnemonic_Parms, FailReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventRestoreMnemonic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventRestoreMnemonic_Parms), &Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_InMnemonic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_FailReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mnemonic" },
		{ "Comment", "// Restore a mnemonic if no mnemonic exists in this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Restore a mnemonic if no mnemonic exists in this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "RestoreMnemonic", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::SolanaWallet_eventRestoreMnemonic_Parms), Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_RestoreMnemonic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_RestoreMnemonic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics
	{
		struct SolanaWallet_eventSaveWallet_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventSaveWallet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventSaveWallet_Parms), &Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Save this wallet to disk to reload it later.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Save this wallet to disk to reload it later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "SaveWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::SolanaWallet_eventSaveWallet_Parms), Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_SaveWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_SaveWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics
	{
		struct SolanaWallet_eventSetDerivationPath_Parms
		{
			FDerivationPath DerivationPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DerivationPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_DerivationPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_DerivationPath = { "DerivationPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventSetDerivationPath_Parms, DerivationPath), Z_Construct_UScriptStruct_FDerivationPath, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_DerivationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_DerivationPath_MetaData)) }; // 836152293
	void Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventSetDerivationPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventSetDerivationPath_Parms), &Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_DerivationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Derivation Path" },
		{ "Comment", "// Set the derivation path for this wallet to derive new wallet address.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Set the derivation path for this wallet to derive new wallet address." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "SetDerivationPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::SolanaWallet_eventSetDerivationPath_Parms), Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_SetDerivationPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_SetDerivationPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_SetPassword_Statics
	{
		struct SolanaWallet_eventSetPassword_Parms
		{
			FString NewPassword;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewPassword;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::NewProp_NewPassword = { "NewPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventSetPassword_Parms, NewPassword), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventSetPassword_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventSetPassword_Parms), &Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::NewProp_NewPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Set or change the password.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Set or change the password." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "SetPassword", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::SolanaWallet_eventSetPassword_Parms), Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_SetPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_SetPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics
	{
		struct SolanaWallet_eventSetSaveSlotName_Parms
		{
			FString NewSaveSlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSaveSlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::NewProp_NewSaveSlotName = { "NewSaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventSetSaveSlotName_Parms, NewSaveSlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventSetSaveSlotName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventSetSaveSlotName_Parms), &Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::NewProp_NewSaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Set the name of the file used to load or save this wallet.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Set the name of the file used to load or save this wallet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "SetSaveSlotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::SolanaWallet_eventSetSaveSlotName_Parms), Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_SetSaveSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_SetSaveSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics
	{
		struct SolanaWallet_eventUnlockWallet_Parms
		{
			FString Password;
			FText FailReason;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventUnlockWallet_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWallet_eventUnlockWallet_Parms, FailReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWallet_eventUnlockWallet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWallet_eventUnlockWallet_Parms), &Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_FailReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Load and unlock this wallet from disk if password is correct.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Load and unlock this wallet from disk if password is correct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "UnlockWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::SolanaWallet_eventUnlockWallet_Parms), Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_UnlockWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_UnlockWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_UpdateAccounts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_UpdateAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "Comment", "// Update balance and info for all accounts\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Update balance and info for all accounts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_UpdateAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "UpdateAccounts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_UpdateAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_UpdateAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_UpdateAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_UpdateAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Account" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "UpdateTokenAccounts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWallet_WipeWallet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWallet_WipeWallet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "Comment", "// Wipe the wallet from both memory and disk.\n" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "Wipe the wallet from both memory and disk." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWallet_WipeWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWallet, nullptr, "WipeWallet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWallet_WipeWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWallet_WipeWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWallet_WipeWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWallet_WipeWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USolanaWallet);
	UClass* Z_Construct_UClass_USolanaWallet_NoRegister()
	{
		return USolanaWallet::StaticClass();
	}
	struct Z_Construct_UClass_USolanaWallet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMnemonicUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMnemonicUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWalletLocked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWalletLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWalletUnlocked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWalletUnlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWalletWiped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWalletWiped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccountsUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccountsUpdated;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Accounts_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Accounts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accounts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Accounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentPassword;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublicKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PublicKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USolanaWallet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USolanaWallet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USolanaWallet_ClipboardCopy, "ClipboardCopy" }, // 2937313248
		{ &Z_Construct_UFunction_USolanaWallet_DoesWalletSaveExist, "DoesWalletSaveExist" }, // 3771217641
		{ &Z_Construct_UFunction_USolanaWallet_GenerateAccountFromGenIndex, "GenerateAccountFromGenIndex" }, // 2736485411
		{ &Z_Construct_UFunction_USolanaWallet_GenerateMnemonic, "GenerateMnemonic" }, // 1943678472
		{ &Z_Construct_UFunction_USolanaWallet_GenerateNewAccount, "GenerateNewAccount" }, // 1131228280
		{ &Z_Construct_UFunction_USolanaWallet_GetAccountFromGenIndex, "GetAccountFromGenIndex" }, // 119413666
		{ &Z_Construct_UFunction_USolanaWallet_GetAccountFromPublicKey, "GetAccountFromPublicKey" }, // 2171248297
		{ &Z_Construct_UFunction_USolanaWallet_GetAccounts, "GetAccounts" }, // 1990301159
		{ &Z_Construct_UFunction_USolanaWallet_GetAccountsCount, "GetAccountsCount" }, // 300288173
		{ &Z_Construct_UFunction_USolanaWallet_GetAccountsFromPath, "GetAccountsFromPath" }, // 513616412
		{ &Z_Construct_UFunction_USolanaWallet_GetDerivationPaths, "GetDerivationPaths" }, // 3515015363
		{ &Z_Construct_UFunction_USolanaWallet_GetMnemonicString, "GetMnemonicString" }, // 1786192688
		{ &Z_Construct_UFunction_USolanaWallet_GetPublicKeys, "GetPublicKeys" }, // 1899275821
		{ &Z_Construct_UFunction_USolanaWallet_GetSaveSlotName, "GetSaveSlotName" }, // 2021246335
		{ &Z_Construct_UFunction_USolanaWallet_ImportAccountFromPrivateKey, "ImportAccountFromPrivateKey" }, // 1231761945
		{ &Z_Construct_UFunction_USolanaWallet_ImportAccountFromPublicKey, "ImportAccountFromPublicKey" }, // 3432370192
		{ &Z_Construct_UFunction_USolanaWallet_IsMnemonicValid, "IsMnemonicValid" }, // 956331433
		{ &Z_Construct_UFunction_USolanaWallet_IsWalletLocked, "IsWalletLocked" }, // 3765570087
		{ &Z_Construct_UFunction_USolanaWallet_LockWallet, "LockWallet" }, // 1378255185
		{ &Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature, "OnAccountsUpdated__DelegateSignature" }, // 1686585997
		{ &Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature, "OnMnemonicUpdated__DelegateSignature" }, // 3188905313
		{ &Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature, "OnWalletLocked__DelegateSignature" }, // 1443339099
		{ &Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature, "OnWalletUnlocked__DelegateSignature" }, // 204662473
		{ &Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature, "OnWalletWiped__DelegateSignature" }, // 1502316438
		{ &Z_Construct_UFunction_USolanaWallet_RemoveAccount, "RemoveAccount" }, // 4035604196
		{ &Z_Construct_UFunction_USolanaWallet_RemoveAllAccounts, "RemoveAllAccounts" }, // 809570388
		{ &Z_Construct_UFunction_USolanaWallet_RestoreMnemonic, "RestoreMnemonic" }, // 414781671
		{ &Z_Construct_UFunction_USolanaWallet_SaveWallet, "SaveWallet" }, // 1924233439
		{ &Z_Construct_UFunction_USolanaWallet_SetDerivationPath, "SetDerivationPath" }, // 622716100
		{ &Z_Construct_UFunction_USolanaWallet_SetPassword, "SetPassword" }, // 2906240229
		{ &Z_Construct_UFunction_USolanaWallet_SetSaveSlotName, "SetSaveSlotName" }, // 3019270316
		{ &Z_Construct_UFunction_USolanaWallet_UnlockWallet, "UnlockWallet" }, // 512148720
		{ &Z_Construct_UFunction_USolanaWallet_UpdateAccounts, "UpdateAccounts" }, // 1960172275
		{ &Z_Construct_UFunction_USolanaWallet_UpdateTokenAccounts, "UpdateTokenAccounts" }, // 3506985847
		{ &Z_Construct_UFunction_USolanaWallet_WipeWallet, "WipeWallet" }, // 1280390241
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * USolanaWallet\n * \n * This class abstract a wallet for the solana network and it is made up of:\n * - a mnemonic phrase to generate new accounts;\n * - a derivation path to generate new accounts;\n * - a save slot name to save the wallet on disk;\n * - a password to encrypt the wallet on disk;\n * - a list of accounts either generated from the mnemonic phrase or imported from a public or private key;\n * \n */" },
		{ "IncludePath", "SolanaWallet.h" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
		{ "ToolTip", "USolanaWallet\n\nThis class abstract a wallet for the solana network and it is made up of:\n- a mnemonic phrase to generate new accounts;\n- a derivation path to generate new accounts;\n- a save slot name to save the wallet on disk;\n- a password to encrypt the wallet on disk;\n- a list of accounts either generated from the mnemonic phrase or imported from a public or private key;" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnMnemonicUpdated_MetaData[] = {
		{ "Category", "Mnemonic" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnMnemonicUpdated = { "OnMnemonicUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, OnMnemonicUpdated), Z_Construct_UDelegateFunction_USolanaWallet_OnMnemonicUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnMnemonicUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnMnemonicUpdated_MetaData)) }; // 3188905313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletLocked_MetaData[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletLocked = { "OnWalletLocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, OnWalletLocked), Z_Construct_UDelegateFunction_USolanaWallet_OnWalletLocked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletLocked_MetaData)) }; // 1443339099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletUnlocked_MetaData[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletUnlocked = { "OnWalletUnlocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, OnWalletUnlocked), Z_Construct_UDelegateFunction_USolanaWallet_OnWalletUnlocked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletUnlocked_MetaData)) }; // 204662473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletWiped_MetaData[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletWiped = { "OnWalletWiped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, OnWalletWiped), Z_Construct_UDelegateFunction_USolanaWallet_OnWalletWiped__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletWiped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletWiped_MetaData)) }; // 1502316438
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnAccountsUpdated_MetaData[] = {
		{ "Category", "Account" },
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnAccountsUpdated = { "OnAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, OnAccountsUpdated), Z_Construct_UDelegateFunction_USolanaWallet_OnAccountsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnAccountsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnAccountsUpdated_MetaData)) }; // 1686585997
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_ValueProp = { "Accounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UWalletAccount_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_Key_KeyProp = { "Accounts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts = { "Accounts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, Accounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentSaveData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentSaveData = { "CurrentSaveData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, CurrentSaveData), Z_Construct_UClass_UWalletData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentSaveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentSaveData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentPassword_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentPassword = { "CurrentPassword", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, CurrentPassword), METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentPassword_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys_Inner = { "PublicKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWallet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys = { "PublicKeys", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWallet, PublicKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USolanaWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnMnemonicUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletUnlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnWalletWiped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_OnAccountsUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_Accounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentSaveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_CurrentPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWallet_Statics::NewProp_PublicKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USolanaWallet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USolanaWallet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USolanaWallet_Statics::ClassParams = {
		&USolanaWallet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USolanaWallet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USolanaWallet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWallet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USolanaWallet()
	{
		if (!Z_Registration_Info_UClass_USolanaWallet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USolanaWallet.OuterSingleton, Z_Construct_UClass_USolanaWallet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USolanaWallet.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<USolanaWallet>()
	{
		return USolanaWallet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USolanaWallet);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics::ScriptStructInfo[] = {
		{ FDerivationPath::StaticStruct, Z_Construct_UScriptStruct_FDerivationPath_Statics::NewStructOps, TEXT("DerivationPath"), &Z_Registration_Info_UScriptStruct_DerivationPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDerivationPath), 836152293U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWalletData, UWalletData::StaticClass, TEXT("UWalletData"), &Z_Registration_Info_UClass_UWalletData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalletData), 892145625U) },
		{ Z_Construct_UClass_UWalletSaveData, UWalletSaveData::StaticClass, TEXT("UWalletSaveData"), &Z_Registration_Info_UClass_UWalletSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalletSaveData), 2018604953U) },
		{ Z_Construct_UClass_USolanaWallet, USolanaWallet::StaticClass, TEXT("USolanaWallet"), &Z_Registration_Info_UClass_USolanaWallet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USolanaWallet), 1450700118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_3741376375(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWallet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

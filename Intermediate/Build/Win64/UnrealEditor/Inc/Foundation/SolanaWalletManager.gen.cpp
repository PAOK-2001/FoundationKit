// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/SolanaWalletManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolanaWalletManager() {}
// Cross Module References
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWalletManager_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWalletManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWallet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USolanaWalletManager::execGetRegisteredWalletCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRegisteredWalletCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execGetSlotNamePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USolanaWalletManager::GetSlotNamePath(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execGetAllRegisteredWallets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,USolanaWallet*>*)Z_Param__Result=P_THIS->GetAllRegisteredWallets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execUnregisterWallet)
	{
		P_GET_OBJECT(USolanaWallet,Z_Param_Wallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterWallet(Z_Param_Wallet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execRegisterWallet)
	{
		P_GET_OBJECT(USolanaWallet,Z_Param_Wallet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterWallet(Z_Param_Wallet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execGetWallet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USolanaWallet**)Z_Param__Result=P_THIS->GetWallet(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execGetOrCreateWallet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USolanaWallet**)Z_Param__Result=P_THIS->GetOrCreateWallet(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execCreateNewWallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USolanaWallet**)Z_Param__Result=P_THIS->CreateNewWallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execRegisterAllWalletsFromSaveSlotList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterAllWalletsFromSaveSlotList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execDoesWalletSaveSlotExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USolanaWalletManager::DoesWalletSaveSlotExist(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USolanaWalletManager::execGetSaveSlotList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USolanaWalletManager::GetSaveSlotList();
		P_NATIVE_END;
	}
	void USolanaWalletManager::StaticRegisterNativesUSolanaWalletManager()
	{
		UClass* Class = USolanaWalletManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewWallet", &USolanaWalletManager::execCreateNewWallet },
			{ "DoesWalletSaveSlotExist", &USolanaWalletManager::execDoesWalletSaveSlotExist },
			{ "GetAllRegisteredWallets", &USolanaWalletManager::execGetAllRegisteredWallets },
			{ "GetOrCreateWallet", &USolanaWalletManager::execGetOrCreateWallet },
			{ "GetRegisteredWalletCount", &USolanaWalletManager::execGetRegisteredWalletCount },
			{ "GetSaveSlotList", &USolanaWalletManager::execGetSaveSlotList },
			{ "GetSlotNamePath", &USolanaWalletManager::execGetSlotNamePath },
			{ "GetWallet", &USolanaWalletManager::execGetWallet },
			{ "RegisterAllWalletsFromSaveSlotList", &USolanaWalletManager::execRegisterAllWalletsFromSaveSlotList },
			{ "RegisterWallet", &USolanaWalletManager::execRegisterWallet },
			{ "UnregisterWallet", &USolanaWalletManager::execUnregisterWallet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics
	{
		struct SolanaWalletManager_eventCreateNewWallet_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventCreateNewWallet_Parms, ReturnValue), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "CreateNewWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::SolanaWalletManager_eventCreateNewWallet_Parms), Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics
	{
		struct SolanaWalletManager_eventDoesWalletSaveSlotExist_Parms
		{
			FString SlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventDoesWalletSaveSlotExist_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_SlotName_MetaData)) };
	void Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SolanaWalletManager_eventDoesWalletSaveSlotExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SolanaWalletManager_eventDoesWalletSaveSlotExist_Parms), &Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "DoesWalletSaveSlotExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::SolanaWalletManager_eventDoesWalletSaveSlotExist_Parms), Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics
	{
		struct SolanaWalletManager_eventGetAllRegisteredWallets_Parms
		{
			TMap<FString,USolanaWallet*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetAllRegisteredWallets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "GetAllRegisteredWallets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::SolanaWalletManager_eventGetAllRegisteredWallets_Parms), Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics
	{
		struct SolanaWalletManager_eventGetOrCreateWallet_Parms
		{
			FString SlotName;
			USolanaWallet* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetOrCreateWallet_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetOrCreateWallet_Parms, ReturnValue), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "GetOrCreateWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::SolanaWalletManager_eventGetOrCreateWallet_Parms), Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics
	{
		struct SolanaWalletManager_eventGetRegisteredWalletCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetRegisteredWalletCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "GetRegisteredWalletCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::SolanaWalletManager_eventGetRegisteredWalletCount_Parms), Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics
	{
		struct SolanaWalletManager_eventGetSaveSlotList_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetSaveSlotList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "GetSaveSlotList", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::SolanaWalletManager_eventGetSaveSlotList_Parms), Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics
	{
		struct SolanaWalletManager_eventGetSlotNamePath_Parms
		{
			FString SlotName;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetSlotNamePath_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetSlotNamePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "GetSlotNamePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::SolanaWalletManager_eventGetSlotNamePath_Parms), Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics
	{
		struct SolanaWalletManager_eventGetWallet_Parms
		{
			FString SlotName;
			USolanaWallet* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetWallet_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventGetWallet_Parms, ReturnValue), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "GetWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::SolanaWalletManager_eventGetWallet_Parms), Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_GetWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_GetWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "RegisterAllWalletsFromSaveSlotList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics
	{
		struct SolanaWalletManager_eventRegisterWallet_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventRegisterWallet_Parms, Wallet), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::NewProp_Wallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "RegisterWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::SolanaWalletManager_eventRegisterWallet_Parms), Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_RegisterWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_RegisterWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics
	{
		struct SolanaWalletManager_eventUnregisterWallet_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SolanaWalletManager_eventUnregisterWallet_Parms, Wallet), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::NewProp_Wallet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USolanaWalletManager, nullptr, "UnregisterWallet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::SolanaWalletManager_eventUnregisterWallet_Parms), Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USolanaWalletManager);
	UClass* Z_Construct_UClass_USolanaWalletManager_NoRegister()
	{
		return USolanaWalletManager::StaticClass();
	}
	struct Z_Construct_UClass_USolanaWalletManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Wallets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Wallets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USolanaWalletManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USolanaWalletManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USolanaWalletManager_CreateNewWallet, "CreateNewWallet" }, // 4162041839
		{ &Z_Construct_UFunction_USolanaWalletManager_DoesWalletSaveSlotExist, "DoesWalletSaveSlotExist" }, // 1533414829
		{ &Z_Construct_UFunction_USolanaWalletManager_GetAllRegisteredWallets, "GetAllRegisteredWallets" }, // 2968162206
		{ &Z_Construct_UFunction_USolanaWalletManager_GetOrCreateWallet, "GetOrCreateWallet" }, // 2491062268
		{ &Z_Construct_UFunction_USolanaWalletManager_GetRegisteredWalletCount, "GetRegisteredWalletCount" }, // 1415216997
		{ &Z_Construct_UFunction_USolanaWalletManager_GetSaveSlotList, "GetSaveSlotList" }, // 3538147291
		{ &Z_Construct_UFunction_USolanaWalletManager_GetSlotNamePath, "GetSlotNamePath" }, // 2983508351
		{ &Z_Construct_UFunction_USolanaWalletManager_GetWallet, "GetWallet" }, // 458615586
		{ &Z_Construct_UFunction_USolanaWalletManager_RegisterAllWalletsFromSaveSlotList, "RegisterAllWalletsFromSaveSlotList" }, // 2960940872
		{ &Z_Construct_UFunction_USolanaWalletManager_RegisterWallet, "RegisterWallet" }, // 3202925853
		{ &Z_Construct_UFunction_USolanaWalletManager_UnregisterWallet, "UnregisterWallet" }, // 2603673430
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWalletManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SolanaWalletManager.h" },
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_ValueProp = { "Wallets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_Key_KeyProp = { "Wallets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaWalletManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets = { "Wallets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USolanaWalletManager, Wallets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USolanaWalletManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USolanaWalletManager_Statics::NewProp_Wallets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USolanaWalletManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USolanaWalletManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USolanaWalletManager_Statics::ClassParams = {
		&USolanaWalletManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USolanaWalletManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWalletManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USolanaWalletManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USolanaWalletManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USolanaWalletManager()
	{
		if (!Z_Registration_Info_UClass_USolanaWalletManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USolanaWalletManager.OuterSingleton, Z_Construct_UClass_USolanaWalletManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USolanaWalletManager.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<USolanaWalletManager>()
	{
		return USolanaWalletManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USolanaWalletManager);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWalletManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWalletManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USolanaWalletManager, USolanaWalletManager::StaticClass, TEXT("USolanaWalletManager"), &Z_Registration_Info_UClass_USolanaWalletManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USolanaWalletManager), 3603816215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWalletManager_h_1863233304(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWalletManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaWalletManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

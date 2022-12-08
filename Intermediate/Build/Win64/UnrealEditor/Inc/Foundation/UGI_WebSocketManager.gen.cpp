// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/Network/UGI_WebSocketManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGI_WebSocketManager() {}
// Cross Module References
	FOUNDATION_API UClass* Z_Construct_UClass_UGI_WebSocketManager_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UGI_WebSocketManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Foundation();
// End Cross Module References
	DEFINE_FUNCTION(UGI_WebSocketManager::execHeartbeatHelper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HeartbeatHelper();
		P_NATIVE_END;
	}
	void UGI_WebSocketManager::StaticRegisterNativesUGI_WebSocketManager()
	{
		UClass* Class = UGI_WebSocketManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HeartbeatHelper", &UGI_WebSocketManager::execHeartbeatHelper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Network/UGI_WebSocketManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGI_WebSocketManager, nullptr, "HeartbeatHelper", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGI_WebSocketManager);
	UClass* Z_Construct_UClass_UGI_WebSocketManager_NoRegister()
	{
		return UGI_WebSocketManager::StaticClass();
	}
	struct Z_Construct_UClass_UGI_WebSocketManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGI_WebSocketManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGI_WebSocketManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGI_WebSocketManager_HeartbeatHelper, "HeartbeatHelper" }, // 1642819032
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGI_WebSocketManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Network/UGI_WebSocketManager.h" },
		{ "ModuleRelativePath", "Public/Network/UGI_WebSocketManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGI_WebSocketManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGI_WebSocketManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGI_WebSocketManager_Statics::ClassParams = {
		&UGI_WebSocketManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGI_WebSocketManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGI_WebSocketManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGI_WebSocketManager()
	{
		if (!Z_Registration_Info_UClass_UGI_WebSocketManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGI_WebSocketManager.OuterSingleton, Z_Construct_UClass_UGI_WebSocketManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGI_WebSocketManager.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UGI_WebSocketManager>()
	{
		return UGI_WebSocketManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGI_WebSocketManager);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UGI_WebSocketManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UGI_WebSocketManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGI_WebSocketManager, UGI_WebSocketManager::StaticClass, TEXT("UGI_WebSocketManager"), &Z_Registration_Info_UClass_UGI_WebSocketManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGI_WebSocketManager), 1416368798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UGI_WebSocketManager_h_1239646777(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UGI_WebSocketManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UGI_WebSocketManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

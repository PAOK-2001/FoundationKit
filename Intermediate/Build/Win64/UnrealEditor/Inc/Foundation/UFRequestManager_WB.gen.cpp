// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/Network/UFRequestManager_WB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFRequestManager_WB() {}
// Cross Module References
	FOUNDATION_API UClass* Z_Construct_UClass_UFRequestManager_WB_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UFRequestManager_WB();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Foundation();
// End Cross Module References
	DEFINE_FUNCTION(UFRequestManager_WB::execHeartbeatHelper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HeartbeatHelper();
		P_NATIVE_END;
	}
	void UFRequestManager_WB::StaticRegisterNativesUFRequestManager_WB()
	{
		UClass* Class = UFRequestManager_WB::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HeartbeatHelper", &UFRequestManager_WB::execHeartbeatHelper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Network/UFRequestManager_WB.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFRequestManager_WB, nullptr, "HeartbeatHelper", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFRequestManager_WB);
	UClass* Z_Construct_UClass_UFRequestManager_WB_NoRegister()
	{
		return UFRequestManager_WB::StaticClass();
	}
	struct Z_Construct_UClass_UFRequestManager_WB_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFRequestManager_WB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFRequestManager_WB_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFRequestManager_WB_HeartbeatHelper, "HeartbeatHelper" }, // 810350524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFRequestManager_WB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Network/UFRequestManager_WB.h" },
		{ "ModuleRelativePath", "Public/Network/UFRequestManager_WB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFRequestManager_WB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFRequestManager_WB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFRequestManager_WB_Statics::ClassParams = {
		&UFRequestManager_WB::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFRequestManager_WB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFRequestManager_WB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFRequestManager_WB()
	{
		if (!Z_Registration_Info_UClass_UFRequestManager_WB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFRequestManager_WB.OuterSingleton, Z_Construct_UClass_UFRequestManager_WB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFRequestManager_WB.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UFRequestManager_WB>()
	{
		return UFRequestManager_WB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFRequestManager_WB);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UFRequestManager_WB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UFRequestManager_WB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFRequestManager_WB, UFRequestManager_WB::StaticClass, TEXT("UFRequestManager_WB"), &Z_Registration_Info_UClass_UFRequestManager_WB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFRequestManager_WB), 1885463758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UFRequestManager_WB_h_3359961838(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UFRequestManager_WB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_Network_UFRequestManager_WB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

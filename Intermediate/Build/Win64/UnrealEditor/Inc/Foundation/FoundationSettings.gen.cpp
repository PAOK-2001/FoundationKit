// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/FoundationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoundationSettings() {}
// Cross Module References
	FOUNDATION_API UEnum* Z_Construct_UEnum_Foundation_ESolanaNetwork();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UClass* Z_Construct_UClass_UFoundationSettings_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UFoundationSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESolanaNetwork;
	static UEnum* ESolanaNetwork_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESolanaNetwork.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESolanaNetwork.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foundation_ESolanaNetwork, Z_Construct_UPackage__Script_Foundation(), TEXT("ESolanaNetwork"));
		}
		return Z_Registration_Info_UEnum_ESolanaNetwork.OuterSingleton;
	}
	template<> FOUNDATION_API UEnum* StaticEnum<ESolanaNetwork>()
	{
		return ESolanaNetwork_StaticEnum();
	}
	struct Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::Enumerators[] = {
		{ "ESolanaNetwork::None", (int64)ESolanaNetwork::None },
		{ "ESolanaNetwork::MainNetBeta", (int64)ESolanaNetwork::MainNetBeta },
		{ "ESolanaNetwork::DevNet", (int64)ESolanaNetwork::DevNet },
		{ "ESolanaNetwork::Count", (int64)ESolanaNetwork::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::Enum_MetaDataParams[] = {
		{ "Count.Comment", "// add above\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESolanaNetwork::Count" },
		{ "Count.ToolTip", "add above" },
		{ "DevNet.Name", "ESolanaNetwork::DevNet" },
		{ "MainNetBeta.Name", "ESolanaNetwork::MainNetBeta" },
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
		{ "None.Name", "ESolanaNetwork::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		"ESolanaNetwork",
		"ESolanaNetwork",
		Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Foundation_ESolanaNetwork()
	{
		if (!Z_Registration_Info_UEnum_ESolanaNetwork.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESolanaNetwork.InnerSingleton, Z_Construct_UEnum_Foundation_ESolanaNetwork_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESolanaNetwork.InnerSingleton;
	}
	DEFINE_FUNCTION(UFoundationSettings::execGetNetworkURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNetworkURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFoundationSettings::execSetNetwork)
	{
		P_GET_ENUM(ESolanaNetwork,Z_Param_SolanaNetwork);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetwork(ESolanaNetwork(Z_Param_SolanaNetwork));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFoundationSettings::execGetNetwork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESolanaNetwork*)Z_Param__Result=P_THIS->GetNetwork();
		P_NATIVE_END;
	}
	void UFoundationSettings::StaticRegisterNativesUFoundationSettings()
	{
		UClass* Class = UFoundationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNetwork", &UFoundationSettings::execGetNetwork },
			{ "GetNetworkURL", &UFoundationSettings::execGetNetworkURL },
			{ "SetNetwork", &UFoundationSettings::execSetNetwork },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics
	{
		struct FoundationSettings_eventGetNetwork_Parms
		{
			ESolanaNetwork ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoundationSettings_eventGetNetwork_Parms, ReturnValue), Z_Construct_UEnum_Foundation_ESolanaNetwork, METADATA_PARAMS(nullptr, 0) }; // 736532667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoundationSettings, nullptr, "GetNetwork", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::FoundationSettings_eventGetNetwork_Parms), Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFoundationSettings_GetNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFoundationSettings_GetNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics
	{
		struct FoundationSettings_eventGetNetworkURL_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoundationSettings_eventGetNetworkURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoundationSettings, nullptr, "GetNetworkURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::FoundationSettings_eventGetNetworkURL_Parms), Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFoundationSettings_GetNetworkURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFoundationSettings_GetNetworkURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics
	{
		struct FoundationSettings_eventSetNetwork_Parms
		{
			ESolanaNetwork SolanaNetwork;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SolanaNetwork_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SolanaNetwork;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::NewProp_SolanaNetwork_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::NewProp_SolanaNetwork = { "SolanaNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoundationSettings_eventSetNetwork_Parms, SolanaNetwork), Z_Construct_UEnum_Foundation_ESolanaNetwork, METADATA_PARAMS(nullptr, 0) }; // 736532667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::NewProp_SolanaNetwork_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::NewProp_SolanaNetwork,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoundationSettings, nullptr, "SetNetwork", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::FoundationSettings_eventSetNetwork_Parms), Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFoundationSettings_SetNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFoundationSettings_SetNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoundationSettings);
	UClass* Z_Construct_UClass_UFoundationSettings_NoRegister()
	{
		return UFoundationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFoundationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NetworkURLs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetworkURLs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NetworkURLs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkURLs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NetworkURLs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Network_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Network_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Network;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoundationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFoundationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFoundationSettings_GetNetwork, "GetNetwork" }, // 1654138610
		{ &Z_Construct_UFunction_UFoundationSettings_GetNetworkURL, "GetNetworkURL" }, // 1813370100
		{ &Z_Construct_UFunction_UFoundationSettings_SetNetwork, "SetNetwork" }, // 3084393804
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Foundation Settings" },
		{ "IncludePath", "FoundationSettings.h" },
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_ValueProp = { "NetworkURLs", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_Key_KeyProp = { "NetworkURLs_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Foundation_ESolanaNetwork, METADATA_PARAMS(nullptr, 0) }; // 736532667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_MetaData[] = {
		{ "Category", "FoundationSettings" },
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs = { "NetworkURLs", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundationSettings, NetworkURLs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_MetaData)) }; // 736532667
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network_MetaData[] = {
		{ "Category", "FoundationSettings" },
		{ "ModuleRelativePath", "Public/FoundationSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoundationSettings, Network), Z_Construct_UEnum_Foundation_ESolanaNetwork, METADATA_PARAMS(Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network_MetaData)) }; // 736532667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoundationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundationSettings_Statics::NewProp_NetworkURLs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoundationSettings_Statics::NewProp_Network,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoundationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoundationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoundationSettings_Statics::ClassParams = {
		&UFoundationSettings::StaticClass,
		"Foundation",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFoundationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoundationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFoundationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoundationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoundationSettings()
	{
		if (!Z_Registration_Info_UClass_UFoundationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoundationSettings.OuterSingleton, Z_Construct_UClass_UFoundationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoundationSettings.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UFoundationSettings>()
	{
		return UFoundationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoundationSettings);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics::EnumInfo[] = {
		{ ESolanaNetwork_StaticEnum, TEXT("ESolanaNetwork"), &Z_Registration_Info_UEnum_ESolanaNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 736532667U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoundationSettings, UFoundationSettings::StaticClass, TEXT("UFoundationSettings"), &Z_Registration_Info_UClass_UFoundationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoundationSettings), 1004095033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_2626849917(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

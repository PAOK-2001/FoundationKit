// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/SelectDerivationPathWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectDerivationPathWidget() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_USelectDerivationPathWidget();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FDerivationPath();
	FOUNDATION_API UClass* Z_Construct_UClass_USelectDerivationPathWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics
	{
		struct SelectDerivationPathWidget_eventOnDerivationPathSelected_Parms
		{
			FDerivationPath DerivationPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DerivationPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::NewProp_DerivationPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::NewProp_DerivationPath = { "DerivationPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectDerivationPathWidget_eventOnDerivationPathSelected_Parms, DerivationPath), Z_Construct_UScriptStruct_FDerivationPath, METADATA_PARAMS(Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::NewProp_DerivationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::NewProp_DerivationPath_MetaData)) }; // 836152293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::NewProp_DerivationPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/SelectDerivationPathWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectDerivationPathWidget, nullptr, "OnDerivationPathSelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::SelectDerivationPathWidget_eventOnDerivationPathSelected_Parms), Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USelectDerivationPathWidget::StaticRegisterNativesUSelectDerivationPathWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectDerivationPathWidget);
	UClass* Z_Construct_UClass_USelectDerivationPathWidget_NoRegister()
	{
		return USelectDerivationPathWidget::StaticClass();
	}
	struct Z_Construct_UClass_USelectDerivationPathWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDerivationPathSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDerivationPathSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectDerivationPathWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectDerivationPathWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature, "OnDerivationPathSelected__DelegateSignature" }, // 3972426057
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectDerivationPathWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/SelectDerivationPathWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/SelectDerivationPathWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectDerivationPathWidget_Statics::NewProp_OnDerivationPathSelected_MetaData[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/SelectDerivationPathWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USelectDerivationPathWidget_Statics::NewProp_OnDerivationPathSelected = { "OnDerivationPathSelected", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelectDerivationPathWidget, OnDerivationPathSelected), Z_Construct_UDelegateFunction_USelectDerivationPathWidget_OnDerivationPathSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USelectDerivationPathWidget_Statics::NewProp_OnDerivationPathSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectDerivationPathWidget_Statics::NewProp_OnDerivationPathSelected_MetaData)) }; // 3972426057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectDerivationPathWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectDerivationPathWidget_Statics::NewProp_OnDerivationPathSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectDerivationPathWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectDerivationPathWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectDerivationPathWidget_Statics::ClassParams = {
		&USelectDerivationPathWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_USelectDerivationPathWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectDerivationPathWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USelectDerivationPathWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectDerivationPathWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectDerivationPathWidget()
	{
		if (!Z_Registration_Info_UClass_USelectDerivationPathWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectDerivationPathWidget.OuterSingleton, Z_Construct_UClass_USelectDerivationPathWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectDerivationPathWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<USelectDerivationPathWidget>()
	{
		return USelectDerivationPathWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectDerivationPathWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectDerivationPathWidget, USelectDerivationPathWidget::StaticClass, TEXT("USelectDerivationPathWidget"), &Z_Registration_Info_UClass_USelectDerivationPathWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectDerivationPathWidget), 3572670509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_2751656440(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

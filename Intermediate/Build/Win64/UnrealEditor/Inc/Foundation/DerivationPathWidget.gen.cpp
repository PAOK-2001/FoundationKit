// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/DerivationPathWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDerivationPathWidget() {}
// Cross Module References
	FOUNDATION_API UClass* Z_Construct_UClass_UDerivationPathWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UDerivationPathWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UDerivationPathWidget::StaticRegisterNativesUDerivationPathWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDerivationPathWidget);
	UClass* Z_Construct_UClass_UDerivationPathWidget_NoRegister()
	{
		return UDerivationPathWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDerivationPathWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddressTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivationPathTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DerivationPathTextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDerivationPathWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDerivationPathWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/DerivationPathWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/DerivationPathWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_ButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DerivationPathWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/DerivationPathWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_ButtonContainer = { "ButtonContainer", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDerivationPathWidget, ButtonContainer), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_ButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_ButtonContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_AddressTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DerivationPathWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/DerivationPathWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_AddressTextBlock = { "AddressTextBlock", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDerivationPathWidget, AddressTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_AddressTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_AddressTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_DerivationPathTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DerivationPathWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/DerivationPathWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_DerivationPathTextBlock = { "DerivationPathTextBlock", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDerivationPathWidget, DerivationPathTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_DerivationPathTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_DerivationPathTextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDerivationPathWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_ButtonContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_AddressTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDerivationPathWidget_Statics::NewProp_DerivationPathTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDerivationPathWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDerivationPathWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDerivationPathWidget_Statics::ClassParams = {
		&UDerivationPathWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDerivationPathWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDerivationPathWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDerivationPathWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDerivationPathWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDerivationPathWidget()
	{
		if (!Z_Registration_Info_UClass_UDerivationPathWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDerivationPathWidget.OuterSingleton, Z_Construct_UClass_UDerivationPathWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDerivationPathWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UDerivationPathWidget>()
	{
		return UDerivationPathWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDerivationPathWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_DerivationPathWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_DerivationPathWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDerivationPathWidget, UDerivationPathWidget::StaticClass, TEXT("UDerivationPathWidget"), &Z_Registration_Info_UClass_UDerivationPathWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDerivationPathWidget), 774200355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_DerivationPathWidget_h_1826996692(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_DerivationPathWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_DerivationPathWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

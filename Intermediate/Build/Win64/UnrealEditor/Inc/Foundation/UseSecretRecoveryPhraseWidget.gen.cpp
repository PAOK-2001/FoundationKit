// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/UseSecretRecoveryPhraseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUseSecretRecoveryPhraseWidget() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_UUseSecretRecoveryPhraseWidget();
	FOUNDATION_API UClass* Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics
	{
		struct UseSecretRecoveryPhraseWidget_eventOnMnemonicSubmitted_Parms
		{
			FString Mnemonic;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mnemonic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mnemonic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::NewProp_Mnemonic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::NewProp_Mnemonic = { "Mnemonic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UseSecretRecoveryPhraseWidget_eventOnMnemonicSubmitted_Parms, Mnemonic), METADATA_PARAMS(Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::NewProp_Mnemonic_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::NewProp_Mnemonic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::NewProp_Mnemonic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/UseSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUseSecretRecoveryPhraseWidget, nullptr, "OnMnemonicSubmitted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::UseSecretRecoveryPhraseWidget_eventOnMnemonicSubmitted_Parms), Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUseSecretRecoveryPhraseWidget::execOnContinueButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContinueButtonClicked();
		P_NATIVE_END;
	}
	void UUseSecretRecoveryPhraseWidget::StaticRegisterNativesUUseSecretRecoveryPhraseWidget()
	{
		UClass* Class = UUseSecretRecoveryPhraseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnContinueButtonClicked", &UUseSecretRecoveryPhraseWidget::execOnContinueButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/UseSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUseSecretRecoveryPhraseWidget, nullptr, "OnContinueButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUseSecretRecoveryPhraseWidget);
	UClass* Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_NoRegister()
	{
		return UUseSecretRecoveryPhraseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMnemonicSubmitted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMnemonicSubmitted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MnemonicTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MnemonicTextBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUseSecretRecoveryPhraseWidget_OnContinueButtonClicked, "OnContinueButtonClicked" }, // 1786383485
		{ &Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature, "OnMnemonicSubmitted__DelegateSignature" }, // 2218384629
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/UseSecretRecoveryPhraseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/UseSecretRecoveryPhraseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_OnMnemonicSubmitted_MetaData[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/UseSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_OnMnemonicSubmitted = { "OnMnemonicSubmitted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUseSecretRecoveryPhraseWidget, OnMnemonicSubmitted), Z_Construct_UDelegateFunction_UUseSecretRecoveryPhraseWidget_OnMnemonicSubmitted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_OnMnemonicSubmitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_OnMnemonicSubmitted_MetaData)) }; // 2218384629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UseSecretRecoveryPhraseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/UseSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUseSecretRecoveryPhraseWidget, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_MnemonicTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UseSecretRecoveryPhraseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/UseSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_MnemonicTextBox = { "MnemonicTextBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUseSecretRecoveryPhraseWidget, MnemonicTextBox), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_MnemonicTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_MnemonicTextBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_OnMnemonicSubmitted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::NewProp_MnemonicTextBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUseSecretRecoveryPhraseWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::ClassParams = {
		&UUseSecretRecoveryPhraseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUseSecretRecoveryPhraseWidget()
	{
		if (!Z_Registration_Info_UClass_UUseSecretRecoveryPhraseWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUseSecretRecoveryPhraseWidget.OuterSingleton, Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUseSecretRecoveryPhraseWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UUseSecretRecoveryPhraseWidget>()
	{
		return UUseSecretRecoveryPhraseWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUseSecretRecoveryPhraseWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUseSecretRecoveryPhraseWidget, UUseSecretRecoveryPhraseWidget::StaticClass, TEXT("UUseSecretRecoveryPhraseWidget"), &Z_Registration_Info_UClass_UUseSecretRecoveryPhraseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUseSecretRecoveryPhraseWidget), 2969318029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_618495822(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateSecretRecoveryPhraseWidget() {}
// Cross Module References
	FOUNDATION_API UClass* Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGenerateSecretRecoveryPhraseWidget::execOnCopyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCopyButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateSecretRecoveryPhraseWidget::execOnSecretSavedCheckStateChanged)
	{
		P_GET_UBOOL(Z_Param_bIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecretSavedCheckStateChanged(Z_Param_bIsChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateSecretRecoveryPhraseWidget::execSetMnemonic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Mnemonic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMnemonic(Z_Param_Mnemonic);
		P_NATIVE_END;
	}
	void UGenerateSecretRecoveryPhraseWidget::StaticRegisterNativesUGenerateSecretRecoveryPhraseWidget()
	{
		UClass* Class = UGenerateSecretRecoveryPhraseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCopyButtonClicked", &UGenerateSecretRecoveryPhraseWidget::execOnCopyButtonClicked },
			{ "OnSecretSavedCheckStateChanged", &UGenerateSecretRecoveryPhraseWidget::execOnSecretSavedCheckStateChanged },
			{ "SetMnemonic", &UGenerateSecretRecoveryPhraseWidget::execSetMnemonic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget, nullptr, "OnCopyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics
	{
		struct GenerateSecretRecoveryPhraseWidget_eventOnSecretSavedCheckStateChanged_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((GenerateSecretRecoveryPhraseWidget_eventOnSecretSavedCheckStateChanged_Parms*)Obj)->bIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GenerateSecretRecoveryPhraseWidget_eventOnSecretSavedCheckStateChanged_Parms), &Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget, nullptr, "OnSecretSavedCheckStateChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::GenerateSecretRecoveryPhraseWidget_eventOnSecretSavedCheckStateChanged_Parms), Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics
	{
		struct GenerateSecretRecoveryPhraseWidget_eventSetMnemonic_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::NewProp_Mnemonic = { "Mnemonic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GenerateSecretRecoveryPhraseWidget_eventSetMnemonic_Parms, Mnemonic), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::NewProp_Mnemonic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget, nullptr, "SetMnemonic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::GenerateSecretRecoveryPhraseWidget_eventSetMnemonic_Parms), Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateSecretRecoveryPhraseWidget);
	UClass* Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_NoRegister()
	{
		return UGenerateSecretRecoveryPhraseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CopyButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecretSavedCheckBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecretSavedCheckBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryPhraseTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoveryPhraseTextBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnCopyButtonClicked, "OnCopyButtonClicked" }, // 2232311755
		{ &Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_OnSecretSavedCheckStateChanged, "OnSecretSavedCheckStateChanged" }, // 1415097656
		{ &Z_Construct_UFunction_UGenerateSecretRecoveryPhraseWidget_SetMnemonic, "SetMnemonic" }, // 3386709952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GenerateSecretRecoveryPhraseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateSecretRecoveryPhraseWidget, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_CopyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GenerateSecretRecoveryPhraseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_CopyButton = { "CopyButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateSecretRecoveryPhraseWidget, CopyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_CopyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_CopyButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_SecretSavedCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GenerateSecretRecoveryPhraseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_SecretSavedCheckBox = { "SecretSavedCheckBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateSecretRecoveryPhraseWidget, SecretSavedCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_SecretSavedCheckBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_SecretSavedCheckBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_RecoveryPhraseTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GenerateSecretRecoveryPhraseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/GenerateSecretRecoveryPhraseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_RecoveryPhraseTextBox = { "RecoveryPhraseTextBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenerateSecretRecoveryPhraseWidget, RecoveryPhraseTextBox), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_RecoveryPhraseTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_RecoveryPhraseTextBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_ContinueButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_CopyButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_SecretSavedCheckBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::NewProp_RecoveryPhraseTextBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateSecretRecoveryPhraseWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::ClassParams = {
		&UGenerateSecretRecoveryPhraseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget()
	{
		if (!Z_Registration_Info_UClass_UGenerateSecretRecoveryPhraseWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateSecretRecoveryPhraseWidget.OuterSingleton, Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateSecretRecoveryPhraseWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UGenerateSecretRecoveryPhraseWidget>()
	{
		return UGenerateSecretRecoveryPhraseWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateSecretRecoveryPhraseWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_GenerateSecretRecoveryPhraseWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_GenerateSecretRecoveryPhraseWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget, UGenerateSecretRecoveryPhraseWidget::StaticClass, TEXT("UGenerateSecretRecoveryPhraseWidget"), &Z_Registration_Info_UClass_UGenerateSecretRecoveryPhraseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateSecretRecoveryPhraseWidget), 702460590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_GenerateSecretRecoveryPhraseWidget_h_277474606(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_GenerateSecretRecoveryPhraseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_GenerateSecretRecoveryPhraseWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

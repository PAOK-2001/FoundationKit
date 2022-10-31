// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/WalletCreationWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalletCreationWidget() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletCreationWidget();
	FOUNDATION_API UClass* Z_Construct_UClass_UWalletCreationWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FDerivationPath();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UHomeWalletCreationWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_USelectDerivationPathWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UCreatePasswordWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWalletManager_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_USolanaWallet_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnWalletCreated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWalletCreationWidget::execOnUserSavedMnemonic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserSavedMnemonic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletCreationWidget::execOnPasswordConfirmed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPasswordConfirmed(Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletCreationWidget::execOnDerivationPathSelected)
	{
		P_GET_STRUCT_REF(FDerivationPath,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDerivationPathSelected(Z_Param_Out_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletCreationWidget::execOnMnemonicSubmitted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Mnemonic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMnemonicSubmitted(Z_Param_Mnemonic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletCreationWidget::execOnUseSecretRecoveryPhraseButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUseSecretRecoveryPhraseButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWalletCreationWidget::execOnCreateNewWalletButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateNewWalletButtonClicked();
		P_NATIVE_END;
	}
	void UWalletCreationWidget::StaticRegisterNativesUWalletCreationWidget()
	{
		UClass* Class = UWalletCreationWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCreateNewWalletButtonClicked", &UWalletCreationWidget::execOnCreateNewWalletButtonClicked },
			{ "OnDerivationPathSelected", &UWalletCreationWidget::execOnDerivationPathSelected },
			{ "OnMnemonicSubmitted", &UWalletCreationWidget::execOnMnemonicSubmitted },
			{ "OnPasswordConfirmed", &UWalletCreationWidget::execOnPasswordConfirmed },
			{ "OnUserSavedMnemonic", &UWalletCreationWidget::execOnUserSavedMnemonic },
			{ "OnUseSecretRecoveryPhraseButtonClicked", &UWalletCreationWidget::execOnUseSecretRecoveryPhraseButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnCreateNewWalletButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics
	{
		struct WalletCreationWidget_eventOnDerivationPathSelected_Parms
		{
			FDerivationPath Path;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletCreationWidget_eventOnDerivationPathSelected_Parms, Path), Z_Construct_UScriptStruct_FDerivationPath, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::NewProp_Path_MetaData)) }; // 836152293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnDerivationPathSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::WalletCreationWidget_eventOnDerivationPathSelected_Parms), Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics
	{
		struct WalletCreationWidget_eventOnMnemonicSubmitted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::NewProp_Mnemonic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::NewProp_Mnemonic = { "Mnemonic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletCreationWidget_eventOnMnemonicSubmitted_Parms, Mnemonic), METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::NewProp_Mnemonic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::NewProp_Mnemonic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::NewProp_Mnemonic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnMnemonicSubmitted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::WalletCreationWidget_eventOnMnemonicSubmitted_Parms), Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics
	{
		struct WalletCreationWidget_eventOnPasswordConfirmed_Parms
		{
			FString Password;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WalletCreationWidget_eventOnPasswordConfirmed_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::NewProp_Password_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnPasswordConfirmed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::WalletCreationWidget_eventOnPasswordConfirmed_Parms), Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnUserSavedMnemonic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWalletCreationWidget, nullptr, "OnUseSecretRecoveryPhraseButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWalletCreationWidget);
	UClass* Z_Construct_UClass_UWalletCreationWidget_NoRegister()
	{
		return UWalletCreationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWalletCreationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Switcher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomeWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HomeWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateSecretRecoveryPhraseWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerateSecretRecoveryPhraseWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSecretRecoveryPhraseWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UseSecretRecoveryPhraseWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectDerivationPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectDerivationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatePasswordWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatePasswordWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWalletCreated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWalletCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolanaWalletManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SolanaWalletManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolanaWallet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SolanaWallet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalletCreationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWalletCreationWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWalletCreationWidget_OnCreateNewWalletButtonClicked, "OnCreateNewWalletButtonClicked" }, // 4117205257
		{ &Z_Construct_UFunction_UWalletCreationWidget_OnDerivationPathSelected, "OnDerivationPathSelected" }, // 612050989
		{ &Z_Construct_UFunction_UWalletCreationWidget_OnMnemonicSubmitted, "OnMnemonicSubmitted" }, // 2785019476
		{ &Z_Construct_UFunction_UWalletCreationWidget_OnPasswordConfirmed, "OnPasswordConfirmed" }, // 3737489731
		{ &Z_Construct_UFunction_UWalletCreationWidget_OnUserSavedMnemonic, "OnUserSavedMnemonic" }, // 3612701324
		{ &Z_Construct_UFunction_UWalletCreationWidget_OnUseSecretRecoveryPhraseButtonClicked, "OnUseSecretRecoveryPhraseButtonClicked" }, // 1235696132
		{ &Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature, "OnWalletCreated__DelegateSignature" }, // 2677655854
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/WalletCreationWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_Switcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WalletCreationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_Switcher = { "Switcher", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, Switcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_Switcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_Switcher_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_HomeWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WalletCreationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_HomeWidget = { "HomeWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, HomeWidget), Z_Construct_UClass_UHomeWalletCreationWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_HomeWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_HomeWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_GenerateSecretRecoveryPhraseWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WalletCreationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_GenerateSecretRecoveryPhraseWidget = { "GenerateSecretRecoveryPhraseWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, GenerateSecretRecoveryPhraseWidget), Z_Construct_UClass_UGenerateSecretRecoveryPhraseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_GenerateSecretRecoveryPhraseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_GenerateSecretRecoveryPhraseWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_UseSecretRecoveryPhraseWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WalletCreationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_UseSecretRecoveryPhraseWidget = { "UseSecretRecoveryPhraseWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, UseSecretRecoveryPhraseWidget), Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_UseSecretRecoveryPhraseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_UseSecretRecoveryPhraseWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SelectDerivationPath_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WalletCreationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SelectDerivationPath = { "SelectDerivationPath", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, SelectDerivationPath), Z_Construct_UClass_USelectDerivationPathWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SelectDerivationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SelectDerivationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_CreatePasswordWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WalletCreationWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_CreatePasswordWidget = { "CreatePasswordWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, CreatePasswordWidget), Z_Construct_UClass_UCreatePasswordWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_CreatePasswordWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_CreatePasswordWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_OnWalletCreated_MetaData[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_OnWalletCreated = { "OnWalletCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, OnWalletCreated), Z_Construct_UDelegateFunction_UWalletCreationWidget_OnWalletCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_OnWalletCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_OnWalletCreated_MetaData)) }; // 2677655854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWalletManager_MetaData[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWalletManager = { "SolanaWalletManager", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, SolanaWalletManager), Z_Construct_UClass_USolanaWalletManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWalletManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWalletManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWallet_MetaData[] = {
		{ "Category", "WalletCreationWidget" },
		{ "ModuleRelativePath", "Private/ExampleUI/WalletCreationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWallet = { "SolanaWallet", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWalletCreationWidget, SolanaWallet), Z_Construct_UClass_USolanaWallet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWallet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWallet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalletCreationWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_Switcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_HomeWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_GenerateSecretRecoveryPhraseWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_UseSecretRecoveryPhraseWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SelectDerivationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_CreatePasswordWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_OnWalletCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWalletManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletCreationWidget_Statics::NewProp_SolanaWallet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalletCreationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletCreationWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWalletCreationWidget_Statics::ClassParams = {
		&UWalletCreationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWalletCreationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWalletCreationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletCreationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalletCreationWidget()
	{
		if (!Z_Registration_Info_UClass_UWalletCreationWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalletCreationWidget.OuterSingleton, Z_Construct_UClass_UWalletCreationWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWalletCreationWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UWalletCreationWidget>()
	{
		return UWalletCreationWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletCreationWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_WalletCreationWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_WalletCreationWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWalletCreationWidget, UWalletCreationWidget::StaticClass, TEXT("UWalletCreationWidget"), &Z_Registration_Info_UClass_UWalletCreationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalletCreationWidget), 636664504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_WalletCreationWidget_h_1895088632(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_WalletCreationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_WalletCreationWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

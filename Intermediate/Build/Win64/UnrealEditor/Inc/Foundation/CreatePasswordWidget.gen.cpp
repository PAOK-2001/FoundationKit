// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/CreatePasswordWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreatePasswordWidget() {}
// Cross Module References
	FOUNDATION_API UFunction* Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature();
	FOUNDATION_API UClass* Z_Construct_UClass_UCreatePasswordWidget();
	FOUNDATION_API UClass* Z_Construct_UClass_UCreatePasswordWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics
	{
		struct CreatePasswordWidget_eventOnPasswordConfirmed_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreatePasswordWidget_eventOnPasswordConfirmed_Parms, Password), METADATA_PARAMS(Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::NewProp_Password_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreatePasswordWidget, nullptr, "OnPasswordConfirmed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::CreatePasswordWidget_eventOnPasswordConfirmed_Parms), Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCreatePasswordWidget::execOnPasswordConfirmedEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPasswordConfirmedEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreatePasswordWidget::execArePasswordsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ArePasswordsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCreatePasswordWidget::execOnPasswordChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPasswordChanged(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	void UCreatePasswordWidget::StaticRegisterNativesUCreatePasswordWidget()
	{
		UClass* Class = UCreatePasswordWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArePasswordsValid", &UCreatePasswordWidget::execArePasswordsValid },
			{ "OnPasswordChanged", &UCreatePasswordWidget::execOnPasswordChanged },
			{ "OnPasswordConfirmedEvent", &UCreatePasswordWidget::execOnPasswordConfirmedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics
	{
		struct CreatePasswordWidget_eventArePasswordsValid_Parms
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
	void Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CreatePasswordWidget_eventArePasswordsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CreatePasswordWidget_eventArePasswordsValid_Parms), &Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreatePasswordWidget, nullptr, "ArePasswordsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::CreatePasswordWidget_eventArePasswordsValid_Parms), Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics
	{
		struct CreatePasswordWidget_eventOnPasswordChanged_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreatePasswordWidget_eventOnPasswordChanged_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreatePasswordWidget, nullptr, "OnPasswordChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::CreatePasswordWidget_eventOnPasswordChanged_Parms), Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreatePasswordWidget, nullptr, "OnPasswordConfirmedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreatePasswordWidget);
	UClass* Z_Construct_UClass_UCreatePasswordWidget_NoRegister()
	{
		return UCreatePasswordWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCreatePasswordWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPasswordConfirmed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPasswordConfirmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasswordMinLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PasswordMinLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasswordMaxLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PasswordMaxLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasswordEditableTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PasswordEditableTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmPasswordEditableTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfirmPasswordEditableTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreatePasswordWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreatePasswordWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreatePasswordWidget_ArePasswordsValid, "ArePasswordsValid" }, // 3886987870
		{ &Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordChanged, "OnPasswordChanged" }, // 2344408556
		{ &Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature, "OnPasswordConfirmed__DelegateSignature" }, // 4263476007
		{ &Z_Construct_UFunction_UCreatePasswordWidget_OnPasswordConfirmedEvent, "OnPasswordConfirmedEvent" }, // 636749632
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/CreatePasswordWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_OnPasswordConfirmed_MetaData[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_OnPasswordConfirmed = { "OnPasswordConfirmed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreatePasswordWidget, OnPasswordConfirmed), Z_Construct_UDelegateFunction_UCreatePasswordWidget_OnPasswordConfirmed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_OnPasswordConfirmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_OnPasswordConfirmed_MetaData)) }; // 4263476007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMinLength_MetaData[] = {
		{ "Category", "CreatePasswordWidget" },
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMinLength = { "PasswordMinLength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreatePasswordWidget, PasswordMinLength), METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMinLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMinLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMaxLength_MetaData[] = {
		{ "Category", "CreatePasswordWidget" },
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMaxLength = { "PasswordMaxLength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreatePasswordWidget, PasswordMaxLength), METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMaxLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordEditableTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CreatePasswordWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordEditableTextBox = { "PasswordEditableTextBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreatePasswordWidget, PasswordEditableTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordEditableTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordEditableTextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ConfirmPasswordEditableTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CreatePasswordWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ConfirmPasswordEditableTextBox = { "ConfirmPasswordEditableTextBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreatePasswordWidget, ConfirmPasswordEditableTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ConfirmPasswordEditableTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ConfirmPasswordEditableTextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CreatePasswordWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/CreatePasswordWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCreatePasswordWidget, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ContinueButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ContinueButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreatePasswordWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_OnPasswordConfirmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMinLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordMaxLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_PasswordEditableTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ConfirmPasswordEditableTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatePasswordWidget_Statics::NewProp_ContinueButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreatePasswordWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreatePasswordWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreatePasswordWidget_Statics::ClassParams = {
		&UCreatePasswordWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreatePasswordWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreatePasswordWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreatePasswordWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreatePasswordWidget()
	{
		if (!Z_Registration_Info_UClass_UCreatePasswordWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreatePasswordWidget.OuterSingleton, Z_Construct_UClass_UCreatePasswordWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreatePasswordWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UCreatePasswordWidget>()
	{
		return UCreatePasswordWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreatePasswordWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreatePasswordWidget, UCreatePasswordWidget::StaticClass, TEXT("UCreatePasswordWidget"), &Z_Registration_Info_UClass_UCreatePasswordWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreatePasswordWidget), 2891342364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_2095239683(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

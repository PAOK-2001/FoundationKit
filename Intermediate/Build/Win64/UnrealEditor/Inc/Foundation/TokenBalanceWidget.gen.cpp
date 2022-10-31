// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Private/ExampleUI/TokenBalanceWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTokenBalanceWidget() {}
// Cross Module References
	FOUNDATION_API UClass* Z_Construct_UClass_UTokenBalanceWidget_NoRegister();
	FOUNDATION_API UClass* Z_Construct_UClass_UTokenBalanceWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTokenBalanceWidget::execSetBalance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Balance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBalance_Implementation(Z_Param_Balance);
		P_NATIVE_END;
	}
	static FName NAME_UTokenBalanceWidget_SetBalance = FName(TEXT("SetBalance"));
	void UTokenBalanceWidget::SetBalance(float Balance)
	{
		TokenBalanceWidget_eventSetBalance_Parms Parms;
		Parms.Balance=Balance;
		ProcessEvent(FindFunctionChecked(NAME_UTokenBalanceWidget_SetBalance),&Parms);
	}
	void UTokenBalanceWidget::StaticRegisterNativesUTokenBalanceWidget()
	{
		UClass* Class = UTokenBalanceWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBalance", &UTokenBalanceWidget::execSetBalance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Balance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TokenBalanceWidget_eventSetBalance_Parms, Balance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::NewProp_Balance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ExampleUI/TokenBalanceWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTokenBalanceWidget, nullptr, "SetBalance", nullptr, nullptr, sizeof(TokenBalanceWidget_eventSetBalance_Parms), Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTokenBalanceWidget_SetBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTokenBalanceWidget_SetBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTokenBalanceWidget);
	UClass* Z_Construct_UClass_UTokenBalanceWidget_NoRegister()
	{
		return UTokenBalanceWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTokenBalanceWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BalanceTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BalanceTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoading_MetaData[];
#endif
		static void NewProp_bLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TokenName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTokenBalanceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTokenBalanceWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTokenBalanceWidget_SetBalance, "SetBalance" }, // 263721041
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenBalanceWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExampleUI/TokenBalanceWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/TokenBalanceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_BalanceTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TokenBalanceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ExampleUI/TokenBalanceWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_BalanceTextBlock = { "BalanceTextBlock", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTokenBalanceWidget, BalanceTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_BalanceTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_BalanceTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading_MetaData[] = {
		{ "Category", "TokenBalanceWidget" },
		{ "Comment", "// This boolean is to show a  instead of the balance while loading.\n" },
		{ "ModuleRelativePath", "Private/ExampleUI/TokenBalanceWidget.h" },
		{ "ToolTip", "This boolean is to show a  instead of the balance while loading." },
	};
#endif
	void Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading_SetBit(void* Obj)
	{
		((UTokenBalanceWidget*)Obj)->bLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading = { "bLoading", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTokenBalanceWidget), &Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_TokenName_MetaData[] = {
		{ "Category", "TokenBalanceWidget" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Private/ExampleUI/TokenBalanceWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_TokenName = { "TokenName", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTokenBalanceWidget, TokenName), METADATA_PARAMS(Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_TokenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_TokenName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTokenBalanceWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_BalanceTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_bLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTokenBalanceWidget_Statics::NewProp_TokenName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTokenBalanceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTokenBalanceWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTokenBalanceWidget_Statics::ClassParams = {
		&UTokenBalanceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTokenBalanceWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTokenBalanceWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTokenBalanceWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTokenBalanceWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTokenBalanceWidget()
	{
		if (!Z_Registration_Info_UClass_UTokenBalanceWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTokenBalanceWidget.OuterSingleton, Z_Construct_UClass_UTokenBalanceWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTokenBalanceWidget.OuterSingleton;
	}
	template<> FOUNDATION_API UClass* StaticClass<UTokenBalanceWidget>()
	{
		return UTokenBalanceWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTokenBalanceWidget);
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTokenBalanceWidget, UTokenBalanceWidget::StaticClass, TEXT("UTokenBalanceWidget"), &Z_Registration_Info_UClass_UTokenBalanceWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTokenBalanceWidget), 2668180077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_4137876789(TEXT("/Script/Foundation"),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

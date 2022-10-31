// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOUNDATION_UseSecretRecoveryPhraseWidget_generated_h
#error "UseSecretRecoveryPhraseWidget.generated.h already included, missing '#pragma once' in UseSecretRecoveryPhraseWidget.h"
#endif
#define FOUNDATION_UseSecretRecoveryPhraseWidget_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_35_DELEGATE \
struct UseSecretRecoveryPhraseWidget_eventOnMnemonicSubmitted_Parms \
{ \
	FString Mnemonic; \
}; \
static inline void FOnMnemonicSubmitted_DelegateWrapper(const FMulticastScriptDelegate& OnMnemonicSubmitted, const FString& Mnemonic) \
{ \
	UseSecretRecoveryPhraseWidget_eventOnMnemonicSubmitted_Parms Parms; \
	Parms.Mnemonic=Mnemonic; \
	OnMnemonicSubmitted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnContinueButtonClicked);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnContinueButtonClicked);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUseSecretRecoveryPhraseWidget(); \
	friend struct Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics; \
public: \
	DECLARE_CLASS(UUseSecretRecoveryPhraseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UUseSecretRecoveryPhraseWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUUseSecretRecoveryPhraseWidget(); \
	friend struct Z_Construct_UClass_UUseSecretRecoveryPhraseWidget_Statics; \
public: \
	DECLARE_CLASS(UUseSecretRecoveryPhraseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UUseSecretRecoveryPhraseWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUseSecretRecoveryPhraseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUseSecretRecoveryPhraseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUseSecretRecoveryPhraseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUseSecretRecoveryPhraseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUseSecretRecoveryPhraseWidget(UUseSecretRecoveryPhraseWidget&&); \
	NO_API UUseSecretRecoveryPhraseWidget(const UUseSecretRecoveryPhraseWidget&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUseSecretRecoveryPhraseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUseSecretRecoveryPhraseWidget(UUseSecretRecoveryPhraseWidget&&); \
	NO_API UUseSecretRecoveryPhraseWidget(const UUseSecretRecoveryPhraseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUseSecretRecoveryPhraseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUseSecretRecoveryPhraseWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUseSecretRecoveryPhraseWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_28_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UUseSecretRecoveryPhraseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_UseSecretRecoveryPhraseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

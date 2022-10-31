// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOUNDATION_CreatePasswordWidget_generated_h
#error "CreatePasswordWidget.generated.h already included, missing '#pragma once' in CreatePasswordWidget.h"
#endif
#define FOUNDATION_CreatePasswordWidget_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_35_DELEGATE \
struct CreatePasswordWidget_eventOnPasswordConfirmed_Parms \
{ \
	FString Password; \
}; \
static inline void FOnPasswordConfirmed_DelegateWrapper(const FMulticastScriptDelegate& OnPasswordConfirmed, const FString& Password) \
{ \
	CreatePasswordWidget_eventOnPasswordConfirmed_Parms Parms; \
	Parms.Password=Password; \
	OnPasswordConfirmed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPasswordConfirmedEvent); \
	DECLARE_FUNCTION(execArePasswordsValid); \
	DECLARE_FUNCTION(execOnPasswordChanged);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPasswordConfirmedEvent); \
	DECLARE_FUNCTION(execArePasswordsValid); \
	DECLARE_FUNCTION(execOnPasswordChanged);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreatePasswordWidget(); \
	friend struct Z_Construct_UClass_UCreatePasswordWidget_Statics; \
public: \
	DECLARE_CLASS(UCreatePasswordWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UCreatePasswordWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCreatePasswordWidget(); \
	friend struct Z_Construct_UClass_UCreatePasswordWidget_Statics; \
public: \
	DECLARE_CLASS(UCreatePasswordWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UCreatePasswordWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreatePasswordWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreatePasswordWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreatePasswordWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreatePasswordWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreatePasswordWidget(UCreatePasswordWidget&&); \
	NO_API UCreatePasswordWidget(const UCreatePasswordWidget&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreatePasswordWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreatePasswordWidget(UCreatePasswordWidget&&); \
	NO_API UCreatePasswordWidget(const UCreatePasswordWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreatePasswordWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreatePasswordWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreatePasswordWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_28_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UCreatePasswordWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_CreatePasswordWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOUNDATION_TokenBalanceWidget_generated_h
#error "TokenBalanceWidget.generated.h already included, missing '#pragma once' in TokenBalanceWidget.h"
#endif
#define FOUNDATION_TokenBalanceWidget_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_RPC_WRAPPERS \
	virtual void SetBalance_Implementation(float Balance); \
 \
	DECLARE_FUNCTION(execSetBalance);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetBalance_Implementation(float Balance); \
 \
	DECLARE_FUNCTION(execSetBalance);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_EVENT_PARMS \
	struct TokenBalanceWidget_eventSetBalance_Parms \
	{ \
		float Balance; \
	};


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_CALLBACK_WRAPPERS
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTokenBalanceWidget(); \
	friend struct Z_Construct_UClass_UTokenBalanceWidget_Statics; \
public: \
	DECLARE_CLASS(UTokenBalanceWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UTokenBalanceWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUTokenBalanceWidget(); \
	friend struct Z_Construct_UClass_UTokenBalanceWidget_Statics; \
public: \
	DECLARE_CLASS(UTokenBalanceWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UTokenBalanceWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTokenBalanceWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTokenBalanceWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTokenBalanceWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTokenBalanceWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTokenBalanceWidget(UTokenBalanceWidget&&); \
	NO_API UTokenBalanceWidget(const UTokenBalanceWidget&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTokenBalanceWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTokenBalanceWidget(UTokenBalanceWidget&&); \
	NO_API UTokenBalanceWidget(const UTokenBalanceWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTokenBalanceWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTokenBalanceWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTokenBalanceWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_28_PROLOG \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_EVENT_PARMS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_CALLBACK_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_CALLBACK_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UTokenBalanceWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_TokenBalanceWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

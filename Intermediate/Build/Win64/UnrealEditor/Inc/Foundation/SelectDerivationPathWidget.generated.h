// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDerivationPath;
#ifdef FOUNDATION_SelectDerivationPathWidget_generated_h
#error "SelectDerivationPathWidget.generated.h already included, missing '#pragma once' in SelectDerivationPathWidget.h"
#endif
#define FOUNDATION_SelectDerivationPathWidget_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_33_DELEGATE \
struct SelectDerivationPathWidget_eventOnDerivationPathSelected_Parms \
{ \
	FDerivationPath DerivationPath; \
}; \
static inline void FOnDerivationPathSelected_DelegateWrapper(const FMulticastScriptDelegate& OnDerivationPathSelected, FDerivationPath const& DerivationPath) \
{ \
	SelectDerivationPathWidget_eventOnDerivationPathSelected_Parms Parms; \
	Parms.DerivationPath=DerivationPath; \
	OnDerivationPathSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_RPC_WRAPPERS
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectDerivationPathWidget(); \
	friend struct Z_Construct_UClass_USelectDerivationPathWidget_Statics; \
public: \
	DECLARE_CLASS(USelectDerivationPathWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(USelectDerivationPathWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSelectDerivationPathWidget(); \
	friend struct Z_Construct_UClass_USelectDerivationPathWidget_Statics; \
public: \
	DECLARE_CLASS(USelectDerivationPathWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(USelectDerivationPathWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectDerivationPathWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectDerivationPathWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectDerivationPathWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectDerivationPathWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectDerivationPathWidget(USelectDerivationPathWidget&&); \
	NO_API USelectDerivationPathWidget(const USelectDerivationPathWidget&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectDerivationPathWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectDerivationPathWidget(USelectDerivationPathWidget&&); \
	NO_API USelectDerivationPathWidget(const USelectDerivationPathWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectDerivationPathWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectDerivationPathWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectDerivationPathWidget)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_26_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class USelectDerivationPathWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Private_ExampleUI_SelectDerivationPathWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

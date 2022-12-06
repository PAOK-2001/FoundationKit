// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTokenAccount;
#ifdef FOUNDATION_TokenAccount_generated_h
#error "TokenAccount.generated.h already included, missing '#pragma once' in TokenAccount.h"
#endif
#define FOUNDATION_TokenAccount_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_43_DELEGATE \
struct TokenAccount_eventOnBalanceUpdated_Parms \
{ \
	UTokenAccount* TokenAccount; \
	float Balance; \
}; \
static inline void FOnBalanceUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnBalanceUpdated, UTokenAccount* TokenAccount, float Balance) \
{ \
	TokenAccount_eventOnBalanceUpdated_Parms Parms; \
	Parms.TokenAccount=TokenAccount; \
	Parms.Balance=Balance; \
	OnBalanceUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSend);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSend);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTokenAccount(); \
	friend struct Z_Construct_UClass_UTokenAccount_Statics; \
public: \
	DECLARE_CLASS(UTokenAccount, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UTokenAccount)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUTokenAccount(); \
	friend struct Z_Construct_UClass_UTokenAccount_Statics; \
public: \
	DECLARE_CLASS(UTokenAccount, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UTokenAccount)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTokenAccount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTokenAccount) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTokenAccount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTokenAccount); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTokenAccount(UTokenAccount&&); \
	NO_API UTokenAccount(const UTokenAccount&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTokenAccount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTokenAccount(UTokenAccount&&); \
	NO_API UTokenAccount(const UTokenAccount&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTokenAccount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTokenAccount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTokenAccount)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_31_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UTokenAccount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_TokenAccount_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

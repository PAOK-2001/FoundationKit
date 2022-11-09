// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWalletAccount;
class UTokenAccount;
class USolanaWallet;
#ifdef FOUNDATION_WalletAccount_generated_h
#error "WalletAccount.generated.h already included, missing '#pragma once' in WalletAccount.h"
#endif
#define FOUNDATION_WalletAccount_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_51_DELEGATE \
struct WalletAccount_eventOnTokenAccountAdded_Parms \
{ \
	UWalletAccount* WalletAccount; \
	UTokenAccount* TokenAccount; \
}; \
static inline void FOnTokenAccountAdded_DelegateWrapper(const FMulticastScriptDelegate& OnTokenAccountAdded, UWalletAccount* WalletAccount, UTokenAccount* TokenAccount) \
{ \
	WalletAccount_eventOnTokenAccountAdded_Parms Parms; \
	Parms.WalletAccount=WalletAccount; \
	Parms.TokenAccount=TokenAccount; \
	OnTokenAccountAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_67_DELEGATE \
struct WalletAccount_eventOnAccountNameChanged_Parms \
{ \
	UWalletAccount* WalletAccount; \
	FString Name; \
}; \
static inline void FOnAccountNameChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAccountNameChanged, UWalletAccount* WalletAccount, const FString& Name) \
{ \
	WalletAccount_eventOnAccountNameChanged_Parms Parms; \
	Parms.WalletAccount=WalletAccount; \
	Parms.Name=Name; \
	OnAccountNameChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_78_DELEGATE \
struct WalletAccount_eventOnSolBalanceChanged_Parms \
{ \
	UWalletAccount* WalletAccount; \
	float SolBalance; \
}; \
static inline void FOnSolBalanceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSolBalanceChanged, UWalletAccount* WalletAccount, float SolBalance) \
{ \
	WalletAccount_eventOnSolBalanceChanged_Parms Parms; \
	Parms.WalletAccount=WalletAccount; \
	Parms.SolBalance=SolBalance; \
	OnSolBalanceChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningWallet); \
	DECLARE_FUNCTION(execSendTokenEstimate); \
	DECLARE_FUNCTION(execSendToken); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execGetSolBalance); \
	DECLARE_FUNCTION(execSetAccountName); \
	DECLARE_FUNCTION(execGetPublicKey); \
	DECLARE_FUNCTION(execGetAccountName);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningWallet); \
	DECLARE_FUNCTION(execSendTokenEstimate); \
	DECLARE_FUNCTION(execSendToken); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execGetSolBalance); \
	DECLARE_FUNCTION(execSetAccountName); \
	DECLARE_FUNCTION(execGetPublicKey); \
	DECLARE_FUNCTION(execGetAccountName);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWalletAccount(); \
	friend struct Z_Construct_UClass_UWalletAccount_Statics; \
public: \
	DECLARE_CLASS(UWalletAccount, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UWalletAccount)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUWalletAccount(); \
	friend struct Z_Construct_UClass_UWalletAccount_Statics; \
public: \
	DECLARE_CLASS(UWalletAccount, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UWalletAccount)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWalletAccount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWalletAccount) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWalletAccount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWalletAccount); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWalletAccount(UWalletAccount&&); \
	NO_API UWalletAccount(const UWalletAccount&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWalletAccount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWalletAccount(UWalletAccount&&); \
	NO_API UWalletAccount(const UWalletAccount&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWalletAccount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWalletAccount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWalletAccount)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_38_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UWalletAccount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_WalletAccount_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

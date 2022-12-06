// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWallet;
#ifdef FOUNDATION_Wallet_generated_h
#error "Wallet.generated.h already included, missing '#pragma once' in Wallet.h"
#endif
#define FOUNDATION_Wallet_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_30_DELEGATE \
struct _Script_Foundation_eventWalletDelegate_Parms \
{ \
	UWallet* Wallet; \
}; \
static inline void FWalletDelegate_DelegateWrapper(const FMulticastScriptDelegate& WalletDelegate, UWallet* Wallet) \
{ \
	_Script_Foundation_eventWalletDelegate_Parms Parms; \
	Parms.Wallet=Wallet; \
	WalletDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAccountData_Statics; \
	FOUNDATION_API static class UScriptStruct* StaticStruct();


template<> FOUNDATION_API UScriptStruct* StaticStruct<struct FAccountData>();

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPublicKey); \
	DECLARE_FUNCTION(execCheckPossibleAccounts); \
	DECLARE_FUNCTION(execUpdateAllTokenAccounts); \
	DECLARE_FUNCTION(execUpdateAccountBalance); \
	DECLARE_FUNCTION(execUpdateWalletBalance); \
	DECLARE_FUNCTION(execUpdateWalletData);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPublicKey); \
	DECLARE_FUNCTION(execCheckPossibleAccounts); \
	DECLARE_FUNCTION(execUpdateAllTokenAccounts); \
	DECLARE_FUNCTION(execUpdateAccountBalance); \
	DECLARE_FUNCTION(execUpdateWalletBalance); \
	DECLARE_FUNCTION(execUpdateWalletData);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWallet(); \
	friend struct Z_Construct_UClass_UWallet_Statics; \
public: \
	DECLARE_CLASS(UWallet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UWallet)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUWallet(); \
	friend struct Z_Construct_UClass_UWallet_Statics; \
public: \
	DECLARE_CLASS(UWallet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UWallet)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWallet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWallet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWallet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWallet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWallet(UWallet&&); \
	NO_API UWallet(const UWallet&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWallet(UWallet&&); \
	NO_API UWallet(const UWallet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWallet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWallet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWallet)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_47_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UWallet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Wallet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

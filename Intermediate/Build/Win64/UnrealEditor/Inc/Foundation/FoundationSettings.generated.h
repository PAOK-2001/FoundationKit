// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESolanaNetwork : uint8;
#ifdef FOUNDATION_FoundationSettings_generated_h
#error "FoundationSettings.generated.h already included, missing '#pragma once' in FoundationSettings.h"
#endif
#define FOUNDATION_FoundationSettings_generated_h

#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_SPARSE_DATA
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNetworkURL); \
	DECLARE_FUNCTION(execSetNetwork); \
	DECLARE_FUNCTION(execGetNetwork);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNetworkURL); \
	DECLARE_FUNCTION(execSetNetwork); \
	DECLARE_FUNCTION(execGetNetwork);


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoundationSettings(); \
	friend struct Z_Construct_UClass_UFoundationSettings_Statics; \
public: \
	DECLARE_CLASS(UFoundationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UFoundationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Foundation");} \



#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUFoundationSettings(); \
	friend struct Z_Construct_UClass_UFoundationSettings_Statics; \
public: \
	DECLARE_CLASS(UFoundationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foundation"), NO_API) \
	DECLARE_SERIALIZER(UFoundationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Foundation");} \



#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoundationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoundationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoundationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoundationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoundationSettings(UFoundationSettings&&); \
	NO_API UFoundationSettings(const UFoundationSettings&); \
public:


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoundationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoundationSettings(UFoundationSettings&&); \
	NO_API UFoundationSettings(const UFoundationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoundationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoundationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoundationSettings)


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_32_PROLOG
#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_RPC_WRAPPERS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_INCLASS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_SPARSE_DATA \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOUNDATION_API UClass* StaticClass<class UFoundationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_FoundationSettings_h


#define FOREACH_ENUM_ESOLANANETWORK(op) \
	op(ESolanaNetwork::None) \
	op(ESolanaNetwork::MainNetBeta) \
	op(ESolanaNetwork::DevNet) \
	op(ESolanaNetwork::Count) 

enum class ESolanaNetwork : uint8;
template<> FOUNDATION_API UEnum* StaticEnum<ESolanaNetwork>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

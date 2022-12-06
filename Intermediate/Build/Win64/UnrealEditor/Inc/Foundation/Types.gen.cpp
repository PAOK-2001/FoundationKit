// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foundation/Public/SolanaUtils/Utils/Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypes() {}
// Cross Module References
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FBalanceContextJson();
	UPackage* Z_Construct_UPackage__Script_Foundation();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FBalanceResultJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FAccountInfoJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FProgramAccountJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenUIBalanceJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenInfoJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FParsedTokenDataJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenDataJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenAccountDataJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenBalanceDataJson();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenAccountArrayJson();
	FOUNDATION_API UEnum* Z_Construct_UEnum_Foundation_EOwnableItemType();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FOwnable();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FArrayOfOwnable();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FOwnableData();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FOUNDATION_API UScriptStruct* Z_Construct_UScriptStruct_FTokenData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BalanceContextJson;
class UScriptStruct* FBalanceContextJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BalanceContextJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BalanceContextJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBalanceContextJson, Z_Construct_UPackage__Script_Foundation(), TEXT("BalanceContextJson"));
	}
	return Z_Registration_Info_UScriptStruct_BalanceContextJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FBalanceContextJson>()
{
	return FBalanceContextJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBalanceContextJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBalanceContextJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBalanceContextJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewProp_slot_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBalanceContextJson, slot), METADATA_PARAMS(Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewProp_slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBalanceContextJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewProp_slot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBalanceContextJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"BalanceContextJson",
		sizeof(FBalanceContextJson),
		alignof(FBalanceContextJson),
		Z_Construct_UScriptStruct_FBalanceContextJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceContextJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBalanceContextJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceContextJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBalanceContextJson()
	{
		if (!Z_Registration_Info_UScriptStruct_BalanceContextJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BalanceContextJson.InnerSingleton, Z_Construct_UScriptStruct_FBalanceContextJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BalanceContextJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BalanceResultJson;
class UScriptStruct* FBalanceResultJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BalanceResultJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BalanceResultJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBalanceResultJson, Z_Construct_UPackage__Script_Foundation(), TEXT("BalanceResultJson"));
	}
	return Z_Registration_Info_UScriptStruct_BalanceResultJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FBalanceResultJson>()
{
	return FBalanceResultJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBalanceResultJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBalanceResultJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBalanceResultJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_context_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBalanceResultJson, context), Z_Construct_UScriptStruct_FBalanceContextJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_context_MetaData)) }; // 3682135674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_value_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBalanceResultJson, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBalanceResultJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewProp_value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBalanceResultJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"BalanceResultJson",
		sizeof(FBalanceResultJson),
		alignof(FBalanceResultJson),
		Z_Construct_UScriptStruct_FBalanceResultJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBalanceResultJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBalanceResultJson()
	{
		if (!Z_Registration_Info_UScriptStruct_BalanceResultJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BalanceResultJson.InnerSingleton, Z_Construct_UScriptStruct_FBalanceResultJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BalanceResultJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AccountInfoJson;
class UScriptStruct* FAccountInfoJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AccountInfoJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AccountInfoJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountInfoJson, Z_Construct_UPackage__Script_Foundation(), TEXT("AccountInfoJson"));
	}
	return Z_Registration_Info_UScriptStruct_AccountInfoJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FAccountInfoJson>()
{
	return FAccountInfoJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAccountInfoJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_executable_MetaData[];
#endif
		static void NewProp_executable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_executable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lamports_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lamports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rentEpoch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rentEpoch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountInfoJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountInfoJson>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountInfoJson, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable_SetBit(void* Obj)
	{
		((FAccountInfoJson*)Obj)->executable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable = { "executable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccountInfoJson), &Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_lamports_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_lamports = { "lamports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountInfoJson, lamports), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_lamports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_lamports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountInfoJson, owner), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_rentEpoch_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_rentEpoch = { "rentEpoch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccountInfoJson, rentEpoch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_rentEpoch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_rentEpoch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountInfoJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_executable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_lamports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewProp_rentEpoch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountInfoJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"AccountInfoJson",
		sizeof(FAccountInfoJson),
		alignof(FAccountInfoJson),
		Z_Construct_UScriptStruct_FAccountInfoJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountInfoJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountInfoJson()
	{
		if (!Z_Registration_Info_UScriptStruct_AccountInfoJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AccountInfoJson.InnerSingleton, Z_Construct_UScriptStruct_FAccountInfoJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AccountInfoJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProgramAccountJson;
class UScriptStruct* FProgramAccountJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProgramAccountJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProgramAccountJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgramAccountJson, Z_Construct_UPackage__Script_Foundation(), TEXT("ProgramAccountJson"));
	}
	return Z_Registration_Info_UScriptStruct_ProgramAccountJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FProgramAccountJson>()
{
	return FProgramAccountJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProgramAccountJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_executable_MetaData[];
#endif
		static void NewProp_executable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_executable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lamports_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lamports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rentEpoch_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_rentEpoch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramAccountJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgramAccountJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramAccountJson, data), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable_SetBit(void* Obj)
	{
		((FProgramAccountJson*)Obj)->executable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable = { "executable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProgramAccountJson), &Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_lamports_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_lamports = { "lamports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramAccountJson, lamports), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_lamports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_lamports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramAccountJson, owner), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_rentEpoch_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_rentEpoch = { "rentEpoch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramAccountJson, rentEpoch), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_rentEpoch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_rentEpoch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgramAccountJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_executable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_lamports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewProp_rentEpoch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgramAccountJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"ProgramAccountJson",
		sizeof(FProgramAccountJson),
		alignof(FProgramAccountJson),
		Z_Construct_UScriptStruct_FProgramAccountJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramAccountJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProgramAccountJson()
	{
		if (!Z_Registration_Info_UScriptStruct_ProgramAccountJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProgramAccountJson.InnerSingleton, Z_Construct_UScriptStruct_FProgramAccountJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProgramAccountJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenUIBalanceJson;
class UScriptStruct* FTokenUIBalanceJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenUIBalanceJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenUIBalanceJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenUIBalanceJson, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenUIBalanceJson"));
	}
	return Z_Registration_Info_UScriptStruct_TokenUIBalanceJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenUIBalanceJson>()
{
	return FTokenUIBalanceJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_decimals_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_decimals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uiAmount_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_uiAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uiAmountString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uiAmountString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenUIBalanceJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_amount_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenUIBalanceJson, amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_decimals_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_decimals = { "decimals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenUIBalanceJson, decimals), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_decimals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_decimals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmount = { "uiAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenUIBalanceJson, uiAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmountString_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmountString = { "uiAmountString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenUIBalanceJson, uiAmountString), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmountString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmountString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_decimals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewProp_uiAmountString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenUIBalanceJson",
		sizeof(FTokenUIBalanceJson),
		alignof(FTokenUIBalanceJson),
		Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenUIBalanceJson()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenUIBalanceJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenUIBalanceJson.InnerSingleton, Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenUIBalanceJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenInfoJson;
class UScriptStruct* FTokenInfoJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenInfoJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenInfoJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenInfoJson, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenInfoJson"));
	}
	return Z_Registration_Info_UScriptStruct_TokenInfoJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenInfoJson>()
{
	return FTokenInfoJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenInfoJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tokenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tokenAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delegate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_delegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delegatedAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_delegatedAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_state;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isNative_MetaData[];
#endif
		static void NewProp_isNative_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isNative;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenInfoJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_tokenAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_tokenAmount = { "tokenAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenInfoJson, tokenAmount), Z_Construct_UScriptStruct_FTokenUIBalanceJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_tokenAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_tokenAmount_MetaData)) }; // 252098381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegate = { "delegate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenInfoJson, delegate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegatedAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegatedAmount = { "delegatedAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenInfoJson, delegatedAmount), Z_Construct_UScriptStruct_FTokenUIBalanceJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegatedAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegatedAmount_MetaData)) }; // 252098381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_state_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenInfoJson, state), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_state_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative_SetBit(void* Obj)
	{
		((FTokenInfoJson*)Obj)->isNative = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative = { "isNative", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTokenInfoJson), &Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_mint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_mint = { "mint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenInfoJson, mint), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_mint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_mint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenInfoJson, owner), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenInfoJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_tokenAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_delegatedAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_state,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_isNative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_mint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewProp_owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenInfoJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenInfoJson",
		sizeof(FTokenInfoJson),
		alignof(FTokenInfoJson),
		Z_Construct_UScriptStruct_FTokenInfoJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenInfoJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenInfoJson()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenInfoJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenInfoJson.InnerSingleton, Z_Construct_UScriptStruct_FTokenInfoJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenInfoJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParsedTokenDataJson;
class UScriptStruct* FParsedTokenDataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParsedTokenDataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParsedTokenDataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParsedTokenDataJson, Z_Construct_UPackage__Script_Foundation(), TEXT("ParsedTokenDataJson"));
	}
	return Z_Registration_Info_UScriptStruct_ParsedTokenDataJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FParsedTokenDataJson>()
{
	return FParsedTokenDataJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_accountType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_accountType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_space_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParsedTokenDataJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_accountType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_accountType = { "accountType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParsedTokenDataJson, accountType), METADATA_PARAMS(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_accountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_accountType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_info_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParsedTokenDataJson, info), Z_Construct_UScriptStruct_FTokenInfoJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_info_MetaData)) }; // 169160017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_space_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_space = { "space", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParsedTokenDataJson, space), METADATA_PARAMS(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_space_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_accountType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewProp_space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"ParsedTokenDataJson",
		sizeof(FParsedTokenDataJson),
		alignof(FParsedTokenDataJson),
		Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParsedTokenDataJson()
	{
		if (!Z_Registration_Info_UScriptStruct_ParsedTokenDataJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParsedTokenDataJson.InnerSingleton, Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParsedTokenDataJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenDataJson;
class UScriptStruct* FTokenDataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenDataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenDataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenDataJson, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenDataJson"));
	}
	return Z_Registration_Info_UScriptStruct_TokenDataJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenDataJson>()
{
	return FTokenDataJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenDataJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_program_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_program;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parsed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_parsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_space_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenDataJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenDataJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_program_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_program = { "program", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenDataJson, program), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_program_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_program_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_parsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_parsed = { "parsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenDataJson, parsed), Z_Construct_UScriptStruct_FParsedTokenDataJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_parsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_parsed_MetaData)) }; // 1976526279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_space_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_space = { "space", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenDataJson, space), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_space_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenDataJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_program,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_parsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewProp_space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenDataJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenDataJson",
		sizeof(FTokenDataJson),
		alignof(FTokenDataJson),
		Z_Construct_UScriptStruct_FTokenDataJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenDataJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenDataJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenDataJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenDataJson()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenDataJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenDataJson.InnerSingleton, Z_Construct_UScriptStruct_FTokenDataJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenDataJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenAccountDataJson;
class UScriptStruct* FTokenAccountDataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenAccountDataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenAccountDataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenAccountDataJson, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenAccountDataJson"));
	}
	return Z_Registration_Info_UScriptStruct_TokenAccountDataJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenAccountDataJson>()
{
	return FTokenAccountDataJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_executable_MetaData[];
#endif
		static void NewProp_executable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_executable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lamports_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_lamports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rentEpoch_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_rentEpoch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenAccountDataJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenAccountDataJson, data), Z_Construct_UScriptStruct_FTokenDataJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_data_MetaData)) }; // 842409956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable_SetBit(void* Obj)
	{
		((FTokenAccountDataJson*)Obj)->executable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable = { "executable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTokenAccountDataJson), &Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_lamports_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_lamports = { "lamports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenAccountDataJson, lamports), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_lamports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_lamports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenAccountDataJson, owner), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_rentEpoch_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_rentEpoch = { "rentEpoch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenAccountDataJson, rentEpoch), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_rentEpoch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_rentEpoch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_executable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_lamports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewProp_rentEpoch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenAccountDataJson",
		sizeof(FTokenAccountDataJson),
		alignof(FTokenAccountDataJson),
		Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenAccountDataJson()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenAccountDataJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenAccountDataJson.InnerSingleton, Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenAccountDataJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenBalanceDataJson;
class UScriptStruct* FTokenBalanceDataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenBalanceDataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenBalanceDataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenBalanceDataJson, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenBalanceDataJson"));
	}
	return Z_Registration_Info_UScriptStruct_TokenBalanceDataJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenBalanceDataJson>()
{
	return FTokenBalanceDataJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_account_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_account;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pubkey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pubkey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenBalanceDataJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_account_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_account = { "account", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenBalanceDataJson, account), Z_Construct_UScriptStruct_FTokenAccountDataJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_account_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_account_MetaData)) }; // 2199985455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_pubkey_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_pubkey = { "pubkey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenBalanceDataJson, pubkey), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_pubkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_pubkey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_account,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewProp_pubkey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenBalanceDataJson",
		sizeof(FTokenBalanceDataJson),
		alignof(FTokenBalanceDataJson),
		Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenBalanceDataJson()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenBalanceDataJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenBalanceDataJson.InnerSingleton, Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenBalanceDataJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenAccountArrayJson;
class UScriptStruct* FTokenAccountArrayJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenAccountArrayJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenAccountArrayJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenAccountArrayJson, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenAccountArrayJson"));
	}
	return Z_Registration_Info_UScriptStruct_TokenAccountArrayJson.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenAccountArrayJson>()
{
	return FTokenAccountArrayJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenAccountArrayJson>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTokenBalanceDataJson, METADATA_PARAMS(nullptr, 0) }; // 2184563769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenAccountArrayJson, value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value_MetaData)) }; // 2184563769
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewProp_value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenAccountArrayJson",
		sizeof(FTokenAccountArrayJson),
		alignof(FTokenAccountArrayJson),
		Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenAccountArrayJson()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenAccountArrayJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenAccountArrayJson.InnerSingleton, Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenAccountArrayJson.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOwnableItemType;
	static UEnum* EOwnableItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOwnableItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOwnableItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foundation_EOwnableItemType, Z_Construct_UPackage__Script_Foundation(), TEXT("EOwnableItemType"));
		}
		return Z_Registration_Info_UEnum_EOwnableItemType.OuterSingleton;
	}
	template<> FOUNDATION_API UEnum* StaticEnum<EOwnableItemType>()
	{
		return EOwnableItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Foundation_EOwnableItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::Enumerators[] = {
		{ "EOwnableItemType::None", (int64)EOwnableItemType::None },
		{ "EOwnableItemType::Ship", (int64)EOwnableItemType::Ship },
		{ "EOwnableItemType::Structure", (int64)EOwnableItemType::Structure },
		{ "EOwnableItemType::Collectible", (int64)EOwnableItemType::Collectible },
		{ "EOwnableItemType::Access", (int64)EOwnableItemType::Access },
		{ "EOwnableItemType::Resource", (int64)EOwnableItemType::Resource },
		{ "EOwnableItemType::Count", (int64)EOwnableItemType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::Enum_MetaDataParams[] = {
		{ "Access.Name", "EOwnableItemType::Access" },
		{ "BlueprintType", "true" },
		{ "Collectible.Name", "EOwnableItemType::Collectible" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EOwnableItemType::Count" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
		{ "None.Name", "EOwnableItemType::None" },
		{ "Resource.Name", "EOwnableItemType::Resource" },
		{ "Ship.Name", "EOwnableItemType::Ship" },
		{ "Structure.Name", "EOwnableItemType::Structure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		"EOwnableItemType",
		"EOwnableItemType",
		Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Foundation_EOwnableItemType()
	{
		if (!Z_Registration_Info_UEnum_EOwnableItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOwnableItemType.InnerSingleton, Z_Construct_UEnum_Foundation_EOwnableItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOwnableItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Ownable;
class UScriptStruct* FOwnable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Ownable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Ownable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOwnable, Z_Construct_UPackage__Script_Foundation(), TEXT("Ownable"));
	}
	return Z_Registration_Info_UScriptStruct_Ownable.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FOwnable>()
{
	return FOwnable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOwnable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOwnable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOwnable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOwnable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOwnable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Mint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Mint = { "Mint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOwnable, Mint), METADATA_PARAMS(Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Mint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Mint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOwnable, ItemType), Z_Construct_UEnum_Foundation_EOwnableItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType_MetaData)) }; // 100720826
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOwnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_Mint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnable_Statics::NewProp_ItemType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOwnable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"Ownable",
		sizeof(FOwnable),
		alignof(FOwnable),
		Z_Construct_UScriptStruct_FOwnable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOwnable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOwnable()
	{
		if (!Z_Registration_Info_UScriptStruct_Ownable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Ownable.InnerSingleton, Z_Construct_UScriptStruct_FOwnable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Ownable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayOfOwnable;
class UScriptStruct* FArrayOfOwnable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayOfOwnable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayOfOwnable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayOfOwnable, Z_Construct_UPackage__Script_Foundation(), TEXT("ArrayOfOwnable"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayOfOwnable.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FArrayOfOwnable>()
{
	return FArrayOfOwnable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArrayOfOwnable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayOfOwnable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"ArrayOfOwnable",
		sizeof(FArrayOfOwnable),
		alignof(FArrayOfOwnable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayOfOwnable()
	{
		if (!Z_Registration_Info_UScriptStruct_ArrayOfOwnable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayOfOwnable.InnerSingleton, Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArrayOfOwnable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OwnableData;
class UScriptStruct* FOwnableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OwnableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OwnableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOwnableData, Z_Construct_UPackage__Script_Foundation(), TEXT("OwnableData"));
	}
	return Z_Registration_Info_UScriptStruct_OwnableData.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FOwnableData>()
{
	return FOwnableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOwnableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ownables_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ownables_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Ownables_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ownables_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Ownables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOwnableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOwnableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOwnableData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_ValueProp = { "Ownables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FArrayOfOwnable, METADATA_PARAMS(nullptr, 0) }; // 1494267314
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_Key_KeyProp = { "Ownables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Foundation_EOwnableItemType, METADATA_PARAMS(nullptr, 0) }; // 100720826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_MetaData[] = {
		{ "Category", "OwnableData" },
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables = { "Ownables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOwnableData, Ownables), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_MetaData)) }; // 100720826 1494267314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOwnableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOwnableData_Statics::NewProp_Ownables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOwnableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"OwnableData",
		sizeof(FOwnableData),
		alignof(FOwnableData),
		Z_Construct_UScriptStruct_FOwnableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOwnableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOwnableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOwnableData()
	{
		if (!Z_Registration_Info_UScriptStruct_OwnableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OwnableData.InnerSingleton, Z_Construct_UScriptStruct_FOwnableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OwnableData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_Foundation(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItem.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ownable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ownable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Ownable_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Ownable = { "Ownable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, Ownable), Z_Construct_UScriptStruct_FOwnable, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Ownable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Ownable_MetaData)) }; // 53586943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Amount_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Ownable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"InventoryItem",
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TokenData;
class UScriptStruct* FTokenData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TokenData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TokenData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokenData, Z_Construct_UPackage__Script_Foundation(), TEXT("TokenData"));
	}
	return Z_Registration_Info_UScriptStruct_TokenData.OuterSingleton;
}
template<> FOUNDATION_API UScriptStruct* StaticStruct<FTokenData>()
{
	return FTokenData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTokenData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Balance_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Balance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokenData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokenData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Mint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Mint = { "Mint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenData, Mint), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Mint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Mint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Balance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SolanaUtils/Utils/Types.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokenData, Balance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Balance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Balance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokenData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Mint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokenData_Statics::NewProp_Balance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokenData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foundation,
		nullptr,
		&NewStructOps,
		"TokenData",
		sizeof(FTokenData),
		alignof(FTokenData),
		Z_Construct_UScriptStruct_FTokenData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokenData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokenData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokenData()
	{
		if (!Z_Registration_Info_UScriptStruct_TokenData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TokenData.InnerSingleton, Z_Construct_UScriptStruct_FTokenData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TokenData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics::EnumInfo[] = {
		{ EOwnableItemType_StaticEnum, TEXT("EOwnableItemType"), &Z_Registration_Info_UEnum_EOwnableItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 100720826U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics::ScriptStructInfo[] = {
		{ FBalanceContextJson::StaticStruct, Z_Construct_UScriptStruct_FBalanceContextJson_Statics::NewStructOps, TEXT("BalanceContextJson"), &Z_Registration_Info_UScriptStruct_BalanceContextJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBalanceContextJson), 3682135674U) },
		{ FBalanceResultJson::StaticStruct, Z_Construct_UScriptStruct_FBalanceResultJson_Statics::NewStructOps, TEXT("BalanceResultJson"), &Z_Registration_Info_UScriptStruct_BalanceResultJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBalanceResultJson), 2264839588U) },
		{ FAccountInfoJson::StaticStruct, Z_Construct_UScriptStruct_FAccountInfoJson_Statics::NewStructOps, TEXT("AccountInfoJson"), &Z_Registration_Info_UScriptStruct_AccountInfoJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAccountInfoJson), 710935869U) },
		{ FProgramAccountJson::StaticStruct, Z_Construct_UScriptStruct_FProgramAccountJson_Statics::NewStructOps, TEXT("ProgramAccountJson"), &Z_Registration_Info_UScriptStruct_ProgramAccountJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProgramAccountJson), 1936031647U) },
		{ FTokenUIBalanceJson::StaticStruct, Z_Construct_UScriptStruct_FTokenUIBalanceJson_Statics::NewStructOps, TEXT("TokenUIBalanceJson"), &Z_Registration_Info_UScriptStruct_TokenUIBalanceJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenUIBalanceJson), 252098381U) },
		{ FTokenInfoJson::StaticStruct, Z_Construct_UScriptStruct_FTokenInfoJson_Statics::NewStructOps, TEXT("TokenInfoJson"), &Z_Registration_Info_UScriptStruct_TokenInfoJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenInfoJson), 169160017U) },
		{ FParsedTokenDataJson::StaticStruct, Z_Construct_UScriptStruct_FParsedTokenDataJson_Statics::NewStructOps, TEXT("ParsedTokenDataJson"), &Z_Registration_Info_UScriptStruct_ParsedTokenDataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParsedTokenDataJson), 1976526279U) },
		{ FTokenDataJson::StaticStruct, Z_Construct_UScriptStruct_FTokenDataJson_Statics::NewStructOps, TEXT("TokenDataJson"), &Z_Registration_Info_UScriptStruct_TokenDataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenDataJson), 842409956U) },
		{ FTokenAccountDataJson::StaticStruct, Z_Construct_UScriptStruct_FTokenAccountDataJson_Statics::NewStructOps, TEXT("TokenAccountDataJson"), &Z_Registration_Info_UScriptStruct_TokenAccountDataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenAccountDataJson), 2199985455U) },
		{ FTokenBalanceDataJson::StaticStruct, Z_Construct_UScriptStruct_FTokenBalanceDataJson_Statics::NewStructOps, TEXT("TokenBalanceDataJson"), &Z_Registration_Info_UScriptStruct_TokenBalanceDataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenBalanceDataJson), 2184563769U) },
		{ FTokenAccountArrayJson::StaticStruct, Z_Construct_UScriptStruct_FTokenAccountArrayJson_Statics::NewStructOps, TEXT("TokenAccountArrayJson"), &Z_Registration_Info_UScriptStruct_TokenAccountArrayJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenAccountArrayJson), 1575068737U) },
		{ FOwnable::StaticStruct, Z_Construct_UScriptStruct_FOwnable_Statics::NewStructOps, TEXT("Ownable"), &Z_Registration_Info_UScriptStruct_Ownable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOwnable), 53586943U) },
		{ FArrayOfOwnable::StaticStruct, Z_Construct_UScriptStruct_FArrayOfOwnable_Statics::NewStructOps, TEXT("ArrayOfOwnable"), &Z_Registration_Info_UScriptStruct_ArrayOfOwnable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayOfOwnable), 1494267314U) },
		{ FOwnableData::StaticStruct, Z_Construct_UScriptStruct_FOwnableData_Statics::NewStructOps, TEXT("OwnableData"), &Z_Registration_Info_UScriptStruct_OwnableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOwnableData), 2567860367U) },
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 3885008168U) },
		{ FTokenData::StaticStruct, Z_Construct_UScriptStruct_FTokenData_Statics::NewStructOps, TEXT("TokenData"), &Z_Registration_Info_UScriptStruct_TokenData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTokenData), 44923278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_2708853912(TEXT("/Script/Foundation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingStarAtlas_Plugins_FoundationKit_Source_Foundation_Public_SolanaUtils_Utils_Types_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

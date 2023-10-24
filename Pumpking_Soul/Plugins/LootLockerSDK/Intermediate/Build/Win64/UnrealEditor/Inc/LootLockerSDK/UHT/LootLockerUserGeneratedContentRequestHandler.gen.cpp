// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerUserGeneratedContentRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidateData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetDataEntity();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair;
class UScriptStruct* FLootLockerContentKeyValuePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerContentKeyValuePair"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerContentKeyValuePair>()
{
	return FLootLockerContentKeyValuePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerContentKeyValuePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContentKeyValuePair, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_value_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContentKeyValuePair, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_value_MetaData), Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewProp_value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerContentKeyValuePair",
		Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::PropPointers),
		sizeof(FLootLockerContentKeyValuePair),
		alignof(FLootLockerContentKeyValuePair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity;
class UScriptStruct* FLootLockerAssetDataEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetDataEntity, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetDataEntity"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetDataEntity>()
{
	return FLootLockerAssetDataEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetDataEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDataEntity, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_data_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDataEntity, data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetDataEntity",
		Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::PropPointers),
		sizeof(FLootLockerAssetDataEntity),
		alignof(FLootLockerAssetDataEntity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetDataEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData;
class UScriptStruct* FLootLockerAssetCandidateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetCandidateData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetCandidateData>()
{
	return FLootLockerAssetCandidateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_context_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_kv_storage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kv_storage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_kv_storage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_filters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_filters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_data_entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data_entities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetCandidateData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidateData, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_context_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_context_id = { "context_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidateData, context_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_context_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_context_id_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage_Inner = { "kv_storage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair, METADATA_PARAMS(0, nullptr) }; // 68919974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage = { "kv_storage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidateData, kv_storage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage_MetaData) }; // 68919974
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters_Inner = { "filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair, METADATA_PARAMS(0, nullptr) }; // 68919974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters = { "filters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidateData, filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters_MetaData) }; // 68919974
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities_Inner = { "data_entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetDataEntity, METADATA_PARAMS(0, nullptr) }; // 3953994562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities = { "data_entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidateData, data_entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities_MetaData) }; // 3953994562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_context_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_kv_storage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_filters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewProp_data_entities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetCandidateData",
		Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::PropPointers),
		sizeof(FLootLockerAssetCandidateData),
		alignof(FLootLockerAssetCandidateData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidateData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData;
class UScriptStruct* FLootLockerCreateAssetCandidateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateAssetCandidateData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateAssetCandidateData>()
{
	return FLootLockerCreateAssetCandidateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateAssetCandidateData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewProp_data_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateAssetCandidateData, data), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewProp_data_MetaData) }; // 1065949107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCreateAssetCandidateData",
		Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::PropPointers),
		sizeof(FLootLockerCreateAssetCandidateData),
		alignof(FLootLockerCreateAssetCandidateData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData;
class UScriptStruct* FLootLockerUpdateAssetCandidateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerUpdateAssetCandidateData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerUpdateAssetCandidateData>()
{
	return FLootLockerUpdateAssetCandidateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completed_MetaData[];
#endif
		static void NewProp_completed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerUpdateAssetCandidateData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed_SetBit(void* Obj)
	{
		((FLootLockerUpdateAssetCandidateData*)Obj)->completed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed = { "completed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerUpdateAssetCandidateData), &Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed_MetaData), Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_data_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUpdateAssetCandidateData, data), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_data_MetaData) }; // 1065949107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewProp_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerUpdateAssetCandidateData",
		Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::PropPointers),
		sizeof(FLootLockerUpdateAssetCandidateData),
		alignof(FLootLockerUpdateAssetCandidateData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate;
class UScriptStruct* FLootLockerResponseAssetCandidate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerResponseAssetCandidate"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerResponseAssetCandidate>()
{
	return FLootLockerResponseAssetCandidate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_review_feedback_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_review_feedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_files;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerResponseAssetCandidate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_status_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_review_feedback_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_review_feedback = { "review_feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, review_feedback), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_review_feedback_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_review_feedback_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_data_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, data), Z_Construct_UScriptStruct_FLootLockerAssetCandidateData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_data_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_data_MetaData) }; // 1065949107
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_updated_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_updated_at = { "updated_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerResponseAssetCandidate, updated_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_updated_at_MetaData), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_updated_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_review_feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewProp_updated_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerResponseAssetCandidate",
		Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::PropPointers),
		sizeof(FLootLockerResponseAssetCandidate),
		alignof(FLootLockerResponseAssetCandidate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCreateAssetCandidateResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerCreateAssetCandidateResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse;
class UScriptStruct* FLootLockerCreateAssetCandidateResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateAssetCandidateResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateAssetCandidateResponse>()
{
	return FLootLockerCreateAssetCandidateResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_candidate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset_candidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateAssetCandidateResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewProp_asset_candidate_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewProp_asset_candidate = { "asset_candidate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateAssetCandidateResponse, asset_candidate), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewProp_asset_candidate_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewProp_asset_candidate_MetaData) }; // 3395263500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewProp_asset_candidate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerCreateAssetCandidateResponse",
		Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::PropPointers),
		sizeof(FLootLockerCreateAssetCandidateResponse),
		alignof(FLootLockerCreateAssetCandidateResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAssetCandidateResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAssetCandidateResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse;
class UScriptStruct* FLootLockerAssetCandidateResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetCandidateResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetCandidateResponse>()
{
	return FLootLockerAssetCandidateResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_candidate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset_candidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetCandidateResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewProp_asset_candidate_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewProp_asset_candidate = { "asset_candidate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidateResponse, asset_candidate), Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewProp_asset_candidate_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewProp_asset_candidate_MetaData) }; // 3395263500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewProp_asset_candidate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAssetCandidateResponse",
		Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::PropPointers),
		sizeof(FLootLockerAssetCandidateResponse),
		alignof(FLootLockerAssetCandidateResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAssetCandidatesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAssetCandidatesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse;
class UScriptStruct* FLootLockerAssetCandidatesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetCandidatesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetCandidatesResponse>()
{
	return FLootLockerAssetCandidatesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset_candidates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_candidates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_asset_candidates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetCandidatesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates_Inner = { "asset_candidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate, METADATA_PARAMS(0, nullptr) }; // 3395263500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates = { "asset_candidates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidatesResponse, asset_candidates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates_MetaData) }; // 3395263500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewProp_asset_candidates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAssetCandidatesResponse",
		Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::PropPointers),
		sizeof(FLootLockerAssetCandidatesResponse),
		alignof(FLootLockerAssetCandidatesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose;
	static UEnum* ELootLockerAssetFilePurpose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerAssetFilePurpose"));
		}
		return Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerAssetFilePurpose>()
	{
		return ELootLockerAssetFilePurpose_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::Enumerators[] = {
		{ "ELootLockerAssetFilePurpose::PRIMARY_THUMBNAIL", (int64)ELootLockerAssetFilePurpose::PRIMARY_THUMBNAIL },
		{ "ELootLockerAssetFilePurpose::THUMBNAIL", (int64)ELootLockerAssetFilePurpose::THUMBNAIL },
		{ "ELootLockerAssetFilePurpose::FILE", (int64)ELootLockerAssetFilePurpose::FILE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FILE.Name", "ELootLockerAssetFilePurpose::FILE" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
		{ "PRIMARY_THUMBNAIL.Name", "ELootLockerAssetFilePurpose::PRIMARY_THUMBNAIL" },
		{ "THUMBNAIL.Name", "ELootLockerAssetFilePurpose::THUMBNAIL" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerAssetFilePurpose",
		"ELootLockerAssetFilePurpose",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilePurpose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventCreateAssetCandidateResponseDelegateBP_Parms
		{
			FLootLockerCreateAssetCandidateResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventCreateAssetCandidateResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse, METADATA_PARAMS(0, nullptr) }; // 1717999253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "CreateAssetCandidateResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventCreateAssetCandidateResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventCreateAssetCandidateResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_CreateAssetCandidateResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCreateAssetCandidateResponseDelegateBP_DelegateWrapper(const FScriptDelegate& CreateAssetCandidateResponseDelegateBP, FLootLockerCreateAssetCandidateResponse Response)
{
	struct _Script_LootLockerSDK_eventCreateAssetCandidateResponseDelegateBP_Parms
	{
		FLootLockerCreateAssetCandidateResponse Response;
	};
	_Script_LootLockerSDK_eventCreateAssetCandidateResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	CreateAssetCandidateResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventAssetCandidateResponseDelegateBP_Parms
		{
			FLootLockerAssetCandidateResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventAssetCandidateResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse, METADATA_PARAMS(0, nullptr) }; // 4273557583
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "AssetCandidateResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetCandidateResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetCandidateResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidateResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetCandidateResponseDelegateBP_DelegateWrapper(const FScriptDelegate& AssetCandidateResponseDelegateBP, FLootLockerAssetCandidateResponse Response)
{
	struct _Script_LootLockerSDK_eventAssetCandidateResponseDelegateBP_Parms
	{
		FLootLockerAssetCandidateResponse Response;
	};
	_Script_LootLockerSDK_eventAssetCandidateResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	AssetCandidateResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventAssetCandidatesResponseDelegateBP_Parms
		{
			FLootLockerAssetCandidatesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventAssetCandidatesResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse, METADATA_PARAMS(0, nullptr) }; // 1798033777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "AssetCandidatesResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetCandidatesResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetCandidatesResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_AssetCandidatesResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetCandidatesResponseDelegateBP_DelegateWrapper(const FScriptDelegate& AssetCandidatesResponseDelegateBP, FLootLockerAssetCandidatesResponse Response)
{
	struct _Script_LootLockerSDK_eventAssetCandidatesResponseDelegateBP_Parms
	{
		FLootLockerAssetCandidatesResponse Response;
	};
	_Script_LootLockerSDK_eventAssetCandidatesResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	AssetCandidatesResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerUserGeneratedContentRequestHandler::StaticRegisterNativesULootLockerUserGeneratedContentRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerUserGeneratedContentRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_NoRegister()
	{
		return ULootLockerUserGeneratedContentRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerUserGeneratedContentRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerUserGeneratedContentRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::ClassParams = {
		&ULootLockerUserGeneratedContentRequestHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerUserGeneratedContentRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerUserGeneratedContentRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerUserGeneratedContentRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerUserGeneratedContentRequestHandler>()
	{
		return ULootLockerUserGeneratedContentRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerUserGeneratedContentRequestHandler);
	ULootLockerUserGeneratedContentRequestHandler::~ULootLockerUserGeneratedContentRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerAssetFilePurpose_StaticEnum, TEXT("ELootLockerAssetFilePurpose"), &Z_Registration_Info_UEnum_ELootLockerAssetFilePurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 455243135U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerContentKeyValuePair::StaticStruct, Z_Construct_UScriptStruct_FLootLockerContentKeyValuePair_Statics::NewStructOps, TEXT("LootLockerContentKeyValuePair"), &Z_Registration_Info_UScriptStruct_LootLockerContentKeyValuePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerContentKeyValuePair), 68919974U) },
		{ FLootLockerAssetDataEntity::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetDataEntity_Statics::NewStructOps, TEXT("LootLockerAssetDataEntity"), &Z_Registration_Info_UScriptStruct_LootLockerAssetDataEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetDataEntity), 3953994562U) },
		{ FLootLockerAssetCandidateData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetCandidateData_Statics::NewStructOps, TEXT("LootLockerAssetCandidateData"), &Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetCandidateData), 1065949107U) },
		{ FLootLockerCreateAssetCandidateData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateData_Statics::NewStructOps, TEXT("LootLockerCreateAssetCandidateData"), &Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateAssetCandidateData), 3277803628U) },
		{ FLootLockerUpdateAssetCandidateData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerUpdateAssetCandidateData_Statics::NewStructOps, TEXT("LootLockerUpdateAssetCandidateData"), &Z_Registration_Info_UScriptStruct_LootLockerUpdateAssetCandidateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerUpdateAssetCandidateData), 1570327811U) },
		{ FLootLockerResponseAssetCandidate::StaticStruct, Z_Construct_UScriptStruct_FLootLockerResponseAssetCandidate_Statics::NewStructOps, TEXT("LootLockerResponseAssetCandidate"), &Z_Registration_Info_UScriptStruct_LootLockerResponseAssetCandidate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerResponseAssetCandidate), 3395263500U) },
		{ FLootLockerCreateAssetCandidateResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateAssetCandidateResponse_Statics::NewStructOps, TEXT("LootLockerCreateAssetCandidateResponse"), &Z_Registration_Info_UScriptStruct_LootLockerCreateAssetCandidateResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateAssetCandidateResponse), 1717999253U) },
		{ FLootLockerAssetCandidateResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetCandidateResponse_Statics::NewStructOps, TEXT("LootLockerAssetCandidateResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAssetCandidateResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetCandidateResponse), 4273557583U) },
		{ FLootLockerAssetCandidatesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetCandidatesResponse_Statics::NewStructOps, TEXT("LootLockerAssetCandidatesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAssetCandidatesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetCandidatesResponse), 1798033777U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerUserGeneratedContentRequestHandler, ULootLockerUserGeneratedContentRequestHandler::StaticClass, TEXT("ULootLockerUserGeneratedContentRequestHandler"), &Z_Registration_Info_UClass_ULootLockerUserGeneratedContentRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerUserGeneratedContentRequestHandler), 3641387501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_963645507(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerUserGeneratedContentRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

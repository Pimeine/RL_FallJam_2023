// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetInstancesRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerAssetInstancesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLootBoxItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem;
class UScriptStruct* FLootLockerAssetInstanceStorageItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetInstanceStorageItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetInstanceStorageItem>()
{
	return FLootLockerAssetInstanceStorageItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetInstanceStorageItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetInstanceStorageItem, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_value_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetInstanceStorageItem, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_value_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewProp_value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetInstanceStorageItem",
		Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::PropPointers),
		sizeof(FLootLockerAssetInstanceStorageItem),
		alignof(FLootLockerAssetInstanceStorageItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAssetInstanceStorageResponseItem>() == std::is_polymorphic<FLootLockerAssetInstanceStorageItem>(), "USTRUCT FLootLockerAssetInstanceStorageResponseItem cannot be polymorphic unless super FLootLockerAssetInstanceStorageItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem;
class UScriptStruct* FLootLockerAssetInstanceStorageResponseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetInstanceStorageResponseItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetInstanceStorageResponseItem>()
{
	return FLootLockerAssetInstanceStorageResponseItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetInstanceStorageResponseItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetInstanceStorageResponseItem, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem,
		&NewStructOps,
		"LootLockerAssetInstanceStorageResponseItem",
		Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::PropPointers),
		sizeof(FLootLockerAssetInstanceStorageResponseItem),
		alignof(FLootLockerAssetInstanceStorageResponseItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems;
class UScriptStruct* FLootLockerAssetInstanceStorageItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetInstanceStorageItems"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetInstanceStorageItems>()
{
	return FLootLockerAssetInstanceStorageItems::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_storage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_storage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetInstanceStorageItems>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage_Inner = { "storage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem, METADATA_PARAMS(0, nullptr) }; // 3833097510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetInstanceStorageItems, storage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage_MetaData) }; // 3833097510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewProp_storage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetInstanceStorageItems",
		Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::PropPointers),
		sizeof(FLootLockerAssetInstanceStorageItems),
		alignof(FLootLockerAssetInstanceStorageItems),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAssetInstanceStorageItemsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAssetInstanceStorageItemsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse;
class UScriptStruct* FLootLockerAssetInstanceStorageItemsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetInstanceStorageItemsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetInstanceStorageItemsResponse>()
{
	return FLootLockerAssetInstanceStorageItemsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_storage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_storage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetInstanceStorageItemsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage_Inner = { "storage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem, METADATA_PARAMS(0, nullptr) }; // 1257488804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetInstanceStorageItemsResponse, storage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage_MetaData) }; // 1257488804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewProp_storage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAssetInstanceStorageItemsResponse",
		Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::PropPointers),
		sizeof(FLootLockerAssetInstanceStorageItemsResponse),
		alignof(FLootLockerAssetInstanceStorageItemsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAssetInstanceStorageItemResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAssetInstanceStorageItemResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse;
class UScriptStruct* FLootLockerAssetInstanceStorageItemResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetInstanceStorageItemResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetInstanceStorageItemResponse>()
{
	return FLootLockerAssetInstanceStorageItemResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_storage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetInstanceStorageItemResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewProp_storage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetInstanceStorageItemResponse, storage), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewProp_storage_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewProp_storage_MetaData) }; // 1257488804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewProp_storage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAssetInstanceStorageItemResponse",
		Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::PropPointers),
		sizeof(FLootLockerAssetInstanceStorageItemResponse),
		alignof(FLootLockerAssetInstanceStorageItemResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem;
class UScriptStruct* FLootLockerLootBoxItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLootBoxItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLootBoxItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLootBoxItem>()
{
	return FLootLockerLootBoxItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLootBoxItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLootBoxItem, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLootBoxItem, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_rental_option_id = { "asset_rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLootBoxItem, asset_rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLootBoxItem, weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_weight_MetaData), Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_asset_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLootBoxItem",
		Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::PropPointers),
		sizeof(FLootLockerLootBoxItem),
		alignof(FLootLockerLootBoxItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLootBoxItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerLootBoxContentResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerLootBoxContentResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse;
class UScriptStruct* FLootLockerLootBoxContentResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLootBoxContentResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLootBoxContentResponse>()
{
	return FLootLockerLootBoxContentResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_contents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_contents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLootBoxContentResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents_Inner = { "contents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerLootBoxItem, METADATA_PARAMS(0, nullptr) }; // 2776571371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents = { "contents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLootBoxContentResponse, contents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents_MetaData), Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents_MetaData) }; // 2776571371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewProp_contents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerLootBoxContentResponse",
		Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::PropPointers),
		sizeof(FLootLockerLootBoxContentResponse),
		alignof(FLootLockerLootBoxContentResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerOpenLootBoxResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerOpenLootBoxResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse;
class UScriptStruct* FLootLockerOpenLootBoxResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerOpenLootBoxResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerOpenLootBoxResponse>()
{
	return FLootLockerOpenLootBoxResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_check_grant_notifications_MetaData[];
#endif
		static void NewProp_check_grant_notifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_check_grant_notifications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerOpenLootBoxResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications_SetBit(void* Obj)
	{
		((FLootLockerOpenLootBoxResponse*)Obj)->check_grant_notifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications = { "check_grant_notifications", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerOpenLootBoxResponse), &Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications_MetaData), Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewProp_check_grant_notifications,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerOpenLootBoxResponse",
		Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::PropPointers),
		sizeof(FLootLockerOpenLootBoxResponse),
		alignof(FLootLockerOpenLootBoxResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventAssetInstanceStorageItemsResponseDelegateBP_Parms
		{
			FLootLockerAssetInstanceStorageItemsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventAssetInstanceStorageItemsResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse, METADATA_PARAMS(0, nullptr) }; // 3182033513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetInstanceStorageItemsResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetInstanceStorageItemsResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemsResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetInstanceStorageItemsResponseDelegateBP_DelegateWrapper(const FScriptDelegate& AssetInstanceStorageItemsResponseDelegateBP, FLootLockerAssetInstanceStorageItemsResponse Response)
{
	struct _Script_LootLockerSDK_eventAssetInstanceStorageItemsResponseDelegateBP_Parms
	{
		FLootLockerAssetInstanceStorageItemsResponse Response;
	};
	_Script_LootLockerSDK_eventAssetInstanceStorageItemsResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	AssetInstanceStorageItemsResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventAssetInstanceStorageItemResponseDelegateBP_Parms
		{
			FLootLockerAssetInstanceStorageItemResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventAssetInstanceStorageItemResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse, METADATA_PARAMS(0, nullptr) }; // 1424040795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "AssetInstanceStorageItemResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetInstanceStorageItemResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetInstanceStorageItemResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_AssetInstanceStorageItemResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetInstanceStorageItemResponseDelegateBP_DelegateWrapper(const FScriptDelegate& AssetInstanceStorageItemResponseDelegateBP, FLootLockerAssetInstanceStorageItemResponse Response)
{
	struct _Script_LootLockerSDK_eventAssetInstanceStorageItemResponseDelegateBP_Parms
	{
		FLootLockerAssetInstanceStorageItemResponse Response;
	};
	_Script_LootLockerSDK_eventAssetInstanceStorageItemResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	AssetInstanceStorageItemResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootBoxContentResponseDelegateBP_Parms
		{
			FLootLockerLootBoxContentResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootBoxContentResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse, METADATA_PARAMS(0, nullptr) }; // 4096131127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootBoxContentResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootBoxContentResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootBoxContentResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootBoxContentResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootBoxContentResponseDelegateBP_DelegateWrapper(const FScriptDelegate& LootBoxContentResponseDelegateBP, FLootLockerLootBoxContentResponse Response)
{
	struct _Script_LootLockerSDK_eventLootBoxContentResponseDelegateBP_Parms
	{
		FLootLockerLootBoxContentResponse Response;
	};
	_Script_LootLockerSDK_eventLootBoxContentResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	LootBoxContentResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventOpenLootBoxResponseDelegateBP_Parms
		{
			FLootLockerOpenLootBoxResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventOpenLootBoxResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse, METADATA_PARAMS(0, nullptr) }; // 3491925135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "OpenLootBoxResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventOpenLootBoxResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventOpenLootBoxResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_OpenLootBoxResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOpenLootBoxResponseDelegateBP_DelegateWrapper(const FScriptDelegate& OpenLootBoxResponseDelegateBP, FLootLockerOpenLootBoxResponse Response)
{
	struct _Script_LootLockerSDK_eventOpenLootBoxResponseDelegateBP_Parms
	{
		FLootLockerOpenLootBoxResponse Response;
	};
	_Script_LootLockerSDK_eventOpenLootBoxResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	OpenLootBoxResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerAssetInstancesRequestHandler::StaticRegisterNativesULootLockerAssetInstancesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerAssetInstancesRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_NoRegister()
	{
		return ULootLockerAssetInstancesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerAssetInstancesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetInstancesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerAssetInstancesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::ClassParams = {
		&ULootLockerAssetInstancesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerAssetInstancesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerAssetInstancesRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerAssetInstancesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerAssetInstancesRequestHandler>()
	{
		return ULootLockerAssetInstancesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerAssetInstancesRequestHandler);
	ULootLockerAssetInstancesRequestHandler::~ULootLockerAssetInstancesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerAssetInstanceStorageItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItem_Statics::NewStructOps, TEXT("LootLockerAssetInstanceStorageItem"), &Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetInstanceStorageItem), 3833097510U) },
		{ FLootLockerAssetInstanceStorageResponseItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageResponseItem_Statics::NewStructOps, TEXT("LootLockerAssetInstanceStorageResponseItem"), &Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageResponseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetInstanceStorageResponseItem), 1257488804U) },
		{ FLootLockerAssetInstanceStorageItems::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItems_Statics::NewStructOps, TEXT("LootLockerAssetInstanceStorageItems"), &Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetInstanceStorageItems), 3481052500U) },
		{ FLootLockerAssetInstanceStorageItemsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemsResponse_Statics::NewStructOps, TEXT("LootLockerAssetInstanceStorageItemsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetInstanceStorageItemsResponse), 3182033513U) },
		{ FLootLockerAssetInstanceStorageItemResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetInstanceStorageItemResponse_Statics::NewStructOps, TEXT("LootLockerAssetInstanceStorageItemResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAssetInstanceStorageItemResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetInstanceStorageItemResponse), 1424040795U) },
		{ FLootLockerLootBoxItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLootBoxItem_Statics::NewStructOps, TEXT("LootLockerLootBoxItem"), &Z_Registration_Info_UScriptStruct_LootLockerLootBoxItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLootBoxItem), 2776571371U) },
		{ FLootLockerLootBoxContentResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLootBoxContentResponse_Statics::NewStructOps, TEXT("LootLockerLootBoxContentResponse"), &Z_Registration_Info_UScriptStruct_LootLockerLootBoxContentResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLootBoxContentResponse), 4096131127U) },
		{ FLootLockerOpenLootBoxResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerOpenLootBoxResponse_Statics::NewStructOps, TEXT("LootLockerOpenLootBoxResponse"), &Z_Registration_Info_UScriptStruct_LootLockerOpenLootBoxResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerOpenLootBoxResponse), 3491925135U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerAssetInstancesRequestHandler, ULootLockerAssetInstancesRequestHandler::StaticClass, TEXT("ULootLockerAssetInstancesRequestHandler"), &Z_Registration_Info_UClass_ULootLockerAssetInstancesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerAssetInstancesRequestHandler), 3537840114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_3187948845(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetInstancesRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

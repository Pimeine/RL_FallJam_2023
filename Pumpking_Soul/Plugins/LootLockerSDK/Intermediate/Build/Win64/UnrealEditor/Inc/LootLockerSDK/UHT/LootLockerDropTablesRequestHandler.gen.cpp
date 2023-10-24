// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerDropTablesRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerDropTablesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerDropTablesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerDropTablesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem;
class UScriptStruct* FLootLockerComputeAndLockItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerComputeAndLockItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerComputeAndLockItem>()
{
	return FLootLockerComputeAndLockItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerComputeAndLockItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerComputeAndLockItem, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerComputeAndLockItem, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_rental_option_id = { "asset_rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerComputeAndLockItem, asset_rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerComputeAndLockItem, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_asset_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerComputeAndLockItem",
		Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::PropPointers),
		sizeof(FLootLockerComputeAndLockItem),
		alignof(FLootLockerComputeAndLockItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerComputeAndLockDropTableResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerComputeAndLockDropTableResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse;
class UScriptStruct* FLootLockerComputeAndLockDropTableResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerComputeAndLockDropTableResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerComputeAndLockDropTableResponse>()
{
	return FLootLockerComputeAndLockDropTableResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerComputeAndLockDropTableResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem, METADATA_PARAMS(0, nullptr) }; // 2594415407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerComputeAndLockDropTableResponse, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items_MetaData) }; // 2594415407
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewProp_items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerComputeAndLockDropTableResponse",
		Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::PropPointers),
		sizeof(FLootLockerComputeAndLockDropTableResponse),
		alignof(FLootLockerComputeAndLockDropTableResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem;
class UScriptStruct* FLootLockerPickDropsFromDropTableItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPickDropsFromDropTableItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPickDropsFromDropTableItem>()
{
	return FLootLockerPickDropsFromDropTableItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_quantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPickDropsFromDropTableItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableItem, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableItem, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableItem, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_quantity_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableItem, quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_quantity_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_quantity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableItem, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_asset_MetaData) }; // 3922991322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewProp_asset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPickDropsFromDropTableItem",
		Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::PropPointers),
		sizeof(FLootLockerPickDropsFromDropTableItem),
		alignof(FLootLockerPickDropsFromDropTableItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPickDropsFromDropTableResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPickDropsFromDropTableResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse;
class UScriptStruct* FLootLockerPickDropsFromDropTableResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPickDropsFromDropTableResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPickDropsFromDropTableResponse>()
{
	return FLootLockerPickDropsFromDropTableResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPickDropsFromDropTableResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem, METADATA_PARAMS(0, nullptr) }; // 299669908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableResponse, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items_MetaData) }; // 299669908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewProp_items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPickDropsFromDropTableResponse",
		Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::PropPointers),
		sizeof(FLootLockerPickDropsFromDropTableResponse),
		alignof(FLootLockerPickDropsFromDropTableResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest;
class UScriptStruct* FLootLockerPickDropsFromDropTableRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPickDropsFromDropTableRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPickDropsFromDropTableRequest>()
{
	return FLootLockerPickDropsFromDropTableRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_picks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_picks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_picks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPickDropsFromDropTableRequest>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks_Inner = { "picks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks = { "picks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPickDropsFromDropTableRequest, picks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks_MetaData), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewProp_picks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPickDropsFromDropTableRequest",
		Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::PropPointers),
		sizeof(FLootLockerPickDropsFromDropTableRequest),
		alignof(FLootLockerPickDropsFromDropTableRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerComputeAndLockDropTableResponseBP_Parms
		{
			FLootLockerComputeAndLockDropTableResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerComputeAndLockDropTableResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse, METADATA_PARAMS(0, nullptr) }; // 1170145029
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerComputeAndLockDropTableResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerComputeAndLockDropTableResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerComputeAndLockDropTableResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerComputeAndLockDropTableResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerComputeAndLockDropTableResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerComputeAndLockDropTableResponseBP, FLootLockerComputeAndLockDropTableResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerComputeAndLockDropTableResponseBP_Parms
	{
		FLootLockerComputeAndLockDropTableResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerComputeAndLockDropTableResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerComputeAndLockDropTableResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventFLootLockerPickDropsFromDropTableResponseBP_Parms
		{
			FLootLockerPickDropsFromDropTableResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventFLootLockerPickDropsFromDropTableResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse, METADATA_PARAMS(0, nullptr) }; // 382008248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventFLootLockerPickDropsFromDropTableResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventFLootLockerPickDropsFromDropTableResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_FLootLockerPickDropsFromDropTableResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFLootLockerPickDropsFromDropTableResponseBP_DelegateWrapper(const FScriptDelegate& FLootLockerPickDropsFromDropTableResponseBP, FLootLockerPickDropsFromDropTableResponse Response)
{
	struct _Script_LootLockerSDK_eventFLootLockerPickDropsFromDropTableResponseBP_Parms
	{
		FLootLockerPickDropsFromDropTableResponse Response;
	};
	_Script_LootLockerSDK_eventFLootLockerPickDropsFromDropTableResponseBP_Parms Parms;
	Parms.Response=Response;
	FLootLockerPickDropsFromDropTableResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerDropTablesRequestHandler::StaticRegisterNativesULootLockerDropTablesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerDropTablesRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerDropTablesRequestHandler_NoRegister()
	{
		return ULootLockerDropTablesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameAPI/LootLockerDropTablesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerDropTablesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerDropTablesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::ClassParams = {
		&ULootLockerDropTablesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerDropTablesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerDropTablesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerDropTablesRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerDropTablesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerDropTablesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerDropTablesRequestHandler>()
	{
		return ULootLockerDropTablesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerDropTablesRequestHandler);
	ULootLockerDropTablesRequestHandler::~ULootLockerDropTablesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerComputeAndLockItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerComputeAndLockItem_Statics::NewStructOps, TEXT("LootLockerComputeAndLockItem"), &Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerComputeAndLockItem), 2594415407U) },
		{ FLootLockerComputeAndLockDropTableResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerComputeAndLockDropTableResponse_Statics::NewStructOps, TEXT("LootLockerComputeAndLockDropTableResponse"), &Z_Registration_Info_UScriptStruct_LootLockerComputeAndLockDropTableResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerComputeAndLockDropTableResponse), 1170145029U) },
		{ FLootLockerPickDropsFromDropTableItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableItem_Statics::NewStructOps, TEXT("LootLockerPickDropsFromDropTableItem"), &Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPickDropsFromDropTableItem), 299669908U) },
		{ FLootLockerPickDropsFromDropTableResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableResponse_Statics::NewStructOps, TEXT("LootLockerPickDropsFromDropTableResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPickDropsFromDropTableResponse), 382008248U) },
		{ FLootLockerPickDropsFromDropTableRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPickDropsFromDropTableRequest_Statics::NewStructOps, TEXT("LootLockerPickDropsFromDropTableRequest"), &Z_Registration_Info_UScriptStruct_LootLockerPickDropsFromDropTableRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPickDropsFromDropTableRequest), 1829129474U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerDropTablesRequestHandler, ULootLockerDropTablesRequestHandler::StaticClass, TEXT("ULootLockerDropTablesRequestHandler"), &Z_Registration_Info_UClass_ULootLockerDropTablesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerDropTablesRequestHandler), 3531694019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_2035632988(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerDropTablesRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

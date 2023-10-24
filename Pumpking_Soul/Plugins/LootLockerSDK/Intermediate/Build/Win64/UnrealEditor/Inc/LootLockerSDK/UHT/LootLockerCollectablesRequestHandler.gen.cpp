// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerCollectablesRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerCollectablesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCollectablesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCollectablesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectable();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectableItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectableReward();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectablesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectItemPayload();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCollectableReward;
class UScriptStruct* FLootLockerCollectableReward::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCollectableReward.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCollectableReward.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCollectableReward, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCollectableReward"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCollectableReward.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCollectableReward>()
{
	return FLootLockerCollectableReward::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_rental_option_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCollectableReward>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableReward, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_MetaData) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableReward, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_rental_option_id = { "asset_rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableReward, asset_rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_rental_option_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewProp_asset_rental_option_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCollectableReward",
		Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::PropPointers),
		sizeof(FLootLockerCollectableReward),
		alignof(FLootLockerCollectableReward),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectableReward()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCollectableReward.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCollectableReward.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCollectableReward.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCollectableItem;
class UScriptStruct* FLootLockerCollectableItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCollectableItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCollectableItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCollectableItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCollectableItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCollectableItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCollectableItem>()
{
	return FLootLockerCollectableItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collected_MetaData[];
#endif
		static void NewProp_collected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_collected;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rewards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grants_all_rewards_MetaData[];
#endif
		static void NewProp_grants_all_rewards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_grants_all_rewards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_just_collected_MetaData[];
#endif
		static void NewProp_just_collected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_just_collected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCollectableItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableItem, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected_SetBit(void* Obj)
	{
		((FLootLockerCollectableItem*)Obj)->collected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected = { "collected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCollectableItem), &Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards_Inner = { "rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCollectableReward, METADATA_PARAMS(0, nullptr) }; // 1328961597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards = { "rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableItem, rewards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards_MetaData) }; // 1328961597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards_SetBit(void* Obj)
	{
		((FLootLockerCollectableItem*)Obj)->grants_all_rewards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards = { "grants_all_rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCollectableItem), &Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected_SetBit(void* Obj)
	{
		((FLootLockerCollectableItem*)Obj)->just_collected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected = { "just_collected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCollectableItem), &Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_collected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_grants_all_rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewProp_just_collected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCollectableItem",
		Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::PropPointers),
		sizeof(FLootLockerCollectableItem),
		alignof(FLootLockerCollectableItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectableItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCollectableItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCollectableItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCollectableItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup;
class UScriptStruct* FLootLockerCollectableItemGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCollectableItemGroup"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCollectableItemGroup>()
{
	return FLootLockerCollectableItemGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completion_percentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_completion_percentage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rewards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grants_all_rewards_MetaData[];
#endif
		static void NewProp_grants_all_rewards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_grants_all_rewards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCollectableItemGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableItemGroup, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_completion_percentage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_completion_percentage = { "completion_percentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableItemGroup, completion_percentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_completion_percentage_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_completion_percentage_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCollectableItem, METADATA_PARAMS(0, nullptr) }; // 2218252736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableItemGroup, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items_MetaData) }; // 2218252736
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards_Inner = { "rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCollectableReward, METADATA_PARAMS(0, nullptr) }; // 1328961597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards = { "rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectableItemGroup, rewards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards_MetaData) }; // 1328961597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards_SetBit(void* Obj)
	{
		((FLootLockerCollectableItemGroup*)Obj)->grants_all_rewards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards = { "grants_all_rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCollectableItemGroup), &Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_completion_percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewProp_grants_all_rewards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCollectableItemGroup",
		Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::PropPointers),
		sizeof(FLootLockerCollectableItemGroup),
		alignof(FLootLockerCollectableItemGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCollectable;
class UScriptStruct* FLootLockerCollectable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCollectable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCollectable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCollectable, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCollectable"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCollectable.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCollectable>()
{
	return FLootLockerCollectable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCollectable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_groups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completion_percentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_completion_percentage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rewards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rewards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rewards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grants_all_rewards_MetaData[];
#endif
		static void NewProp_grants_all_rewards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_grants_all_rewards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCollectable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectable, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups_Inner = { "groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup, METADATA_PARAMS(0, nullptr) }; // 265750054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups = { "groups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectable, groups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups_MetaData) }; // 265750054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_completion_percentage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_completion_percentage = { "completion_percentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectable, completion_percentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_completion_percentage_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_completion_percentage_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards_Inner = { "rewards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCollectableReward, METADATA_PARAMS(0, nullptr) }; // 1328961597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards = { "rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectable, rewards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards_MetaData) }; // 1328961597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards_SetBit(void* Obj)
	{
		((FLootLockerCollectable*)Obj)->grants_all_rewards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards = { "grants_all_rewards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCollectable), &Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_completion_percentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewProp_grants_all_rewards,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCollectable",
		Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::PropPointers),
		sizeof(FLootLockerCollectable),
		alignof(FLootLockerCollectable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectable()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCollectable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCollectable.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCollectable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload;
class UScriptStruct* FLootLockerCollectItemPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCollectItemPayload, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCollectItemPayload"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCollectItemPayload>()
{
	return FLootLockerCollectItemPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slug_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCollectItemPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewProp_slug_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewProp_slug = { "slug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectItemPayload, slug), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewProp_slug_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewProp_slug_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewProp_slug,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCollectItemPayload",
		Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::PropPointers),
		sizeof(FLootLockerCollectItemPayload),
		alignof(FLootLockerCollectItemPayload),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectItemPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCollectablesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerCollectablesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse;
class UScriptStruct* FLootLockerCollectablesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCollectablesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCollectablesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCollectablesResponse>()
{
	return FLootLockerCollectablesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_collectables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collectables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_collectables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCollectablesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables_Inner = { "collectables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCollectable, METADATA_PARAMS(0, nullptr) }; // 827709363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables = { "collectables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCollectablesResponse, collectables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables_MetaData), Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables_MetaData) }; // 827709363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewProp_collectables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerCollectablesResponse",
		Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::PropPointers),
		sizeof(FLootLockerCollectablesResponse),
		alignof(FLootLockerCollectablesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCollectablesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventCollectablesResponseDelegateBP_Parms
		{
			FLootLockerCollectablesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventCollectablesResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerCollectablesResponse, METADATA_PARAMS(0, nullptr) }; // 1631673395
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "CollectablesResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventCollectablesResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventCollectablesResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_CollectablesResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCollectablesResponseDelegateBP_DelegateWrapper(const FScriptDelegate& CollectablesResponseDelegateBP, FLootLockerCollectablesResponse Response)
{
	struct _Script_LootLockerSDK_eventCollectablesResponseDelegateBP_Parms
	{
		FLootLockerCollectablesResponse Response;
	};
	_Script_LootLockerSDK_eventCollectablesResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	CollectablesResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerCollectablesRequestHandler::StaticRegisterNativesULootLockerCollectablesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerCollectablesRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerCollectablesRequestHandler_NoRegister()
	{
		return ULootLockerCollectablesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerCollectablesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCollectablesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerCollectablesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::ClassParams = {
		&ULootLockerCollectablesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerCollectablesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerCollectablesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerCollectablesRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerCollectablesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerCollectablesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerCollectablesRequestHandler>()
	{
		return ULootLockerCollectablesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerCollectablesRequestHandler);
	ULootLockerCollectablesRequestHandler::~ULootLockerCollectablesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerCollectableReward::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCollectableReward_Statics::NewStructOps, TEXT("LootLockerCollectableReward"), &Z_Registration_Info_UScriptStruct_LootLockerCollectableReward, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCollectableReward), 1328961597U) },
		{ FLootLockerCollectableItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCollectableItem_Statics::NewStructOps, TEXT("LootLockerCollectableItem"), &Z_Registration_Info_UScriptStruct_LootLockerCollectableItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCollectableItem), 2218252736U) },
		{ FLootLockerCollectableItemGroup::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCollectableItemGroup_Statics::NewStructOps, TEXT("LootLockerCollectableItemGroup"), &Z_Registration_Info_UScriptStruct_LootLockerCollectableItemGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCollectableItemGroup), 265750054U) },
		{ FLootLockerCollectable::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCollectable_Statics::NewStructOps, TEXT("LootLockerCollectable"), &Z_Registration_Info_UScriptStruct_LootLockerCollectable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCollectable), 827709363U) },
		{ FLootLockerCollectItemPayload::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCollectItemPayload_Statics::NewStructOps, TEXT("LootLockerCollectItemPayload"), &Z_Registration_Info_UScriptStruct_LootLockerCollectItemPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCollectItemPayload), 4066588674U) },
		{ FLootLockerCollectablesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCollectablesResponse_Statics::NewStructOps, TEXT("LootLockerCollectablesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerCollectablesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCollectablesResponse), 1631673395U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerCollectablesRequestHandler, ULootLockerCollectablesRequestHandler::StaticClass, TEXT("ULootLockerCollectablesRequestHandler"), &Z_Registration_Info_UClass_ULootLockerCollectablesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerCollectablesRequestHandler), 3196574095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_1987306764(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCollectablesRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

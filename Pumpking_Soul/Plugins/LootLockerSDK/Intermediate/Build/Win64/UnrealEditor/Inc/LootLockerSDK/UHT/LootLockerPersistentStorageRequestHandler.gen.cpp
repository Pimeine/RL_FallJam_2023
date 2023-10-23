// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPersistentStorageRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPersistentStorageRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem;
class UScriptStruct* FLootLockerPersistentStorageItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPersistentStorageItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPersistentStorageItem>()
{
	return FLootLockerPersistentStorageItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_public_MetaData[];
#endif
		static void NewProp_is_public_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_public;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_order_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPersistentStorageItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_key_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPersistentStorageItem, key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_key_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_value_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPersistentStorageItem, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_value_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public_SetBit(void* Obj)
	{
		((FLootLockerPersistentStorageItem*)Obj)->is_public = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public = { "is_public", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerPersistentStorageItem), &Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_order_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_order = { "order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPersistentStorageItem, order), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_order_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_order_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_is_public,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewProp_order,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPersistentStorageItem",
		Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::PropPointers),
		sizeof(FLootLockerPersistentStorageItem),
		alignof(FLootLockerPersistentStorageItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems;
class UScriptStruct* FLootLockerPersistentStorageItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPersistentStorageItems"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPersistentStorageItems>()
{
	return FLootLockerPersistentStorageItems::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_payload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPersistentStorageItems>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload_Inner = { "payload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem, METADATA_PARAMS(0, nullptr) }; // 1896677140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPersistentStorageItems, payload), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload_MetaData) }; // 1896677140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewProp_payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPersistentStorageItems",
		Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::PropPointers),
		sizeof(FLootLockerPersistentStorageItems),
		alignof(FLootLockerPersistentStorageItems),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPersistentStorageItemsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPersistentStorageItemsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse;
class UScriptStruct* FLootLockerPersistentStorageItemsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPersistentStorageItemsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPersistentStorageItemsResponse>()
{
	return FLootLockerPersistentStorageItemsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_payload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPersistentStorageItemsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload_Inner = { "payload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem, METADATA_PARAMS(0, nullptr) }; // 1896677140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPersistentStorageItemsResponse, payload), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload_MetaData) }; // 1896677140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewProp_payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPersistentStorageItemsResponse",
		Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::PropPointers),
		sizeof(FLootLockerPersistentStorageItemsResponse),
		alignof(FLootLockerPersistentStorageItemsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPersistentStorageItemResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPersistentStorageItemResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse;
class UScriptStruct* FLootLockerPersistentStorageItemResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPersistentStorageItemResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPersistentStorageItemResponse>()
{
	return FLootLockerPersistentStorageItemResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPersistentStorageItemResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewProp_payload_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPersistentStorageItemResponse, payload), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewProp_payload_MetaData), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewProp_payload_MetaData) }; // 1896677140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewProp_payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPersistentStorageItemResponse",
		Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::PropPointers),
		sizeof(FLootLockerPersistentStorageItemResponse),
		alignof(FLootLockerPersistentStorageItemResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPersistentStorageItemsResponseDelegateBP_Parms
		{
			FLootLockerPersistentStorageItemsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPersistentStorageItemsResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse, METADATA_PARAMS(0, nullptr) }; // 41749324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PersistentStorageItemsResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPersistentStorageItemsResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPersistentStorageItemsResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemsResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPersistentStorageItemsResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PersistentStorageItemsResponseDelegateBP, FLootLockerPersistentStorageItemsResponse Response)
{
	struct _Script_LootLockerSDK_eventPersistentStorageItemsResponseDelegateBP_Parms
	{
		FLootLockerPersistentStorageItemsResponse Response;
	};
	_Script_LootLockerSDK_eventPersistentStorageItemsResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	PersistentStorageItemsResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPersistentStorageItemResponseDelegateBP_Parms
		{
			FLootLockerPersistentStorageItemResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPersistentStorageItemResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse, METADATA_PARAMS(0, nullptr) }; // 2917404273
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PersistentStorageItemResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPersistentStorageItemResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPersistentStorageItemResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PersistentStorageItemResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPersistentStorageItemResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PersistentStorageItemResponseDelegateBP, FLootLockerPersistentStorageItemResponse Response)
{
	struct _Script_LootLockerSDK_eventPersistentStorageItemResponseDelegateBP_Parms
	{
		FLootLockerPersistentStorageItemResponse Response;
	};
	_Script_LootLockerSDK_eventPersistentStorageItemResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	PersistentStorageItemResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerPersistentStorageRequestHandler::StaticRegisterNativesULootLockerPersistentStorageRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerPersistentStorageRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_NoRegister()
	{
		return ULootLockerPersistentStorageRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameAPI/LootLockerPersistentStorageRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPersistentStorageRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerPersistentStorageRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::ClassParams = {
		&ULootLockerPersistentStorageRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerPersistentStorageRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerPersistentStorageRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerPersistentStorageRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerPersistentStorageRequestHandler>()
	{
		return ULootLockerPersistentStorageRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerPersistentStorageRequestHandler);
	ULootLockerPersistentStorageRequestHandler::~ULootLockerPersistentStorageRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerPersistentStorageItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem_Statics::NewStructOps, TEXT("LootLockerPersistentStorageItem"), &Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPersistentStorageItem), 1896677140U) },
		{ FLootLockerPersistentStorageItems::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItems_Statics::NewStructOps, TEXT("LootLockerPersistentStorageItems"), &Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPersistentStorageItems), 1981844503U) },
		{ FLootLockerPersistentStorageItemsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemsResponse_Statics::NewStructOps, TEXT("LootLockerPersistentStorageItemsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPersistentStorageItemsResponse), 41749324U) },
		{ FLootLockerPersistentStorageItemResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItemResponse_Statics::NewStructOps, TEXT("LootLockerPersistentStorageItemResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPersistentStorageItemResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPersistentStorageItemResponse), 2917404273U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerPersistentStorageRequestHandler, ULootLockerPersistentStorageRequestHandler::StaticClass, TEXT("ULootLockerPersistentStorageRequestHandler"), &Z_Registration_Info_UClass_ULootLockerPersistentStorageRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerPersistentStorageRequestHandler), 319459193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_3585670872(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPersistentStorageRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

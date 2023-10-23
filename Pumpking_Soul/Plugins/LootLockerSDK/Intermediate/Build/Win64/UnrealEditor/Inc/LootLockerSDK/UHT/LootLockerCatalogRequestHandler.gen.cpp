// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerCatalogRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerCatalogRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalog();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntry();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogPagination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrencyDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind;
	static UEnum* ELootLockerCatalogEntryEntityKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerCatalogEntryEntityKind"));
		}
		return Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerCatalogEntryEntityKind>()
	{
		return ELootLockerCatalogEntryEntityKind_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enumerators[] = {
		{ "ELootLockerCatalogEntryEntityKind::Asset", (int64)ELootLockerCatalogEntryEntityKind::Asset },
		{ "ELootLockerCatalogEntryEntityKind::Currency", (int64)ELootLockerCatalogEntryEntityKind::Currency },
		{ "ELootLockerCatalogEntryEntityKind::Progression_Points", (int64)ELootLockerCatalogEntryEntityKind::Progression_Points },
		{ "ELootLockerCatalogEntryEntityKind::Progression_Reset", (int64)ELootLockerCatalogEntryEntityKind::Progression_Reset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enum_MetaDataParams[] = {
		{ "Asset.Name", "ELootLockerCatalogEntryEntityKind::Asset" },
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Possible entity kinds that catalog entries can have\n */" },
#endif
		{ "Currency.Name", "ELootLockerCatalogEntryEntityKind::Currency" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "Progression_Points.Name", "ELootLockerCatalogEntryEntityKind::Progression_Points" },
		{ "Progression_Reset.Name", "ELootLockerCatalogEntryEntityKind::Progression_Reset" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible entity kinds that catalog entries can have" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerCatalogEntryEntityKind",
		"ELootLockerCatalogEntryEntityKind",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerCatalogEntryEntityKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalog;
class UScriptStruct* FLootLockerCatalog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalog, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalog"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalog.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalog>()
{
	return FLootLockerCatalog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deleted_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Deleted_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The time when this catalog was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time when this catalog was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The name of the catalog\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the catalog" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The unique identifying key of the catalog\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique identifying key of the catalog" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The id of the catalog\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the catalog" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The time when this catalog was deleted, should normally be null\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time when this catalog was deleted, should normally be null" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at = { "Deleted_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalog, Deleted_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewProp_Deleted_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalog",
		Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers),
		sizeof(FLootLockerCatalog),
		alignof(FLootLockerCatalog),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalog()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalog.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalog.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination;
class UScriptStruct* FLootLockerCatalogPagination::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogPagination, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogPagination"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogPagination>()
{
	return FLootLockerCatalogPagination::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Total;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previous_cursor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Previous_cursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogPagination>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Total_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The total available items in this catalog\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The total available items in this catalog" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogPagination, Total), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Total_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Total_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Cursor_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The cursor that points to the next item in the catalog list. Use this in subsequent requests to get additional items from the catalog.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cursor that points to the next item in the catalog list. Use this in subsequent requests to get additional items from the catalog." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogPagination, Cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Cursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Previous_cursor_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     *\n     * The cursor that points to the first item in this batch of items.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The cursor that points to the first item in this batch of items." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Previous_cursor = { "Previous_cursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogPagination, Previous_cursor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Previous_cursor_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Previous_cursor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Total,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Cursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewProp_Previous_cursor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogPagination",
		Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::PropPointers),
		sizeof(FLootLockerCatalogPagination),
		alignof(FLootLockerCatalogPagination),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogPagination()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice;
class UScriptStruct* FLootLockerCatalogEntryPrice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogEntryPrice"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogEntryPrice>()
{
	return FLootLockerCatalogEntryPrice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Display_amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Display_amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Price_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Price_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogEntryPrice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The amount (cost) set for this price\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount (cost) set for this price" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A prettified version of the amount to use for display\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A prettified version of the amount to use for display" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount = { "Display_amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Display_amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The short code for the currency this price is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The short code for the currency this price is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code = { "Currency_code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Currency_code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of the currency this price is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the currency this price is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name = { "Currency_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Currency_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of this price\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of this price" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id = { "Price_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Price_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the currency this price is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the currency this price is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id = { "Currency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntryPrice, Currency_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Display_amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Price_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewProp_Currency_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogEntryPrice",
		Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers),
		sizeof(FLootLockerCatalogEntryPrice),
		alignof(FLootLockerCatalogEntryPrice),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry;
class UScriptStruct* FLootLockerCatalogEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogEntry, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogEntry>()
{
	return FLootLockerCatalogEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entity_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entity_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entity_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purchasable_MetaData[];
#endif
		static void NewProp_Purchasable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Purchasable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time when this catalog entry was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time when this catalog entry was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of this entity\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this entity" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name = { "Entity_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Entity_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the entity that this entry refers to.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the entity that this entry refers to." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id = { "Entity_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Entity_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A unique listing id for this entry in this catalog, grouping the entity and the prices. This is the key you use to look up details about the entity in the structure signified by the entity_kind.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A unique listing id for this entry in this catalog, grouping the entity and the prices. This is the key you use to look up details about the entity in the structure signified by the entity_kind." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogEntry, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Whether this entry is currently purchasable\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this entry is currently purchasable" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_SetBit(void* Obj)
	{
		((FLootLockerCatalogEntry*)Obj)->Purchasable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable = { "Purchasable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCatalogEntry), &Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Entity_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Catalog_listing_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewProp_Purchasable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogEntry",
		Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers),
		sizeof(FLootLockerCatalogEntry),
		alignof(FLootLockerCatalogEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetDetails;
class UScriptStruct* FLootLockerAssetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetDetails>()
{
	return FLootLockerAssetDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legacy_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Legacy_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of this asset\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this asset" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the specific variation of this asset that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the specific variation of this asset that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id = { "Variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the specific rental option of this asset that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the specific rental option of this asset that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id = { "Rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The legacy id of this asset\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The legacy id of this asset" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id = { "Legacy_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Legacy_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique identifying id of this asset.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique identifying id of this asset." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The thumbnail for this asset\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The thumbnail for this asset" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Thumbnail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The Catalog listing ID for this asset detail\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Catalog listing ID for this asset detail" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Legacy_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetDetails",
		Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers),
		sizeof(FLootLockerAssetDetails),
		alignof(FLootLockerAssetDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails;
class UScriptStruct* FLootLockerProgressionPointDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProgressionPointDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProgressionPointDetails>()
{
	return FLootLockerProgressionPointDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProgressionPointDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique key of the progression that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique key of the progression that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of the progression that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the progression that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The amount of points to be added to the progression in question\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of points to be added to the progression in question" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the progression that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the progression that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The Catalog listing ID for this progression point detail\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Catalog listing ID for this progression point detail" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionPointDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProgressionPointDetails",
		Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers),
		sizeof(FLootLockerProgressionPointDetails),
		alignof(FLootLockerProgressionPointDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails;
class UScriptStruct* FLootLockerProgressionResetDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProgressionResetDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProgressionResetDetails>()
{
	return FLootLockerProgressionResetDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProgressionResetDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique key of the progression that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique key of the progression that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of the progression that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the progression that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the progression that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the progression that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The Catalog listing ID for this progression reset detail\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Catalog listing ID for this progression reset detail" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProgressionResetDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProgressionResetDetails",
		Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers),
		sizeof(FLootLockerProgressionResetDetails),
		alignof(FLootLockerProgressionResetDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails;
class UScriptStruct* FLootLockerCurrencyDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCurrencyDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCurrencyDetails>()
{
	return FLootLockerCurrencyDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCurrencyDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of the currency that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the currency that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique code of the currency that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique code of the currency that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The amount of this currency to be awarded\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of this currency to be awarded" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the currency that this refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the currency that this refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The Catalog listing ID for this currency detail\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Catalog listing ID for this currency detail" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrencyDetails, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewProp_Catalog_listing_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCurrencyDetails",
		Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers),
		sizeof(FLootLockerCurrencyDetails),
		alignof(FLootLockerCurrencyDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrencyDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListCatalogsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListCatalogsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse;
class UScriptStruct* FLootLockerListCatalogsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCatalogsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCatalogsResponse>()
{
	return FLootLockerListCatalogsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Catalogs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalogs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Catalogs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCatalogsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_Inner = { "Catalogs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalog, METADATA_PARAMS(0, nullptr) }; // 1476417839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A list of the prices for the game\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of the prices for the game" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs = { "Catalogs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogsResponse, Catalogs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_MetaData) }; // 1476417839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewProp_Catalogs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListCatalogsResponse",
		Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers),
		sizeof(FLootLockerListCatalogsResponse),
		alignof(FLootLockerListCatalogsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInternalLootLockerListCatalogPricesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FInternalLootLockerListCatalogPricesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse;
class UScriptStruct* FInternalLootLockerListCatalogPricesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("InternalLootLockerListCatalogPricesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FInternalLootLockerListCatalogPricesResponse>()
{
	return FInternalLootLockerListCatalogPricesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Catalog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Points_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Points_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Progression_Points_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Resets_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Resets_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Progression_Resets_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency_Details_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_Details_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Currency_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pagination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is what the response looks like, but we want to expose the Mapped variant\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is what the response looks like, but we want to expose the Mapped variant" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInternalLootLockerListCatalogPricesResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Catalog), Z_Construct_UScriptStruct_FLootLockerCatalog, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData) }; // 1476417839
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogEntry, METADATA_PARAMS(0, nullptr) }; // 3476922610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData) }; // 3476922610
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_Inner = { "Assets_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetDetails, METADATA_PARAMS(0, nullptr) }; // 1739920107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details = { "Assets_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Assets_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_MetaData) }; // 1739920107
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_Inner = { "Progression_Points_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, METADATA_PARAMS(0, nullptr) }; // 1318790934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details = { "Progression_Points_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Progression_Points_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_MetaData) }; // 1318790934
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_Inner = { "Progression_Resets_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, METADATA_PARAMS(0, nullptr) }; // 2739718485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details = { "Progression_Resets_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Progression_Resets_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_MetaData) }; // 2739718485
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Inner = { "Currency_Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, METADATA_PARAMS(0, nullptr) }; // 2643739968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details = { "Currency_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Currency_Details), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData) }; // 2643739968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination = { "Pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInternalLootLockerListCatalogPricesResponse, Pagination), Z_Construct_UScriptStruct_FLootLockerCatalogPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData) }; // 999964369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Assets_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Points_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Resets_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"InternalLootLockerListCatalogPricesResponse",
		Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers),
		sizeof(FInternalLootLockerListCatalogPricesResponse),
		alignof(FInternalLootLockerListCatalogPricesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.InnerSingleton, Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerInlinedCatalogEntry>() == std::is_polymorphic<FLootLockerCatalogEntry>(), "USTRUCT FLootLockerInlinedCatalogEntry cannot be polymorphic unless super FLootLockerCatalogEntry is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry;
class UScriptStruct* FLootLockerInlinedCatalogEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerInlinedCatalogEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerInlinedCatalogEntry>()
{
	return FLootLockerInlinedCatalogEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressionPointDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressionPointDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressionResetDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressionResetDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyDetails_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrencyDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Convenience type to use when you need inlined catalog items\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Convenience type to use when you need inlined catalog items" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerInlinedCatalogEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Asset details inlined for this catalog entry, will be Empty if the entity_kind is not asset\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset details inlined for this catalog entry, will be Empty if the entity_kind is not asset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails = { "AssetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, AssetDetails), Z_Construct_UScriptStruct_FLootLockerAssetDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails_MetaData) }; // 1739920107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Progression point details inlined for this catalog entry, will be Empty if the entity_kind is not progression_points\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Progression point details inlined for this catalog entry, will be Empty if the entity_kind is not progression_points" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails = { "ProgressionPointDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, ProgressionPointDetails), Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails_MetaData) }; // 1318790934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Progression reset details inlined for this catalog entry, will be Empty if the entity_kind is not progression_reset\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Progression reset details inlined for this catalog entry, will be Empty if the entity_kind is not progression_reset" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails = { "ProgressionResetDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, ProgressionResetDetails), Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails_MetaData) }; // 2739718485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Currency details inlined for this catalog entry, will be Empty if the entity_kind is not currency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currency details inlined for this catalog entry, will be Empty if the entity_kind is not currency" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails = { "CurrencyDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInlinedCatalogEntry, CurrencyDetails), Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails_MetaData), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails_MetaData) }; // 2643739968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_AssetDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionPointDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_ProgressionResetDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewProp_CurrencyDetails,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerCatalogEntry,
		&NewStructOps,
		"LootLockerInlinedCatalogEntry",
		Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers),
		sizeof(FLootLockerInlinedCatalogEntry),
		alignof(FLootLockerInlinedCatalogEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListCatalogPricesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListCatalogPricesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse;
class UScriptStruct* FLootLockerListCatalogPricesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCatalogPricesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCatalogPricesResponse>()
{
	return FLootLockerListCatalogPricesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Catalog;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Asset_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Asset_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Point_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Progression_Point_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Point_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Progression_Point_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Progression_Reset_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Progression_Reset_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progression_Reset_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Progression_Reset_Details;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency_Details_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_Details_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_Details_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Currency_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pagination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pagination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCatalogPricesResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Details about the catalog that the prices is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Details about the catalog that the prices is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Catalog), Z_Construct_UScriptStruct_FLootLockerCatalog, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog_MetaData) }; // 1476417839
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogEntry, METADATA_PARAMS(0, nullptr) }; // 3476922610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A list of entries available in this catalog\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of entries available in this catalog" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_MetaData) }; // 3476922610
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_ValueProp = { "Asset_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerAssetDetails, METADATA_PARAMS(0, nullptr) }; // 1739920107
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_Key_KeyProp = { "Asset_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Catalog_listing_id*/" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catalog_listing_id" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details = { "Asset_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Asset_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_MetaData) }; // 1739920107
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_ValueProp = { "Progression_Point_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails, METADATA_PARAMS(0, nullptr) }; // 1318790934
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_Key_KeyProp = { "Progression_Point_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Catalog_listing_id*/" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catalog_listing_id" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details = { "Progression_Point_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Progression_Point_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_MetaData) }; // 1318790934
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_ValueProp = { "Progression_Reset_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails, METADATA_PARAMS(0, nullptr) }; // 2739718485
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_Key_KeyProp = { "Progression_Reset_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Catalog_listing_id*/" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catalog_listing_id" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details = { "Progression_Reset_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Progression_Reset_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_MetaData) }; // 2739718485
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_ValueProp = { "Currency_Details", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails, METADATA_PARAMS(0, nullptr) }; // 2643739968
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Key_KeyProp = { "Currency_Details_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Catalog_listing_id*/" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Catalog_listing_id" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details = { "Currency_Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Currency_Details), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_MetaData) }; // 2643739968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Pagination data to use for subsequent requests\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pagination data to use for subsequent requests" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination = { "Pagination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCatalogPricesResponse, Pagination), Z_Construct_UScriptStruct_FLootLockerCatalogPagination, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination_MetaData) }; // 999964369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Catalog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Asset_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Point_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Progression_Reset_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Currency_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewProp_Pagination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListCatalogPricesResponse",
		Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers),
		sizeof(FLootLockerListCatalogPricesResponse),
		alignof(FLootLockerListCatalogPricesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms
		{
			FLootLockerListCatalogsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse, METADATA_PARAMS(0, nullptr) }; // 3527889649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing catalogs\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing catalogs" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListCatalogsResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogsResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListCatalogsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListCatalogsResponseBP, FLootLockerListCatalogsResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms
	{
		FLootLockerListCatalogsResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListCatalogsResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListCatalogsResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms
		{
			FLootLockerListCatalogPricesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse, METADATA_PARAMS(0, nullptr) }; // 2926901442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing items and prices in a catalog\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing items and prices in a catalog" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListCatalogPricesResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListCatalogPricesResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListCatalogPricesResponseBP, FLootLockerListCatalogPricesResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms
	{
		FLootLockerListCatalogPricesResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListCatalogPricesResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListCatalogPricesResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms
		{
			FInternalLootLockerListCatalogPricesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms, Response), Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse, METADATA_PARAMS(0, nullptr) }; // 2720169623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Internal Blueprint response delegate for listing items and prices in a catalog with details as arrays\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal Blueprint response delegate for listing items and prices in a catalog with details as arrays" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "InternalLootLockerListCatalogPricesResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_InternalLootLockerListCatalogPricesResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInternalLootLockerListCatalogPricesResponseBP_DelegateWrapper(const FScriptDelegate& InternalLootLockerListCatalogPricesResponseBP, FInternalLootLockerListCatalogPricesResponse Response)
{
	struct _Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms
	{
		FInternalLootLockerListCatalogPricesResponse Response;
	};
	_Script_LootLockerSDK_eventInternalLootLockerListCatalogPricesResponseBP_Parms Parms;
	Parms.Response=Response;
	InternalLootLockerListCatalogPricesResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerCatalogRequestHandler::StaticRegisterNativesULootLockerCatalogRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerCatalogRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler_NoRegister()
	{
		return ULootLockerCatalogRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==================================================\n// API Class Definition\n//==================================================\n" },
#endif
		{ "IncludePath", "GameAPI/LootLockerCatalogRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCatalogRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Class Definition" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerCatalogRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::ClassParams = {
		&ULootLockerCatalogRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerCatalogRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerCatalogRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerCatalogRequestHandler>()
	{
		return ULootLockerCatalogRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerCatalogRequestHandler);
	ULootLockerCatalogRequestHandler::~ULootLockerCatalogRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerCatalogEntryEntityKind_StaticEnum, TEXT("ELootLockerCatalogEntryEntityKind"), &Z_Registration_Info_UEnum_ELootLockerCatalogEntryEntityKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1036098008U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerCatalog::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalog_Statics::NewStructOps, TEXT("LootLockerCatalog"), &Z_Registration_Info_UScriptStruct_LootLockerCatalog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalog), 1476417839U) },
		{ FLootLockerCatalogPagination::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogPagination_Statics::NewStructOps, TEXT("LootLockerCatalogPagination"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogPagination, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogPagination), 999964369U) },
		{ FLootLockerCatalogEntryPrice::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogEntryPrice_Statics::NewStructOps, TEXT("LootLockerCatalogEntryPrice"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogEntryPrice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogEntryPrice), 4083285813U) },
		{ FLootLockerCatalogEntry::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogEntry_Statics::NewStructOps, TEXT("LootLockerCatalogEntry"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogEntry), 3476922610U) },
		{ FLootLockerAssetDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetDetails_Statics::NewStructOps, TEXT("LootLockerAssetDetails"), &Z_Registration_Info_UScriptStruct_LootLockerAssetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetDetails), 1739920107U) },
		{ FLootLockerProgressionPointDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProgressionPointDetails_Statics::NewStructOps, TEXT("LootLockerProgressionPointDetails"), &Z_Registration_Info_UScriptStruct_LootLockerProgressionPointDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProgressionPointDetails), 1318790934U) },
		{ FLootLockerProgressionResetDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProgressionResetDetails_Statics::NewStructOps, TEXT("LootLockerProgressionResetDetails"), &Z_Registration_Info_UScriptStruct_LootLockerProgressionResetDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProgressionResetDetails), 2739718485U) },
		{ FLootLockerCurrencyDetails::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCurrencyDetails_Statics::NewStructOps, TEXT("LootLockerCurrencyDetails"), &Z_Registration_Info_UScriptStruct_LootLockerCurrencyDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCurrencyDetails), 2643739968U) },
		{ FLootLockerListCatalogsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCatalogsResponse_Statics::NewStructOps, TEXT("LootLockerListCatalogsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListCatalogsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCatalogsResponse), 3527889649U) },
		{ FInternalLootLockerListCatalogPricesResponse::StaticStruct, Z_Construct_UScriptStruct_FInternalLootLockerListCatalogPricesResponse_Statics::NewStructOps, TEXT("InternalLootLockerListCatalogPricesResponse"), &Z_Registration_Info_UScriptStruct_InternalLootLockerListCatalogPricesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInternalLootLockerListCatalogPricesResponse), 2720169623U) },
		{ FLootLockerInlinedCatalogEntry::StaticStruct, Z_Construct_UScriptStruct_FLootLockerInlinedCatalogEntry_Statics::NewStructOps, TEXT("LootLockerInlinedCatalogEntry"), &Z_Registration_Info_UScriptStruct_LootLockerInlinedCatalogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerInlinedCatalogEntry), 2088040294U) },
		{ FLootLockerListCatalogPricesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCatalogPricesResponse_Statics::NewStructOps, TEXT("LootLockerListCatalogPricesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListCatalogPricesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCatalogPricesResponse), 2926901442U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerCatalogRequestHandler, ULootLockerCatalogRequestHandler::StaticClass, TEXT("ULootLockerCatalogRequestHandler"), &Z_Registration_Info_UClass_ULootLockerCatalogRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerCatalogRequestHandler), 3881175173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_1549073517(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCatalogRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

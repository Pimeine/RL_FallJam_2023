// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPersistentStorageRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerAssetsRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerAssetsRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerAssetsRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerApple();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetBone();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidate();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBoneOverrides();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerContext();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFile();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFilter();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetContextResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGoogle();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLinks();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPsn();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRarity();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRentalOption();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUniversalAssets();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerVariation();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPsn;
class UScriptStruct* FLootLockerPsn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPsn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPsn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPsn, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPsn"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPsn.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPsn>()
{
	return FLootLockerPsn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPsn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_entitlement_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_entitlement_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_service_label_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_service_label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPsn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO: propably wrong, remove later\n// USTRUCT(BlueprintType)\n// struct FLootLockerDefaultLoadouts\n// {\n//     GENERATED_BODY()\n//     UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"LootLocker\")\n//     bool skier = false;\n//     UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"LootLocker\")\n//     bool snowboarder = false;\n// };\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: propably wrong, remove later\n USTRUCT(BlueprintType)\n struct FLootLockerDefaultLoadouts\n {\n     GENERATED_BODY()\n     UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"LootLocker\")\n     bool skier = false;\n     UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"LootLocker\")\n     bool snowboarder = false;\n };" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPsn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_entitlement_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_entitlement_id = { "entitlement_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPsn, entitlement_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_entitlement_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_entitlement_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_service_label_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_service_label = { "service_label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPsn, service_label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_service_label_MetaData), Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_service_label_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPsn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_entitlement_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewProp_service_label,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPsn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPsn",
		Z_Construct_UScriptStruct_FLootLockerPsn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPsn_Statics::PropPointers),
		sizeof(FLootLockerPsn),
		alignof(FLootLockerPsn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPsn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPsn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPsn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPsn()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPsn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPsn.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPsn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPsn.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerApple;
class UScriptStruct* FLootLockerApple::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerApple.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerApple.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerApple, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerApple"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerApple.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerApple>()
{
	return FLootLockerApple::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerApple_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_product_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_product_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerApple_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerApple>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewProp_product_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewProp_product_id = { "product_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerApple, product_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewProp_product_id_MetaData), Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewProp_product_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerApple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewProp_product_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerApple_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerApple",
		Z_Construct_UScriptStruct_FLootLockerApple_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerApple_Statics::PropPointers),
		sizeof(FLootLockerApple),
		alignof(FLootLockerApple),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerApple_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerApple_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerApple_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerApple()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerApple.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerApple.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerApple_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerApple.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGoogle;
class UScriptStruct* FLootLockerGoogle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGoogle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGoogle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGoogle, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGoogle"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGoogle.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGoogle>()
{
	return FLootLockerGoogle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGoogle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_product_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_product_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGoogle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewProp_product_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewProp_product_id = { "product_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGoogle, product_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewProp_product_id_MetaData), Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewProp_product_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewProp_product_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerGoogle",
		Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::PropPointers),
		sizeof(FLootLockerGoogle),
		alignof(FLootLockerGoogle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGoogle()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGoogle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGoogle.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGoogle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers;
class UScriptStruct* FLootLockerExternalIdentifiers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerExternalIdentifiers"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerExternalIdentifiers>()
{
	return FLootLockerExternalIdentifiers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_psn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_psn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_apple_app_store_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_apple_app_store;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_google_play_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_google_play;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerExternalIdentifiers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_psn_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_psn = { "psn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerExternalIdentifiers, psn), Z_Construct_UScriptStruct_FLootLockerPsn, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_psn_MetaData), Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_psn_MetaData) }; // 629531797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_apple_app_store_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_apple_app_store = { "apple_app_store", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerExternalIdentifiers, apple_app_store), Z_Construct_UScriptStruct_FLootLockerApple, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_apple_app_store_MetaData), Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_apple_app_store_MetaData) }; // 3489373329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_google_play_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_google_play = { "google_play", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerExternalIdentifiers, google_play), Z_Construct_UScriptStruct_FLootLockerGoogle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_google_play_MetaData), Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_google_play_MetaData) }; // 1127319094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_psn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_apple_app_store,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewProp_google_play,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerExternalIdentifiers",
		Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::PropPointers),
		sizeof(FLootLockerExternalIdentifiers),
		alignof(FLootLockerExternalIdentifiers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFile;
class UScriptStruct* FLootLockerFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFile, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFile"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFile.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFile>()
{
	return FLootLockerFile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_url_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFile, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_url_MetaData), Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_url_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFile, tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags_MetaData), Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewProp_tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFile",
		Z_Construct_UScriptStruct_FLootLockerFile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFile_Statics::PropPointers),
		sizeof(FLootLockerFile),
		alignof(FLootLockerFile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFile()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFile.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFilter;
class UScriptStruct* FLootLockerFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFilter, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFilter"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFilter.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFilter>()
{
	return FLootLockerFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_value_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFilter, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_value_MetaData), Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFilter, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFilter",
		Z_Construct_UScriptStruct_FLootLockerFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFilter_Statics::PropPointers),
		sizeof(FLootLockerFilter),
		alignof(FLootLockerFilter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFilter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFilter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFilter.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRarity;
class UScriptStruct* FLootLockerRarity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRarity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRarity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRarity, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRarity"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRarity.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRarity>()
{
	return FLootLockerRarity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRarity_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_short_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_short_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRarity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRarity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRarity, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_short_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_short_name = { "short_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRarity, short_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_short_name_MetaData), Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_short_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_color_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRarity, color), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_color_MetaData), Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRarity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_short_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewProp_color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRarity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerRarity",
		Z_Construct_UScriptStruct_FLootLockerRarity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRarity_Statics::PropPointers),
		sizeof(FLootLockerRarity),
		alignof(FLootLockerRarity),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRarity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRarity_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRarity_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRarity()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRarity.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRarity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRarity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerLinks;
class UScriptStruct* FLootLockerLinks::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerLinks.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerLinks.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerLinks, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerLinks"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerLinks.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerLinks>()
{
	return FLootLockerLinks::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerLinks_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_thumbnail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLinks_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerLinks>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewProp_thumbnail_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewProp_thumbnail = { "thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerLinks, thumbnail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewProp_thumbnail_MetaData), Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewProp_thumbnail_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewProp_thumbnail,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerLinks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerLinks",
		Z_Construct_UScriptStruct_FLootLockerLinks_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLinks_Statics::PropPointers),
		sizeof(FLootLockerLinks),
		alignof(FLootLockerLinks),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLinks_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerLinks_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerLinks_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLinks()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerLinks.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerLinks.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerLinks_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerLinks.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRentalOption;
class UScriptStruct* FLootLockerRentalOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRentalOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRentalOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRentalOption, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRentalOption"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRentalOption.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRentalOption>()
{
	return FLootLockerRentalOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sales_price_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sales_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_links_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_links;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRentalOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRentalOption, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRentalOption, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRentalOption, duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_duration_MetaData), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_price_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRentalOption, price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_price_MetaData), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_sales_price_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_sales_price = { "sales_price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRentalOption, sales_price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_sales_price_MetaData), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_sales_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_links_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_links = { "links", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRentalOption, links), Z_Construct_UScriptStruct_FLootLockerLinks, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_links_MetaData), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_links_MetaData) }; // 3254201308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_sales_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewProp_links,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerRentalOption",
		Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::PropPointers),
		sizeof(FLootLockerRentalOption),
		alignof(FLootLockerRentalOption),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRentalOption()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRentalOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRentalOption.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRentalOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides;
class UScriptStruct* FLootLockerBoneOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerBoneOverrides, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerBoneOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerBoneOverrides>()
{
	return FLootLockerBoneOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerBoneOverrides>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerBoneOverrides",
		nullptr,
		0,
		sizeof(FLootLockerBoneOverrides),
		alignof(FLootLockerBoneOverrides),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBoneOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerVariation;
class UScriptStruct* FLootLockerVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerVariation, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerVariation"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerVariation.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerVariation>()
{
	return FLootLockerVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_primary_color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_primary_color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_secondary_color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_secondary_color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_links_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_links;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVariation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVariation, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVariation, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_primary_color_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_primary_color = { "primary_color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVariation, primary_color), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_primary_color_MetaData), Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_primary_color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_secondary_color_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_secondary_color = { "secondary_color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVariation, secondary_color), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_secondary_color_MetaData), Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_secondary_color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_links_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  TArray<FProperty> properties;\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray<FProperty> properties;" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_links = { "links", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVariation, links), Z_Construct_UScriptStruct_FLootLockerLinks, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_links_MetaData), Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_links_MetaData) }; // 3254201308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_primary_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_secondary_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewProp_links,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerVariation",
		Z_Construct_UScriptStruct_FLootLockerVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::PropPointers),
		sizeof(FLootLockerVariation),
		alignof(FLootLockerVariation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerVariation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVariation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerVariation.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerVariation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate;
class UScriptStruct* FLootLockerAssetCandidate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetCandidate, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetCandidate"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetCandidate>()
{
	return FLootLockerAssetCandidate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_by_player_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_created_by_player_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_by_player_uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_by_player_uid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetCandidate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_id = { "created_by_player_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidate, created_by_player_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_uid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_uid = { "created_by_player_uid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetCandidate, created_by_player_uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_uid_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_uid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewProp_created_by_player_uid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetCandidate",
		Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::PropPointers),
		sizeof(FLootLockerAssetCandidate),
		alignof(FLootLockerAssetCandidate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetCandidate()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage;
class UScriptStruct* FLootLockerHasKeyValueStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHasKeyValueStorage"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHasKeyValueStorage>()
{
	return FLootLockerHasKeyValueStorage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHasKeyValueStorage>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage_Inner = { "storage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPersistentStorageItem, METADATA_PARAMS(0, nullptr) }; // 1896677140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHasKeyValueStorage, storage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage_MetaData), Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage_MetaData) }; // 1896677140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewProp_storage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerHasKeyValueStorage",
		Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::PropPointers),
		sizeof(FLootLockerHasKeyValueStorage),
		alignof(FLootLockerHasKeyValueStorage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAsset>() == std::is_polymorphic<FLootLockerHasKeyValueStorage>(), "USTRUCT FLootLockerAsset cannot be polymorphic unless super FLootLockerHasKeyValueStorage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAsset;
class UScriptStruct* FLootLockerAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAsset, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAsset"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAsset.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAsset>()
{
	return FLootLockerAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uuid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_purchasable_MetaData[];
#endif
		static void NewProp_purchasable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_purchasable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sales_price_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sales_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_display_price_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_display_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_context_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unlocks_context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unlocks_context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detachable_MetaData[];
#endif
		static void NewProp_detachable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_detachable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_updated_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_updated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_marked_new_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_marked_new;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_default_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_default_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_links_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_links;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rarity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_popular_MetaData[];
#endif
		static void NewProp_popular_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_popular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_popularity_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_popularity_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unique_instance_MetaData[];
#endif
		static void NewProp_unique_instance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_unique_instance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rental_options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rental_options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_filters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_filters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_variations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_featured_MetaData[];
#endif
		static void NewProp_featured_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_featured;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_context_locked_MetaData[];
#endif
		static void NewProp_context_locked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_context_locked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initially_purchasable_MetaData[];
#endif
		static void NewProp_initially_purchasable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_initially_purchasable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_files_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_files_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_files;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_candidate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset_candidate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_data_entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_data_entities;
		static const UECodeGen_Private::FIntPropertyParams NewProp_character_classes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_classes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_character_classes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shop_thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_shop_thumbnail;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_default_loadouts_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_default_loadouts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_default_loadouts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_default_loadouts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_external_identifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_external_identifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drop_table_max_picks_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_drop_table_max_picks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LootLockerStorage property through base class\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LootLockerStorage property through base class" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_uuid_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO:missing in Unity SDK\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO:missing in Unity SDK" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_uuid = { "uuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, uuid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_uuid_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_uuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->purchasable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable = { "purchasable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_type_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_price_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_price_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_sales_price_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_sales_price = { "sales_price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, sales_price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_sales_price_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_sales_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_display_price_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_display_price = { "display_price", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, display_price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_display_price_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_display_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, context), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO:missing in Unity SDK\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO:missing in Unity SDK" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_id = { "context_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, context_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unlocks_context_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unlocks_context = { "unlocks_context", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, unlocks_context), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unlocks_context_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unlocks_context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->detachable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable = { "detachable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_updated_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_updated = { "updated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, updated), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_updated_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_updated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_marked_new_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_marked_new = { "marked_new", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, marked_new), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_marked_new_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_marked_new_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_variation_id = { "default_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, default_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_description_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_links_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_links = { "links", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, links), Z_Construct_UScriptStruct_FLootLockerLinks, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_links_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_links_MetaData) }; // 3254201308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rarity_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, rarity), Z_Construct_UScriptStruct_FLootLockerRarity, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rarity_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rarity_MetaData) }; // 2443945765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->popular = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular = { "popular", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popularity_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popularity_score = { "popularity_score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, popularity_score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popularity_score_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popularity_score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->unique_instance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance = { "unique_instance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options_Inner = { "rental_options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerRentalOption, METADATA_PARAMS(0, nullptr) }; // 1186264323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options = { "rental_options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, rental_options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options_MetaData) }; // 1186264323
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters_Inner = { "filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerFilter, METADATA_PARAMS(0, nullptr) }; // 3670309710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters = { "filters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters_MetaData) }; // 3670309710
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations_Inner = { "variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerVariation, METADATA_PARAMS(0, nullptr) }; // 3358734407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations = { "variations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, variations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations_MetaData) }; // 3358734407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->featured = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured = { "featured", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->context_locked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked = { "context_locked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable_SetBit(void* Obj)
	{
		((FLootLockerAsset*)Obj)->initially_purchasable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable = { "initially_purchasable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerAsset), &Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files_Inner = { "files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerFile, METADATA_PARAMS(0, nullptr) }; // 692513983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files = { "files", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files_MetaData) }; // 692513983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_asset_candidate_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_asset_candidate = { "asset_candidate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, asset_candidate), Z_Construct_UScriptStruct_FLootLockerAssetCandidate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_asset_candidate_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_asset_candidate_MetaData) }; // 2107062264
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities_Inner = { "data_entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities = { "data_entities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, data_entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes_Inner = { "character_classes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes = { "character_classes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, character_classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_shop_thumbnail_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO:missing in Unity SDK\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO:missing in Unity SDK" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_shop_thumbnail = { "shop_thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, shop_thumbnail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_shop_thumbnail_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_shop_thumbnail_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_ValueProp = { "default_loadouts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_Key_KeyProp = { "default_loadouts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"LootLocker\") //TODO:replaced by map\n// FLootLockerDefaultLoadouts default_loadouts;\n//TODO:missing in Unity SDK\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"LootLocker\") TODO:replaced by map\nFLootLockerDefaultLoadouts default_loadouts;\nTODO:missing in Unity SDK" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts = { "default_loadouts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, default_loadouts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_external_identifiers_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_external_identifiers = { "external_identifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, external_identifiers), Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_external_identifiers_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_external_identifiers_MetaData) }; // 323753350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_drop_table_max_picks_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_drop_table_max_picks = { "drop_table_max_picks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAsset, drop_table_max_picks), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_drop_table_max_picks_MetaData), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_drop_table_max_picks_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_uuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_purchasable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_sales_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_display_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unlocks_context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_detachable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_updated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_marked_new,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_popularity_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_unique_instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_rental_options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_filters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_variations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_featured,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_context_locked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_initially_purchasable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_asset_candidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_data_entities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_character_classes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_shop_thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_default_loadouts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_external_identifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewProp_drop_table_max_picks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage,
		&NewStructOps,
		"LootLockerAsset",
		Z_Construct_UScriptStruct_FLootLockerAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::PropPointers),
		sizeof(FLootLockerAsset),
		alignof(FLootLockerAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAsset.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerContext;
class UScriptStruct* FLootLockerContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerContext, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerContext"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerContext.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerContext>()
{
	return FLootLockerContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uuid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_friendly_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_friendly_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detachable_MetaData[];
#endif
		static void NewProp_detachable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_detachable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_facing_MetaData[];
#endif
		static void NewProp_user_facing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_user_facing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dependent_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_dependent_asset_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContext, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_uuid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_uuid = { "uuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContext, uuid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_uuid_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_uuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContext, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_friendly_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_friendly_name = { "friendly_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContext, friendly_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_friendly_name_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_friendly_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable_SetBit(void* Obj)
	{
		((FLootLockerContext*)Obj)->detachable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable = { "detachable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerContext), &Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing_SetBit(void* Obj)
	{
		((FLootLockerContext*)Obj)->user_facing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing = { "user_facing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerContext), &Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_dependent_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_dependent_asset_id = { "dependent_asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerContext, dependent_asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_dependent_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_dependent_asset_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_uuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_friendly_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_detachable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_user_facing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewProp_dependent_asset_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerContext",
		Z_Construct_UScriptStruct_FLootLockerContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::PropPointers),
		sizeof(FLootLockerContext),
		alignof(FLootLockerContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerContext()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerContext.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerContext.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetContextResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetContextResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse;
class UScriptStruct* FLootLockerGetContextResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetContextResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetContextResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetContextResponse>()
{
	return FLootLockerGetContextResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_contexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_contexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_contexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetContextResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts_Inner = { "contexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerContext, METADATA_PARAMS(0, nullptr) }; // 2877654284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts = { "contexts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetContextResponse, contexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts_MetaData), Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts_MetaData) }; // 2877654284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewProp_contexts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetContextResponse",
		Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::PropPointers),
		sizeof(FLootLockerGetContextResponse),
		alignof(FLootLockerGetContextResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetContextResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetAssetsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetAssetsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse;
class UScriptStruct* FLootLockerGetAssetsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetAssetsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetAssetsResponse>()
{
	return FLootLockerGetAssetsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetAssetsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets_Inner = { "assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(0, nullptr) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAssetsResponse, assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets_MetaData) }; // 3922991322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewProp_assets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetAssetsResponse",
		Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::PropPointers),
		sizeof(FLootLockerGetAssetsResponse),
		alignof(FLootLockerGetAssetsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerAssetFilter;
	static UEnum* ELootLockerAssetFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAssetFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerAssetFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerAssetFilter"));
		}
		return Z_Registration_Info_UEnum_ELootLockerAssetFilter.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerAssetFilter>()
	{
		return ELootLockerAssetFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::Enumerators[] = {
		{ "ELootLockerAssetFilter::None", (int64)ELootLockerAssetFilter::None },
		{ "ELootLockerAssetFilter::Purchasable", (int64)ELootLockerAssetFilter::Purchasable },
		{ "ELootLockerAssetFilter::NonPurchasable", (int64)ELootLockerAssetFilter::NonPurchasable },
		{ "ELootLockerAssetFilter::Rentable", (int64)ELootLockerAssetFilter::Rentable },
		{ "ELootLockerAssetFilter::NonRentable", (int64)ELootLockerAssetFilter::NonRentable },
		{ "ELootLockerAssetFilter::Popular", (int64)ELootLockerAssetFilter::Popular },
		{ "ELootLockerAssetFilter::UnPopular", (int64)ELootLockerAssetFilter::UnPopular },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
		{ "None.Name", "ELootLockerAssetFilter::None" },
		{ "NonPurchasable.Name", "ELootLockerAssetFilter::NonPurchasable" },
		{ "NonRentable.Name", "ELootLockerAssetFilter::NonRentable" },
		{ "Popular.Name", "ELootLockerAssetFilter::Popular" },
		{ "Purchasable.Name", "ELootLockerAssetFilter::Purchasable" },
		{ "Rentable.Name", "ELootLockerAssetFilter::Rentable" },
		{ "UnPopular.Name", "ELootLockerAssetFilter::UnPopular" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerAssetFilter",
		"ELootLockerAssetFilter",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAssetFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerAssetFilter.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerAssetFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerAssetFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets;
class UScriptStruct* FLootLockerUniversalAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerUniversalAssets, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerUniversalAssets"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerUniversalAssets>()
{
	return FLootLockerUniversalAssets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_universal_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_universal_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acquisition_source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_acquisition_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rental;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerUniversalAssets>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_universal_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_universal_id = { "universal_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssets, universal_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_universal_id_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_universal_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssets, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssets, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_acquisition_source_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_acquisition_source = { "acquisition_source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssets, acquisition_source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_acquisition_source_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_acquisition_source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssets, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_asset_MetaData) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental = { "rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssets, rental), Z_Construct_UScriptStruct_FLootLockerRentalOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_MetaData) }; // 1186264323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_universal_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_acquisition_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewProp_rental,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerUniversalAssets",
		Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::PropPointers),
		sizeof(FLootLockerUniversalAssets),
		alignof(FLootLockerUniversalAssets),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUniversalAssets()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerUniversalAssetsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerUniversalAssetsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse;
class UScriptStruct* FLootLockerUniversalAssetsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerUniversalAssetsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerUniversalAssetsResponse>()
{
	return FLootLockerUniversalAssetsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_global_assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_global_assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_global_assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerUniversalAssetsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets_Inner = { "global_assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerUniversalAssets, METADATA_PARAMS(0, nullptr) }; // 3163259710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets = { "global_assets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUniversalAssetsResponse, global_assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets_MetaData), Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets_MetaData) }; // 3163259710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewProp_global_assets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerUniversalAssetsResponse",
		Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::PropPointers),
		sizeof(FLootLockerUniversalAssetsResponse),
		alignof(FLootLockerUniversalAssetsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters;
class UScriptStruct* FLootLockerAssetBoneParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetBoneParameters"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetBoneParameters>()
{
	return FLootLockerAssetBoneParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flags_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_binding_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetBoneParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBoneParameters, rotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_rotation_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_position_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBoneParameters, position), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_position_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_boneName_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBoneParameters, boneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_boneName_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_boneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_flags_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBoneParameters, flags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_flags_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_flags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_mass = { "mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBoneParameters, mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_mass_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_mass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_binding_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_binding = { "binding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBoneParameters, binding), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_binding_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_binding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewProp_binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetBoneParameters",
		Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::PropPointers),
		sizeof(FLootLockerAssetBoneParameters),
		alignof(FLootLockerAssetBoneParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetBone;
class UScriptStruct* FLootLockerAssetBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetBone, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetBone"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetBone.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetBone>()
{
	return FLootLockerAssetBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBone, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBone, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters_Inner = { "parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters, METADATA_PARAMS(0, nullptr) }; // 2743098216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters = { "parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetBone, parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters_MetaData) }; // 2743098216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewProp_parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetBone",
		Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::PropPointers),
		sizeof(FLootLockerAssetBone),
		alignof(FLootLockerAssetBone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetBone()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetBone.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetAssetBonesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetAssetBonesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse;
class UScriptStruct* FLootLockerGetAssetBonesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetAssetBonesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetAssetBonesResponse>()
{
	return FLootLockerGetAssetBonesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetAssetBonesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones_Inner = { "AssetBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAssetBone, METADATA_PARAMS(0, nullptr) }; // 4248284346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones = { "AssetBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetAssetBonesResponse, AssetBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones_MetaData), Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones_MetaData) }; // 4248284346
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewProp_AssetBones,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetAssetBonesResponse",
		Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::PropPointers),
		sizeof(FLootLockerGetAssetBonesResponse),
		alignof(FLootLockerGetAssetBonesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetFavouriteAssetIndicesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetFavouriteAssetIndicesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse;
class UScriptStruct* FLootLockerGetFavouriteAssetIndicesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetFavouriteAssetIndicesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetFavouriteAssetIndicesResponse>()
{
	return FLootLockerGetFavouriteAssetIndicesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_favourites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_favourites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_favourites;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetFavouriteAssetIndicesResponse>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites_Inner = { "favourites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites = { "favourites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetFavouriteAssetIndicesResponse, favourites), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites_MetaData), Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewProp_favourites,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetFavouriteAssetIndicesResponse",
		Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::PropPointers),
		sizeof(FLootLockerGetFavouriteAssetIndicesResponse),
		alignof(FLootLockerGetFavouriteAssetIndicesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventContextDelegateBP_Parms
		{
			FLootLockerGetContextResponse ContextsResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextsResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::NewProp_ContextsResponse = { "ContextsResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventContextDelegateBP_Parms, ContextsResponse), Z_Construct_UScriptStruct_FLootLockerGetContextResponse, METADATA_PARAMS(0, nullptr) }; // 2471834827
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::NewProp_ContextsResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "ContextDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventContextDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventContextDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_ContextDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FContextDelegateBP_DelegateWrapper(const FScriptDelegate& ContextDelegateBP, FLootLockerGetContextResponse ContextsResponse)
{
	struct _Script_LootLockerSDK_eventContextDelegateBP_Parms
	{
		FLootLockerGetContextResponse ContextsResponse;
	};
	_Script_LootLockerSDK_eventContextDelegateBP_Parms Parms;
	Parms.ContextsResponse=ContextsResponse;
	ContextDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventAssetsResponseDelegateBP_Parms
		{
			FLootLockerGetAssetsResponse AssetsResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::NewProp_AssetsResponse = { "AssetsResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventAssetsResponseDelegateBP_Parms, AssetsResponse), Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse, METADATA_PARAMS(0, nullptr) }; // 1326654494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::NewProp_AssetsResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "AssetsResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetsResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetsResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_AssetsResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetsResponseDelegateBP_DelegateWrapper(const FScriptDelegate& AssetsResponseDelegateBP, FLootLockerGetAssetsResponse AssetsResponse)
{
	struct _Script_LootLockerSDK_eventAssetsResponseDelegateBP_Parms
	{
		FLootLockerGetAssetsResponse AssetsResponse;
	};
	_Script_LootLockerSDK_eventAssetsResponseDelegateBP_Parms Parms;
	Parms.AssetsResponse=AssetsResponse;
	AssetsResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventAssetBonesResponseDelegateBP_Parms
		{
			FLootLockerGetAssetBonesResponse AssetBonesResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetBonesResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::NewProp_AssetBonesResponse = { "AssetBonesResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventAssetBonesResponseDelegateBP_Parms, AssetBonesResponse), Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse, METADATA_PARAMS(0, nullptr) }; // 1777679988
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::NewProp_AssetBonesResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "AssetBonesResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetBonesResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventAssetBonesResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_AssetBonesResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAssetBonesResponseDelegateBP_DelegateWrapper(const FScriptDelegate& AssetBonesResponseDelegateBP, FLootLockerGetAssetBonesResponse AssetBonesResponse)
{
	struct _Script_LootLockerSDK_eventAssetBonesResponseDelegateBP_Parms
	{
		FLootLockerGetAssetBonesResponse AssetBonesResponse;
	};
	_Script_LootLockerSDK_eventAssetBonesResponseDelegateBP_Parms Parms;
	Parms.AssetBonesResponse=AssetBonesResponse;
	AssetBonesResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventGetFavouriteAssetIndicesResponseDelegateBP_Parms
		{
			FLootLockerGetFavouriteAssetIndicesResponse FavouriteAssetIndicesResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FavouriteAssetIndicesResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::NewProp_FavouriteAssetIndicesResponse = { "FavouriteAssetIndicesResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventGetFavouriteAssetIndicesResponseDelegateBP_Parms, FavouriteAssetIndicesResponse), Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse, METADATA_PARAMS(0, nullptr) }; // 1842242904
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::NewProp_FavouriteAssetIndicesResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventGetFavouriteAssetIndicesResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventGetFavouriteAssetIndicesResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_GetFavouriteAssetIndicesResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetFavouriteAssetIndicesResponseDelegateBP_DelegateWrapper(const FScriptDelegate& GetFavouriteAssetIndicesResponseDelegateBP, FLootLockerGetFavouriteAssetIndicesResponse FavouriteAssetIndicesResponse)
{
	struct _Script_LootLockerSDK_eventGetFavouriteAssetIndicesResponseDelegateBP_Parms
	{
		FLootLockerGetFavouriteAssetIndicesResponse FavouriteAssetIndicesResponse;
	};
	_Script_LootLockerSDK_eventGetFavouriteAssetIndicesResponseDelegateBP_Parms Parms;
	Parms.FavouriteAssetIndicesResponse=FavouriteAssetIndicesResponse;
	GetFavouriteAssetIndicesResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventUniversalAssetResponseDelegateBP_Parms
		{
			FLootLockerUniversalAssetsResponse UniversalAssetsResponse;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniversalAssetsResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::NewProp_UniversalAssetsResponse = { "UniversalAssetsResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventUniversalAssetResponseDelegateBP_Parms, UniversalAssetsResponse), Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse, METADATA_PARAMS(0, nullptr) }; // 113147914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::NewProp_UniversalAssetsResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "UniversalAssetResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventUniversalAssetResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventUniversalAssetResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_UniversalAssetResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FUniversalAssetResponseDelegateBP_DelegateWrapper(const FScriptDelegate& UniversalAssetResponseDelegateBP, FLootLockerUniversalAssetsResponse UniversalAssetsResponse)
{
	struct _Script_LootLockerSDK_eventUniversalAssetResponseDelegateBP_Parms
	{
		FLootLockerUniversalAssetsResponse UniversalAssetsResponse;
	};
	_Script_LootLockerSDK_eventUniversalAssetResponseDelegateBP_Parms Parms;
	Parms.UniversalAssetsResponse=UniversalAssetsResponse;
	UniversalAssetResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerAssetsRequestHandler::StaticRegisterNativesULootLockerAssetsRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerAssetsRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerAssetsRequestHandler_NoRegister()
	{
		return ULootLockerAssetsRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GameAPI/LootLockerAssetsRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAssetsRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerAssetsRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::ClassParams = {
		&ULootLockerAssetsRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerAssetsRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerAssetsRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerAssetsRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerAssetsRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerAssetsRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerAssetsRequestHandler>()
	{
		return ULootLockerAssetsRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerAssetsRequestHandler);
	ULootLockerAssetsRequestHandler::~ULootLockerAssetsRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerAssetFilter_StaticEnum, TEXT("ELootLockerAssetFilter"), &Z_Registration_Info_UEnum_ELootLockerAssetFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3075909174U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerPsn::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPsn_Statics::NewStructOps, TEXT("LootLockerPsn"), &Z_Registration_Info_UScriptStruct_LootLockerPsn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPsn), 629531797U) },
		{ FLootLockerApple::StaticStruct, Z_Construct_UScriptStruct_FLootLockerApple_Statics::NewStructOps, TEXT("LootLockerApple"), &Z_Registration_Info_UScriptStruct_LootLockerApple, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerApple), 3489373329U) },
		{ FLootLockerGoogle::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGoogle_Statics::NewStructOps, TEXT("LootLockerGoogle"), &Z_Registration_Info_UScriptStruct_LootLockerGoogle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGoogle), 1127319094U) },
		{ FLootLockerExternalIdentifiers::StaticStruct, Z_Construct_UScriptStruct_FLootLockerExternalIdentifiers_Statics::NewStructOps, TEXT("LootLockerExternalIdentifiers"), &Z_Registration_Info_UScriptStruct_LootLockerExternalIdentifiers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerExternalIdentifiers), 323753350U) },
		{ FLootLockerFile::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFile_Statics::NewStructOps, TEXT("LootLockerFile"), &Z_Registration_Info_UScriptStruct_LootLockerFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFile), 692513983U) },
		{ FLootLockerFilter::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFilter_Statics::NewStructOps, TEXT("LootLockerFilter"), &Z_Registration_Info_UScriptStruct_LootLockerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFilter), 3670309710U) },
		{ FLootLockerRarity::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRarity_Statics::NewStructOps, TEXT("LootLockerRarity"), &Z_Registration_Info_UScriptStruct_LootLockerRarity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRarity), 2443945765U) },
		{ FLootLockerLinks::StaticStruct, Z_Construct_UScriptStruct_FLootLockerLinks_Statics::NewStructOps, TEXT("LootLockerLinks"), &Z_Registration_Info_UScriptStruct_LootLockerLinks, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerLinks), 3254201308U) },
		{ FLootLockerRentalOption::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRentalOption_Statics::NewStructOps, TEXT("LootLockerRentalOption"), &Z_Registration_Info_UScriptStruct_LootLockerRentalOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRentalOption), 1186264323U) },
		{ FLootLockerBoneOverrides::StaticStruct, Z_Construct_UScriptStruct_FLootLockerBoneOverrides_Statics::NewStructOps, TEXT("LootLockerBoneOverrides"), &Z_Registration_Info_UScriptStruct_LootLockerBoneOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerBoneOverrides), 2174047978U) },
		{ FLootLockerVariation::StaticStruct, Z_Construct_UScriptStruct_FLootLockerVariation_Statics::NewStructOps, TEXT("LootLockerVariation"), &Z_Registration_Info_UScriptStruct_LootLockerVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerVariation), 3358734407U) },
		{ FLootLockerAssetCandidate::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetCandidate_Statics::NewStructOps, TEXT("LootLockerAssetCandidate"), &Z_Registration_Info_UScriptStruct_LootLockerAssetCandidate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetCandidate), 2107062264U) },
		{ FLootLockerHasKeyValueStorage::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage_Statics::NewStructOps, TEXT("LootLockerHasKeyValueStorage"), &Z_Registration_Info_UScriptStruct_LootLockerHasKeyValueStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHasKeyValueStorage), 4102404769U) },
		{ FLootLockerAsset::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAsset_Statics::NewStructOps, TEXT("LootLockerAsset"), &Z_Registration_Info_UScriptStruct_LootLockerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAsset), 3922991322U) },
		{ FLootLockerContext::StaticStruct, Z_Construct_UScriptStruct_FLootLockerContext_Statics::NewStructOps, TEXT("LootLockerContext"), &Z_Registration_Info_UScriptStruct_LootLockerContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerContext), 2877654284U) },
		{ FLootLockerGetContextResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetContextResponse_Statics::NewStructOps, TEXT("LootLockerGetContextResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetContextResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetContextResponse), 2471834827U) },
		{ FLootLockerGetAssetsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetAssetsResponse_Statics::NewStructOps, TEXT("LootLockerGetAssetsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetAssetsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetAssetsResponse), 1326654494U) },
		{ FLootLockerUniversalAssets::StaticStruct, Z_Construct_UScriptStruct_FLootLockerUniversalAssets_Statics::NewStructOps, TEXT("LootLockerUniversalAssets"), &Z_Registration_Info_UScriptStruct_LootLockerUniversalAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerUniversalAssets), 3163259710U) },
		{ FLootLockerUniversalAssetsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerUniversalAssetsResponse_Statics::NewStructOps, TEXT("LootLockerUniversalAssetsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerUniversalAssetsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerUniversalAssetsResponse), 113147914U) },
		{ FLootLockerAssetBoneParameters::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetBoneParameters_Statics::NewStructOps, TEXT("LootLockerAssetBoneParameters"), &Z_Registration_Info_UScriptStruct_LootLockerAssetBoneParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetBoneParameters), 2743098216U) },
		{ FLootLockerAssetBone::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetBone_Statics::NewStructOps, TEXT("LootLockerAssetBone"), &Z_Registration_Info_UScriptStruct_LootLockerAssetBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetBone), 4248284346U) },
		{ FLootLockerGetAssetBonesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetAssetBonesResponse_Statics::NewStructOps, TEXT("LootLockerGetAssetBonesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetAssetBonesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetAssetBonesResponse), 1777679988U) },
		{ FLootLockerGetFavouriteAssetIndicesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetFavouriteAssetIndicesResponse_Statics::NewStructOps, TEXT("LootLockerGetFavouriteAssetIndicesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetFavouriteAssetIndicesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetFavouriteAssetIndicesResponse), 1842242904U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerAssetsRequestHandler, ULootLockerAssetsRequestHandler::StaticClass, TEXT("ULootLockerAssetsRequestHandler"), &Z_Registration_Info_UClass_ULootLockerAssetsRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerAssetsRequestHandler), 2364564817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_270966553(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAssetsRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

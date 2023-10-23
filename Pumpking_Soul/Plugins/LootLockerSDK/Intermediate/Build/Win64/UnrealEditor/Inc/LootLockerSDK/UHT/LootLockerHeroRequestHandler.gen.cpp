// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerHeroRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPlayerRequestHandler.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerHeroRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerHeroRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerHeroRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHero();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroListResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroLoadout();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerHero();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRental();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHero;
class UScriptStruct* FLootLockerHero::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHero.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHero.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHero, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHero"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHero.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHero>()
{
	return FLootLockerHero::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHero_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_hero_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_type_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_character_type_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_type_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_character_type_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_has_hero_MetaData[];
#endif
		static void NewProp_player_has_hero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_player_has_hero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHero>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_hero_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_hero_id = { "hero_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHero, hero_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_hero_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_hero_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_id = { "character_type_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHero, character_type_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_name = { "character_type_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHero, character_type_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_name_MetaData), Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHero, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero_SetBit(void* Obj)
	{
		((FLootLockerHero*)Obj)->player_has_hero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero = { "player_has_hero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerHero), &Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero_MetaData), Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHero, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_asset_MetaData) }; // 3922991322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_hero_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_character_type_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_player_has_hero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewProp_asset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHero_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerHero",
		Z_Construct_UScriptStruct_FLootLockerHero_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::PropPointers),
		sizeof(FLootLockerHero),
		alignof(FLootLockerHero),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHero_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHero_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHero()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHero.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHero.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHero_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHero.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerHero;
class UScriptStruct* FLootLockerPlayerHero::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerHero.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerHero.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerHero, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerHero"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerHero.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerHero>()
{
	return FLootLockerPlayerHero::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_hero_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_hero_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_character_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerHero>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHero, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_id = { "hero_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHero, hero_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHero, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_name = { "hero_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHero, hero_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_name_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_character_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_character_name = { "character_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHero, character_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_character_name_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_character_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerPlayerHero*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerPlayerHero), &Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHero, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_asset_MetaData) }; // 3922991322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_hero_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_character_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_is_default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewProp_asset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlayerHero",
		Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::PropPointers),
		sizeof(FLootLockerPlayerHero),
		alignof(FLootLockerPlayerHero),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerHero()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerHero.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerHero.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerHero.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerHeroResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerHeroResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroResponse;
class UScriptStruct* FLootLockerHeroResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroResponse>()
{
	return FLootLockerHeroResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewProp_hero_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewProp_hero = { "hero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroResponse, hero), Z_Construct_UScriptStruct_FLootLockerHero, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewProp_hero_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewProp_hero_MetaData) }; // 225629315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewProp_hero,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerHeroResponse",
		Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::PropPointers),
		sizeof(FLootLockerHeroResponse),
		alignof(FLootLockerHeroResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPlayerHeroResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPlayerHeroResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse;
class UScriptStruct* FLootLockerPlayerHeroResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerHeroResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerHeroResponse>()
{
	return FLootLockerPlayerHeroResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerHeroResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewProp_hero_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewProp_hero = { "hero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerHeroResponse, hero), Z_Construct_UScriptStruct_FLootLockerPlayerHero, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewProp_hero_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewProp_hero_MetaData) }; // 2232564054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewProp_hero,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPlayerHeroResponse",
		Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::PropPointers),
		sizeof(FLootLockerPlayerHeroResponse),
		alignof(FLootLockerPlayerHeroResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGameHeroListResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGameHeroListResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse;
class UScriptStruct* FLootLockerGameHeroListResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGameHeroListResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGameHeroListResponse>()
{
	return FLootLockerGameHeroListResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_game_heroes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_game_heroes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_game_heroes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGameHeroListResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes_Inner = { "game_heroes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerHero, METADATA_PARAMS(0, nullptr) }; // 225629315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes = { "game_heroes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGameHeroListResponse, game_heroes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes_MetaData), Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes_MetaData) }; // 225629315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewProp_game_heroes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGameHeroListResponse",
		Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::PropPointers),
		sizeof(FLootLockerGameHeroListResponse),
		alignof(FLootLockerGameHeroListResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerHeroListResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerHeroListResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse;
class UScriptStruct* FLootLockerHeroListResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroListResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroListResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroListResponse>()
{
	return FLootLockerHeroListResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_heroes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heroes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_heroes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroListResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes_Inner = { "heroes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPlayerHero, METADATA_PARAMS(0, nullptr) }; // 2232564054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes = { "heroes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroListResponse, heroes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes_MetaData) }; // 2232564054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewProp_heroes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerHeroListResponse",
		Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::PropPointers),
		sizeof(FLootLockerHeroListResponse),
		alignof(FLootLockerHeroListResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroListResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest;
class UScriptStruct* FLootLockerCreateHeroRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateHeroRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateHeroRequest>()
{
	return FLootLockerCreateHeroRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_hero_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateHeroRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_hero_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_hero_id = { "hero_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateHeroRequest, hero_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_hero_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_hero_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateHeroRequest, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerCreateHeroRequest*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCreateHeroRequest), &Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_hero_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewProp_is_default,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCreateHeroRequest",
		Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::PropPointers),
		sizeof(FLootLockerCreateHeroRequest),
		alignof(FLootLockerCreateHeroRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest;
class UScriptStruct* FLootLockerCreateHeroWithVariationRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateHeroWithVariationRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateHeroWithVariationRequest>()
{
	return FLootLockerCreateHeroWithVariationRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hero_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_hero_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateHeroWithVariationRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_hero_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_hero_id = { "hero_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateHeroWithVariationRequest, hero_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_hero_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_hero_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateHeroWithVariationRequest, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateHeroWithVariationRequest, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_asset_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerCreateHeroWithVariationRequest*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCreateHeroWithVariationRequest), &Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_hero_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_asset_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewProp_is_default,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCreateHeroWithVariationRequest",
		Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::PropPointers),
		sizeof(FLootLockerCreateHeroWithVariationRequest),
		alignof(FLootLockerCreateHeroWithVariationRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest;
class UScriptStruct* FLootLockerUpdateHeroRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerUpdateHeroRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerUpdateHeroRequest>()
{
	return FLootLockerUpdateHeroRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerUpdateHeroRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUpdateHeroRequest, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerUpdateHeroRequest*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerUpdateHeroRequest), &Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewProp_is_default,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerUpdateHeroRequest",
		Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::PropPointers),
		sizeof(FLootLockerUpdateHeroRequest),
		alignof(FLootLockerUpdateHeroRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout;
class UScriptStruct* FLootLockerHeroLoadout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroLoadout, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroLoadout"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroLoadout>()
{
	return FLootLockerHeroLoadout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mounted_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mounted_at;
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rental;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroLoadout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadout, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadout, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_mounted_at_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_mounted_at = { "mounted_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadout, mounted_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_mounted_at_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_mounted_at_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset_Inner = { "asset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(0, nullptr) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadout, asset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset_MetaData) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_rental_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_rental = { "rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadout, rental), Z_Construct_UScriptStruct_FLootLockerRental, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_rental_MetaData) }; // 2900862204
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_mounted_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewProp_rental,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerHeroLoadout",
		Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::PropPointers),
		sizeof(FLootLockerHeroLoadout),
		alignof(FLootLockerHeroLoadout),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroLoadout()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerHeroLoadoutResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerHeroLoadoutResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse;
class UScriptStruct* FLootLockerHeroLoadoutResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroLoadoutResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroLoadoutResponse>()
{
	return FLootLockerHeroLoadoutResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mounted_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mounted_at;
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rental;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroLoadoutResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadoutResponse, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadoutResponse, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_mounted_at_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_mounted_at = { "mounted_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadoutResponse, mounted_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_mounted_at_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_mounted_at_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset_Inner = { "asset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(0, nullptr) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadoutResponse, asset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset_MetaData) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_rental_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_rental = { "rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroLoadoutResponse, rental), Z_Construct_UScriptStruct_FLootLockerRental, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_rental_MetaData) }; // 2900862204
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_mounted_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewProp_rental,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerHeroLoadoutResponse",
		Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::PropPointers),
		sizeof(FLootLockerHeroLoadoutResponse),
		alignof(FLootLockerHeroLoadoutResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance;
class UScriptStruct* FLootLockerHeroAssetInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroAssetInstance"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroAssetInstance>()
{
	return FLootLockerHeroAssetInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroAssetInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroAssetInstance, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewProp_instance_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewProp_instance_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerHeroAssetInstance",
		Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::PropPointers),
		sizeof(FLootLockerHeroAssetInstance),
		alignof(FLootLockerHeroAssetInstance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset;
class UScriptStruct* FLootLockerHeroGlobalAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroGlobalAsset"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroGlobalAsset>()
{
	return FLootLockerHeroGlobalAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroGlobalAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroGlobalAsset, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewProp_asset_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewProp_asset_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerHeroGlobalAsset",
		Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::PropPointers),
		sizeof(FLootLockerHeroGlobalAsset),
		alignof(FLootLockerHeroGlobalAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerHeroGlobalAssetVariation>() == std::is_polymorphic<FLootLockerHeroGlobalAsset>(), "USTRUCT FLootLockerHeroGlobalAssetVariation cannot be polymorphic unless super FLootLockerHeroGlobalAsset is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation;
class UScriptStruct* FLootLockerHeroGlobalAssetVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerHeroGlobalAssetVariation"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerHeroGlobalAssetVariation>()
{
	return FLootLockerHeroGlobalAssetVariation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_variation_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerHeroGlobalAssetVariation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker | Heroes" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerHeroGlobalAssetVariation, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewProp_asset_variation_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewProp_asset_variation_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset,
		&NewStructOps,
		"LootLockerHeroGlobalAssetVariation",
		Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::PropPointers),
		sizeof(FLootLockerHeroGlobalAssetVariation),
		alignof(FLootLockerHeroGlobalAssetVariation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerHeroBP_Parms
		{
			FLootLockerHeroResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerHeroBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerHeroResponse, METADATA_PARAMS(0, nullptr) }; // 1006333220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerHeroBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerHeroBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerHeroBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerHeroBP_DelegateWrapper(const FScriptDelegate& LootLockerHeroBP, FLootLockerHeroResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerHeroBP_Parms
	{
		FLootLockerHeroResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerHeroBP_Parms Parms;
	Parms.Response=Response;
	LootLockerHeroBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerGameHeroListBP_Parms
		{
			FLootLockerGameHeroListResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerGameHeroListBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse, METADATA_PARAMS(0, nullptr) }; // 65849640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerGameHeroListBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGameHeroListBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGameHeroListBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGameHeroListBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerGameHeroListBP_DelegateWrapper(const FScriptDelegate& LootLockerGameHeroListBP, FLootLockerGameHeroListResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerGameHeroListBP_Parms
	{
		FLootLockerGameHeroListResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerGameHeroListBP_Parms Parms;
	Parms.Response=Response;
	LootLockerGameHeroListBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerHeroListBP_Parms
		{
			FLootLockerHeroListResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerHeroListBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerHeroListResponse, METADATA_PARAMS(0, nullptr) }; // 1179746426
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerHeroListBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerHeroListBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerHeroListBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerHeroListBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerHeroListBP_DelegateWrapper(const FScriptDelegate& LootLockerHeroListBP, FLootLockerHeroListResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerHeroListBP_Parms
	{
		FLootLockerHeroListResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerHeroListBP_Parms Parms;
	Parms.Response=Response;
	LootLockerHeroListBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerPlayerHeroBP_Parms
		{
			FLootLockerPlayerHeroResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerPlayerHeroBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse, METADATA_PARAMS(0, nullptr) }; // 2195608828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerPlayerHeroBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerPlayerHeroBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerPlayerHeroBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerPlayerHeroBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerPlayerHeroBP_DelegateWrapper(const FScriptDelegate& LootLockerPlayerHeroBP, FLootLockerPlayerHeroResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerPlayerHeroBP_Parms
	{
		FLootLockerPlayerHeroResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerPlayerHeroBP_Parms Parms;
	Parms.Response=Response;
	LootLockerPlayerHeroBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLLHeroDefaultResponseBP_Parms
		{
			FLootLockerResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLLHeroDefaultResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 1341814719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LLHeroDefaultResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLLHeroDefaultResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLLHeroDefaultResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LLHeroDefaultResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLLHeroDefaultResponseBP_DelegateWrapper(const FScriptDelegate& LLHeroDefaultResponseBP, FLootLockerResponse Response)
{
	struct _Script_LootLockerSDK_eventLLHeroDefaultResponseBP_Parms
	{
		FLootLockerResponse Response;
	};
	_Script_LootLockerSDK_eventLLHeroDefaultResponseBP_Parms Parms;
	Parms.Response=Response;
	LLHeroDefaultResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventHeroLoadoutReseponseBP_Parms
		{
			FLootLockerHeroLoadoutResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventHeroLoadoutReseponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse, METADATA_PARAMS(0, nullptr) }; // 1195368736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "HeroLoadoutReseponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventHeroLoadoutReseponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventHeroLoadoutReseponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_HeroLoadoutReseponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHeroLoadoutReseponseBP_DelegateWrapper(const FScriptDelegate& HeroLoadoutReseponseBP, FLootLockerHeroLoadoutResponse Response)
{
	struct _Script_LootLockerSDK_eventHeroLoadoutReseponseBP_Parms
	{
		FLootLockerHeroLoadoutResponse Response;
	};
	_Script_LootLockerSDK_eventHeroLoadoutReseponseBP_Parms Parms;
	Parms.Response=Response;
	HeroLoadoutReseponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerHeroRequestHandler::StaticRegisterNativesULootLockerHeroRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerHeroRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerHeroRequestHandler_NoRegister()
	{
		return ULootLockerHeroRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerHeroRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerHeroRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerHeroRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::ClassParams = {
		&ULootLockerHeroRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerHeroRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerHeroRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerHeroRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerHeroRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerHeroRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerHeroRequestHandler>()
	{
		return ULootLockerHeroRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerHeroRequestHandler);
	ULootLockerHeroRequestHandler::~ULootLockerHeroRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerHero::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHero_Statics::NewStructOps, TEXT("LootLockerHero"), &Z_Registration_Info_UScriptStruct_LootLockerHero, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHero), 225629315U) },
		{ FLootLockerPlayerHero::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerHero_Statics::NewStructOps, TEXT("LootLockerPlayerHero"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerHero, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerHero), 2232564054U) },
		{ FLootLockerHeroResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroResponse_Statics::NewStructOps, TEXT("LootLockerHeroResponse"), &Z_Registration_Info_UScriptStruct_LootLockerHeroResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroResponse), 1006333220U) },
		{ FLootLockerPlayerHeroResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerHeroResponse_Statics::NewStructOps, TEXT("LootLockerPlayerHeroResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerHeroResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerHeroResponse), 2195608828U) },
		{ FLootLockerGameHeroListResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGameHeroListResponse_Statics::NewStructOps, TEXT("LootLockerGameHeroListResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGameHeroListResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGameHeroListResponse), 65849640U) },
		{ FLootLockerHeroListResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroListResponse_Statics::NewStructOps, TEXT("LootLockerHeroListResponse"), &Z_Registration_Info_UScriptStruct_LootLockerHeroListResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroListResponse), 1179746426U) },
		{ FLootLockerCreateHeroRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateHeroRequest_Statics::NewStructOps, TEXT("LootLockerCreateHeroRequest"), &Z_Registration_Info_UScriptStruct_LootLockerCreateHeroRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateHeroRequest), 1238331759U) },
		{ FLootLockerCreateHeroWithVariationRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateHeroWithVariationRequest_Statics::NewStructOps, TEXT("LootLockerCreateHeroWithVariationRequest"), &Z_Registration_Info_UScriptStruct_LootLockerCreateHeroWithVariationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateHeroWithVariationRequest), 4076955112U) },
		{ FLootLockerUpdateHeroRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerUpdateHeroRequest_Statics::NewStructOps, TEXT("LootLockerUpdateHeroRequest"), &Z_Registration_Info_UScriptStruct_LootLockerUpdateHeroRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerUpdateHeroRequest), 1749470959U) },
		{ FLootLockerHeroLoadout::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroLoadout_Statics::NewStructOps, TEXT("LootLockerHeroLoadout"), &Z_Registration_Info_UScriptStruct_LootLockerHeroLoadout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroLoadout), 2892231584U) },
		{ FLootLockerHeroLoadoutResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroLoadoutResponse_Statics::NewStructOps, TEXT("LootLockerHeroLoadoutResponse"), &Z_Registration_Info_UScriptStruct_LootLockerHeroLoadoutResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroLoadoutResponse), 1195368736U) },
		{ FLootLockerHeroAssetInstance::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroAssetInstance_Statics::NewStructOps, TEXT("LootLockerHeroAssetInstance"), &Z_Registration_Info_UScriptStruct_LootLockerHeroAssetInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroAssetInstance), 3053021392U) },
		{ FLootLockerHeroGlobalAsset::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroGlobalAsset_Statics::NewStructOps, TEXT("LootLockerHeroGlobalAsset"), &Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroGlobalAsset), 754043550U) },
		{ FLootLockerHeroGlobalAssetVariation::StaticStruct, Z_Construct_UScriptStruct_FLootLockerHeroGlobalAssetVariation_Statics::NewStructOps, TEXT("LootLockerHeroGlobalAssetVariation"), &Z_Registration_Info_UScriptStruct_LootLockerHeroGlobalAssetVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerHeroGlobalAssetVariation), 4139977340U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerHeroRequestHandler, ULootLockerHeroRequestHandler::StaticClass, TEXT("ULootLockerHeroRequestHandler"), &Z_Registration_Info_UClass_ULootLockerHeroRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerHeroRequestHandler), 1393398287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_1198714753(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerHeroRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

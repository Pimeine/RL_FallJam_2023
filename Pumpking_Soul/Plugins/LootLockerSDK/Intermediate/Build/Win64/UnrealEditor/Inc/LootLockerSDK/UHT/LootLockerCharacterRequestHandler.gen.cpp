// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerCharacterRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerCharacterRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCharacterRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCharacterRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacter();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterLoadout();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterRental();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterTypes();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEmptyRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacter;
class UScriptStruct* FLootLockerCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacter, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacter.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacter>()
{
	return FLootLockerCharacter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacter_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ulid_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ulid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacter, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_type_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacter, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacter, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_ulid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_ulid = { "ulid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacter, ulid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_ulid_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_ulid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerCharacter*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCharacter), &Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_ulid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewProp_is_default,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCharacter",
		Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::PropPointers),
		sizeof(FLootLockerCharacter),
		alignof(FLootLockerCharacter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacter()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacter.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset;
class UScriptStruct* FLootLockerCharacterAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacterAsset, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacterAsset"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacterAsset>()
{
	return FLootLockerCharacterAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacterAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterAsset, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewProp_asset_MetaData) }; // 3922991322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewProp_asset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCharacterAsset",
		Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::PropPointers),
		sizeof(FLootLockerCharacterAsset),
		alignof(FLootLockerCharacterAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacterRental;
class UScriptStruct* FLootLockerCharacterRental::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterRental.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacterRental.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacterRental, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacterRental"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacterRental.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacterRental>()
{
	return FLootLockerCharacterRental::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_rental_MetaData[];
#endif
		static void NewProp_is_rental_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_rental;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_left_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_time_left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_active_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_is_active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacterRental>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental_SetBit(void* Obj)
	{
		((FLootLockerCharacterRental*)Obj)->is_rental = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental = { "is_rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCharacterRental), &Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_time_left_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_time_left = { "time_left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterRental, time_left), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_time_left_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_time_left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterRental, duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_duration_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_active_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_active = { "is_active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterRental, is_active), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_active_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_active_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_rental,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_time_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewProp_is_active,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCharacterRental",
		Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::PropPointers),
		sizeof(FLootLockerCharacterRental),
		alignof(FLootLockerCharacterRental),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterRental()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterRental.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacterRental.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacterRental.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout;
class UScriptStruct* FLootLockerCharacterLoadout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacterLoadout"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacterLoadout>()
{
	return FLootLockerCharacterLoadout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacterLoadout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadout, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadout, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_mounted_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_mounted_at = { "mounted_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadout, mounted_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_mounted_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_mounted_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadout, asset), Z_Construct_UScriptStruct_FLootLockerCharacterAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_asset_MetaData) }; // 1038205159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_rental_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_rental = { "rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadout, rental), Z_Construct_UScriptStruct_FLootLockerCharacterRental, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_rental_MetaData) }; // 219030523
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_mounted_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewProp_rental,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCharacterLoadout",
		Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::PropPointers),
		sizeof(FLootLockerCharacterLoadout),
		alignof(FLootLockerCharacterLoadout),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterLoadout()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray;
class UScriptStruct* FLootLockerCharacterLoadoutArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacterLoadoutArray"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacterLoadoutArray>()
{
	return FLootLockerCharacterLoadoutArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_character;
		static const UECodeGen_Private::FStructPropertyParams NewProp_loadout_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadout_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_loadout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacterLoadoutArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_character_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadoutArray, character), Z_Construct_UScriptStruct_FLootLockerCharacter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_character_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_character_MetaData) }; // 2439206066
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout_Inner = { "loadout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCharacterLoadout, METADATA_PARAMS(0, nullptr) }; // 1646525037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout = { "loadout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadoutArray, loadout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout_MetaData) }; // 1646525037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewProp_loadout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCharacterLoadoutArray",
		Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::PropPointers),
		sizeof(FLootLockerCharacterLoadoutArray),
		alignof(FLootLockerCharacterLoadoutArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest;
class UScriptStruct* FLootLockerEmptyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEmptyRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEmptyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEmptyRequest>()
{
	return FLootLockerEmptyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEmptyRequest>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEmptyRequest",
		nullptr,
		0,
		sizeof(FLootLockerEmptyRequest),
		alignof(FLootLockerEmptyRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEmptyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCharacterLoadoutResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerCharacterLoadoutResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse;
class UScriptStruct* FLootLockerCharacterLoadoutResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacterLoadoutResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacterLoadoutResponse>()
{
	return FLootLockerCharacterLoadoutResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_loadouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_loadouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacterLoadoutResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts_Inner = { "loadouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray, METADATA_PARAMS(0, nullptr) }; // 1445432993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts = { "loadouts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterLoadoutResponse, loadouts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts_MetaData) }; // 1445432993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewProp_loadouts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerCharacterLoadoutResponse",
		Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::PropPointers),
		sizeof(FLootLockerCharacterLoadoutResponse),
		alignof(FLootLockerCharacterLoadoutResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest;
class UScriptStruct* FLootLockerUpdateCharacterRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerUpdateCharacterRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerUpdateCharacterRequest>()
{
	return FLootLockerUpdateCharacterRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerUpdateCharacterRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerUpdateCharacterRequest*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerUpdateCharacterRequest), &Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerUpdateCharacterRequest, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_is_default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerUpdateCharacterRequest",
		Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::PropPointers),
		sizeof(FLootLockerUpdateCharacterRequest),
		alignof(FLootLockerUpdateCharacterRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest;
class UScriptStruct* FLootLockerCreateCharacterRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateCharacterRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateCharacterRequest>()
{
	return FLootLockerCreateCharacterRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_type_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_character_type_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateCharacterRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerCreateCharacterRequest*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCreateCharacterRequest), &Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateCharacterRequest, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_character_type_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_character_type_id = { "character_type_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateCharacterRequest, character_type_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_character_type_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_character_type_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_is_default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewProp_character_type_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCreateCharacterRequest",
		Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::PropPointers),
		sizeof(FLootLockerCreateCharacterRequest),
		alignof(FLootLockerCreateCharacterRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem;
class UScriptStruct* FLootLockerListCharacterResponseItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCharacterResponseItem"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCharacterResponseItem>()
{
	return FLootLockerListCharacterResponseItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCharacterResponseItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerListCharacterResponseItem*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerListCharacterResponseItem), &Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCharacterResponseItem, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCharacterResponseItem, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_is_default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerListCharacterResponseItem",
		Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::PropPointers),
		sizeof(FLootLockerListCharacterResponseItem),
		alignof(FLootLockerListCharacterResponseItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest;
class UScriptStruct* FLootLockerEquipAssetToCharacterWithInstanceRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEquipAssetToCharacterWithInstanceRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEquipAssetToCharacterWithInstanceRequest>()
{
	return FLootLockerEquipAssetToCharacterWithInstanceRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEquipAssetToCharacterWithInstanceRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEquipAssetToCharacterWithInstanceRequest, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewProp_instance_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewProp_instance_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEquipAssetToCharacterWithInstanceRequest",
		Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::PropPointers),
		sizeof(FLootLockerEquipAssetToCharacterWithInstanceRequest),
		alignof(FLootLockerEquipAssetToCharacterWithInstanceRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest;
class UScriptStruct* FLootLockerEquipUniversalAssetToCharacterRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEquipUniversalAssetToCharacterRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEquipUniversalAssetToCharacterRequest>()
{
	return FLootLockerEquipUniversalAssetToCharacterRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEquipUniversalAssetToCharacterRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEquipUniversalAssetToCharacterRequest, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_variation_id = { "asset_variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEquipUniversalAssetToCharacterRequest, asset_variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_variation_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewProp_asset_variation_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEquipUniversalAssetToCharacterRequest",
		Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::PropPointers),
		sizeof(FLootLockerEquipUniversalAssetToCharacterRequest),
		alignof(FLootLockerEquipUniversalAssetToCharacterRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCharacterTypes>() == std::is_polymorphic<FLootLockerHasKeyValueStorage>(), "USTRUCT FLootLockerCharacterTypes cannot be polymorphic unless super FLootLockerHasKeyValueStorage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes;
class UScriptStruct* FLootLockerCharacterTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCharacterTypes, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCharacterTypes"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCharacterTypes>()
{
	return FLootLockerCharacterTypes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_default_MetaData[];
#endif
		static void NewProp_is_default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCharacterTypes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterTypes, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default_SetBit(void* Obj)
	{
		((FLootLockerCharacterTypes*)Obj)->is_default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default = { "is_default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCharacterTypes), &Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCharacterTypes, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_is_default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerHasKeyValueStorage,
		&NewStructOps,
		"LootLockerCharacterTypes",
		Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::PropPointers),
		sizeof(FLootLockerCharacterTypes),
		alignof(FLootLockerCharacterTypes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCharacterTypes()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListCharacterTypesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListCharacterTypesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse;
class UScriptStruct* FLootLockerListCharacterTypesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCharacterTypesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCharacterTypesResponse>()
{
	return FLootLockerListCharacterTypesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_character_types_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_types_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_character_types;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCharacterTypesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types_Inner = { "character_types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCharacterTypes, METADATA_PARAMS(0, nullptr) }; // 1813770122
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types = { "character_types", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCharacterTypesResponse, character_types), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types_MetaData), Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types_MetaData) }; // 1813770122
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewProp_character_types,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListCharacterTypesResponse",
		Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::PropPointers),
		sizeof(FLootLockerListCharacterTypesResponse),
		alignof(FLootLockerListCharacterTypesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListPlayerCharactersResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListPlayerCharactersResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse;
class UScriptStruct* FLootLockerListPlayerCharactersResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListPlayerCharactersResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListPlayerCharactersResponse>()
{
	return FLootLockerListPlayerCharactersResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListPlayerCharactersResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem, METADATA_PARAMS(0, nullptr) }; // 807612072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListPlayerCharactersResponse, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items_MetaData) }; // 807612072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewProp_items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListPlayerCharactersResponse",
		Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::PropPointers),
		sizeof(FLootLockerListPlayerCharactersResponse),
		alignof(FLootLockerListPlayerCharactersResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPCharacterLoadoutResponseBP_Parms
		{
			FLootLockerCharacterLoadoutResponse Var;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPCharacterLoadoutResponseBP_Parms, Var), Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse, METADATA_PARAMS(0, nullptr) }; // 2221865555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::NewProp_Var,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PCharacterLoadoutResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPCharacterLoadoutResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPCharacterLoadoutResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterLoadoutResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPCharacterLoadoutResponseBP_DelegateWrapper(const FScriptDelegate& PCharacterLoadoutResponseBP, FLootLockerCharacterLoadoutResponse Var)
{
	struct _Script_LootLockerSDK_eventPCharacterLoadoutResponseBP_Parms
	{
		FLootLockerCharacterLoadoutResponse Var;
	};
	_Script_LootLockerSDK_eventPCharacterLoadoutResponseBP_Parms Parms;
	Parms.Var=Var;
	PCharacterLoadoutResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPCharacterDefaultResponseBP_Parms
		{
			FLootLockerResponse Var;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPCharacterDefaultResponseBP_Parms, Var), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 1341814719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::NewProp_Var,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PCharacterDefaultResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPCharacterDefaultResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPCharacterDefaultResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PCharacterDefaultResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPCharacterDefaultResponseBP_DelegateWrapper(const FScriptDelegate& PCharacterDefaultResponseBP, FLootLockerResponse Var)
{
	struct _Script_LootLockerSDK_eventPCharacterDefaultResponseBP_Parms
	{
		FLootLockerResponse Var;
	};
	_Script_LootLockerSDK_eventPCharacterDefaultResponseBP_Parms Parms;
	Parms.Var=Var;
	PCharacterDefaultResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPLootLockerListCharacterTypesResponseBP_Parms
		{
			FLootLockerListCharacterTypesResponse Var;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPLootLockerListCharacterTypesResponseBP_Parms, Var), Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse, METADATA_PARAMS(0, nullptr) }; // 2488505413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::NewProp_Var,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PLootLockerListCharacterTypesResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPLootLockerListCharacterTypesResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPLootLockerListCharacterTypesResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListCharacterTypesResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPLootLockerListCharacterTypesResponseBP_DelegateWrapper(const FScriptDelegate& PLootLockerListCharacterTypesResponseBP, FLootLockerListCharacterTypesResponse Var)
{
	struct _Script_LootLockerSDK_eventPLootLockerListCharacterTypesResponseBP_Parms
	{
		FLootLockerListCharacterTypesResponse Var;
	};
	_Script_LootLockerSDK_eventPLootLockerListCharacterTypesResponseBP_Parms Parms;
	Parms.Var=Var;
	PLootLockerListCharacterTypesResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPLootLockerListPlayerCharactersResponseBP_Parms
		{
			FLootLockerListPlayerCharactersResponse Var;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPLootLockerListPlayerCharactersResponseBP_Parms, Var), Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse, METADATA_PARAMS(0, nullptr) }; // 1669023567
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::NewProp_Var,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PLootLockerListPlayerCharactersResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPLootLockerListPlayerCharactersResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPLootLockerListPlayerCharactersResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PLootLockerListPlayerCharactersResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPLootLockerListPlayerCharactersResponseBP_DelegateWrapper(const FScriptDelegate& PLootLockerListPlayerCharactersResponseBP, FLootLockerListPlayerCharactersResponse Var)
{
	struct _Script_LootLockerSDK_eventPLootLockerListPlayerCharactersResponseBP_Parms
	{
		FLootLockerListPlayerCharactersResponse Var;
	};
	_Script_LootLockerSDK_eventPLootLockerListPlayerCharactersResponseBP_Parms Parms;
	Parms.Var=Var;
	PLootLockerListPlayerCharactersResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerCharacterRequestHandler::StaticRegisterNativesULootLockerCharacterRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerCharacterRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerCharacterRequestHandler_NoRegister()
	{
		return ULootLockerCharacterRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerCharacterRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCharacterRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerCharacterRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::ClassParams = {
		&ULootLockerCharacterRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerCharacterRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerCharacterRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerCharacterRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerCharacterRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerCharacterRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerCharacterRequestHandler>()
	{
		return ULootLockerCharacterRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerCharacterRequestHandler);
	ULootLockerCharacterRequestHandler::~ULootLockerCharacterRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerCharacter::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacter_Statics::NewStructOps, TEXT("LootLockerCharacter"), &Z_Registration_Info_UScriptStruct_LootLockerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacter), 2439206066U) },
		{ FLootLockerCharacterAsset::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacterAsset_Statics::NewStructOps, TEXT("LootLockerCharacterAsset"), &Z_Registration_Info_UScriptStruct_LootLockerCharacterAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacterAsset), 1038205159U) },
		{ FLootLockerCharacterRental::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacterRental_Statics::NewStructOps, TEXT("LootLockerCharacterRental"), &Z_Registration_Info_UScriptStruct_LootLockerCharacterRental, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacterRental), 219030523U) },
		{ FLootLockerCharacterLoadout::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacterLoadout_Statics::NewStructOps, TEXT("LootLockerCharacterLoadout"), &Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacterLoadout), 1646525037U) },
		{ FLootLockerCharacterLoadoutArray::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutArray_Statics::NewStructOps, TEXT("LootLockerCharacterLoadoutArray"), &Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacterLoadoutArray), 1445432993U) },
		{ FLootLockerEmptyRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEmptyRequest_Statics::NewStructOps, TEXT("LootLockerEmptyRequest"), &Z_Registration_Info_UScriptStruct_LootLockerEmptyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEmptyRequest), 2970111631U) },
		{ FLootLockerCharacterLoadoutResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacterLoadoutResponse_Statics::NewStructOps, TEXT("LootLockerCharacterLoadoutResponse"), &Z_Registration_Info_UScriptStruct_LootLockerCharacterLoadoutResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacterLoadoutResponse), 2221865555U) },
		{ FLootLockerUpdateCharacterRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerUpdateCharacterRequest_Statics::NewStructOps, TEXT("LootLockerUpdateCharacterRequest"), &Z_Registration_Info_UScriptStruct_LootLockerUpdateCharacterRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerUpdateCharacterRequest), 3661078104U) },
		{ FLootLockerCreateCharacterRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateCharacterRequest_Statics::NewStructOps, TEXT("LootLockerCreateCharacterRequest"), &Z_Registration_Info_UScriptStruct_LootLockerCreateCharacterRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateCharacterRequest), 732591254U) },
		{ FLootLockerListCharacterResponseItem::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCharacterResponseItem_Statics::NewStructOps, TEXT("LootLockerListCharacterResponseItem"), &Z_Registration_Info_UScriptStruct_LootLockerListCharacterResponseItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCharacterResponseItem), 807612072U) },
		{ FLootLockerEquipAssetToCharacterWithInstanceRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEquipAssetToCharacterWithInstanceRequest_Statics::NewStructOps, TEXT("LootLockerEquipAssetToCharacterWithInstanceRequest"), &Z_Registration_Info_UScriptStruct_LootLockerEquipAssetToCharacterWithInstanceRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEquipAssetToCharacterWithInstanceRequest), 3673457338U) },
		{ FLootLockerEquipUniversalAssetToCharacterRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEquipUniversalAssetToCharacterRequest_Statics::NewStructOps, TEXT("LootLockerEquipUniversalAssetToCharacterRequest"), &Z_Registration_Info_UScriptStruct_LootLockerEquipUniversalAssetToCharacterRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEquipUniversalAssetToCharacterRequest), 2662869263U) },
		{ FLootLockerCharacterTypes::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCharacterTypes_Statics::NewStructOps, TEXT("LootLockerCharacterTypes"), &Z_Registration_Info_UScriptStruct_LootLockerCharacterTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCharacterTypes), 1813770122U) },
		{ FLootLockerListCharacterTypesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCharacterTypesResponse_Statics::NewStructOps, TEXT("LootLockerListCharacterTypesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListCharacterTypesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCharacterTypesResponse), 2488505413U) },
		{ FLootLockerListPlayerCharactersResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListPlayerCharactersResponse_Statics::NewStructOps, TEXT("LootLockerListPlayerCharactersResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListPlayerCharactersResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListPlayerCharactersResponse), 1669023567U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerCharacterRequestHandler, ULootLockerCharacterRequestHandler::StaticClass, TEXT("ULootLockerCharacterRequestHandler"), &Z_Registration_Info_UClass_ULootLockerCharacterRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerCharacterRequestHandler), 3277549839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_4027350035(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCharacterRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

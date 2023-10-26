// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerMapsRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerMapsRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMapsRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMapsRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetMapsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMap();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMapCamera();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMapCamera;
class UScriptStruct* FLootLockerMapCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMapCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMapCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMapCamera, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMapCamera"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMapCamera.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMapCamera>()
{
	return FLootLockerMapCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMapCamera>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_position_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMapCamera, position), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_position_MetaData), Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMapCamera, rotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_rotation_MetaData), Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_rotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewProp_rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMapCamera",
		Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::PropPointers),
		sizeof(FLootLockerMapCamera),
		alignof(FLootLockerMapCamera),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMapCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMapCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMapCamera.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMapCamera.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint;
class UScriptStruct* FLootLockerMapSpawnPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMapSpawnPoint"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMapSpawnPoint>()
{
	return FLootLockerMapSpawnPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_cameras_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameras_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_access_MetaData[];
#endif
		static void NewProp_player_access_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_player_access;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMapSpawnPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMapSpawnPoint, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_position_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMapSpawnPoint, position), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_position_MetaData), Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMapSpawnPoint, rotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_rotation_MetaData), Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_rotation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras_Inner = { "cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMapCamera, METADATA_PARAMS(0, nullptr) }; // 1250220247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras = { "cameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMapSpawnPoint, cameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras_MetaData), Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras_MetaData) }; // 1250220247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access_SetBit(void* Obj)
	{
		((FLootLockerMapSpawnPoint*)Obj)->player_access = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access = { "player_access", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerMapSpawnPoint), &Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access_MetaData), Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_cameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewProp_player_access,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMapSpawnPoint",
		Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::PropPointers),
		sizeof(FLootLockerMapSpawnPoint),
		alignof(FLootLockerMapSpawnPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMap;
class UScriptStruct* FLootLockerMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMap, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMap"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMap.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMap>()
{
	return FLootLockerMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_map_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_map_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_spawn_points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawn_points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spawn_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_access_MetaData[];
#endif
		static void NewProp_player_access_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_player_access;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_map_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_map_id = { "map_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMap, map_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_map_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_map_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMap, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_asset_id_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points_Inner = { "spawn_points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint, METADATA_PARAMS(0, nullptr) }; // 1716200379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points = { "spawn_points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMap, spawn_points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points_MetaData), Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points_MetaData) }; // 1716200379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access_SetBit(void* Obj)
	{
		((FLootLockerMap*)Obj)->player_access = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access = { "player_access", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerMap), &Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access_MetaData), Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_map_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_spawn_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewProp_player_access,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMap",
		Z_Construct_UScriptStruct_FLootLockerMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::PropPointers),
		sizeof(FLootLockerMap),
		alignof(FLootLockerMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMap()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMap.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMap.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetMapsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetMapsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse;
class UScriptStruct* FLootLockerGetMapsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetMapsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetMapsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetMapsResponse>()
{
	return FLootLockerGetMapsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_maps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_maps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetMapsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps_Inner = { "maps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMap, METADATA_PARAMS(0, nullptr) }; // 1880091817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps = { "maps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetMapsResponse, maps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps_MetaData), Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps_MetaData) }; // 1880091817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewProp_maps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetMapsResponse",
		Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::PropPointers),
		sizeof(FLootLockerGetMapsResponse),
		alignof(FLootLockerGetMapsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetMapsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventGetMapsResponseDelegateBP_Parms
		{
			FLootLockerGetMapsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventGetMapsResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGetMapsResponse, METADATA_PARAMS(0, nullptr) }; // 2868795374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "GetMapsResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventGetMapsResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventGetMapsResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_GetMapsResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetMapsResponseDelegateBP_DelegateWrapper(const FScriptDelegate& GetMapsResponseDelegateBP, FLootLockerGetMapsResponse Response)
{
	struct _Script_LootLockerSDK_eventGetMapsResponseDelegateBP_Parms
	{
		FLootLockerGetMapsResponse Response;
	};
	_Script_LootLockerSDK_eventGetMapsResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	GetMapsResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerMapsRequestHandler::StaticRegisterNativesULootLockerMapsRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerMapsRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerMapsRequestHandler_NoRegister()
	{
		return ULootLockerMapsRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerMapsRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMapsRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerMapsRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::ClassParams = {
		&ULootLockerMapsRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerMapsRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerMapsRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerMapsRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerMapsRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerMapsRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerMapsRequestHandler>()
	{
		return ULootLockerMapsRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerMapsRequestHandler);
	ULootLockerMapsRequestHandler::~ULootLockerMapsRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerMapCamera::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMapCamera_Statics::NewStructOps, TEXT("LootLockerMapCamera"), &Z_Registration_Info_UScriptStruct_LootLockerMapCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMapCamera), 1250220247U) },
		{ FLootLockerMapSpawnPoint::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMapSpawnPoint_Statics::NewStructOps, TEXT("LootLockerMapSpawnPoint"), &Z_Registration_Info_UScriptStruct_LootLockerMapSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMapSpawnPoint), 1716200379U) },
		{ FLootLockerMap::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMap_Statics::NewStructOps, TEXT("LootLockerMap"), &Z_Registration_Info_UScriptStruct_LootLockerMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMap), 1880091817U) },
		{ FLootLockerGetMapsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetMapsResponse_Statics::NewStructOps, TEXT("LootLockerGetMapsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetMapsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetMapsResponse), 2868795374U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerMapsRequestHandler, ULootLockerMapsRequestHandler::StaticClass, TEXT("ULootLockerMapsRequestHandler"), &Z_Registration_Info_UClass_ULootLockerMapsRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerMapsRequestHandler), 1601101532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_2417198956(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMapsRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

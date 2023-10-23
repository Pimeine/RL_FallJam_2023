// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerMissionsRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerMissionsRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMissionsRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMissionsRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCheckpointTime();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinishMissionData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMission();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionGoal();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerStartMissionResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset;
class UScriptStruct* FLootLockerMissionGoalAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMissionGoalAsset"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMissionGoalAsset>()
{
	return FLootLockerMissionGoalAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMissionGoalAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionGoalAsset, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_assets_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionGoalAsset, assets), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_assets_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_assets_MetaData) }; // 3922991322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewProp_assets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMissionGoalAsset",
		Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::PropPointers),
		sizeof(FLootLockerMissionGoalAsset),
		alignof(FLootLockerMissionGoalAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMissionGoal;
class UScriptStruct* FLootLockerMissionGoal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMissionGoal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMissionGoal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMissionGoal, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMissionGoal"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMissionGoal.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMissionGoal>()
{
	return FLootLockerMissionGoal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_goal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_goal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMissionGoal>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_goal_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_goal = { "goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionGoal, goal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_goal_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_goal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_points_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionGoal, points), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_points_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_points_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets_Inner = { "assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset, METADATA_PARAMS(0, nullptr) }; // 1470568860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionGoal, assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets_MetaData) }; // 1470568860
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_goal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewProp_assets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMissionGoal",
		Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::PropPointers),
		sizeof(FLootLockerMissionGoal),
		alignof(FLootLockerMissionGoal),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionGoal()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMissionGoal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMissionGoal.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMissionGoal.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint;
class UScriptStruct* FLootLockerMissionCheckpoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMissionCheckpoint"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMissionCheckpoint>()
{
	return FLootLockerMissionCheckpoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_time;
		static const UECodeGen_Private::FStrPropertyParams NewProp_parameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMissionCheckpoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_index_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionCheckpoint, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_index_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_time_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionCheckpoint, time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_time_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_time_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_ValueProp = { "parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_Key_KeyProp = { "parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters = { "parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionCheckpoint, parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewProp_parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMissionCheckpoint",
		Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::PropPointers),
		sizeof(FLootLockerMissionCheckpoint),
		alignof(FLootLockerMissionCheckpoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMission;
class UScriptStruct* FLootLockerMission::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMission.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMission.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMission, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMission"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMission.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMission>()
{
	return FLootLockerMission::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMission_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mission_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mission_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_map_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_map_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rounds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_round_length_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_round_length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_difficulty_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_difficulty_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_difficulty_multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_difficulty_multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_difficulty_color_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_difficulty_color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_difficulty_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_difficulty_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_goals_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_goals_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_goals_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_goals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_checkpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checkpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_checkpoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_access_MetaData[];
#endif
		static void NewProp_player_access_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_player_access;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_best_goal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_best_goal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMission>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_mission_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_mission_id = { "mission_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, mission_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_mission_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_mission_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_map_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_map_id = { "map_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, map_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_map_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_map_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_type_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_rounds_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_rounds = { "rounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, rounds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_rounds_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_rounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_round_length_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_round_length = { "round_length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, round_length), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_round_length_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_round_length_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_name = { "difficulty_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, difficulty_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_name_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_multiplier_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_multiplier = { "difficulty_multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, difficulty_multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_multiplier_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_multiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_color_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_color = { "difficulty_color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, difficulty_color), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_color_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_id = { "difficulty_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, difficulty_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_id_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_ValueProp = { "goals", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLootLockerMissionGoal, METADATA_PARAMS(0, nullptr) }; // 2126740200
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_Key_KeyProp = { "goals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals = { "goals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, goals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_MetaData) }; // 2126740200
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints_Inner = { "checkpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint, METADATA_PARAMS(0, nullptr) }; // 3465409228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints = { "checkpoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, checkpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints_MetaData) }; // 3465409228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access_SetBit(void* Obj)
	{
		((FLootLockerMission*)Obj)->player_access = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access = { "player_access", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerMission), &Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_best_goal_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_best_goal = { "best_goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMission, best_goal), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_best_goal_MetaData), Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_best_goal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMission_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_mission_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_map_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_rounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_round_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_difficulty_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_goals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_checkpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_player_access,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewProp_best_goal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMission_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMission",
		Z_Construct_UScriptStruct_FLootLockerMission_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::PropPointers),
		sizeof(FLootLockerMission),
		alignof(FLootLockerMission),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMission_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMission_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMission()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMission.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMission.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMission_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMission.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime;
class UScriptStruct* FLootLockerCheckpointTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCheckpointTime, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCheckpointTime"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCheckpointTime>()
{
	return FLootLockerCheckpointTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCheckpointTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_index_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCheckpointTime, index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_index_MetaData), Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_time_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCheckpointTime, time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_time_MetaData), Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewProp_time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCheckpointTime",
		Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::PropPointers),
		sizeof(FLootLockerCheckpointTime),
		alignof(FLootLockerCheckpointTime),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCheckpointTime()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload;
class UScriptStruct* FLootLockerFinishMissionPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFinishMissionPayload"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFinishMissionPayload>()
{
	return FLootLockerFinishMissionPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finish_time_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_finish_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finish_score_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_finish_score;
		static const UECodeGen_Private::FStructPropertyParams NewProp_checkpoint_times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checkpoint_times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_checkpoint_times;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFinishMissionPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_time_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_time = { "finish_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinishMissionPayload, finish_time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_time_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_score = { "finish_score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinishMissionPayload, finish_score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_score_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_score_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times_Inner = { "checkpoint_times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCheckpointTime, METADATA_PARAMS(0, nullptr) }; // 163325463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times = { "checkpoint_times", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinishMissionPayload, checkpoint_times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times_MetaData) }; // 163325463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_finish_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewProp_checkpoint_times,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFinishMissionPayload",
		Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::PropPointers),
		sizeof(FLootLockerFinishMissionPayload),
		alignof(FLootLockerFinishMissionPayload),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData;
class UScriptStruct* FLootLockerFinishMissionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFinishMissionData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFinishMissionData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFinishMissionData>()
{
	return FLootLockerFinishMissionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_signature_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_signature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFinishMissionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_signature_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_signature = { "signature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinishMissionData, signature), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_signature_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_signature_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_payload_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinishMissionData, payload), Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_payload_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_payload_MetaData) }; // 1454592093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_signature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewProp_payload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFinishMissionData",
		Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::PropPointers),
		sizeof(FLootLockerFinishMissionData),
		alignof(FLootLockerFinishMissionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinishMissionData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerMissionsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerMissionsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse;
class UScriptStruct* FLootLockerMissionsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMissionsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMissionsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMissionsResponse>()
{
	return FLootLockerMissionsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_missions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_missions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_missions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMissionsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions_Inner = { "missions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMission, METADATA_PARAMS(0, nullptr) }; // 416939237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions = { "missions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionsResponse, missions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions_MetaData) }; // 416939237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewProp_missions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerMissionsResponse",
		Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::PropPointers),
		sizeof(FLootLockerMissionsResponse),
		alignof(FLootLockerMissionsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerMissionResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerMissionResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMissionResponse;
class UScriptStruct* FLootLockerMissionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMissionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMissionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMissionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMissionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMissionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMissionResponse>()
{
	return FLootLockerMissionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mission_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mission;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMissionResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewProp_mission_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewProp_mission = { "mission", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMissionResponse, mission), Z_Construct_UScriptStruct_FLootLockerMission, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewProp_mission_MetaData), Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewProp_mission_MetaData) }; // 416939237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewProp_mission,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerMissionResponse",
		Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::PropPointers),
		sizeof(FLootLockerMissionResponse),
		alignof(FLootLockerMissionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMissionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMissionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMissionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMissionResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerStartMissionResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerStartMissionResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse;
class UScriptStruct* FLootLockerStartMissionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerStartMissionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerStartMissionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerStartMissionResponse>()
{
	return FLootLockerStartMissionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_signature_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_signature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerStartMissionResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewProp_signature_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewProp_signature = { "signature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerStartMissionResponse, signature), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewProp_signature_MetaData), Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewProp_signature_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewProp_signature,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerStartMissionResponse",
		Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::PropPointers),
		sizeof(FLootLockerStartMissionResponse),
		alignof(FLootLockerStartMissionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerStartMissionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerFinishMissionResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerFinishMissionResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse;
class UScriptStruct* FLootLockerFinishMissionResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFinishMissionResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFinishMissionResponse>()
{
	return FLootLockerFinishMissionResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_check_grant_notifications_MetaData[];
#endif
		static void NewProp_check_grant_notifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_check_grant_notifications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFinishMissionResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_score_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFinishMissionResponse, score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_score_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications_SetBit(void* Obj)
	{
		((FLootLockerFinishMissionResponse*)Obj)->check_grant_notifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications = { "check_grant_notifications", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerFinishMissionResponse), &Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications_MetaData), Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewProp_check_grant_notifications,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerFinishMissionResponse",
		Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::PropPointers),
		sizeof(FLootLockerFinishMissionResponse),
		alignof(FLootLockerFinishMissionResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventMissionsResponseDelegateBP_Parms
		{
			FLootLockerMissionsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventMissionsResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerMissionsResponse, METADATA_PARAMS(0, nullptr) }; // 1451723470
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "MissionsResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventMissionsResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventMissionsResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_MissionsResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMissionsResponseDelegateBP_DelegateWrapper(const FScriptDelegate& MissionsResponseDelegateBP, FLootLockerMissionsResponse Response)
{
	struct _Script_LootLockerSDK_eventMissionsResponseDelegateBP_Parms
	{
		FLootLockerMissionsResponse Response;
	};
	_Script_LootLockerSDK_eventMissionsResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	MissionsResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventMissionResponseDelegateBP_Parms
		{
			FLootLockerMissionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventMissionResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerMissionResponse, METADATA_PARAMS(0, nullptr) }; // 446962545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "MissionResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventMissionResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventMissionResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_MissionResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMissionResponseDelegateBP_DelegateWrapper(const FScriptDelegate& MissionResponseDelegateBP, FLootLockerMissionResponse Response)
{
	struct _Script_LootLockerSDK_eventMissionResponseDelegateBP_Parms
	{
		FLootLockerMissionResponse Response;
	};
	_Script_LootLockerSDK_eventMissionResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	MissionResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventStartMissionResponseDelegateBP_Parms
		{
			FLootLockerStartMissionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventStartMissionResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerStartMissionResponse, METADATA_PARAMS(0, nullptr) }; // 265681824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "StartMissionResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventStartMissionResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventStartMissionResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_StartMissionResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStartMissionResponseDelegateBP_DelegateWrapper(const FScriptDelegate& StartMissionResponseDelegateBP, FLootLockerStartMissionResponse Response)
{
	struct _Script_LootLockerSDK_eventStartMissionResponseDelegateBP_Parms
	{
		FLootLockerStartMissionResponse Response;
	};
	_Script_LootLockerSDK_eventStartMissionResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	StartMissionResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventFinishMissionResponseDelegateBP_Parms
		{
			FLootLockerFinishMissionResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventFinishMissionResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse, METADATA_PARAMS(0, nullptr) }; // 1591576752
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "FinishMissionResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventFinishMissionResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventFinishMissionResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_FinishMissionResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFinishMissionResponseDelegateBP_DelegateWrapper(const FScriptDelegate& FinishMissionResponseDelegateBP, FLootLockerFinishMissionResponse Response)
{
	struct _Script_LootLockerSDK_eventFinishMissionResponseDelegateBP_Parms
	{
		FLootLockerFinishMissionResponse Response;
	};
	_Script_LootLockerSDK_eventFinishMissionResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	FinishMissionResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerMissionsRequestHandler::StaticRegisterNativesULootLockerMissionsRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerMissionsRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerMissionsRequestHandler_NoRegister()
	{
		return ULootLockerMissionsRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerMissionsRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMissionsRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerMissionsRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::ClassParams = {
		&ULootLockerMissionsRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerMissionsRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerMissionsRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerMissionsRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerMissionsRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerMissionsRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerMissionsRequestHandler>()
	{
		return ULootLockerMissionsRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerMissionsRequestHandler);
	ULootLockerMissionsRequestHandler::~ULootLockerMissionsRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerMissionGoalAsset::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMissionGoalAsset_Statics::NewStructOps, TEXT("LootLockerMissionGoalAsset"), &Z_Registration_Info_UScriptStruct_LootLockerMissionGoalAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMissionGoalAsset), 1470568860U) },
		{ FLootLockerMissionGoal::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMissionGoal_Statics::NewStructOps, TEXT("LootLockerMissionGoal"), &Z_Registration_Info_UScriptStruct_LootLockerMissionGoal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMissionGoal), 2126740200U) },
		{ FLootLockerMissionCheckpoint::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMissionCheckpoint_Statics::NewStructOps, TEXT("LootLockerMissionCheckpoint"), &Z_Registration_Info_UScriptStruct_LootLockerMissionCheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMissionCheckpoint), 3465409228U) },
		{ FLootLockerMission::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMission_Statics::NewStructOps, TEXT("LootLockerMission"), &Z_Registration_Info_UScriptStruct_LootLockerMission, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMission), 416939237U) },
		{ FLootLockerCheckpointTime::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCheckpointTime_Statics::NewStructOps, TEXT("LootLockerCheckpointTime"), &Z_Registration_Info_UScriptStruct_LootLockerCheckpointTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCheckpointTime), 163325463U) },
		{ FLootLockerFinishMissionPayload::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFinishMissionPayload_Statics::NewStructOps, TEXT("LootLockerFinishMissionPayload"), &Z_Registration_Info_UScriptStruct_LootLockerFinishMissionPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFinishMissionPayload), 1454592093U) },
		{ FLootLockerFinishMissionData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFinishMissionData_Statics::NewStructOps, TEXT("LootLockerFinishMissionData"), &Z_Registration_Info_UScriptStruct_LootLockerFinishMissionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFinishMissionData), 2187649445U) },
		{ FLootLockerMissionsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMissionsResponse_Statics::NewStructOps, TEXT("LootLockerMissionsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerMissionsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMissionsResponse), 1451723470U) },
		{ FLootLockerMissionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMissionResponse_Statics::NewStructOps, TEXT("LootLockerMissionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerMissionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMissionResponse), 446962545U) },
		{ FLootLockerStartMissionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerStartMissionResponse_Statics::NewStructOps, TEXT("LootLockerStartMissionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerStartMissionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerStartMissionResponse), 265681824U) },
		{ FLootLockerFinishMissionResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFinishMissionResponse_Statics::NewStructOps, TEXT("LootLockerFinishMissionResponse"), &Z_Registration_Info_UScriptStruct_LootLockerFinishMissionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFinishMissionResponse), 1591576752U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerMissionsRequestHandler, ULootLockerMissionsRequestHandler::StaticClass, TEXT("ULootLockerMissionsRequestHandler"), &Z_Registration_Info_UClass_ULootLockerMissionsRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerMissionsRequestHandler), 3857810269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_2269413874(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMissionsRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

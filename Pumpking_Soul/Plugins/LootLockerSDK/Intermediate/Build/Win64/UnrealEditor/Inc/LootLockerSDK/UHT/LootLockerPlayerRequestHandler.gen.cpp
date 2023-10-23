// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPlayerRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAssetsRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAuthenticationRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPlayerRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPlayerRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPlayerRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAsset();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBalanceResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDlcResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInventory();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInventoryResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerLevelThresholds();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerNameResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerObjects();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlatformIds();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerLevel();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRental();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerXp();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References

static_assert(std::is_polymorphic<FLootLockerBalanceResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerBalanceResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse;
class UScriptStruct* FLootLockerBalanceResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerBalanceResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerBalanceResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerBalanceResponse>()
{
	return FLootLockerBalanceResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_balance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_balance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerBalanceResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewProp_balance_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewProp_balance = { "balance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBalanceResponse, balance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewProp_balance_MetaData), Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewProp_balance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewProp_balance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerBalanceResponse",
		Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::PropPointers),
		sizeof(FLootLockerBalanceResponse),
		alignof(FLootLockerBalanceResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBalanceResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerDlcResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerDlcResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerDlcResponse;
class UScriptStruct* FLootLockerDlcResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerDlcResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerDlcResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerDlcResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerDlcResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerDlcResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerDlcResponse>()
{
	return FLootLockerDlcResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_dlcs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dlcs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_dlcs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerDlcResponse>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs_Inner = { "dlcs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs = { "dlcs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDlcResponse, dlcs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs_MetaData), Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewProp_dlcs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerDlcResponse",
		Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::PropPointers),
		sizeof(FLootLockerDlcResponse),
		alignof(FLootLockerDlcResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDlcResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerDlcResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerDlcResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerDlcResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPlayerInfoResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPlayerInfoResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse;
class UScriptStruct* FLootLockerPlayerInfoResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerInfoResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerInfoResponse>()
{
	return FLootLockerPlayerInfoResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_account_balance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_account_balance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_xp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ulid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ulid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_thresholds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_level_thresholds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerInfoResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_account_balance_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_account_balance = { "account_balance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerInfoResponse, account_balance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_account_balance_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_account_balance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_xp_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_xp = { "xp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerInfoResponse, xp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_xp_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_xp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerInfoResponse, level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_ulid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_ulid = { "ulid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerInfoResponse, ulid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_ulid_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_ulid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_thresholds_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_thresholds = { "level_thresholds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerInfoResponse, level_thresholds), Z_Construct_UScriptStruct_FLootLockerLevelThresholds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_thresholds_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_thresholds_MetaData) }; // 3134229386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_account_balance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_xp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_ulid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewProp_level_thresholds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPlayerInfoResponse",
		Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::PropPointers),
		sizeof(FLootLockerPlayerInfoResponse),
		alignof(FLootLockerPlayerInfoResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerOtherPlayersXpAndLevelResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerOtherPlayersXpAndLevelResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse;
class UScriptStruct* FLootLockerOtherPlayersXpAndLevelResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerOtherPlayersXpAndLevelResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerOtherPlayersXpAndLevelResponse>()
{
	return FLootLockerOtherPlayersXpAndLevelResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_xp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerOtherPlayersXpAndLevelResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_xp_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_xp = { "xp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerOtherPlayersXpAndLevelResponse, xp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_xp_MetaData), Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_xp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_level_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerOtherPlayersXpAndLevelResponse, level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_level_MetaData), Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_xp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewProp_level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerOtherPlayersXpAndLevelResponse",
		Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::PropPointers),
		sizeof(FLootLockerOtherPlayersXpAndLevelResponse),
		alignof(FLootLockerOtherPlayersXpAndLevelResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerRental;
class UScriptStruct* FLootLockerRental::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerRental.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerRental.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerRental, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerRental"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerRental.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerRental>()
{
	return FLootLockerRental::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerRental_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRental_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerRental>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental_SetBit(void* Obj)
	{
		((FLootLockerRental*)Obj)->is_rental = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental = { "is_rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerRental), &Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_time_left_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_time_left = { "time_left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRental, time_left), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_time_left_MetaData), Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_time_left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_duration_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRental, duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_duration_MetaData), Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_active_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_active = { "is_active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerRental, is_active), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_active_MetaData), Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_active_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerRental_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_rental,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_time_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewProp_is_active,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerRental_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerRental",
		Z_Construct_UScriptStruct_FLootLockerRental_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::PropPointers),
		sizeof(FLootLockerRental),
		alignof(FLootLockerRental),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerRental_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerRental_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerRental()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerRental.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerRental.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerRental_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerRental.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerInventory;
class UScriptStruct* FLootLockerInventory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerInventory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerInventory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerInventory, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerInventory"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerInventory.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerInventory>()
{
	return FLootLockerInventory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerInventory_Statics
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_rental_option_id;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerInventory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventory, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventory, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventory, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_acquisition_source_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_acquisition_source = { "acquisition_source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventory, acquisition_source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_acquisition_source_MetaData), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_acquisition_source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventory, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_asset_MetaData) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental = { "rental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventory, rental), Z_Construct_UScriptStruct_FLootLockerRental, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_MetaData), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_MetaData) }; // 2900862204
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_acquisition_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewProp_rental,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerInventory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerInventory",
		Z_Construct_UScriptStruct_FLootLockerInventory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::PropPointers),
		sizeof(FLootLockerInventory),
		alignof(FLootLockerInventory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerInventory_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventory_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInventory()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerInventory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerInventory.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerInventory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerInventory.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerInventoryResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerInventoryResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse;
class UScriptStruct* FLootLockerInventoryResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerInventoryResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerInventoryResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerInventoryResponse>()
{
	return FLootLockerInventoryResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerInventoryResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory_Inner = { "inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerInventory, METADATA_PARAMS(0, nullptr) }; // 2849010068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory = { "inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerInventoryResponse, inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory_MetaData), Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory_MetaData) }; // 2849010068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewProp_inventory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerInventoryResponse",
		Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::PropPointers),
		sizeof(FLootLockerInventoryResponse),
		alignof(FLootLockerInventoryResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerInventoryResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel;
class UScriptStruct* FLootLockerPlayerLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerLevel, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerLevel"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerLevel>()
{
	return FLootLockerPlayerLevel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xp_threshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_xp_threshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerLevel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_level_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerLevel, level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_level_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_xp_threshold_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_xp_threshold = { "xp_threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerLevel, xp_threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_xp_threshold_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_xp_threshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewProp_xp_threshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlayerLevel",
		Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::PropPointers),
		sizeof(FLootLockerPlayerLevel),
		alignof(FLootLockerPlayerLevel),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerLevel()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerXp;
class UScriptStruct* FLootLockerXp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerXp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerXp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerXp, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerXp"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerXp.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerXp>()
{
	return FLootLockerXp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerXp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previous_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_previous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_current_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_current;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerXp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerXp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_previous_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_previous = { "previous", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerXp, previous), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_previous_MetaData), Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_previous_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_current_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_current = { "current", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerXp, current), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_current_MetaData), Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_current_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerXp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_previous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewProp_current,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerXp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerXp",
		Z_Construct_UScriptStruct_FLootLockerXp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerXp_Statics::PropPointers),
		sizeof(FLootLockerXp),
		alignof(FLootLockerXp),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerXp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerXp_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerXp_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerXp()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerXp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerXp.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerXp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerXp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerSubmitXpResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerSubmitXpResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse;
class UScriptStruct* FLootLockerSubmitXpResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerSubmitXpResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerSubmitXpResponse>()
{
	return FLootLockerSubmitXpResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_xp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_levels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_levels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_check_grant_notifications_MetaData[];
#endif
		static void NewProp_check_grant_notifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_check_grant_notifications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerSubmitXpResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_xp_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_xp = { "xp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitXpResponse, xp), Z_Construct_UScriptStruct_FLootLockerXp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_xp_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_xp_MetaData) }; // 2747280955
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels_Inner = { "levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPlayerLevel, METADATA_PARAMS(0, nullptr) }; // 595384471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitXpResponse, levels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels_MetaData) }; // 595384471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications_SetBit(void* Obj)
	{
		((FLootLockerSubmitXpResponse*)Obj)->check_grant_notifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications = { "check_grant_notifications", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerSubmitXpResponse), &Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_xp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewProp_check_grant_notifications,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerSubmitXpResponse",
		Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::PropPointers),
		sizeof(FLootLockerSubmitXpResponse),
		alignof(FLootLockerSubmitXpResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest;
class UScriptStruct* FLootLockerSubmitXpRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerSubmitXpRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerSubmitXpRequest>()
{
	return FLootLockerSubmitXpRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerSubmitXpRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewProp_points_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerSubmitXpRequest, points), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewProp_points_MetaData), Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewProp_points_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewProp_points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerSubmitXpRequest",
		Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::PropPointers),
		sizeof(FLootLockerSubmitXpRequest),
		alignof(FLootLockerSubmitXpRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerObjects;
class UScriptStruct* FLootLockerObjects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerObjects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerObjects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerObjects, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerObjects"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerObjects.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerObjects>()
{
	return FLootLockerObjects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerObjects_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acquisition_source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_acquisition_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_reason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerObjects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerObjects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerObjects, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerObjects, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_asset_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_asset = { "asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerObjects, asset), Z_Construct_UScriptStruct_FLootLockerAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_asset_MetaData), Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_asset_MetaData) }; // 3922991322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_acquisition_source_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_acquisition_source = { "acquisition_source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerObjects, acquisition_source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_acquisition_source_MetaData), Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_acquisition_source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_reason_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_reason = { "reason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerObjects, reason), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_reason_MetaData), Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_reason_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_acquisition_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewProp_reason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerObjects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerObjects",
		Z_Construct_UScriptStruct_FLootLockerObjects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::PropPointers),
		sizeof(FLootLockerObjects),
		alignof(FLootLockerObjects),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerObjects_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerObjects_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerObjects()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerObjects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerObjects.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerObjects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerObjects.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPlayerAssetNotificationResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPlayerAssetNotificationResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse;
class UScriptStruct* FLootLockerPlayerAssetNotificationResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerAssetNotificationResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerAssetNotificationResponse>()
{
	return FLootLockerPlayerAssetNotificationResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerAssetNotificationResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects_Inner = { "objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerObjects, METADATA_PARAMS(0, nullptr) }; // 3661445373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects = { "objects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerAssetNotificationResponse, objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects_MetaData) }; // 3661445373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewProp_objects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPlayerAssetNotificationResponse",
		Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::PropPointers),
		sizeof(FLootLockerPlayerAssetNotificationResponse),
		alignof(FLootLockerPlayerAssetNotificationResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerNameResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerNameResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerNameResponse;
class UScriptStruct* FLootLockerNameResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerNameResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerNameResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerNameResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerNameResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerNameResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerNameResponse>()
{
	return FLootLockerNameResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerNameResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerNameResponse, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerNameResponse",
		Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::PropPointers),
		sizeof(FLootLockerNameResponse),
		alignof(FLootLockerNameResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerNameResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerNameResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerNameResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerNameResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest;
class UScriptStruct* FLootLockerPlayerNameRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerNameRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerNameRequest>()
{
	return FLootLockerPlayerNameRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerNameRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerNameRequest, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlayerNameRequest",
		Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::PropPointers),
		sizeof(FLootLockerPlayerNameRequest),
		alignof(FLootLockerPlayerNameRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo;
class UScriptStruct* FLootLockerPlayerXpInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerXpInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerXpInfo>()
{
	return FLootLockerPlayerXpInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_xp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerXpInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerXpInfo, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_xp_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_xp = { "xp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerXpInfo, xp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_xp_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_xp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_level_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerXpInfo, level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_level_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_xp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewProp_level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlayerXpInfo",
		Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::PropPointers),
		sizeof(FLootLockerPlayerXpInfo),
		alignof(FLootLockerPlayerXpInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerMultiplePlayerXpResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerMultiplePlayerXpResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse;
class UScriptStruct* FLootLockerMultiplePlayerXpResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayerXpResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayerXpResponse>()
{
	return FLootLockerMultiplePlayerXpResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayerXpResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo, METADATA_PARAMS(0, nullptr) }; // 4070747481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayerXpResponse, players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players_MetaData) }; // 4070747481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewProp_players,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerMultiplePlayerXpResponse",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayerXpResponse),
		alignof(FLootLockerMultiplePlayerXpResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames;
class UScriptStruct* FLootLockerMultiplePlayersNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayersNames"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayersNames>()
{
	return FLootLockerMultiplePlayersNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_public_uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_public_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_ulid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_ulid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_active_platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_last_active_platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platform_player_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_platform_player_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayersNames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_id = { "player_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNames, player_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_public_uid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_public_uid = { "player_public_uid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNames, player_public_uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_public_uid_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_public_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_ulid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_ulid = { "player_ulid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNames, player_ulid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_ulid_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_ulid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNames, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_last_active_platform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_last_active_platform = { "last_active_platform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNames, last_active_platform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_last_active_platform_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_last_active_platform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_platform_player_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_platform_player_id = { "platform_player_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNames, platform_player_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_platform_player_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_platform_player_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_public_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_player_ulid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_last_active_platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewProp_platform_player_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMultiplePlayersNames",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayersNames),
		alignof(FLootLockerMultiplePlayersNames),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlatformIds;
class UScriptStruct* FLootLockerPlatformIds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlatformIds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlatformIds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlatformIds, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlatformIds"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlatformIds.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlatformIds>()
{
	return FLootLockerPlatformIds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steam_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_steam_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xbox_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_xbox_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_psn_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_psn_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlatformIds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_steam_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_steam_id = { "steam_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformIds, steam_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_steam_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_steam_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_xbox_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_xbox_id = { "xbox_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformIds, xbox_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_xbox_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_xbox_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_psn_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_psn_id = { "psn_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformIds, psn_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_psn_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_psn_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_steam_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_xbox_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewProp_psn_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlatformIds",
		Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::PropPointers),
		sizeof(FLootLockerPlatformIds),
		alignof(FLootLockerPlatformIds),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlatformIds()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlatformIds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlatformIds.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlatformIds.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds;
class UScriptStruct* FLootLockerMultiplePlayersPlatformIds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayersPlatformIds"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayersPlatformIds>()
{
	return FLootLockerMultiplePlayersPlatformIds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_public_uid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_public_uid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_active_platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_last_active_platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platform_ids_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_platform_ids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayersPlatformIds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_id = { "player_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersPlatformIds, player_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_public_uid_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_public_uid = { "player_public_uid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersPlatformIds, player_public_uid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_public_uid_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_public_uid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersPlatformIds, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_last_active_platform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_last_active_platform = { "last_active_platform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersPlatformIds, last_active_platform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_last_active_platform_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_last_active_platform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_platform_ids_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_platform_ids = { "platform_ids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersPlatformIds, platform_ids), Z_Construct_UScriptStruct_FLootLockerPlatformIds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_platform_ids_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_platform_ids_MetaData) }; // 36427970
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_player_public_uid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_last_active_platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewProp_platform_ids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMultiplePlayersPlatformIds",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayersPlatformIds),
		alignof(FLootLockerMultiplePlayersPlatformIds),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerMultiplePlayersPlatformIdsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerMultiplePlayersPlatformIdsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse;
class UScriptStruct* FLootLockerMultiplePlayersPlatformIdsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayersPlatformIdsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayersPlatformIdsResponse>()
{
	return FLootLockerMultiplePlayersPlatformIdsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayersPlatformIdsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds, METADATA_PARAMS(0, nullptr) }; // 3951760603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersPlatformIdsResponse, players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players_MetaData) }; // 3951760603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewProp_players,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerMultiplePlayersPlatformIdsResponse",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayersPlatformIdsResponse),
		alignof(FLootLockerMultiplePlayersPlatformIdsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerMultiplePlayersNamesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerMultiplePlayersNamesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse;
class UScriptStruct* FLootLockerMultiplePlayersNamesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayersNamesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayersNamesResponse>()
{
	return FLootLockerMultiplePlayersNamesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayersNamesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players_Inner = { "players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames, METADATA_PARAMS(0, nullptr) }; // 795267653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players = { "players", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersNamesResponse, players), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players_MetaData) }; // 795267653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewProp_players,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerMultiplePlayersNamesResponse",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayersNamesResponse),
		alignof(FLootLockerMultiplePlayersNamesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest;
class UScriptStruct* FLootLockerMultiplePlayersXpRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayersXpRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayersXpRequest>()
{
	return FLootLockerMultiplePlayersXpRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_platform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_ids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_ids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_player_ids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayersXpRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_platform_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Specify which platform the Ids are for\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify which platform the Ids are for" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersXpRequest, platform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_platform_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_platform_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids_Inner = { "player_ids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Lost of player ids on the specified platform\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lost of player ids on the specified platform" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids = { "player_ids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayersXpRequest, player_ids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewProp_player_ids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMultiplePlayersXpRequest",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayersXpRequest),
		alignof(FLootLockerMultiplePlayersXpRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest;
class UScriptStruct* FLootLockerMultiplePlayerNameRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayerNameRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayerNameRequest>()
{
	return FLootLockerMultiplePlayerNameRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayerNameRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_platform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_platform = { "platform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayerNameRequest, platform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_platform_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_platform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_player_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_player_id = { "player_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayerNameRequest, player_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_player_id_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_player_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewProp_player_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMultiplePlayerNameRequest",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayerNameRequest),
		alignof(FLootLockerMultiplePlayerNameRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest;
class UScriptStruct* FLootLockerMultiplePlayerNamesRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayerNamesRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayerNamesRequest>()
{
	return FLootLockerMultiplePlayerNamesRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_player_ids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_ids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_player_ids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayerNamesRequest>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids_Inner = { "player_ids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest, METADATA_PARAMS(0, nullptr) }; // 1955409263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids = { "player_ids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayerNamesRequest, player_ids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids_MetaData) }; // 1955409263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewProp_player_ids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMultiplePlayerNamesRequest",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayerNamesRequest),
		alignof(FLootLockerMultiplePlayerNamesRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest;
class UScriptStruct* FLootLockerMultiplePlayerNamesAndPlatformsRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMultiplePlayerNamesAndPlatformsRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMultiplePlayerNamesAndPlatformsRequest>()
{
	return FLootLockerMultiplePlayerNamesAndPlatformsRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_ids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_ids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_player_ids;
		static const UECodeGen_Private::FStrPropertyParams NewProp_player_public_uids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_public_uids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_player_public_uids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMultiplePlayerNamesAndPlatformsRequest>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids_Inner = { "player_ids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids = { "player_ids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayerNamesAndPlatformsRequest, player_ids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids_Inner = { "player_public_uids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids = { "player_public_uids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMultiplePlayerNamesAndPlatformsRequest, player_public_uids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids_MetaData), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_ids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewProp_player_public_uids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMultiplePlayerNamesAndPlatformsRequest",
		Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::PropPointers),
		sizeof(FLootLockerMultiplePlayerNamesAndPlatformsRequest),
		alignof(FLootLockerMultiplePlayerNamesAndPlatformsRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPInfoResponseBP_Parms
		{
			FLootLockerPlayerInfoResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPInfoResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse, METADATA_PARAMS(0, nullptr) }; // 3475102011
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PInfoResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPInfoResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPInfoResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PInfoResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPInfoResponseBP_DelegateWrapper(const FScriptDelegate& PInfoResponseBP, FLootLockerPlayerInfoResponse Value)
{
	struct _Script_LootLockerSDK_eventPInfoResponseBP_Parms
	{
		FLootLockerPlayerInfoResponse Value;
	};
	_Script_LootLockerSDK_eventPInfoResponseBP_Parms Parms;
	Parms.Value=Value;
	PInfoResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPInventoryResponseBP_Parms
		{
			FLootLockerInventoryResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPInventoryResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerInventoryResponse, METADATA_PARAMS(0, nullptr) }; // 3518101031
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PInventoryResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPInventoryResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPInventoryResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PInventoryResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPInventoryResponseBP_DelegateWrapper(const FScriptDelegate& PInventoryResponseBP, FLootLockerInventoryResponse Value)
{
	struct _Script_LootLockerSDK_eventPInventoryResponseBP_Parms
	{
		FLootLockerInventoryResponse Value;
	};
	_Script_LootLockerSDK_eventPInventoryResponseBP_Parms Parms;
	Parms.Value=Value;
	PInventoryResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPSubmitResponseBP_Parms
		{
			FLootLockerSubmitXpResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPSubmitResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse, METADATA_PARAMS(0, nullptr) }; // 3730886379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PSubmitResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPSubmitResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPSubmitResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PSubmitResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPSubmitResponseBP_DelegateWrapper(const FScriptDelegate& PSubmitResponseBP, FLootLockerSubmitXpResponse Value)
{
	struct _Script_LootLockerSDK_eventPSubmitResponseBP_Parms
	{
		FLootLockerSubmitXpResponse Value;
	};
	_Script_LootLockerSDK_eventPSubmitResponseBP_Parms Parms;
	Parms.Value=Value;
	PSubmitResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPAssetNotificationResponseBP_Parms
		{
			FLootLockerPlayerAssetNotificationResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPAssetNotificationResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse, METADATA_PARAMS(0, nullptr) }; // 3551642804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PAssetNotificationResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPAssetNotificationResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPAssetNotificationResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PAssetNotificationResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPAssetNotificationResponseBP_DelegateWrapper(const FScriptDelegate& PAssetNotificationResponseBP, FLootLockerPlayerAssetNotificationResponse Value)
{
	struct _Script_LootLockerSDK_eventPAssetNotificationResponseBP_Parms
	{
		FLootLockerPlayerAssetNotificationResponse Value;
	};
	_Script_LootLockerSDK_eventPAssetNotificationResponseBP_Parms Parms;
	Parms.Value=Value;
	PAssetNotificationResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPBalanceResponseBP_Parms
		{
			FLootLockerBalanceResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPBalanceResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerBalanceResponse, METADATA_PARAMS(0, nullptr) }; // 2348718227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PBalanceResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPBalanceResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPBalanceResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PBalanceResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPBalanceResponseBP_DelegateWrapper(const FScriptDelegate& PBalanceResponseBP, FLootLockerBalanceResponse Value)
{
	struct _Script_LootLockerSDK_eventPBalanceResponseBP_Parms
	{
		FLootLockerBalanceResponse Value;
	};
	_Script_LootLockerSDK_eventPBalanceResponseBP_Parms Parms;
	Parms.Value=Value;
	PBalanceResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPDlcResponseBP_Parms
		{
			FLootLockerDlcResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPDlcResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerDlcResponse, METADATA_PARAMS(0, nullptr) }; // 2505348400
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PDlcResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPDlcResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPDlcResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PDlcResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPDlcResponseBP_DelegateWrapper(const FScriptDelegate& PDlcResponseBP, FLootLockerDlcResponse Value)
{
	struct _Script_LootLockerSDK_eventPDlcResponseBP_Parms
	{
		FLootLockerDlcResponse Value;
	};
	_Script_LootLockerSDK_eventPDlcResponseBP_Parms Parms;
	Parms.Value=Value;
	PDlcResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPNameResponseBP_Parms
		{
			FLootLockerNameResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPNameResponseBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerNameResponse, METADATA_PARAMS(0, nullptr) }; // 3380036473
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PNameResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPNameResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPNameResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PNameResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPNameResponseBP_DelegateWrapper(const FScriptDelegate& PNameResponseBP, FLootLockerNameResponse Value)
{
	struct _Script_LootLockerSDK_eventPNameResponseBP_Parms
	{
		FLootLockerNameResponse Value;
	};
	_Script_LootLockerSDK_eventPNameResponseBP_Parms Parms;
	Parms.Value=Value;
	PNameResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPMultiplePlayersXPBP_Parms
		{
			FLootLockerMultiplePlayerXpResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPMultiplePlayersXPBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse, METADATA_PARAMS(0, nullptr) }; // 2496223954
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PMultiplePlayersXPBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPMultiplePlayersXPBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPMultiplePlayersXPBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersXPBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPMultiplePlayersXPBP_DelegateWrapper(const FScriptDelegate& PMultiplePlayersXPBP, FLootLockerMultiplePlayerXpResponse Value)
{
	struct _Script_LootLockerSDK_eventPMultiplePlayersXPBP_Parms
	{
		FLootLockerMultiplePlayerXpResponse Value;
	};
	_Script_LootLockerSDK_eventPMultiplePlayersXPBP_Parms Parms;
	Parms.Value=Value;
	PMultiplePlayersXPBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPMultiplePlayerNamesBP_Parms
		{
			FLootLockerMultiplePlayersNamesResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPMultiplePlayerNamesBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse, METADATA_PARAMS(0, nullptr) }; // 2154108280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PMultiplePlayerNamesBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPMultiplePlayerNamesBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPMultiplePlayerNamesBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayerNamesBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPMultiplePlayerNamesBP_DelegateWrapper(const FScriptDelegate& PMultiplePlayerNamesBP, FLootLockerMultiplePlayersNamesResponse Value)
{
	struct _Script_LootLockerSDK_eventPMultiplePlayerNamesBP_Parms
	{
		FLootLockerMultiplePlayersNamesResponse Value;
	};
	_Script_LootLockerSDK_eventPMultiplePlayerNamesBP_Parms Parms;
	Parms.Value=Value;
	PMultiplePlayerNamesBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPMultiplePlayersPlatformIdsBP_Parms
		{
			FLootLockerMultiplePlayersPlatformIdsResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPMultiplePlayersPlatformIdsBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse, METADATA_PARAMS(0, nullptr) }; // 4244557396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PMultiplePlayersPlatformIdsBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPMultiplePlayersPlatformIdsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPMultiplePlayersPlatformIdsBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PMultiplePlayersPlatformIdsBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPMultiplePlayersPlatformIdsBP_DelegateWrapper(const FScriptDelegate& PMultiplePlayersPlatformIdsBP, FLootLockerMultiplePlayersPlatformIdsResponse Value)
{
	struct _Script_LootLockerSDK_eventPMultiplePlayersPlatformIdsBP_Parms
	{
		FLootLockerMultiplePlayersPlatformIdsResponse Value;
	};
	_Script_LootLockerSDK_eventPMultiplePlayersPlatformIdsBP_Parms Parms;
	Parms.Value=Value;
	PMultiplePlayersPlatformIdsBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPOtherPlayersXpAndLevelBP_Parms
		{
			FLootLockerOtherPlayersXpAndLevelResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPOtherPlayersXpAndLevelBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse, METADATA_PARAMS(0, nullptr) }; // 2121273987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "POtherPlayersXpAndLevelBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPOtherPlayersXpAndLevelBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPOtherPlayersXpAndLevelBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_POtherPlayersXpAndLevelBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPOtherPlayersXpAndLevelBP_DelegateWrapper(const FScriptDelegate& POtherPlayersXpAndLevelBP, FLootLockerOtherPlayersXpAndLevelResponse Value)
{
	struct _Script_LootLockerSDK_eventPOtherPlayersXpAndLevelBP_Parms
	{
		FLootLockerOtherPlayersXpAndLevelResponse Value;
	};
	_Script_LootLockerSDK_eventPOtherPlayersXpAndLevelBP_Parms Parms;
	Parms.Value=Value;
	POtherPlayersXpAndLevelBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerPlayerRequestHandler::StaticRegisterNativesULootLockerPlayerRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerPlayerRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerPlayerRequestHandler_NoRegister()
	{
		return ULootLockerPlayerRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerPlayerRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerPlayerRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::ClassParams = {
		&ULootLockerPlayerRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerPlayerRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerPlayerRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerPlayerRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerPlayerRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerPlayerRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerPlayerRequestHandler>()
	{
		return ULootLockerPlayerRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerPlayerRequestHandler);
	ULootLockerPlayerRequestHandler::~ULootLockerPlayerRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerBalanceResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerBalanceResponse_Statics::NewStructOps, TEXT("LootLockerBalanceResponse"), &Z_Registration_Info_UScriptStruct_LootLockerBalanceResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerBalanceResponse), 2348718227U) },
		{ FLootLockerDlcResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerDlcResponse_Statics::NewStructOps, TEXT("LootLockerDlcResponse"), &Z_Registration_Info_UScriptStruct_LootLockerDlcResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerDlcResponse), 2505348400U) },
		{ FLootLockerPlayerInfoResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerInfoResponse_Statics::NewStructOps, TEXT("LootLockerPlayerInfoResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerInfoResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerInfoResponse), 3475102011U) },
		{ FLootLockerOtherPlayersXpAndLevelResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerOtherPlayersXpAndLevelResponse_Statics::NewStructOps, TEXT("LootLockerOtherPlayersXpAndLevelResponse"), &Z_Registration_Info_UScriptStruct_LootLockerOtherPlayersXpAndLevelResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerOtherPlayersXpAndLevelResponse), 2121273987U) },
		{ FLootLockerRental::StaticStruct, Z_Construct_UScriptStruct_FLootLockerRental_Statics::NewStructOps, TEXT("LootLockerRental"), &Z_Registration_Info_UScriptStruct_LootLockerRental, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerRental), 2900862204U) },
		{ FLootLockerInventory::StaticStruct, Z_Construct_UScriptStruct_FLootLockerInventory_Statics::NewStructOps, TEXT("LootLockerInventory"), &Z_Registration_Info_UScriptStruct_LootLockerInventory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerInventory), 2849010068U) },
		{ FLootLockerInventoryResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerInventoryResponse_Statics::NewStructOps, TEXT("LootLockerInventoryResponse"), &Z_Registration_Info_UScriptStruct_LootLockerInventoryResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerInventoryResponse), 3518101031U) },
		{ FLootLockerPlayerLevel::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerLevel_Statics::NewStructOps, TEXT("LootLockerPlayerLevel"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerLevel), 595384471U) },
		{ FLootLockerXp::StaticStruct, Z_Construct_UScriptStruct_FLootLockerXp_Statics::NewStructOps, TEXT("LootLockerXp"), &Z_Registration_Info_UScriptStruct_LootLockerXp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerXp), 2747280955U) },
		{ FLootLockerSubmitXpResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse_Statics::NewStructOps, TEXT("LootLockerSubmitXpResponse"), &Z_Registration_Info_UScriptStruct_LootLockerSubmitXpResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerSubmitXpResponse), 3730886379U) },
		{ FLootLockerSubmitXpRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerSubmitXpRequest_Statics::NewStructOps, TEXT("LootLockerSubmitXpRequest"), &Z_Registration_Info_UScriptStruct_LootLockerSubmitXpRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerSubmitXpRequest), 3851536241U) },
		{ FLootLockerObjects::StaticStruct, Z_Construct_UScriptStruct_FLootLockerObjects_Statics::NewStructOps, TEXT("LootLockerObjects"), &Z_Registration_Info_UScriptStruct_LootLockerObjects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerObjects), 3661445373U) },
		{ FLootLockerPlayerAssetNotificationResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerAssetNotificationResponse_Statics::NewStructOps, TEXT("LootLockerPlayerAssetNotificationResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerAssetNotificationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerAssetNotificationResponse), 3551642804U) },
		{ FLootLockerNameResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerNameResponse_Statics::NewStructOps, TEXT("LootLockerNameResponse"), &Z_Registration_Info_UScriptStruct_LootLockerNameResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerNameResponse), 3380036473U) },
		{ FLootLockerPlayerNameRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerNameRequest_Statics::NewStructOps, TEXT("LootLockerPlayerNameRequest"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerNameRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerNameRequest), 1451682926U) },
		{ FLootLockerPlayerXpInfo::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerXpInfo_Statics::NewStructOps, TEXT("LootLockerPlayerXpInfo"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerXpInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerXpInfo), 4070747481U) },
		{ FLootLockerMultiplePlayerXpResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerXpResponse_Statics::NewStructOps, TEXT("LootLockerMultiplePlayerXpResponse"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerXpResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayerXpResponse), 2496223954U) },
		{ FLootLockerMultiplePlayersNames::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNames_Statics::NewStructOps, TEXT("LootLockerMultiplePlayersNames"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayersNames), 795267653U) },
		{ FLootLockerPlatformIds::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlatformIds_Statics::NewStructOps, TEXT("LootLockerPlatformIds"), &Z_Registration_Info_UScriptStruct_LootLockerPlatformIds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlatformIds), 36427970U) },
		{ FLootLockerMultiplePlayersPlatformIds::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIds_Statics::NewStructOps, TEXT("LootLockerMultiplePlayersPlatformIds"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayersPlatformIds), 3951760603U) },
		{ FLootLockerMultiplePlayersPlatformIdsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersPlatformIdsResponse_Statics::NewStructOps, TEXT("LootLockerMultiplePlayersPlatformIdsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersPlatformIdsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayersPlatformIdsResponse), 4244557396U) },
		{ FLootLockerMultiplePlayersNamesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersNamesResponse_Statics::NewStructOps, TEXT("LootLockerMultiplePlayersNamesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersNamesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayersNamesResponse), 2154108280U) },
		{ FLootLockerMultiplePlayersXpRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayersXpRequest_Statics::NewStructOps, TEXT("LootLockerMultiplePlayersXpRequest"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayersXpRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayersXpRequest), 3491497592U) },
		{ FLootLockerMultiplePlayerNameRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNameRequest_Statics::NewStructOps, TEXT("LootLockerMultiplePlayerNameRequest"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNameRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayerNameRequest), 1955409263U) },
		{ FLootLockerMultiplePlayerNamesRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesRequest_Statics::NewStructOps, TEXT("LootLockerMultiplePlayerNamesRequest"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayerNamesRequest), 2070509600U) },
		{ FLootLockerMultiplePlayerNamesAndPlatformsRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMultiplePlayerNamesAndPlatformsRequest_Statics::NewStructOps, TEXT("LootLockerMultiplePlayerNamesAndPlatformsRequest"), &Z_Registration_Info_UScriptStruct_LootLockerMultiplePlayerNamesAndPlatformsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMultiplePlayerNamesAndPlatformsRequest), 4142544645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerPlayerRequestHandler, ULootLockerPlayerRequestHandler::StaticClass, TEXT("ULootLockerPlayerRequestHandler"), &Z_Registration_Info_UClass_ULootLockerPlayerRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerPlayerRequestHandler), 2998460408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_794613164(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

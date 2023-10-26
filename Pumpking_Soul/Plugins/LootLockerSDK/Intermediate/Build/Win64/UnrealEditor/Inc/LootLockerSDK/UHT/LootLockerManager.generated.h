// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootLockerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELootLockerAssetFilePurpose : uint8;
enum class ELootLockerAssetFilter : uint8;
enum class ELootLockerGoogleClientPlatform : uint8;
enum class ELootLockerWalletHolderTypes : uint8;
struct FLootLockerAndroidAssetPurchaseData;
struct FLootLockerAssetInstanceStorageItem;
struct FLootLockerAssetInstanceStorageItems;
struct FLootLockerAssetPurchaseData;
struct FLootLockerCatalogItemAndQuantityPair;
struct FLootLockerCollectItemPayload;
struct FLootLockerCreateAssetCandidateData;
struct FLootLockerCreateHeroRequest;
struct FLootLockerCreateHeroWithVariationRequest;
struct FLootLockerFileUpdateRequest;
struct FLootLockerFileUploadRequest;
struct FLootLockerFinishMissionData;
struct FLootLockerMultiplePlayerNamesAndPlatformsRequest;
struct FLootLockerMultiplePlayerNamesRequest;
struct FLootLockerPersistentStorageItem;
struct FLootLockerPersistentStorageItems;
struct FLootLockerTriggerEvent;
struct FLootLockerUpdateAssetCandidateData;
struct FLootLockerUpdateHeroRequest;
struct FLootLockerVerifyPurchaseIosData;
#ifdef LOOTLOCKERSDK_LootLockerManager_generated_h
#error "LootLockerManager.generated.h already included, missing '#pragma once' in LootLockerManager.h"
#endif
#define LOOTLOCKERSDK_LootLockerManager_generated_h

#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_SPARSE_DATA
#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastActivePlatform); \
	DECLARE_FUNCTION(execGetServerTime); \
	DECLARE_FUNCTION(execListCatalogItems); \
	DECLARE_FUNCTION(execListCatalogs); \
	DECLARE_FUNCTION(execDebitBalanceToWallet); \
	DECLARE_FUNCTION(execCreditBalanceToWallet); \
	DECLARE_FUNCTION(execGetWalletByHolderID); \
	DECLARE_FUNCTION(execGetWalletByWalletID); \
	DECLARE_FUNCTION(execListBalancesInWallet); \
	DECLARE_FUNCTION(execGetCurrencyDenominationsByCode); \
	DECLARE_FUNCTION(execListCurrencies); \
	DECLARE_FUNCTION(execPickDropsFromDropTable); \
	DECLARE_FUNCTION(execComputeAndLockDropTable); \
	DECLARE_FUNCTION(execSubmitScore); \
	DECLARE_FUNCTION(execGetScoreListInitial); \
	DECLARE_FUNCTION(execGetScoreList); \
	DECLARE_FUNCTION(execGetByListOfMembers); \
	DECLARE_FUNCTION(execGetAllMemberRanks); \
	DECLARE_FUNCTION(execGetMemberRank); \
	DECLARE_FUNCTION(execGetMessages); \
	DECLARE_FUNCTION(execCollectItem); \
	DECLARE_FUNCTION(execGetAllCollectables); \
	DECLARE_FUNCTION(execGetTriggeredEvents); \
	DECLARE_FUNCTION(execTriggerEvent); \
	DECLARE_FUNCTION(execLootLockerPurchaseCatalogItems); \
	DECLARE_FUNCTION(execGetOrderDetails); \
	DECLARE_FUNCTION(execActivateRentalAsset); \
	DECLARE_FUNCTION(execPollingOrderStatus); \
	DECLARE_FUNCTION(execPurchaseAssetsIOS); \
	DECLARE_FUNCTION(execPurchaseAssetsAndroid); \
	DECLARE_FUNCTION(execPurchaseAssets); \
	DECLARE_FUNCTION(execGetMaps); \
	DECLARE_FUNCTION(execFinishMission); \
	DECLARE_FUNCTION(execStartMission); \
	DECLARE_FUNCTION(execGetMission); \
	DECLARE_FUNCTION(execGetAllMissions); \
	DECLARE_FUNCTION(execDeleteInstanceProgression); \
	DECLARE_FUNCTION(execResetInstanceProgression); \
	DECLARE_FUNCTION(execSubtractPointsFromInstanceProgression); \
	DECLARE_FUNCTION(execAddPointsToInstanceProgression); \
	DECLARE_FUNCTION(execGetInstanceProgression); \
	DECLARE_FUNCTION(execGetInstanceProgressions); \
	DECLARE_FUNCTION(execGetProgressionTiers); \
	DECLARE_FUNCTION(execGetProgression); \
	DECLARE_FUNCTION(execGetProgressions); \
	DECLARE_FUNCTION(execDeleteFileFromAssetCandidate); \
	DECLARE_FUNCTION(execAddFileToAssetCandidate); \
	DECLARE_FUNCTION(execGetAssetCandidate); \
	DECLARE_FUNCTION(execGetAllAssetCandidates); \
	DECLARE_FUNCTION(execDeleteAssetCandidate); \
	DECLARE_FUNCTION(execUpdateAssetCandidate); \
	DECLARE_FUNCTION(execCreateAssetCandidate); \
	DECLARE_FUNCTION(execOpenLootBox); \
	DECLARE_FUNCTION(execInspectLootBox); \
	DECLARE_FUNCTION(execDeleteAKeyValuePairByIdForAssetInstance); \
	DECLARE_FUNCTION(execUpdateAKeyValuePairByIdForAssetInstance); \
	DECLARE_FUNCTION(execUpdateOneOrMoreKeyValuePairForAssetInstance); \
	DECLARE_FUNCTION(execCreateAKeyValuePairForAssetInstance); \
	DECLARE_FUNCTION(execGetAKeyValuePairByIdForAssetInstance); \
	DECLARE_FUNCTION(execGetAllKeyValuePairsToAnInstanceForAssetInstance); \
	DECLARE_FUNCTION(execGetAllKeyValuePairsForAssetInstance); \
	DECLARE_FUNCTION(execGetUniversalAssets); \
	DECLARE_FUNCTION(execRemoveAssetFromFavourites); \
	DECLARE_FUNCTION(execAddAssetToFavourites); \
	DECLARE_FUNCTION(execGetFavouriteAssetIndices); \
	DECLARE_FUNCTION(execGetAssetBones); \
	DECLARE_FUNCTION(execGetAssetsByIds); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetContexts); \
	DECLARE_FUNCTION(execGetPlayerPersistentStorage); \
	DECLARE_FUNCTION(execDeleteItemFromPersistentStorage); \
	DECLARE_FUNCTION(execAddItemToPersistentStorage); \
	DECLARE_FUNCTION(execAddItemsToPersistentStorage); \
	DECLARE_FUNCTION(execGetItemFromPersistentStorage); \
	DECLARE_FUNCTION(execGetEntirePersistentStorage); \
	DECLARE_FUNCTION(execDeleteCharacterProgression); \
	DECLARE_FUNCTION(execResetCharacterProgression); \
	DECLARE_FUNCTION(execSubtractPointsFromCharacterProgression); \
	DECLARE_FUNCTION(execAddPointsToCharacterProgression); \
	DECLARE_FUNCTION(execGetCharacterProgression); \
	DECLARE_FUNCTION(execGetCharacterProgressions); \
	DECLARE_FUNCTION(execGetEquipableContextsByCharacterId); \
	DECLARE_FUNCTION(execGetEquipableContextsToDefaultCharacter); \
	DECLARE_FUNCTION(execGetOtherPlayersCurrentLoadoutToDefaultCharacter); \
	DECLARE_FUNCTION(execGetCurrentLoadoutToDefaultCharacter); \
	DECLARE_FUNCTION(execUnEquipAssetToCharacterById); \
	DECLARE_FUNCTION(execUnEquipAssetToDefaultCharacter); \
	DECLARE_FUNCTION(execEquipAssetToCharacterByIdAndInstance); \
	DECLARE_FUNCTION(execEquipAssetToCharacterById); \
	DECLARE_FUNCTION(execEquipAssetToDefaultCharacter); \
	DECLARE_FUNCTION(execListPlayerCharacters); \
	DECLARE_FUNCTION(execListCharacterTypes); \
	DECLARE_FUNCTION(execCreateCharacter); \
	DECLARE_FUNCTION(execUpdateCharacter); \
	DECLARE_FUNCTION(execGetCharacterLoadout); \
	DECLARE_FUNCTION(execRemoveAssetToHeroLoadout); \
	DECLARE_FUNCTION(execAddGlobalAssetVariationToHeroLoadout); \
	DECLARE_FUNCTION(execAddGlobalAssetToHeroLoadout); \
	DECLARE_FUNCTION(execAddAssetToHeroLoadout); \
	DECLARE_FUNCTION(execGetOtherPlayersHeroLoadout); \
	DECLARE_FUNCTION(execGetHeroLoadout); \
	DECLARE_FUNCTION(execGetHeroInventory); \
	DECLARE_FUNCTION(execDeleteHero); \
	DECLARE_FUNCTION(execUpdateHero); \
	DECLARE_FUNCTION(execGetOtherPlayersDefaultHeroBySteamID64); \
	DECLARE_FUNCTION(execGetHero); \
	DECLARE_FUNCTION(execCreateHeroWithVariation); \
	DECLARE_FUNCTION(execCreateHero); \
	DECLARE_FUNCTION(execListOtherPlayersHeroesBySteamID64); \
	DECLARE_FUNCTION(execListPlayerHeroes); \
	DECLARE_FUNCTION(execGetGameHeroes); \
	DECLARE_FUNCTION(execDeletePlayerProgression); \
	DECLARE_FUNCTION(execResetPlayerProgression); \
	DECLARE_FUNCTION(execSubtractPointsFromPlayerProgression); \
	DECLARE_FUNCTION(execAddPointsToPlayerProgression); \
	DECLARE_FUNCTION(execGetPlayerProgression); \
	DECLARE_FUNCTION(execGetPlayerProgressions); \
	DECLARE_FUNCTION(execDeletePlayerFile); \
	DECLARE_FUNCTION(execGetSingleFile); \
	DECLARE_FUNCTION(execListOtherPlayersPublicFiles); \
	DECLARE_FUNCTION(execListFiles); \
	DECLARE_FUNCTION(execUpdateFile); \
	DECLARE_FUNCTION(execUploadFile); \
	DECLARE_FUNCTION(execDeletePlayer); \
	DECLARE_FUNCTION(execLookupMultiplePlayerNames1stPlatformIDs); \
	DECLARE_FUNCTION(execLookupMultiplePlayerNamesUsingIDs); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execSetPlayerName); \
	DECLARE_FUNCTION(execSetProfilePublic); \
	DECLARE_FUNCTION(execSetProfilePrivate); \
	DECLARE_FUNCTION(execGetDLCsMigration); \
	DECLARE_FUNCTION(execInitiateDLCMigration); \
	DECLARE_FUNCTION(execGetCurrencyBalance); \
	DECLARE_FUNCTION(execCheckPlayerAssetActivationNotification); \
	DECLARE_FUNCTION(execGetMultiplePlayersXp); \
	DECLARE_FUNCTION(execGetOtherPlayersXpAndLevel); \
	DECLARE_FUNCTION(execSubmitXP); \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execGetPlayerInfo); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execVerifyPlayer); \
	DECLARE_FUNCTION(execGuestLogin); \
	DECLARE_FUNCTION(execWhiteLabelResetPassword); \
	DECLARE_FUNCTION(execWhiteLabelRequestUserVerificationByEmail); \
	DECLARE_FUNCTION(execWhiteLabelRequestUserVerification); \
	DECLARE_FUNCTION(execWhiteLabelVerifySession); \
	DECLARE_FUNCTION(execWhiteLabelLoginAndStartSession); \
	DECLARE_FUNCTION(execWhiteLabelStartSession); \
	DECLARE_FUNCTION(execWhiteLabelLogin); \
	DECLARE_FUNCTION(execWhiteLabelCreateAccount); \
	DECLARE_FUNCTION(execRefreshMetaSession); \
	DECLARE_FUNCTION(execStartMetaSession); \
	DECLARE_FUNCTION(execRefreshEpicSession); \
	DECLARE_FUNCTION(execStartEpicSession); \
	DECLARE_FUNCTION(execRefreshGoogleSession); \
	DECLARE_FUNCTION(execStartGoogleSessionForPlatform); \
	DECLARE_FUNCTION(execStartGoogleSession); \
	DECLARE_FUNCTION(execRefreshAppleGameCenterSession); \
	DECLARE_FUNCTION(execStartAppleGameCenterSession); \
	DECLARE_FUNCTION(execRefreshAppleSession); \
	DECLARE_FUNCTION(execStartAppleSession); \
	DECLARE_FUNCTION(execStartXboxSession); \
	DECLARE_FUNCTION(execStartNintendoSwitchSession); \
	DECLARE_FUNCTION(execStartSteamSession); \
	DECLARE_FUNCTION(execStartAmazonLunaSession); \
	DECLARE_FUNCTION(execStartAndroidSession); \
	DECLARE_FUNCTION(execStartPlaystationNetworkSession); \
	DECLARE_FUNCTION(execStartSession);


#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_ACCESSORS
#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerManager(); \
	friend struct Z_Construct_UClass_ULootLockerManager_Statics; \
public: \
	DECLARE_CLASS(ULootLockerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerManager)


#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootLockerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerManager(ULootLockerManager&&); \
	NO_API ULootLockerManager(const ULootLockerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootLockerManager) \
	NO_API virtual ~ULootLockerManager();


#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_33_PROLOG
#define FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_SPARSE_DATA \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_ACCESSORS \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_INCLASS_NO_PURE_DECLS \
	FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

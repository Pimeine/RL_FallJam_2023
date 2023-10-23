// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootLockerPlatformManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELootLockerPlatform : uint8;
struct FLootLockerPlatformRepresentation;
#ifdef LOOTLOCKERSDK_LootLockerPlatformManager_generated_h
#error "LootLockerPlatformManager.generated.h already included, missing '#pragma once' in LootLockerPlatformManager.h"
#endif
#define LOOTLOCKERSDK_LootLockerPlatformManager_generated_h

#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPlatformRepresentation>();

#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_SPARSE_DATA
#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlatformRepresentationForPlatform); \
	DECLARE_FUNCTION(execGetPlatformRepresentation);


#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_ACCESSORS
#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerCurrentPlatform(); \
	friend struct Z_Construct_UClass_ULootLockerCurrentPlatform_Statics; \
public: \
	DECLARE_CLASS(ULootLockerCurrentPlatform, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerCurrentPlatform)


#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerCurrentPlatform(ULootLockerCurrentPlatform&&); \
	NO_API ULootLockerCurrentPlatform(const ULootLockerCurrentPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerCurrentPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerCurrentPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerCurrentPlatform) \
	NO_API virtual ~ULootLockerCurrentPlatform();


#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_57_PROLOG
#define FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_SPARSE_DATA \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_ACCESSORS \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_INCLASS_NO_PURE_DECLS \
	FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerCurrentPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h


#define FOREACH_ENUM_ELOOTLOCKERPLATFORM(op) \
	op(ELootLockerPlatform::None) \
	op(ELootLockerPlatform::Guest) \
	op(ELootLockerPlatform::WhiteLabel) \
	op(ELootLockerPlatform::Steam) \
	op(ELootLockerPlatform::PlayStationNetwork) \
	op(ELootLockerPlatform::Xbox) \
	op(ELootLockerPlatform::NintendoSwitch) \
	op(ELootLockerPlatform::AmazonLuna) \
	op(ELootLockerPlatform::AppleSignIn) \
	op(ELootLockerPlatform::Android) \
	op(ELootLockerPlatform::Google) \
	op(ELootLockerPlatform::Epic) \
	op(ELootLockerPlatform::AppleGameCenter) \
	op(ELootLockerPlatform::Meta) \
	op(ELootLockerPlatform::LastValue) 

enum class ELootLockerPlatform : uint8;
template<> struct TIsUEnumClass<ELootLockerPlatform> { enum { Value = true }; };
template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerPlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

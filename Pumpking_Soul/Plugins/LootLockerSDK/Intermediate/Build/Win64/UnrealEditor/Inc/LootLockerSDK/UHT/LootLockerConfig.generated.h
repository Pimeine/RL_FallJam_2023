// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootLockerConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerResponse;
#ifdef LOOTLOCKERSDK_LootLockerConfig_generated_h
#error "LootLockerConfig.generated.h already included, missing '#pragma once' in LootLockerConfig.h"
#endif
#define LOOTLOCKERSDK_LootLockerConfig_generated_h

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerEndPoints>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerGetRequests>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_57_DELEGATE \
LOOTLOCKERSDK_API void FResponseCallbackBP_DelegateWrapper(const FScriptDelegate& ResponseCallbackBP, FLootLockerResponse Response);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_58_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerResponseCallback_DelegateWrapper(const FScriptDelegate& LootLockerResponseCallback, FLootLockerResponse Response);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_SPARSE_DATA
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLegacyAPIKey);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerConfig(); \
	friend struct Z_Construct_UClass_ULootLockerConfig_Statics; \
public: \
	DECLARE_CLASS(ULootLockerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULootLockerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerConfig(ULootLockerConfig&&); \
	NO_API ULootLockerConfig(const ULootLockerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULootLockerConfig) \
	NO_API virtual ~ULootLockerConfig();


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_61_PROLOG
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_SPARSE_DATA \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_INCLASS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h


#define FOREACH_ENUM_ELOOTLOCKERHTTPMETHOD(op) \
	op(ELootLockerHTTPMethod::GET) \
	op(ELootLockerHTTPMethod::POST) \
	op(ELootLockerHTTPMethod::DELETE) \
	op(ELootLockerHTTPMethod::PUT) \
	op(ELootLockerHTTPMethod::HEAD) \
	op(ELootLockerHTTPMethod::CREATE) \
	op(ELootLockerHTTPMethod::OPTIONS) \
	op(ELootLockerHTTPMethod::PATCH) \
	op(ELootLockerHTTPMethod::UPLOAD) 

enum class ELootLockerHTTPMethod : uint8;
template<> struct TIsUEnumClass<ELootLockerHTTPMethod> { enum { Value = true }; };
template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerHTTPMethod>();

#define FOREACH_ENUM_ELOOTLOCKERPLATFORMTYPE(op) \
	op(ELootLockerPlatformType::Android) \
	op(ELootLockerPlatformType::Ios) \
	op(ELootLockerPlatformType::Steam) \
	op(ELootLockerPlatformType::NintendoSwitch) \
	op(ELootLockerPlatformType::PlayStationNetwork) \
	op(ELootLockerPlatformType::Xbox) \
	op(ELootLockerPlatformType::UNUSED) 

enum class ELootLockerPlatformType : uint8;
template<> struct TIsUEnumClass<ELootLockerPlatformType> { enum { Value = true }; };
template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerPlatformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

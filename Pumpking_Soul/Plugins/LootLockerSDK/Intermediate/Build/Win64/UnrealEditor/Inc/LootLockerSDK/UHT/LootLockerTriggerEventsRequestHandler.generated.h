// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerTriggerEventsRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerTriggerEventResponse;
struct FLootLockerTriggersResponse;
#ifdef LOOTLOCKERSDK_LootLockerTriggerEventsRequestHandler_generated_h
#error "LootLockerTriggerEventsRequestHandler.generated.h already included, missing '#pragma once' in LootLockerTriggerEventsRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerTriggerEventsRequestHandler_generated_h

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerTriggerEvent>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerSubmitXpResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerTriggerEventResponse>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerTriggersResponse>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_34_DELEGATE \
LOOTLOCKERSDK_API void FTriggerEventResponseDelegateBP_DelegateWrapper(const FScriptDelegate& TriggerEventResponseDelegateBP, FLootLockerTriggerEventResponse Value);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_35_DELEGATE \
LOOTLOCKERSDK_API void FTriggersResponseDelegateBP_DelegateWrapper(const FScriptDelegate& TriggersResponseDelegateBP, FLootLockerTriggersResponse Value);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_SPARSE_DATA
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerTriggerEventsRequestHandler(); \
	friend struct Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULootLockerTriggerEventsRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerTriggerEventsRequestHandler)


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerTriggerEventsRequestHandler(ULootLockerTriggerEventsRequestHandler&&); \
	NO_API ULootLockerTriggerEventsRequestHandler(const ULootLockerTriggerEventsRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerTriggerEventsRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerTriggerEventsRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerTriggerEventsRequestHandler) \
	NO_API virtual ~ULootLockerTriggerEventsRequestHandler();


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_39_PROLOG
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_SPARSE_DATA \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_INCLASS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerTriggerEventsRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerMessagesRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerMessagesResponse;
#ifdef LOOTLOCKERSDK_LootLockerMessagesRequestHandler_generated_h
#error "LootLockerMessagesRequestHandler.generated.h already included, missing '#pragma once' in LootLockerMessagesRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerMessagesRequestHandler_generated_h

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerMessage_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerMessage>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerMessagesResponse>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_42_DELEGATE \
LOOTLOCKERSDK_API void FMessagesResponseDelegateBP_DelegateWrapper(const FScriptDelegate& MessagesResponseDelegateBP, FLootLockerMessagesResponse Response);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_SPARSE_DATA
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULootLockerMessagesRequestHandler(); \
	friend struct Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULootLockerMessagesRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULootLockerMessagesRequestHandler)


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULootLockerMessagesRequestHandler(ULootLockerMessagesRequestHandler&&); \
	NO_API ULootLockerMessagesRequestHandler(const ULootLockerMessagesRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULootLockerMessagesRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULootLockerMessagesRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULootLockerMessagesRequestHandler) \
	NO_API virtual ~ULootLockerMessagesRequestHandler();


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_45_PROLOG
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_SPARSE_DATA \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_INCLASS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULootLockerMessagesRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

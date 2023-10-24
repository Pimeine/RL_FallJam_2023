// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameAPI/LootLockerPlayerFilesRequestHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLootLockerFileListResponse;
struct FLootLockerPlayerFileResponse;
struct FLootLockerResponse;
#ifdef LOOTLOCKERSDK_LootLockerPlayerFilesRequestHandler_generated_h
#error "LootLockerPlayerFilesRequestHandler.generated.h already included, missing '#pragma once' in LootLockerPlayerFilesRequestHandler.h"
#endif
#define LOOTLOCKERSDK_LootLockerPlayerFilesRequestHandler_generated_h

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerFileUploadRequest>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerFileUpdateRequest>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPlayerFileResponse>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct();


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerPlayerFile>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics; \
	LOOTLOCKERSDK_API static class UScriptStruct* StaticStruct(); \
	typedef FLootLockerResponse Super;


template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<struct FLootLockerFileListResponse>();

#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_90_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerUploadFileBP_DelegateWrapper(const FScriptDelegate& LootLockerUploadFileBP, FLootLockerPlayerFileResponse Response);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_93_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerFileListBP_DelegateWrapper(const FScriptDelegate& LootLockerFileListBP, FLootLockerFileListResponse Response);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_96_DELEGATE \
LOOTLOCKERSDK_API void FLootLockerFileDeletedBP_DelegateWrapper(const FScriptDelegate& LootLockerFileDeletedBP, FLootLockerResponse Response);


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_SPARSE_DATA
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_ACCESSORS
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULLPlayerFilesRequestHandler(); \
	friend struct Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics; \
public: \
	DECLARE_CLASS(ULLPlayerFilesRequestHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LootLockerSDK"), NO_API) \
	DECLARE_SERIALIZER(ULLPlayerFilesRequestHandler)


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULLPlayerFilesRequestHandler(ULLPlayerFilesRequestHandler&&); \
	NO_API ULLPlayerFilesRequestHandler(const ULLPlayerFilesRequestHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULLPlayerFilesRequestHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULLPlayerFilesRequestHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULLPlayerFilesRequestHandler) \
	NO_API virtual ~ULLPlayerFilesRequestHandler();


#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_99_PROLOG
#define FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_SPARSE_DATA \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_ACCESSORS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_INCLASS_NO_PURE_DECLS \
	FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOOTLOCKERSDK_API UClass* StaticClass<class ULLPlayerFilesRequestHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

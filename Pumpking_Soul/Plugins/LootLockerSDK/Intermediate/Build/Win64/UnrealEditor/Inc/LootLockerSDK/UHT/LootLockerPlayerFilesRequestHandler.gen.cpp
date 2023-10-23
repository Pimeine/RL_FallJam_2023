// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPlayerFilesRequestHandler.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPlayerFilesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULLPlayerFilesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULLPlayerFilesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFileListResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFileUploadRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerFile();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest;
class UScriptStruct* FLootLockerFileUploadRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFileUploadRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFileUploadRequest>()
{
	return FLootLockerFileUploadRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_file_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_file;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_purpose_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_purpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPublic_MetaData[];
#endif
		static void NewProp_IsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPublic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFileUploadRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_file_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path to the file\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to the file" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFileUploadRequest, file), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_file_MetaData), Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_file_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_purpose_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_purpose = { "purpose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFileUploadRequest, purpose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_purpose_MetaData), Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_purpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic_SetBit(void* Obj)
	{
		((FLootLockerFileUploadRequest*)Obj)->IsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic = { "IsPublic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerFileUploadRequest), &Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic_MetaData), Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_file,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_purpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewProp_IsPublic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFileUploadRequest",
		Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::PropPointers),
		sizeof(FLootLockerFileUploadRequest),
		alignof(FLootLockerFileUploadRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFileUploadRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest;
class UScriptStruct* FLootLockerFileUpdateRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFileUpdateRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFileUpdateRequest>()
{
	return FLootLockerFileUpdateRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_file_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_file;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFileUpdateRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewProp_file_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path to the file\n" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to the file" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFileUpdateRequest, file), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewProp_file_MetaData), Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewProp_file_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewProp_file,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerFileUpdateRequest",
		Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::PropPointers),
		sizeof(FLootLockerFileUpdateRequest),
		alignof(FLootLockerFileUpdateRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPlayerFileResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPlayerFileResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse;
class UScriptStruct* FLootLockerPlayerFileResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerFileResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerFileResponse>()
{
	return FLootLockerPlayerFileResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_revision_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_revision_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_purpose_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_purpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_expires_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url_expires_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPublic_MetaData[];
#endif
		static void NewProp_IsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPublic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerFileResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_message_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_message_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_revision_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_revision_id = { "revision_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, revision_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_revision_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_revision_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_size_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_size_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_purpose_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_purpose = { "purpose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, purpose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_purpose_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_purpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_expires_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_expires_at = { "url_expires_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, url_expires_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_expires_at_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_expires_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFileResponse, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic_SetBit(void* Obj)
	{
		((FLootLockerPlayerFileResponse*)Obj)->IsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic = { "IsPublic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerPlayerFileResponse), &Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_revision_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_purpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_url_expires_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewProp_IsPublic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPlayerFileResponse",
		Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::PropPointers),
		sizeof(FLootLockerPlayerFileResponse),
		alignof(FLootLockerPlayerFileResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlayerFile;
class UScriptStruct* FLootLockerPlayerFile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerFile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlayerFile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlayerFile, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlayerFile"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlayerFile.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlayerFile>()
{
	return FLootLockerPlayerFile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_revision_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_revision_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_purpose_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_purpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_expires_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url_expires_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPublic_MetaData[];
#endif
		static void NewProp_IsPublic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPublic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlayerFile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_revision_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_revision_id = { "revision_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, revision_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_revision_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_revision_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_size_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_size_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_purpose_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_purpose = { "purpose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, purpose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_purpose_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_purpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_expires_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_expires_at = { "url_expires_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, url_expires_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_expires_at_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_expires_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_created_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_created_at = { "created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlayerFile, created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic_SetBit(void* Obj)
	{
		((FLootLockerPlayerFile*)Obj)->IsPublic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic = { "IsPublic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerPlayerFile), &Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic_MetaData), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_revision_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_purpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_url_expires_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewProp_IsPublic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlayerFile",
		Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::PropPointers),
		sizeof(FLootLockerPlayerFile),
		alignof(FLootLockerPlayerFile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlayerFile()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlayerFile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlayerFile.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlayerFile.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerFileListResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerFileListResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerFileListResponse;
class UScriptStruct* FLootLockerFileListResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerFileListResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerFileListResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerFileListResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerFileListResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerFileListResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerFileListResponse>()
{
	return FLootLockerFileListResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerFileListResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerPlayerFile, METADATA_PARAMS(0, nullptr) }; // 4064044739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerFileListResponse, items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items_MetaData), Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items_MetaData) }; // 4064044739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewProp_items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerFileListResponse",
		Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::PropPointers),
		sizeof(FLootLockerFileListResponse),
		alignof(FLootLockerFileListResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerFileListResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerFileListResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerFileListResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerFileListResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerUploadFileBP_Parms
		{
			FLootLockerPlayerFileResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerUploadFileBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse, METADATA_PARAMS(0, nullptr) }; // 224937672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerUploadFileBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerUploadFileBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerUploadFileBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUploadFileBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerUploadFileBP_DelegateWrapper(const FScriptDelegate& LootLockerUploadFileBP, FLootLockerPlayerFileResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerUploadFileBP_Parms
	{
		FLootLockerPlayerFileResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerUploadFileBP_Parms Parms;
	Parms.Response=Response;
	LootLockerUploadFileBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerFileListBP_Parms
		{
			FLootLockerFileListResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerFileListBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerFileListResponse, METADATA_PARAMS(0, nullptr) }; // 935841803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerFileListBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerFileListBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerFileListBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileListBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerFileListBP_DelegateWrapper(const FScriptDelegate& LootLockerFileListBP, FLootLockerFileListResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerFileListBP_Parms
	{
		FLootLockerFileListResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerFileListBP_Parms Parms;
	Parms.Response=Response;
	LootLockerFileListBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerFileDeletedBP_Parms
		{
			FLootLockerResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerFileDeletedBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 1341814719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerFileDeletedBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerFileDeletedBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerFileDeletedBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerFileDeletedBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerFileDeletedBP_DelegateWrapper(const FScriptDelegate& LootLockerFileDeletedBP, FLootLockerResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerFileDeletedBP_Parms
	{
		FLootLockerResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerFileDeletedBP_Parms Parms;
	Parms.Response=Response;
	LootLockerFileDeletedBP.ProcessDelegate<UObject>(&Parms);
}
	void ULLPlayerFilesRequestHandler::StaticRegisterNativesULLPlayerFilesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULLPlayerFilesRequestHandler);
	UClass* Z_Construct_UClass_ULLPlayerFilesRequestHandler_NoRegister()
	{
		return ULLPlayerFilesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerPlayerFilesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPlayerFilesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULLPlayerFilesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::ClassParams = {
		&ULLPlayerFilesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULLPlayerFilesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULLPlayerFilesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULLPlayerFilesRequestHandler.OuterSingleton, Z_Construct_UClass_ULLPlayerFilesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULLPlayerFilesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULLPlayerFilesRequestHandler>()
	{
		return ULLPlayerFilesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULLPlayerFilesRequestHandler);
	ULLPlayerFilesRequestHandler::~ULLPlayerFilesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerFileUploadRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFileUploadRequest_Statics::NewStructOps, TEXT("LootLockerFileUploadRequest"), &Z_Registration_Info_UScriptStruct_LootLockerFileUploadRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFileUploadRequest), 4178721988U) },
		{ FLootLockerFileUpdateRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFileUpdateRequest_Statics::NewStructOps, TEXT("LootLockerFileUpdateRequest"), &Z_Registration_Info_UScriptStruct_LootLockerFileUpdateRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFileUpdateRequest), 1275548558U) },
		{ FLootLockerPlayerFileResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerFileResponse_Statics::NewStructOps, TEXT("LootLockerPlayerFileResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerFileResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerFileResponse), 224937672U) },
		{ FLootLockerPlayerFile::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlayerFile_Statics::NewStructOps, TEXT("LootLockerPlayerFile"), &Z_Registration_Info_UScriptStruct_LootLockerPlayerFile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlayerFile), 4064044739U) },
		{ FLootLockerFileListResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerFileListResponse_Statics::NewStructOps, TEXT("LootLockerFileListResponse"), &Z_Registration_Info_UScriptStruct_LootLockerFileListResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerFileListResponse), 935841803U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULLPlayerFilesRequestHandler, ULLPlayerFilesRequestHandler::StaticClass, TEXT("ULLPlayerFilesRequestHandler"), &Z_Registration_Info_UClass_ULLPlayerFilesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULLPlayerFilesRequestHandler), 368432012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_3288659493(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPlayerFilesRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

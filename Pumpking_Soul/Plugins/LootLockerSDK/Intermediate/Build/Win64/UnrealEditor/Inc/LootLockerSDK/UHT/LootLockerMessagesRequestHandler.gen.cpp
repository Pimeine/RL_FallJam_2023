// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerMessagesRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerMessagesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMessagesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMessagesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMessage();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMessagesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMessage;
class UScriptStruct* FLootLockerMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMessage, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMessage.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMessage>()
{
	return FLootLockerMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_published_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_published_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_summary_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_summary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_alert_MetaData[];
#endif
		static void NewProp_alert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_alert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[];
#endif
		static void NewProp_New_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_New;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_title_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_title_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_published_at_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_published_at = { "published_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, published_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_published_at_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_published_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_body_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, body), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_body_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_summary_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_summary = { "summary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, summary), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_summary_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_summary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_category_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_category = { "category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_category_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_category_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert_SetBit(void* Obj)
	{
		((FLootLockerMessage*)Obj)->alert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert = { "alert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerMessage), &Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New_SetBit(void* Obj)
	{
		((FLootLockerMessage*)Obj)->New = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerMessage), &Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_action_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_action_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_image_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessage, image), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_image_MetaData), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_image_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_published_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_summary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_alert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_New,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewProp_image,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerMessage",
		Z_Construct_UScriptStruct_FLootLockerMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::PropPointers),
		sizeof(FLootLockerMessage),
		alignof(FLootLockerMessage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMessage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMessage.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerMessagesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerMessagesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse;
class UScriptStruct* FLootLockerMessagesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerMessagesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerMessagesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerMessagesResponse>()
{
	return FLootLockerMessagesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_messages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_messages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_messages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerMessagesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages_Inner = { "messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerMessage, METADATA_PARAMS(0, nullptr) }; // 1079728856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages = { "messages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerMessagesResponse, messages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages_MetaData), Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages_MetaData) }; // 1079728856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewProp_messages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerMessagesResponse",
		Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::PropPointers),
		sizeof(FLootLockerMessagesResponse),
		alignof(FLootLockerMessagesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerMessagesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventMessagesResponseDelegateBP_Parms
		{
			FLootLockerMessagesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventMessagesResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerMessagesResponse, METADATA_PARAMS(0, nullptr) }; // 2193248284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "MessagesResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventMessagesResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventMessagesResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_MessagesResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMessagesResponseDelegateBP_DelegateWrapper(const FScriptDelegate& MessagesResponseDelegateBP, FLootLockerMessagesResponse Response)
{
	struct _Script_LootLockerSDK_eventMessagesResponseDelegateBP_Parms
	{
		FLootLockerMessagesResponse Response;
	};
	_Script_LootLockerSDK_eventMessagesResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	MessagesResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerMessagesRequestHandler::StaticRegisterNativesULootLockerMessagesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerMessagesRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerMessagesRequestHandler_NoRegister()
	{
		return ULootLockerMessagesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerMessagesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMessagesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerMessagesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::ClassParams = {
		&ULootLockerMessagesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerMessagesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerMessagesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerMessagesRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerMessagesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerMessagesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerMessagesRequestHandler>()
	{
		return ULootLockerMessagesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerMessagesRequestHandler);
	ULootLockerMessagesRequestHandler::~ULootLockerMessagesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerMessage::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMessage_Statics::NewStructOps, TEXT("LootLockerMessage"), &Z_Registration_Info_UScriptStruct_LootLockerMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMessage), 1079728856U) },
		{ FLootLockerMessagesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerMessagesResponse_Statics::NewStructOps, TEXT("LootLockerMessagesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerMessagesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerMessagesResponse), 2193248284U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerMessagesRequestHandler, ULootLockerMessagesRequestHandler::StaticClass, TEXT("ULootLockerMessagesRequestHandler"), &Z_Registration_Info_UClass_ULootLockerMessagesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerMessagesRequestHandler), 1737124092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_702787066(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMessagesRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

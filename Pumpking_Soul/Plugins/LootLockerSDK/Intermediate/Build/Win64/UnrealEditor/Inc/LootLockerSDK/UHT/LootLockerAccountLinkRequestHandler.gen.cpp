// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerAccountLinkRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerAccountLinkRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerAccountLinkRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus;
	static UEnum* ELootLockerAccountLinkingProcessStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerAccountLinkingProcessStatus"));
		}
		return Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerAccountLinkingProcessStatus>()
	{
		return ELootLockerAccountLinkingProcessStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::Enumerators[] = {
		{ "ELootLockerAccountLinkingProcessStatus::Undefined", (int64)ELootLockerAccountLinkingProcessStatus::Undefined },
		{ "ELootLockerAccountLinkingProcessStatus::Started", (int64)ELootLockerAccountLinkingProcessStatus::Started },
		{ "ELootLockerAccountLinkingProcessStatus::Cancelled", (int64)ELootLockerAccountLinkingProcessStatus::Cancelled },
		{ "ELootLockerAccountLinkingProcessStatus::Completed", (int64)ELootLockerAccountLinkingProcessStatus::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.DisplayName", "Cancelled" },
		{ "Cancelled.Name", "ELootLockerAccountLinkingProcessStatus::Cancelled" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Possible account linking process statuses. Undefined means that the object couldn't be constructed correctly\n */" },
#endif
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "ELootLockerAccountLinkingProcessStatus::Completed" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
		{ "Started.DisplayName", "Started" },
		{ "Started.Name", "ELootLockerAccountLinkingProcessStatus::Started" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Possible account linking process statuses. Undefined means that the object couldn't be constructed correctly" },
#endif
		{ "Undefined.DisplayName", "Undefined" },
		{ "Undefined.Name", "ELootLockerAccountLinkingProcessStatus::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerAccountLinkingProcessStatus",
		"ELootLockerAccountLinkingProcessStatus",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAccountLinkStartResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAccountLinkStartResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse;
class UScriptStruct* FLootLockerAccountLinkStartResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAccountLinkStartResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAccountLinkStartResponse>()
{
	return FLootLockerAccountLinkStartResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Link_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Link_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Qr_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Qr_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_page_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code_page_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAccountLinkStartResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Link_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * ID of the account linking process. Save this as you will need it for checking the linking process status and if you want to cancel it.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* ID of the account linking process. Save this as you will need it for checking the linking process status and if you want to cancel it." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Link_id = { "Link_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountLinkStartResponse, Link_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Link_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Link_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Used by the user in the online account linking process\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Used by the user in the online account linking process" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountLinkStartResponse, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Qr_code_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Base64 encoded PNG image of a qr code that can be shown to the player for them to scan and open the account linking flow\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Base64 encoded PNG image of a qr code that can be shown to the player for them to scan and open the account linking flow" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Qr_code = { "Qr_code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountLinkStartResponse, Qr_code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Qr_code_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Qr_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_page_url_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * URL to where the user can continue the online account linking process\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* URL to where the user can continue the online account linking process" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_page_url = { "Code_page_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountLinkStartResponse, Code_page_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_page_url_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_page_url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Link_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Qr_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewProp_Code_page_url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAccountLinkStartResponse",
		Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::PropPointers),
		sizeof(FLootLockerAccountLinkStartResponse),
		alignof(FLootLockerAccountLinkStartResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAccountLinkProcessStatusResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerAccountLinkProcessStatusResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse;
class UScriptStruct* FLootLockerAccountLinkProcessStatusResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAccountLinkProcessStatusResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAccountLinkProcessStatusResponse>()
{
	return FLootLockerAccountLinkProcessStatusResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAccountLinkProcessStatusResponse>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Current status of the specified account linking process\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Current status of the specified account linking process" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountLinkProcessStatusResponse, Status), Z_Construct_UEnum_LootLockerSDK_ELootLockerAccountLinkingProcessStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status_MetaData) }; // 61458085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n     * Time when the specified account linking process was started\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Time when the specified account linking process was started" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAccountLinkProcessStatusResponse, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Created_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewProp_Created_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerAccountLinkProcessStatusResponse",
		Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::PropPointers),
		sizeof(FLootLockerAccountLinkProcessStatusResponse),
		alignof(FLootLockerAccountLinkProcessStatusResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCancelAccountLinkingProcessResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerCancelAccountLinkingProcessResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse;
class UScriptStruct* FLootLockerCancelAccountLinkingProcessResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCancelAccountLinkingProcessResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCancelAccountLinkingProcessResponse>()
{
	return FLootLockerCancelAccountLinkingProcessResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * This response will be empty unless there's an error\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This response will be empty unless there's an error" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCancelAccountLinkingProcessResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerCancelAccountLinkingProcessResponse",
		nullptr,
		0,
		sizeof(FLootLockerCancelAccountLinkingProcessResponse),
		alignof(FLootLockerCancelAccountLinkingProcessResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerUnlinkProviderFromAccountResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerUnlinkProviderFromAccountResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse;
class UScriptStruct* FLootLockerUnlinkProviderFromAccountResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerUnlinkProviderFromAccountResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerUnlinkProviderFromAccountResponse>()
{
	return FLootLockerUnlinkProviderFromAccountResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * This response will be empty unless there's an error\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* This response will be empty unless there's an error" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerUnlinkProviderFromAccountResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerUnlinkProviderFromAccountResponse",
		nullptr,
		0,
		sizeof(FLootLockerUnlinkProviderFromAccountResponse),
		alignof(FLootLockerUnlinkProviderFromAccountResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerAccountLinkStartResponseBP_Parms
		{
			FLootLockerAccountLinkStartResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerAccountLinkStartResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse, METADATA_PARAMS(0, nullptr) }; // 2775443070
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Blueprint response delegate for starting an account linking process\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Blueprint response delegate for starting an account linking process" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerAccountLinkStartResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerAccountLinkStartResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerAccountLinkStartResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkStartResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerAccountLinkStartResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerAccountLinkStartResponseBP, FLootLockerAccountLinkStartResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerAccountLinkStartResponseBP_Parms
	{
		FLootLockerAccountLinkStartResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerAccountLinkStartResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerAccountLinkStartResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerAccountLinkProcessStatusResponseBP_Parms
		{
			FLootLockerAccountLinkProcessStatusResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerAccountLinkProcessStatusResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse, METADATA_PARAMS(0, nullptr) }; // 3940291812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Blueprint response delegate for checking the status of an ongoing account linking process\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Blueprint response delegate for checking the status of an ongoing account linking process" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerAccountLinkProcessStatusResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerAccountLinkProcessStatusResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerAccountLinkProcessStatusResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerAccountLinkProcessStatusResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerAccountLinkProcessStatusResponseBP, FLootLockerAccountLinkProcessStatusResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerAccountLinkProcessStatusResponseBP_Parms
	{
		FLootLockerAccountLinkProcessStatusResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerAccountLinkProcessStatusResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerAccountLinkProcessStatusResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerCancelAccountLinkingProcessResponseBP_Parms
		{
			FLootLockerCancelAccountLinkingProcessResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerCancelAccountLinkingProcessResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse, METADATA_PARAMS(0, nullptr) }; // 1331825343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Blueprint response delegate for cancelling an account linking process\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Blueprint response delegate for cancelling an account linking process" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerCancelAccountLinkingProcessResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerCancelAccountLinkingProcessResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCancelAccountLinkingProcessResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerCancelAccountLinkingProcessResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerCancelAccountLinkingProcessResponseBP, FLootLockerCancelAccountLinkingProcessResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerCancelAccountLinkingProcessResponseBP_Parms
	{
		FLootLockerCancelAccountLinkingProcessResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerCancelAccountLinkingProcessResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerCancelAccountLinkingProcessResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerUnlinkProviderFromAccountResponseBP_Parms
		{
			FLootLockerUnlinkProviderFromAccountResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerUnlinkProviderFromAccountResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse, METADATA_PARAMS(0, nullptr) }; // 3279912292
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Blueprint response delegate for unlinking a provider from an account\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Blueprint response delegate for unlinking a provider from an account" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerUnlinkProviderFromAccountResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerUnlinkProviderFromAccountResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerUnlinkProviderFromAccountResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerUnlinkProviderFromAccountResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerUnlinkProviderFromAccountResponseBP, FLootLockerUnlinkProviderFromAccountResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerUnlinkProviderFromAccountResponseBP_Parms
	{
		FLootLockerUnlinkProviderFromAccountResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerUnlinkProviderFromAccountResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerUnlinkProviderFromAccountResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerAccountLinkRequestHandler::StaticRegisterNativesULootLockerAccountLinkRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerAccountLinkRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_NoRegister()
	{
		return ULootLockerAccountLinkRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerAccountLinkRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerAccountLinkRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerAccountLinkRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::ClassParams = {
		&ULootLockerAccountLinkRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerAccountLinkRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerAccountLinkRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerAccountLinkRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerAccountLinkRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerAccountLinkRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerAccountLinkRequestHandler>()
	{
		return ULootLockerAccountLinkRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerAccountLinkRequestHandler);
	ULootLockerAccountLinkRequestHandler::~ULootLockerAccountLinkRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerAccountLinkingProcessStatus_StaticEnum, TEXT("ELootLockerAccountLinkingProcessStatus"), &Z_Registration_Info_UEnum_ELootLockerAccountLinkingProcessStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 61458085U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerAccountLinkStartResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAccountLinkStartResponse_Statics::NewStructOps, TEXT("LootLockerAccountLinkStartResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAccountLinkStartResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAccountLinkStartResponse), 2775443070U) },
		{ FLootLockerAccountLinkProcessStatusResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAccountLinkProcessStatusResponse_Statics::NewStructOps, TEXT("LootLockerAccountLinkProcessStatusResponse"), &Z_Registration_Info_UScriptStruct_LootLockerAccountLinkProcessStatusResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAccountLinkProcessStatusResponse), 3940291812U) },
		{ FLootLockerCancelAccountLinkingProcessResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCancelAccountLinkingProcessResponse_Statics::NewStructOps, TEXT("LootLockerCancelAccountLinkingProcessResponse"), &Z_Registration_Info_UScriptStruct_LootLockerCancelAccountLinkingProcessResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCancelAccountLinkingProcessResponse), 1331825343U) },
		{ FLootLockerUnlinkProviderFromAccountResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerUnlinkProviderFromAccountResponse_Statics::NewStructOps, TEXT("LootLockerUnlinkProviderFromAccountResponse"), &Z_Registration_Info_UScriptStruct_LootLockerUnlinkProviderFromAccountResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerUnlinkProviderFromAccountResponse), 3279912292U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerAccountLinkRequestHandler, ULootLockerAccountLinkRequestHandler::StaticClass, TEXT("ULootLockerAccountLinkRequestHandler"), &Z_Registration_Info_UClass_ULootLockerAccountLinkRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerAccountLinkRequestHandler), 2829818627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_4001177493(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerAccountLinkRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

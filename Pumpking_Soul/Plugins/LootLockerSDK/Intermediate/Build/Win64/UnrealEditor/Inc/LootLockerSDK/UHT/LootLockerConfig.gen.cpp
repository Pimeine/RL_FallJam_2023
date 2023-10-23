// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerConfig.h"
#include "LootLockerSDK/Public/LootLockerResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerConfig();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerConfig_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEndPoints();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetRequests();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerHTTPMethod;
	static UEnum* ELootLockerHTTPMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerHTTPMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerHTTPMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerHTTPMethod"));
		}
		return Z_Registration_Info_UEnum_ELootLockerHTTPMethod.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerHTTPMethod>()
	{
		return ELootLockerHTTPMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enumerators[] = {
		{ "ELootLockerHTTPMethod::GET", (int64)ELootLockerHTTPMethod::GET },
		{ "ELootLockerHTTPMethod::POST", (int64)ELootLockerHTTPMethod::POST },
		{ "ELootLockerHTTPMethod::DELETE", (int64)ELootLockerHTTPMethod::DELETE },
		{ "ELootLockerHTTPMethod::PUT", (int64)ELootLockerHTTPMethod::PUT },
		{ "ELootLockerHTTPMethod::HEAD", (int64)ELootLockerHTTPMethod::HEAD },
		{ "ELootLockerHTTPMethod::CREATE", (int64)ELootLockerHTTPMethod::CREATE },
		{ "ELootLockerHTTPMethod::OPTIONS", (int64)ELootLockerHTTPMethod::OPTIONS },
		{ "ELootLockerHTTPMethod::PATCH", (int64)ELootLockerHTTPMethod::PATCH },
		{ "ELootLockerHTTPMethod::UPLOAD", (int64)ELootLockerHTTPMethod::UPLOAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CREATE.DisplayName", "CREATE" },
		{ "CREATE.Name", "ELootLockerHTTPMethod::CREATE" },
		{ "DELETE.DisplayName", "DELETE" },
		{ "DELETE.Name", "ELootLockerHTTPMethod::DELETE" },
		{ "GET.DisplayName", "GET" },
		{ "GET.Name", "ELootLockerHTTPMethod::GET" },
		{ "HEAD.DisplayName", "HEAD" },
		{ "HEAD.Name", "ELootLockerHTTPMethod::HEAD" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
		{ "OPTIONS.DisplayName", "OPTIONS" },
		{ "OPTIONS.Name", "ELootLockerHTTPMethod::OPTIONS" },
		{ "PATCH.DisplayName", "PATCH" },
		{ "PATCH.Name", "ELootLockerHTTPMethod::PATCH" },
		{ "POST.DisplayName", "POST" },
		{ "POST.Name", "ELootLockerHTTPMethod::POST" },
		{ "PUT.DisplayName", "PUT" },
		{ "PUT.Name", "ELootLockerHTTPMethod::PUT" },
		{ "UPLOAD.DisplayName", "UPLOAD" },
		{ "UPLOAD.Name", "ELootLockerHTTPMethod::UPLOAD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerHTTPMethod",
		"ELootLockerHTTPMethod",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerHTTPMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerHTTPMethod.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerHTTPMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerPlatformType;
	static UEnum* ELootLockerPlatformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerPlatformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerPlatformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerPlatformType"));
		}
		return Z_Registration_Info_UEnum_ELootLockerPlatformType.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerPlatformType>()
	{
		return ELootLockerPlatformType_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::Enumerators[] = {
		{ "ELootLockerPlatformType::Android", (int64)ELootLockerPlatformType::Android },
		{ "ELootLockerPlatformType::Ios", (int64)ELootLockerPlatformType::Ios },
		{ "ELootLockerPlatformType::Steam", (int64)ELootLockerPlatformType::Steam },
		{ "ELootLockerPlatformType::NintendoSwitch", (int64)ELootLockerPlatformType::NintendoSwitch },
		{ "ELootLockerPlatformType::PlayStationNetwork", (int64)ELootLockerPlatformType::PlayStationNetwork },
		{ "ELootLockerPlatformType::Xbox", (int64)ELootLockerPlatformType::Xbox },
		{ "ELootLockerPlatformType::UNUSED", (int64)ELootLockerPlatformType::UNUSED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::Enum_MetaDataParams[] = {
		{ "Android.DisplayName", "Android" },
		{ "Android.Name", "ELootLockerPlatformType::Android" },
		{ "BlueprintType", "true" },
		{ "Ios.DisplayName", "Ios" },
		{ "Ios.Name", "ELootLockerPlatformType::Ios" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
		{ "NintendoSwitch.DisplayName", "NintendoSwitch" },
		{ "NintendoSwitch.Name", "ELootLockerPlatformType::NintendoSwitch" },
		{ "PlayStationNetwork.DisplayName", "PlayStationNetwork" },
		{ "PlayStationNetwork.Name", "ELootLockerPlatformType::PlayStationNetwork" },
		{ "Steam.DisplayName", "Steam" },
		{ "Steam.Name", "ELootLockerPlatformType::Steam" },
		{ "UNUSED.DisplayName", "Unused" },
		{ "UNUSED.Name", "ELootLockerPlatformType::UNUSED" },
		{ "Xbox.DisplayName", "Xbox" },
		{ "Xbox.Name", "ELootLockerPlatformType::Xbox" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerPlatformType",
		"ELootLockerPlatformType",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerPlatformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerPlatformType.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerPlatformType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerEndPoints;
class UScriptStruct* FLootLockerEndPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerEndPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerEndPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerEndPoints, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerEndPoints"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerEndPoints.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerEndPoints>()
{
	return FLootLockerEndPoints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_endpoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_requestMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerEndPoints>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint = { "endpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEndPoints, endpoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint_MetaData), Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod = { "requestMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerEndPoints, requestMethod), Z_Construct_UEnum_LootLockerSDK_ELootLockerHTTPMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_MetaData), Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_MetaData) }; // 3088039968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_endpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewProp_requestMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerEndPoints",
		Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers),
		sizeof(FLootLockerEndPoints),
		alignof(FLootLockerEndPoints),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerEndPoints()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerEndPoints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerEndPoints.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerEndPoints.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetRequests;
class UScriptStruct* FLootLockerGetRequests::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetRequests.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetRequests.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetRequests, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetRequests"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetRequests.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetRequests>()
{
	return FLootLockerGetRequests::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetRequests>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerGetRequests",
		nullptr,
		0,
		sizeof(FLootLockerGetRequests),
		alignof(FLootLockerGetRequests),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetRequests()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetRequests.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetRequests.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetRequests.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventResponseCallbackBP_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventResponseCallbackBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 1341814719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "ResponseCallbackBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventResponseCallbackBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventResponseCallbackBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_ResponseCallbackBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResponseCallbackBP_DelegateWrapper(const FScriptDelegate& ResponseCallbackBP, FLootLockerResponse Response)
{
	struct _Script_LootLockerSDK_eventResponseCallbackBP_Parms
	{
		FLootLockerResponse Response;
	};
	_Script_LootLockerSDK_eventResponseCallbackBP_Parms Parms;
	Parms.Response=Response;
	ResponseCallbackBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerResponseCallback_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms, Response), Z_Construct_UScriptStruct_FLootLockerResponse, METADATA_PARAMS(0, nullptr) }; // 1341814719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerResponseCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerResponseCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerResponseCallback_DelegateWrapper(const FScriptDelegate& LootLockerResponseCallback, FLootLockerResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerResponseCallback_Parms
	{
		FLootLockerResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerResponseCallback_Parms Parms;
	Parms.Response=Response;
	LootLockerResponseCallback.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULootLockerConfig::execIsLegacyAPIKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLegacyAPIKey();
		P_NATIVE_END;
	}
	void ULootLockerConfig::StaticRegisterNativesULootLockerConfig()
	{
		UClass* Class = ULootLockerConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLegacyAPIKey", &ULootLockerConfig::execIsLegacyAPIKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics
	{
		struct LootLockerConfig_eventIsLegacyAPIKey_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LootLockerConfig_eventIsLegacyAPIKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LootLockerConfig_eventIsLegacyAPIKey_Parms), &Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootLockerConfig, nullptr, "IsLegacyAPIKey", nullptr, nullptr, Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::LootLockerConfig_eventIsLegacyAPIKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::LootLockerConfig_eventIsLegacyAPIKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerConfig);
	UClass* Z_Construct_UClass_ULootLockerConfig_NoRegister()
	{
		return ULootLockerConfig::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LootLockerGameKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LootLockerGameKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyKeyWarning_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LegacyKeyWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowTokenRefresh_MetaData[];
#endif
		static void NewProp_AllowTokenRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowTokenRefresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomainKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DomainKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDevelopmentMode_MetaData[];
#endif
		static void NewProp_OnDevelopmentMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnDevelopmentMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLegacyKey_MetaData[];
#endif
		static void NewProp_IsLegacyKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLegacyKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLegacyPlatform_MetaData[];
#endif
		static void NewProp_IsLegacyPlatform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLegacyPlatform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULootLockerConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootLockerConfig_IsLegacyAPIKey, "IsLegacyAPIKey" }, // 2322446413
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "LootLocker SDK Settings" },
		{ "IncludePath", "LootLockerConfig.h" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// API Key used to talk to LootLocker. The API key can be found in `Settings > API Keys` in the Web Console: https://console.lootlocker.com/settings/api-keys\n" },
#endif
		{ "DisplayName", "LootLocker API Key" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Key used to talk to LootLocker. The API key can be found in `Settings > API Keys` in the Web Console: https:console.lootlocker.com/settings/api-keys" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey = { "LootLockerGameKey", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, LootLockerGameKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LegacyKeyWarning_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "DisplayName", "WARNING:" },
		{ "EditCondition", "IsLegacyKey" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LegacyKeyWarning = { "LegacyKeyWarning", nullptr, (EPropertyFlags)0x0010000000026015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, LegacyKeyWarning), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LegacyKeyWarning_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LegacyKeyWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_SetBit(void* Obj)
	{
		((ULootLockerConfig*)Obj)->AllowTokenRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh = { "AllowTokenRefresh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULootLockerConfig), &Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Domain Key used to talk to LootLocker. The Domain key can be found in `Settings > API Keys` in the Web Console: https://console.lootlocker.com/settings/api-keys\n" },
#endif
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Domain Key used to talk to LootLocker. The Domain key can be found in `Settings > API Keys` in the Web Console: https:console.lootlocker.com/settings/api-keys" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey = { "DomainKey", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, DomainKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Development Mode is only used for legacy API keys and signifies if the API Key is for the Stage or the Live environment (true = Stage, false = Live)\n" },
#endif
		{ "DisplayName", "Development Mode" },
		{ "EditCondition", "IsLegacyKey" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Development Mode is only used for legacy API keys and signifies if the API Key is for the Stage or the Live environment (true = Stage, false = Live)" },
#endif
	};
#endif
	void Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode_SetBit(void* Obj)
	{
		((ULootLockerConfig*)Obj)->OnDevelopmentMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode = { "OnDevelopmentMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULootLockerConfig), &Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "The Platform property has been deprecated, please use the appropriate \"StartXSession\" instead and set this property to UNUSED.\nFor Android use GuestLogin. For iOS use StartAppleSession. For Steam use StartSteamSession. For PlayStation use StartPlaystationNetworkSession. For Amazon Luna use StartAmazonLunaSession. If you are unsure of what to use, use GuestLogin." },
		{ "DisplayName", "DEPRECATED: Platform" },
		{ "EditCondition", "IsLegacyPlatform" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Platform property has been deprecated, please use the appropriate \"StartXSession\" instead and set this property to UNUSED.\nFor Android use GuestLogin. For iOS use StartAppleSession. For Steam use StartSteamSession. For PlayStation use StartPlaystationNetworkSession. For Amazon Luna use StartAmazonLunaSession. If you are unsure of what to use, use GuestLogin." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerConfig, Platform), Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatformType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform_MetaData) }; // 1851569799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey_SetBit(void* Obj)
	{
		((ULootLockerConfig*)Obj)->IsLegacyKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey = { "IsLegacyKey", nullptr, (EPropertyFlags)0x0040000000026801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULootLockerConfig), &Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LootLockerConfig.h" },
	};
#endif
	void Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform_SetBit(void* Obj)
	{
		((ULootLockerConfig*)Obj)->IsLegacyPlatform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform = { "IsLegacyPlatform", nullptr, (EPropertyFlags)0x0040000000026801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULootLockerConfig), &Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform_MetaData), Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LootLockerGameKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_LegacyKeyWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_GameVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_AllowTokenRefresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_DomainKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_OnDevelopmentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerConfig_Statics::NewProp_IsLegacyPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerConfig_Statics::ClassParams = {
		&ULootLockerConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULootLockerConfig()
	{
		if (!Z_Registration_Info_UClass_ULootLockerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerConfig.OuterSingleton, Z_Construct_UClass_ULootLockerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerConfig.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerConfig>()
	{
		return ULootLockerConfig::StaticClass();
	}
	ULootLockerConfig::ULootLockerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerConfig);
	ULootLockerConfig::~ULootLockerConfig() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::EnumInfo[] = {
		{ ELootLockerHTTPMethod_StaticEnum, TEXT("ELootLockerHTTPMethod"), &Z_Registration_Info_UEnum_ELootLockerHTTPMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3088039968U) },
		{ ELootLockerPlatformType_StaticEnum, TEXT("ELootLockerPlatformType"), &Z_Registration_Info_UEnum_ELootLockerPlatformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1851569799U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerEndPoints::StaticStruct, Z_Construct_UScriptStruct_FLootLockerEndPoints_Statics::NewStructOps, TEXT("LootLockerEndPoints"), &Z_Registration_Info_UScriptStruct_LootLockerEndPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerEndPoints), 1394835837U) },
		{ FLootLockerGetRequests::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetRequests_Statics::NewStructOps, TEXT("LootLockerGetRequests"), &Z_Registration_Info_UScriptStruct_LootLockerGetRequests, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetRequests), 3430428162U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerConfig, ULootLockerConfig::StaticClass, TEXT("ULootLockerConfig"), &Z_Registration_Info_UClass_ULootLockerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerConfig), 917067740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_809749301(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

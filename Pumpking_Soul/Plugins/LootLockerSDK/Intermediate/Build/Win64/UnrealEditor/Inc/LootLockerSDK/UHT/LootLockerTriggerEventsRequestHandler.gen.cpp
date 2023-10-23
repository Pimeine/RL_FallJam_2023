// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerTriggerEventsRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerTriggerEventsRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTriggerEvent();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTriggersResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent;
class UScriptStruct* FLootLockerTriggerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerTriggerEvent, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerTriggerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerTriggerEvent>()
{
	return FLootLockerTriggerEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerTriggerEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewProp_name_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerTriggerEvent, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewProp_name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewProp_name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerTriggerEvent",
		Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::PropPointers),
		sizeof(FLootLockerTriggerEvent),
		alignof(FLootLockerTriggerEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTriggerEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerTriggerEventResponse>() == std::is_polymorphic<FLootLockerSubmitXpResponse>(), "USTRUCT FLootLockerTriggerEventResponse cannot be polymorphic unless super FLootLockerSubmitXpResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse;
class UScriptStruct* FLootLockerTriggerEventResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerTriggerEventResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerTriggerEventResponse>()
{
	return FLootLockerTriggerEventResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerTriggerEventResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerSubmitXpResponse,
		&NewStructOps,
		"LootLockerTriggerEventResponse",
		nullptr,
		0,
		sizeof(FLootLockerTriggerEventResponse),
		alignof(FLootLockerTriggerEventResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerTriggersResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerTriggersResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse;
class UScriptStruct* FLootLockerTriggersResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerTriggersResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerTriggersResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerTriggersResponse>()
{
	return FLootLockerTriggersResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerTriggersResponse>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers_Inner = { "triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers = { "triggers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerTriggersResponse, triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers_MetaData), Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewProp_triggers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerTriggersResponse",
		Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::PropPointers),
		sizeof(FLootLockerTriggersResponse),
		alignof(FLootLockerTriggersResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTriggersResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventTriggerEventResponseDelegateBP_Parms
		{
			FLootLockerTriggerEventResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventTriggerEventResponseDelegateBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse, METADATA_PARAMS(0, nullptr) }; // 521833943
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "TriggerEventResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventTriggerEventResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventTriggerEventResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_TriggerEventResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTriggerEventResponseDelegateBP_DelegateWrapper(const FScriptDelegate& TriggerEventResponseDelegateBP, FLootLockerTriggerEventResponse Value)
{
	struct _Script_LootLockerSDK_eventTriggerEventResponseDelegateBP_Parms
	{
		FLootLockerTriggerEventResponse Value;
	};
	_Script_LootLockerSDK_eventTriggerEventResponseDelegateBP_Parms Parms;
	Parms.Value=Value;
	TriggerEventResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventTriggersResponseDelegateBP_Parms
		{
			FLootLockerTriggersResponse Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventTriggersResponseDelegateBP_Parms, Value), Z_Construct_UScriptStruct_FLootLockerTriggersResponse, METADATA_PARAMS(0, nullptr) }; // 4148122048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "TriggersResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventTriggersResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventTriggersResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_TriggersResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTriggersResponseDelegateBP_DelegateWrapper(const FScriptDelegate& TriggersResponseDelegateBP, FLootLockerTriggersResponse Value)
{
	struct _Script_LootLockerSDK_eventTriggersResponseDelegateBP_Parms
	{
		FLootLockerTriggersResponse Value;
	};
	_Script_LootLockerSDK_eventTriggersResponseDelegateBP_Parms Parms;
	Parms.Value=Value;
	TriggersResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerTriggerEventsRequestHandler::StaticRegisterNativesULootLockerTriggerEventsRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerTriggerEventsRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_NoRegister()
	{
		return ULootLockerTriggerEventsRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerTriggerEventsRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerTriggerEventsRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerTriggerEventsRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::ClassParams = {
		&ULootLockerTriggerEventsRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerTriggerEventsRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerTriggerEventsRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerTriggerEventsRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerTriggerEventsRequestHandler>()
	{
		return ULootLockerTriggerEventsRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerTriggerEventsRequestHandler);
	ULootLockerTriggerEventsRequestHandler::~ULootLockerTriggerEventsRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerTriggerEvent::StaticStruct, Z_Construct_UScriptStruct_FLootLockerTriggerEvent_Statics::NewStructOps, TEXT("LootLockerTriggerEvent"), &Z_Registration_Info_UScriptStruct_LootLockerTriggerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerTriggerEvent), 3813617280U) },
		{ FLootLockerTriggerEventResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerTriggerEventResponse_Statics::NewStructOps, TEXT("LootLockerTriggerEventResponse"), &Z_Registration_Info_UScriptStruct_LootLockerTriggerEventResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerTriggerEventResponse), 521833943U) },
		{ FLootLockerTriggersResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerTriggersResponse_Statics::NewStructOps, TEXT("LootLockerTriggersResponse"), &Z_Registration_Info_UScriptStruct_LootLockerTriggersResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerTriggersResponse), 4148122048U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerTriggerEventsRequestHandler, ULootLockerTriggerEventsRequestHandler::StaticClass, TEXT("ULootLockerTriggerEventsRequestHandler"), &Z_Registration_Info_UClass_ULootLockerTriggerEventsRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerTriggerEventsRequestHandler), 1001191543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_932293073(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerTriggerEventsRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

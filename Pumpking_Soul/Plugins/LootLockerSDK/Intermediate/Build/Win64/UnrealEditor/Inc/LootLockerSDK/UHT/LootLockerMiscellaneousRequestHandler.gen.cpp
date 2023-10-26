// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerMiscellaneousRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerMiscellaneousRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTimeResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References

static_assert(std::is_polymorphic<FLootLockerTimeResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerTimeResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerTimeResponse;
class UScriptStruct* FLootLockerTimeResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerTimeResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerTimeResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerTimeResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerTimeResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerTimeResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerTimeResponse>()
{
	return FLootLockerTimeResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_date_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_date;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMiscellaneousRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerTimeResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewProp_date_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMiscellaneousRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewProp_date = { "date", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerTimeResponse, date), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewProp_date_MetaData), Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewProp_date_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewProp_date,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerTimeResponse",
		Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::PropPointers),
		sizeof(FLootLockerTimeResponse),
		alignof(FLootLockerTimeResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerTimeResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerTimeResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerTimeResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerTimeResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventTimeResponseDelegateBP_Parms
		{
			FLootLockerTimeResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventTimeResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerTimeResponse, METADATA_PARAMS(0, nullptr) }; // 2431871268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMiscellaneousRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "TimeResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventTimeResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventTimeResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_TimeResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTimeResponseDelegateBP_DelegateWrapper(const FScriptDelegate& TimeResponseDelegateBP, FLootLockerTimeResponse Response)
{
	struct _Script_LootLockerSDK_eventTimeResponseDelegateBP_Parms
	{
		FLootLockerTimeResponse Response;
	};
	_Script_LootLockerSDK_eventTimeResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	TimeResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerMiscellaneousRequestHandler::StaticRegisterNativesULootLockerMiscellaneousRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerMiscellaneousRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_NoRegister()
	{
		return ULootLockerMiscellaneousRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerMiscellaneousRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerMiscellaneousRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerMiscellaneousRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::ClassParams = {
		&ULootLockerMiscellaneousRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerMiscellaneousRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerMiscellaneousRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerMiscellaneousRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerMiscellaneousRequestHandler>()
	{
		return ULootLockerMiscellaneousRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerMiscellaneousRequestHandler);
	ULootLockerMiscellaneousRequestHandler::~ULootLockerMiscellaneousRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerTimeResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerTimeResponse_Statics::NewStructOps, TEXT("LootLockerTimeResponse"), &Z_Registration_Info_UScriptStruct_LootLockerTimeResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerTimeResponse), 2431871268U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerMiscellaneousRequestHandler, ULootLockerMiscellaneousRequestHandler::StaticClass, TEXT("ULootLockerMiscellaneousRequestHandler"), &Z_Registration_Info_UClass_ULootLockerMiscellaneousRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerMiscellaneousRequestHandler), 3685449382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_3077336302(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RL_FallJam_2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerMiscellaneousRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

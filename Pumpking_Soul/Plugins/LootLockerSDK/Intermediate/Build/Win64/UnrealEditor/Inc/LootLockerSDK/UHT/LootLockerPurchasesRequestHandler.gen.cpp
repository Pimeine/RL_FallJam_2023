// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerPurchasesRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPurchasesRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProduct();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData;
class UScriptStruct* FLootLockerAssetPurchaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAssetPurchaseData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAssetPurchaseData>()
{
	return FLootLockerAssetPurchaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_asset_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_asset_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rental_option_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAssetPurchaseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id = { "asset_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetPurchaseData, asset_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetPurchaseData, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAssetPurchaseData, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_asset_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewProp_rental_option_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerAssetPurchaseData",
		Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers),
		sizeof(FLootLockerAssetPurchaseData),
		alignof(FLootLockerAssetPurchaseData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerAndroidAssetPurchaseData>() == std::is_polymorphic<FLootLockerAssetPurchaseData>(), "USTRUCT FLootLockerAndroidAssetPurchaseData cannot be polymorphic unless super FLootLockerAssetPurchaseData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData;
class UScriptStruct* FLootLockerAndroidAssetPurchaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerAndroidAssetPurchaseData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerAndroidAssetPurchaseData>()
{
	return FLootLockerAndroidAssetPurchaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_purchase_token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_purchase_token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerAndroidAssetPurchaseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token = { "purchase_token", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerAndroidAssetPurchaseData, purchase_token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token_MetaData), Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewProp_purchase_token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData,
		&NewStructOps,
		"LootLockerAndroidAssetPurchaseData",
		Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers),
		sizeof(FLootLockerAndroidAssetPurchaseData),
		alignof(FLootLockerAndroidAssetPurchaseData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData;
class UScriptStruct* FLootLockerVerifyPurchaseIosData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerVerifyPurchaseIosData"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerVerifyPurchaseIosData>()
{
	return FLootLockerVerifyPurchaseIosData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receipt_data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_receipt_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerVerifyPurchaseIosData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data = { "receipt_data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerVerifyPurchaseIosData, receipt_data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data_MetaData), Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewProp_receipt_data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerVerifyPurchaseIosData",
		Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers),
		sizeof(FLootLockerVerifyPurchaseIosData),
		alignof(FLootLockerVerifyPurchaseIosData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPurchaseResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPurchaseResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse;
class UScriptStruct* FLootLockerPurchaseResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPurchaseResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPurchaseResponse>()
{
	return FLootLockerPurchaseResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlay_MetaData[];
#endif
		static void NewProp_overlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_order_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_order_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPurchaseResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_SetBit(void* Obj)
	{
		((FLootLockerPurchaseResponse*)Obj)->overlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay = { "overlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerPurchaseResponse), &Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id = { "order_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseResponse, order_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_overlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewProp_order_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPurchaseResponse",
		Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers),
		sizeof(FLootLockerPurchaseResponse),
		alignof(FLootLockerPurchaseResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerPurchaseStatusResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerPurchaseStatusResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse;
class UScriptStruct* FLootLockerPurchaseStatusResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPurchaseStatusResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPurchaseStatusResponse>()
{
	return FLootLockerPurchaseStatusResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPurchaseStatusResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseStatusResponse, status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewProp_status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerPurchaseStatusResponse",
		Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers),
		sizeof(FLootLockerPurchaseStatusResponse),
		alignof(FLootLockerPurchaseStatusResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerActivateRentalAssetResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerActivateRentalAssetResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse;
class UScriptStruct* FLootLockerActivateRentalAssetResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerActivateRentalAssetResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerActivateRentalAssetResponse>()
{
	return FLootLockerActivateRentalAssetResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_left_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_time_left;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerActivateRentalAssetResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left = { "time_left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerActivateRentalAssetResponse, time_left), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left_MetaData), Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewProp_time_left,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerActivateRentalAssetResponse",
		Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers),
		sizeof(FLootLockerActivateRentalAssetResponse),
		alignof(FLootLockerActivateRentalAssetResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerProduct;
class UScriptStruct* FLootLockerProduct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerProduct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerProduct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerProduct, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerProduct"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerProduct.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerProduct>()
{
	return FLootLockerProduct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerProduct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_instance_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variation_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_variation_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rental_option_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rental_option_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acquistion_source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_acquistion_source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerProduct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id = { "instance_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, instance_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id = { "variation_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, variation_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id = { "rental_option_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, rental_option_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source = { "acquistion_source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerProduct, acquistion_source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source_MetaData), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_instance_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_variation_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_rental_option_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewProp_acquistion_source,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerProduct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerProduct",
		Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers),
		sizeof(FLootLockerProduct),
		alignof(FLootLockerProduct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerProduct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerProduct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerProduct()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerProduct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerProduct.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerProduct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerProduct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerOrderDetailsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerOrderDetailsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse;
class UScriptStruct* FLootLockerOrderDetailsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerOrderDetailsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerOrderDetailsResponse>()
{
	return FLootLockerOrderDetailsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_order_status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_order_status;
		static const UECodeGen_Private::FStructPropertyParams NewProp_products_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_products_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_products;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerOrderDetailsResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status = { "order_status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerOrderDetailsResponse, order_status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status_MetaData), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_Inner = { "products", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerProduct, METADATA_PARAMS(0, nullptr) }; // 2939267857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products = { "products", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerOrderDetailsResponse, products), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_MetaData), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_MetaData) }; // 2939267857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_order_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewProp_products,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerOrderDetailsResponse",
		Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers),
		sizeof(FLootLockerOrderDetailsResponse),
		alignof(FLootLockerOrderDetailsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair;
class UScriptStruct* FLootLockerCatalogItemAndQuantityPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCatalogItemAndQuantityPair"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCatalogItemAndQuantityPair>()
{
	return FLootLockerCatalogItemAndQuantityPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_listing_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Catalog_listing_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCatalogItemAndQuantityPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique listing id of the catalog item to purchase\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique listing id of the catalog item to purchase" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id = { "Catalog_listing_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogItemAndQuantityPair, Catalog_listing_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The quantity of the specified item to purchase\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The quantity of the specified item to purchase" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCatalogItemAndQuantityPair, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Catalog_listing_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCatalogItemAndQuantityPair",
		Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers),
		sizeof(FLootLockerCatalogItemAndQuantityPair),
		alignof(FLootLockerCatalogItemAndQuantityPair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest;
class UScriptStruct* FLootLockerPurchaseCatalogItemRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPurchaseCatalogItemRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPurchaseCatalogItemRequest>()
{
	return FLootLockerPurchaseCatalogItemRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPurchaseCatalogItemRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the wallet to be used for the purchase\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the wallet to be used for the purchase" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseCatalogItemRequest, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair, METADATA_PARAMS(0, nullptr) }; // 1989683806
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * A list of items to purchase\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of items to purchase" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPurchaseCatalogItemRequest, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_MetaData), Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_MetaData) }; // 1989683806
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Wallet_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPurchaseCatalogItemRequest",
		Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers),
		sizeof(FLootLockerPurchaseCatalogItemRequest),
		alignof(FLootLockerPurchaseCatalogItemRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms
		{
			FLootLockerPurchaseResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPurchaseResponse, METADATA_PARAMS(0, nullptr) }; // 130728758
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PurchaseResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPurchaseResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PurchaseResponseDelegateBP, FLootLockerPurchaseResponse Response)
{
	struct _Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms
	{
		FLootLockerPurchaseResponse Response;
	};
	_Script_LootLockerSDK_eventPurchaseResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	PurchaseResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms
		{
			FLootLockerPurchaseStatusResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse, METADATA_PARAMS(0, nullptr) }; // 2564888840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "PurchaseStatusResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_PurchaseStatusResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPurchaseStatusResponseDelegateBP_DelegateWrapper(const FScriptDelegate& PurchaseStatusResponseDelegateBP, FLootLockerPurchaseStatusResponse Response)
{
	struct _Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms
	{
		FLootLockerPurchaseStatusResponse Response;
	};
	_Script_LootLockerSDK_eventPurchaseStatusResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	PurchaseStatusResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms
		{
			FLootLockerActivateRentalAssetResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse, METADATA_PARAMS(0, nullptr) }; // 3010429706
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "ActivateRentalAssetResponseDelegateBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_ActivateRentalAssetResponseDelegateBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActivateRentalAssetResponseDelegateBP_DelegateWrapper(const FScriptDelegate& ActivateRentalAssetResponseDelegateBP, FLootLockerActivateRentalAssetResponse Response)
{
	struct _Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms
	{
		FLootLockerActivateRentalAssetResponse Response;
	};
	_Script_LootLockerSDK_eventActivateRentalAssetResponseDelegateBP_Parms Parms;
	Parms.Response=Response;
	ActivateRentalAssetResponseDelegateBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms
		{
			FLootLockerOrderDetailsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse, METADATA_PARAMS(0, nullptr) }; // 2465233604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "OrderStatusDetailsBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_OrderStatusDetailsBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOrderStatusDetailsBP_DelegateWrapper(const FScriptDelegate& OrderStatusDetailsBP, FLootLockerOrderDetailsResponse Response)
{
	struct _Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms
	{
		FLootLockerOrderDetailsResponse Response;
	};
	_Script_LootLockerSDK_eventOrderStatusDetailsBP_Parms Parms;
	Parms.Response=Response;
	OrderStatusDetailsBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerPurchasesRequestHandler::StaticRegisterNativesULootLockerPurchasesRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerPurchasesRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler_NoRegister()
	{
		return ULootLockerPurchasesRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAPI/LootLockerPurchasesRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerPurchasesRequestHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerPurchasesRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::ClassParams = {
		&ULootLockerPurchasesRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerPurchasesRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerPurchasesRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerPurchasesRequestHandler>()
	{
		return ULootLockerPurchasesRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerPurchasesRequestHandler);
	ULootLockerPurchasesRequestHandler::~ULootLockerPurchasesRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerAssetPurchaseData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAssetPurchaseData_Statics::NewStructOps, TEXT("LootLockerAssetPurchaseData"), &Z_Registration_Info_UScriptStruct_LootLockerAssetPurchaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAssetPurchaseData), 2190180669U) },
		{ FLootLockerAndroidAssetPurchaseData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerAndroidAssetPurchaseData_Statics::NewStructOps, TEXT("LootLockerAndroidAssetPurchaseData"), &Z_Registration_Info_UScriptStruct_LootLockerAndroidAssetPurchaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerAndroidAssetPurchaseData), 2259296091U) },
		{ FLootLockerVerifyPurchaseIosData::StaticStruct, Z_Construct_UScriptStruct_FLootLockerVerifyPurchaseIosData_Statics::NewStructOps, TEXT("LootLockerVerifyPurchaseIosData"), &Z_Registration_Info_UScriptStruct_LootLockerVerifyPurchaseIosData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerVerifyPurchaseIosData), 2369229008U) },
		{ FLootLockerPurchaseResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPurchaseResponse_Statics::NewStructOps, TEXT("LootLockerPurchaseResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPurchaseResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPurchaseResponse), 130728758U) },
		{ FLootLockerPurchaseStatusResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPurchaseStatusResponse_Statics::NewStructOps, TEXT("LootLockerPurchaseStatusResponse"), &Z_Registration_Info_UScriptStruct_LootLockerPurchaseStatusResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPurchaseStatusResponse), 2564888840U) },
		{ FLootLockerActivateRentalAssetResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerActivateRentalAssetResponse_Statics::NewStructOps, TEXT("LootLockerActivateRentalAssetResponse"), &Z_Registration_Info_UScriptStruct_LootLockerActivateRentalAssetResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerActivateRentalAssetResponse), 3010429706U) },
		{ FLootLockerProduct::StaticStruct, Z_Construct_UScriptStruct_FLootLockerProduct_Statics::NewStructOps, TEXT("LootLockerProduct"), &Z_Registration_Info_UScriptStruct_LootLockerProduct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerProduct), 2939267857U) },
		{ FLootLockerOrderDetailsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerOrderDetailsResponse_Statics::NewStructOps, TEXT("LootLockerOrderDetailsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerOrderDetailsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerOrderDetailsResponse), 2465233604U) },
		{ FLootLockerCatalogItemAndQuantityPair::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCatalogItemAndQuantityPair_Statics::NewStructOps, TEXT("LootLockerCatalogItemAndQuantityPair"), &Z_Registration_Info_UScriptStruct_LootLockerCatalogItemAndQuantityPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCatalogItemAndQuantityPair), 1989683806U) },
		{ FLootLockerPurchaseCatalogItemRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPurchaseCatalogItemRequest_Statics::NewStructOps, TEXT("LootLockerPurchaseCatalogItemRequest"), &Z_Registration_Info_UScriptStruct_LootLockerPurchaseCatalogItemRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPurchaseCatalogItemRequest), 29370550U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerPurchasesRequestHandler, ULootLockerPurchasesRequestHandler::StaticClass, TEXT("ULootLockerPurchasesRequestHandler"), &Z_Registration_Info_UClass_ULootLockerPurchasesRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerPurchasesRequestHandler), 4120698514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_1883179054(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerPurchasesRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

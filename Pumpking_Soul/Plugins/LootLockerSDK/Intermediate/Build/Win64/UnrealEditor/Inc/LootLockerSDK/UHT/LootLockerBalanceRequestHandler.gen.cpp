// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerBalanceRequestHandler.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerCurrencyRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerBalanceRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerBalanceRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerBalanceRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBalance();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreditRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrency();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDebitRequest();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetWalletResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes;
	static UEnum* ELootLockerWalletHolderTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerWalletHolderTypes"));
		}
		return Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerWalletHolderTypes>()
	{
		return ELootLockerWalletHolderTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::Enumerators[] = {
		{ "ELootLockerWalletHolderTypes::character", (int64)ELootLockerWalletHolderTypes::character },
		{ "ELootLockerWalletHolderTypes::player", (int64)ELootLockerWalletHolderTypes::player },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
		{ "character.Name", "ELootLockerWalletHolderTypes::character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Possible account linking process statuses. Undefined means that the object couldn't be constructed correctly\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
		{ "player.Name", "ELootLockerWalletHolderTypes::player" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Possible account linking process statuses. Undefined means that the object couldn't be constructed correctly" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerWalletHolderTypes",
		"ELootLockerWalletHolderTypes",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerBalance;
class UScriptStruct* FLootLockerBalance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerBalance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerBalance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerBalance, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerBalance"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerBalance.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerBalance>()
{
	return FLootLockerBalance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerBalance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerBalance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Current amount of the given currency in this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current amount of the given currency in this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBalance, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Currency_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Information about the currency that this balance is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the currency that this balance is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBalance, Currency), Z_Construct_UScriptStruct_FLootLockerCurrency, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Currency_MetaData), Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Currency_MetaData) }; // 310136609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the wallet holding this balance\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the wallet holding this balance" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBalance, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Wallet_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time that this balance was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that this balance was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerBalance, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Created_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Wallet_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewProp_Created_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerBalance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerBalance",
		Z_Construct_UScriptStruct_FLootLockerBalance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::PropPointers),
		sizeof(FLootLockerBalance),
		alignof(FLootLockerBalance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerBalance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerBalance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerBalance()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerBalance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerBalance.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerBalance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerBalance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest;
class UScriptStruct* FLootLockerCreateWalletRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateWalletRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateWalletRequest>()
{
	return FLootLockerCreateWalletRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Holder_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Holder_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Holder_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Holder_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateWalletRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * ULID of the holder you want to create a wallet for\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ULID of the holder you want to create a wallet for" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_id = { "Holder_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateWalletRequest, Holder_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_type_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The type of holder that this holder id refers to\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of holder that this holder id refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_type = { "Holder_type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateWalletRequest, Holder_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_type_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the created wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the created wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateWalletRequest, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Holder_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCreateWalletRequest",
		Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::PropPointers),
		sizeof(FLootLockerCreateWalletRequest),
		alignof(FLootLockerCreateWalletRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreditRequest;
class UScriptStruct* FLootLockerCreditRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreditRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreditRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreditRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreditRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreditRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreditRequest>()
{
	return FLootLockerCreditRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreditRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Amount of the given currency to debit/credit to/from the given wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of the given currency to debit/credit to/from the given wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditRequest, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Currency_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the currency that the amount is given in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the currency that the amount is given in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Currency_id = { "Currency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditRequest, Currency_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Currency_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Currency_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The id of the wallet to credit/debit to/from\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the wallet to credit/debit to/from" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditRequest, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Wallet_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Currency_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewProp_Wallet_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCreditRequest",
		Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::PropPointers),
		sizeof(FLootLockerCreditRequest),
		alignof(FLootLockerCreditRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreditRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreditRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreditRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreditRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerDebitRequest;
class UScriptStruct* FLootLockerDebitRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerDebitRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerDebitRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerDebitRequest, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerDebitRequest"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerDebitRequest.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerDebitRequest>()
{
	return FLootLockerDebitRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerDebitRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Amount of the given currency to debit/credit to/from the given wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of the given currency to debit/credit to/from the given wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitRequest, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Currency_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the currency that the amount is given in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the currency that the amount is given in" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Currency_id = { "Currency_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitRequest, Currency_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Currency_id_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Currency_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The id of the wallet to credit/debit to/from\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the wallet to credit/debit to/from" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitRequest, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Wallet_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Currency_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewProp_Wallet_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerDebitRequest",
		Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::PropPointers),
		sizeof(FLootLockerDebitRequest),
		alignof(FLootLockerDebitRequest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDebitRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerDebitRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerDebitRequest.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerDebitRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListBalancesForWalletResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListBalancesForWalletResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse;
class UScriptStruct* FLootLockerListBalancesForWalletResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListBalancesForWalletResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListBalancesForWalletResponse>()
{
	return FLootLockerListBalancesForWalletResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Balances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Balances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Balances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListBalancesForWalletResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances_Inner = { "Balances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerBalance, METADATA_PARAMS(0, nullptr) }; // 1059215832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of balances in different currencies in the requested wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of balances in different currencies in the requested wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances = { "Balances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListBalancesForWalletResponse, Balances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances_MetaData), Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances_MetaData) }; // 1059215832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewProp_Balances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListBalancesForWalletResponse",
		Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::PropPointers),
		sizeof(FLootLockerListBalancesForWalletResponse),
		alignof(FLootLockerListBalancesForWalletResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerGetWalletResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerGetWalletResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse;
class UScriptStruct* FLootLockerGetWalletResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerGetWalletResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerGetWalletResponse>()
{
	return FLootLockerGetWalletResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Holder_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Holder_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerGetWalletResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Holder_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the holder of this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the holder of this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Holder_id = { "Holder_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetWalletResponse, Holder_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Holder_id_MetaData), Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Holder_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetWalletResponse, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Id_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The type of entity that holds this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of entity that holds this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerGetWalletResponse, type), Z_Construct_UEnum_LootLockerSDK_ELootLockerWalletHolderTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type_MetaData), Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type_MetaData) }; // 2910268928
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Holder_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewProp_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerGetWalletResponse",
		Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::PropPointers),
		sizeof(FLootLockerGetWalletResponse),
		alignof(FLootLockerGetWalletResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerGetWalletResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCreditWalletResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerCreditWalletResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse;
class UScriptStruct* FLootLockerCreditWalletResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreditWalletResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreditWalletResponse>()
{
	return FLootLockerCreditWalletResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreditWalletResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Current amount of the given currency in this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current amount of the given currency in this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditWalletResponse, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Currency_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Information about the currency that this balance is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the currency that this balance is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditWalletResponse, Currency), Z_Construct_UScriptStruct_FLootLockerCurrency, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Currency_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Currency_MetaData) }; // 310136609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the wallet holding this balance\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the wallet holding this balance" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditWalletResponse, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Wallet_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time that this balance was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that this balance was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreditWalletResponse, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Created_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Wallet_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewProp_Created_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerCreditWalletResponse",
		Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::PropPointers),
		sizeof(FLootLockerCreditWalletResponse),
		alignof(FLootLockerCreditWalletResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerDebitWalletResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerDebitWalletResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse;
class UScriptStruct* FLootLockerDebitWalletResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerDebitWalletResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerDebitWalletResponse>()
{
	return FLootLockerDebitWalletResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerDebitWalletResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Current amount of the given currency in this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current amount of the given currency in this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitWalletResponse, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Currency_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Information about the currency that this balance is in\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the currency that this balance is in" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitWalletResponse, Currency), Z_Construct_UScriptStruct_FLootLockerCurrency, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Currency_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Currency_MetaData) }; // 310136609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the wallet holding this balance\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the wallet holding this balance" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitWalletResponse, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Wallet_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time that this balance was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that this balance was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDebitWalletResponse, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Created_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Wallet_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewProp_Created_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerDebitWalletResponse",
		Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::PropPointers),
		sizeof(FLootLockerDebitWalletResponse),
		alignof(FLootLockerDebitWalletResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerCreateWalletResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerCreateWalletResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse;
class UScriptStruct* FLootLockerCreateWalletResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCreateWalletResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCreateWalletResponse>()
{
	return FLootLockerCreateWalletResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wallet_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCreateWalletResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewProp_Wallet_id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of this wallet\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of this wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewProp_Wallet_id = { "Wallet_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCreateWalletResponse, Wallet_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewProp_Wallet_id_MetaData), Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewProp_Wallet_id_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewProp_Wallet_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerCreateWalletResponse",
		Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::PropPointers),
		sizeof(FLootLockerCreateWalletResponse),
		alignof(FLootLockerCreateWalletResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListBalancesForWalletResponseBP_Parms
		{
			FLootLockerListBalancesForWalletResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListBalancesForWalletResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse, METADATA_PARAMS(0, nullptr) }; // 3889009612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing balances in a wallet\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing balances in a wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListBalancesForWalletResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListBalancesForWalletResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListBalancesForWalletResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListBalancesForWalletResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListBalancesForWalletResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListBalancesForWalletResponseBP, FLootLockerListBalancesForWalletResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListBalancesForWalletResponseBP_Parms
	{
		FLootLockerListBalancesForWalletResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListBalancesForWalletResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListBalancesForWalletResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerGetWalletResponseBP_Parms
		{
			FLootLockerGetWalletResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerGetWalletResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerGetWalletResponse, METADATA_PARAMS(0, nullptr) }; // 2301741693
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for getting a wallet\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for getting a wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerGetWalletResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetWalletResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerGetWalletResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerGetWalletResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerGetWalletResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerGetWalletResponseBP, FLootLockerGetWalletResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerGetWalletResponseBP_Parms
	{
		FLootLockerGetWalletResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerGetWalletResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerGetWalletResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerCreditWalletResponseBP_Parms
		{
			FLootLockerCreditWalletResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerCreditWalletResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse, METADATA_PARAMS(0, nullptr) }; // 2385086760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for crediting currency to a wallet\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for crediting currency to a wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerCreditWalletResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerCreditWalletResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerCreditWalletResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreditWalletResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerCreditWalletResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerCreditWalletResponseBP, FLootLockerCreditWalletResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerCreditWalletResponseBP_Parms
	{
		FLootLockerCreditWalletResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerCreditWalletResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerCreditWalletResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerDebitWalletResponseBP_Parms
		{
			FLootLockerDebitWalletResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerDebitWalletResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse, METADATA_PARAMS(0, nullptr) }; // 3032211996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for debiting currency from a wallet\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for debiting currency from a wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerDebitWalletResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerDebitWalletResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerDebitWalletResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerDebitWalletResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerDebitWalletResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerDebitWalletResponseBP, FLootLockerDebitWalletResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerDebitWalletResponseBP_Parms
	{
		FLootLockerDebitWalletResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerDebitWalletResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerDebitWalletResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerCreateWalletResponseBP_Parms
		{
			FLootLockerCreateWalletResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerCreateWalletResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse, METADATA_PARAMS(0, nullptr) }; // 1512733829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for creating a wallet\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for creating a wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerCreateWalletResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerCreateWalletResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerCreateWalletResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerCreateWalletResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerCreateWalletResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerCreateWalletResponseBP, FLootLockerCreateWalletResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerCreateWalletResponseBP_Parms
	{
		FLootLockerCreateWalletResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerCreateWalletResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerCreateWalletResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerBalanceRequestHandler::StaticRegisterNativesULootLockerBalanceRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerBalanceRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerBalanceRequestHandler_NoRegister()
	{
		return ULootLockerBalanceRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==================================================\n// API Class Definition\n//==================================================\n" },
#endif
		{ "IncludePath", "GameAPI/LootLockerBalanceRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerBalanceRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Class Definition" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerBalanceRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::ClassParams = {
		&ULootLockerBalanceRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerBalanceRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerBalanceRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerBalanceRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerBalanceRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerBalanceRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerBalanceRequestHandler>()
	{
		return ULootLockerBalanceRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerBalanceRequestHandler);
	ULootLockerBalanceRequestHandler::~ULootLockerBalanceRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::EnumInfo[] = {
		{ ELootLockerWalletHolderTypes_StaticEnum, TEXT("ELootLockerWalletHolderTypes"), &Z_Registration_Info_UEnum_ELootLockerWalletHolderTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2910268928U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerBalance::StaticStruct, Z_Construct_UScriptStruct_FLootLockerBalance_Statics::NewStructOps, TEXT("LootLockerBalance"), &Z_Registration_Info_UScriptStruct_LootLockerBalance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerBalance), 1059215832U) },
		{ FLootLockerCreateWalletRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateWalletRequest_Statics::NewStructOps, TEXT("LootLockerCreateWalletRequest"), &Z_Registration_Info_UScriptStruct_LootLockerCreateWalletRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateWalletRequest), 3055476850U) },
		{ FLootLockerCreditRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreditRequest_Statics::NewStructOps, TEXT("LootLockerCreditRequest"), &Z_Registration_Info_UScriptStruct_LootLockerCreditRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreditRequest), 929164689U) },
		{ FLootLockerDebitRequest::StaticStruct, Z_Construct_UScriptStruct_FLootLockerDebitRequest_Statics::NewStructOps, TEXT("LootLockerDebitRequest"), &Z_Registration_Info_UScriptStruct_LootLockerDebitRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerDebitRequest), 628206957U) },
		{ FLootLockerListBalancesForWalletResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListBalancesForWalletResponse_Statics::NewStructOps, TEXT("LootLockerListBalancesForWalletResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListBalancesForWalletResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListBalancesForWalletResponse), 3889009612U) },
		{ FLootLockerGetWalletResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerGetWalletResponse_Statics::NewStructOps, TEXT("LootLockerGetWalletResponse"), &Z_Registration_Info_UScriptStruct_LootLockerGetWalletResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerGetWalletResponse), 2301741693U) },
		{ FLootLockerCreditWalletResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreditWalletResponse_Statics::NewStructOps, TEXT("LootLockerCreditWalletResponse"), &Z_Registration_Info_UScriptStruct_LootLockerCreditWalletResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreditWalletResponse), 2385086760U) },
		{ FLootLockerDebitWalletResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerDebitWalletResponse_Statics::NewStructOps, TEXT("LootLockerDebitWalletResponse"), &Z_Registration_Info_UScriptStruct_LootLockerDebitWalletResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerDebitWalletResponse), 3032211996U) },
		{ FLootLockerCreateWalletResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCreateWalletResponse_Statics::NewStructOps, TEXT("LootLockerCreateWalletResponse"), &Z_Registration_Info_UScriptStruct_LootLockerCreateWalletResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCreateWalletResponse), 1512733829U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerBalanceRequestHandler, ULootLockerBalanceRequestHandler::StaticClass, TEXT("ULootLockerBalanceRequestHandler"), &Z_Registration_Info_UClass_ULootLockerBalanceRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerBalanceRequestHandler), 3875694360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_3632320346(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerBalanceRequestHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

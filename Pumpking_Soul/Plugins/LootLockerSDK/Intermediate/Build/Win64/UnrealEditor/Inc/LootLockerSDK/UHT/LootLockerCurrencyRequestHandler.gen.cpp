// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/GameAPI/LootLockerCurrencyRequestHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerCurrencyRequestHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCurrencyRequestHandler();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCurrencyRequestHandler_NoRegister();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrency();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDenomination();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerResponse();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerCurrency;
class UScriptStruct* FLootLockerCurrency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerCurrency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerCurrency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerCurrency, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerCurrency"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerCurrency.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerCurrency>()
{
	return FLootLockerCurrency::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerCurrency_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_api_writes_enabled_MetaData[];
#endif
		static void NewProp_Game_api_writes_enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Game_api_writes_enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Published_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Published_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Details about a particular currency\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Details about a particular currency" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerCurrency>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the currency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the currency" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrency, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of the currency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the currency" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrency, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique short code of the currency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique short code of the currency" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrency, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Code_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * True if this currency can be awarded to the player from the game api\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if this currency can be awarded to the player from the game api" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled_SetBit(void* Obj)
	{
		((FLootLockerCurrency*)Obj)->Game_api_writes_enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled = { "Game_api_writes_enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLootLockerCurrency), &Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time that this currency was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that this currency was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrency, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Created_at_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Published_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time that this currency was published\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that this currency was published" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Published_at = { "Published_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerCurrency, Published_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Published_at_MetaData), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Published_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Game_api_writes_enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Created_at,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewProp_Published_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerCurrency",
		Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::PropPointers),
		sizeof(FLootLockerCurrency),
		alignof(FLootLockerCurrency),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerCurrency()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerCurrency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerCurrency.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerCurrency.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerDenomination;
class UScriptStruct* FLootLockerDenomination::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerDenomination.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerDenomination.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerDenomination, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerDenomination"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerDenomination.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerDenomination>()
{
	return FLootLockerDenomination::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerDenomination_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Created_at_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Created_at;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a denomination of a currency\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a denomination of a currency" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerDenomination>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The unique id of the denomination\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique id of the denomination" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDenomination, Id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Id_MetaData), Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Currency_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The id of the currency this is a denomination of\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The id of the currency this is a denomination of" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDenomination, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Currency_MetaData), Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Currency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The name of this denomination\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this denomination" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDenomination, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The value of this denomination in units of the currency\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value of this denomination in units of the currency" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDenomination, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Created_at_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The time that this denomination was created\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that this denomination was created" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Created_at = { "Created_at", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerDenomination, Created_at), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Created_at_MetaData), Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Created_at_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewProp_Created_at,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerDenomination",
		Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::PropPointers),
		sizeof(FLootLockerDenomination),
		alignof(FLootLockerDenomination),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerDenomination()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerDenomination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerDenomination.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerDenomination.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListCurrenciesResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListCurrenciesResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse;
class UScriptStruct* FLootLockerListCurrenciesResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListCurrenciesResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListCurrenciesResponse>()
{
	return FLootLockerListCurrenciesResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Currencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Currencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListCurrenciesResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies_Inner = { "Currencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerCurrency, METADATA_PARAMS(0, nullptr) }; // 310136609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of available currencies\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available currencies" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies = { "Currencies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListCurrenciesResponse, Currencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies_MetaData), Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies_MetaData) }; // 310136609
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewProp_Currencies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListCurrenciesResponse",
		Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::PropPointers),
		sizeof(FLootLockerListCurrenciesResponse),
		alignof(FLootLockerListCurrenciesResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLootLockerListDenominationsResponse>() == std::is_polymorphic<FLootLockerResponse>(), "USTRUCT FLootLockerListDenominationsResponse cannot be polymorphic unless super FLootLockerResponse is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse;
class UScriptStruct* FLootLockerListDenominationsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerListDenominationsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerListDenominationsResponse>()
{
	return FLootLockerListDenominationsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Denominations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Denominations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Denominations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerListDenominationsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations_Inner = { "Denominations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootLockerDenomination, METADATA_PARAMS(0, nullptr) }; // 2937493005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations_MetaData[] = {
		{ "Category", "LootLocker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * List of available denominations\n     */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of available denominations" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations = { "Denominations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerListDenominationsResponse, Denominations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations_MetaData), Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations_MetaData) }; // 2937493005
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewProp_Denominations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		Z_Construct_UScriptStruct_FLootLockerResponse,
		&NewStructOps,
		"LootLockerListDenominationsResponse",
		Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::PropPointers),
		sizeof(FLootLockerListDenominationsResponse),
		alignof(FLootLockerListDenominationsResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListCurrenciesResponseBP_Parms
		{
			FLootLockerListCurrenciesResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListCurrenciesResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse, METADATA_PARAMS(0, nullptr) }; // 3632723907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing currencies\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing currencies" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListCurrenciesResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCurrenciesResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListCurrenciesResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListCurrenciesResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListCurrenciesResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListCurrenciesResponseBP, FLootLockerListCurrenciesResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListCurrenciesResponseBP_Parms
	{
		FLootLockerListCurrenciesResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListCurrenciesResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListCurrenciesResponseBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics
	{
		struct _Script_LootLockerSDK_eventLootLockerListDenominationsResponseBP_Parms
		{
			FLootLockerListDenominationsResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LootLockerSDK_eventLootLockerListDenominationsResponseBP_Parms, Response), Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse, METADATA_PARAMS(0, nullptr) }; // 1145706632
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint response delegate for listing denominations on a currency\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint response delegate for listing denominations on a currency" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK, nullptr, "LootLockerListDenominationsResponseBP__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListDenominationsResponseBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::_Script_LootLockerSDK_eventLootLockerListDenominationsResponseBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LootLockerSDK_LootLockerListDenominationsResponseBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLootLockerListDenominationsResponseBP_DelegateWrapper(const FScriptDelegate& LootLockerListDenominationsResponseBP, FLootLockerListDenominationsResponse Response)
{
	struct _Script_LootLockerSDK_eventLootLockerListDenominationsResponseBP_Parms
	{
		FLootLockerListDenominationsResponse Response;
	};
	_Script_LootLockerSDK_eventLootLockerListDenominationsResponseBP_Parms Parms;
	Parms.Response=Response;
	LootLockerListDenominationsResponseBP.ProcessDelegate<UObject>(&Parms);
}
	void ULootLockerCurrencyRequestHandler::StaticRegisterNativesULootLockerCurrencyRequestHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerCurrencyRequestHandler);
	UClass* Z_Construct_UClass_ULootLockerCurrencyRequestHandler_NoRegister()
	{
		return ULootLockerCurrencyRequestHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//==================================================\n// API Class Definition\n//==================================================\n" },
#endif
		{ "IncludePath", "GameAPI/LootLockerCurrencyRequestHandler.h" },
		{ "ModuleRelativePath", "Public/GameAPI/LootLockerCurrencyRequestHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "API Class Definition" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerCurrencyRequestHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::ClassParams = {
		&ULootLockerCurrencyRequestHandler::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerCurrencyRequestHandler()
	{
		if (!Z_Registration_Info_UClass_ULootLockerCurrencyRequestHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerCurrencyRequestHandler.OuterSingleton, Z_Construct_UClass_ULootLockerCurrencyRequestHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerCurrencyRequestHandler.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerCurrencyRequestHandler>()
	{
		return ULootLockerCurrencyRequestHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerCurrencyRequestHandler);
	ULootLockerCurrencyRequestHandler::~ULootLockerCurrencyRequestHandler() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerCurrency::StaticStruct, Z_Construct_UScriptStruct_FLootLockerCurrency_Statics::NewStructOps, TEXT("LootLockerCurrency"), &Z_Registration_Info_UScriptStruct_LootLockerCurrency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerCurrency), 310136609U) },
		{ FLootLockerDenomination::StaticStruct, Z_Construct_UScriptStruct_FLootLockerDenomination_Statics::NewStructOps, TEXT("LootLockerDenomination"), &Z_Registration_Info_UScriptStruct_LootLockerDenomination, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerDenomination), 2937493005U) },
		{ FLootLockerListCurrenciesResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListCurrenciesResponse_Statics::NewStructOps, TEXT("LootLockerListCurrenciesResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListCurrenciesResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListCurrenciesResponse), 3632723907U) },
		{ FLootLockerListDenominationsResponse::StaticStruct, Z_Construct_UScriptStruct_FLootLockerListDenominationsResponse_Statics::NewStructOps, TEXT("LootLockerListDenominationsResponse"), &Z_Registration_Info_UScriptStruct_LootLockerListDenominationsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerListDenominationsResponse), 1145706632U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerCurrencyRequestHandler, ULootLockerCurrencyRequestHandler::StaticClass, TEXT("ULootLockerCurrencyRequestHandler"), &Z_Registration_Info_UClass_ULootLockerCurrencyRequestHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerCurrencyRequestHandler), 2819995556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_756639814(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_GameAPI_LootLockerCurrencyRequestHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

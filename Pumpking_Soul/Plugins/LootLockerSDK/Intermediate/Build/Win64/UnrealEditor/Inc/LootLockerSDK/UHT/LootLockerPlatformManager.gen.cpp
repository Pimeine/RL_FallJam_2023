// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerPlatformManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPlatformManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCurrentPlatform();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerCurrentPlatform_NoRegister();
	LOOTLOCKERSDK_API UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform();
	LOOTLOCKERSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELootLockerPlatform;
	static UEnum* ELootLockerPlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerPlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELootLockerPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("ELootLockerPlatform"));
		}
		return Z_Registration_Info_UEnum_ELootLockerPlatform.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UEnum* StaticEnum<ELootLockerPlatform>()
	{
		return ELootLockerPlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::Enumerators[] = {
		{ "ELootLockerPlatform::None", (int64)ELootLockerPlatform::None },
		{ "ELootLockerPlatform::Guest", (int64)ELootLockerPlatform::Guest },
		{ "ELootLockerPlatform::WhiteLabel", (int64)ELootLockerPlatform::WhiteLabel },
		{ "ELootLockerPlatform::Steam", (int64)ELootLockerPlatform::Steam },
		{ "ELootLockerPlatform::PlayStationNetwork", (int64)ELootLockerPlatform::PlayStationNetwork },
		{ "ELootLockerPlatform::Xbox", (int64)ELootLockerPlatform::Xbox },
		{ "ELootLockerPlatform::NintendoSwitch", (int64)ELootLockerPlatform::NintendoSwitch },
		{ "ELootLockerPlatform::AmazonLuna", (int64)ELootLockerPlatform::AmazonLuna },
		{ "ELootLockerPlatform::AppleSignIn", (int64)ELootLockerPlatform::AppleSignIn },
		{ "ELootLockerPlatform::Android", (int64)ELootLockerPlatform::Android },
		{ "ELootLockerPlatform::Google", (int64)ELootLockerPlatform::Google },
		{ "ELootLockerPlatform::Epic", (int64)ELootLockerPlatform::Epic },
		{ "ELootLockerPlatform::AppleGameCenter", (int64)ELootLockerPlatform::AppleGameCenter },
		{ "ELootLockerPlatform::Meta", (int64)ELootLockerPlatform::Meta },
		{ "ELootLockerPlatform::LastValue", (int64)ELootLockerPlatform::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::Enum_MetaDataParams[] = {
		{ "AmazonLuna.DisplayName", "Amazon Luna" },
		{ "AmazonLuna.Name", "ELootLockerPlatform::AmazonLuna" },
		{ "Android.DisplayName", "Android" },
		{ "Android.Name", "ELootLockerPlatform::Android" },
		{ "AppleGameCenter.DisplayName", "Apple Game Center" },
		{ "AppleGameCenter.Name", "ELootLockerPlatform::AppleGameCenter" },
		{ "AppleSignIn.DisplayName", "Apple Sign In" },
		{ "AppleSignIn.Name", "ELootLockerPlatform::AppleSignIn" },
		{ "BlueprintType", "true" },
		{ "Epic.DisplayName", "Epic Games / Epic Online Services (EOS)" },
		{ "Epic.Name", "ELootLockerPlatform::Epic" },
		{ "Google.DisplayName", "Google" },
		{ "Google.Name", "ELootLockerPlatform::Google" },
		{ "Guest.DisplayName", "Guest" },
		{ "Guest.Name", "ELootLockerPlatform::Guest" },
		{ "LastValue.DisplayName", "N/A" },
		{ "LastValue.Name", "ELootLockerPlatform::LastValue" },
		{ "Meta.DisplayName", "Apple Game Center" },
		{ "Meta.Name", "ELootLockerPlatform::Meta" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
		{ "NintendoSwitch.DisplayName", "Nintendo Switch Online" },
		{ "NintendoSwitch.Name", "ELootLockerPlatform::NintendoSwitch" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELootLockerPlatform::None" },
		{ "PlayStationNetwork.DisplayName", "PlayStation Network" },
		{ "PlayStationNetwork.Name", "ELootLockerPlatform::PlayStationNetwork" },
		{ "Steam.DisplayName", "Steam" },
		{ "Steam.Name", "ELootLockerPlatform::Steam" },
		{ "WhiteLabel.DisplayName", "White Label" },
		{ "WhiteLabel.Name", "ELootLockerPlatform::WhiteLabel" },
		{ "Xbox.DisplayName", "Xbox" },
		{ "Xbox.Name", "ELootLockerPlatform::Xbox" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		"ELootLockerPlatform",
		"ELootLockerPlatform",
		Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform()
	{
		if (!Z_Registration_Info_UEnum_ELootLockerPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELootLockerPlatform.InnerSingleton, Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELootLockerPlatform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation;
class UScriptStruct* FLootLockerPlatformRepresentation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation, (UObject*)Z_Construct_UPackage__Script_LootLockerSDK(), TEXT("LootLockerPlatformRepresentation"));
	}
	return Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation.OuterSingleton;
}
template<> LOOTLOCKERSDK_API UScriptStruct* StaticStruct<FLootLockerPlatformRepresentation>()
{
	return FLootLockerPlatformRepresentation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyPlatformString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyPlatformString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationProviderString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthenticationProviderString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootLockerPlatformRepresentation>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformRepresentation, Platform), Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform_MetaData) }; // 743282279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_PlatformString_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_PlatformString = { "PlatformString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformRepresentation, PlatformString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_PlatformString_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_PlatformString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_FriendlyPlatformString_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_FriendlyPlatformString = { "FriendlyPlatformString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformRepresentation, FriendlyPlatformString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_FriendlyPlatformString_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_FriendlyPlatformString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_AuthenticationProviderString_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_AuthenticationProviderString = { "AuthenticationProviderString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootLockerPlatformRepresentation, AuthenticationProviderString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_AuthenticationProviderString_MetaData), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_AuthenticationProviderString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_PlatformString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_FriendlyPlatformString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewProp_AuthenticationProviderString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
		nullptr,
		&NewStructOps,
		"LootLockerPlatformRepresentation",
		Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::PropPointers),
		sizeof(FLootLockerPlatformRepresentation),
		alignof(FLootLockerPlatformRepresentation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation()
	{
		if (!Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation.InnerSingleton, Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation.InnerSingleton;
	}
	DEFINE_FUNCTION(ULootLockerCurrentPlatform::execGetPlatformRepresentationForPlatform)
	{
		P_GET_ENUM(ELootLockerPlatform,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLootLockerPlatformRepresentation*)Z_Param__Result=ULootLockerCurrentPlatform::GetPlatformRepresentationForPlatform(ELootLockerPlatform(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULootLockerCurrentPlatform::execGetPlatformRepresentation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLootLockerPlatformRepresentation*)Z_Param__Result=ULootLockerCurrentPlatform::GetPlatformRepresentation();
		P_NATIVE_END;
	}
	void ULootLockerCurrentPlatform::StaticRegisterNativesULootLockerCurrentPlatform()
	{
		UClass* Class = ULootLockerCurrentPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlatformRepresentation", &ULootLockerCurrentPlatform::execGetPlatformRepresentation },
			{ "GetPlatformRepresentationForPlatform", &ULootLockerCurrentPlatform::execGetPlatformRepresentationForPlatform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics
	{
		struct LootLockerCurrentPlatform_eventGetPlatformRepresentation_Parms
		{
			FLootLockerPlatformRepresentation ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootLockerCurrentPlatform_eventGetPlatformRepresentation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::NewProp_ReturnValue_MetaData) }; // 2325545968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LootLocker Methods | Miscellaneous" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootLockerCurrentPlatform, nullptr, "GetPlatformRepresentation", nullptr, nullptr, Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::LootLockerCurrentPlatform_eventGetPlatformRepresentation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::LootLockerCurrentPlatform_eventGetPlatformRepresentation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics
	{
		struct LootLockerCurrentPlatform_eventGetPlatformRepresentationForPlatform_Parms
		{
			ELootLockerPlatform Platform;
			FLootLockerPlatformRepresentation ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootLockerCurrentPlatform_eventGetPlatformRepresentationForPlatform_Parms, Platform), Z_Construct_UEnum_LootLockerSDK_ELootLockerPlatform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform_MetaData), Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform_MetaData) }; // 743282279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LootLockerCurrentPlatform_eventGetPlatformRepresentationForPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_ReturnValue_MetaData) }; // 2325545968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::Function_MetaDataParams[] = {
		{ "Category", "LootLocker Methods | Miscellaneous" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULootLockerCurrentPlatform, nullptr, "GetPlatformRepresentationForPlatform", nullptr, nullptr, Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::LootLockerCurrentPlatform_eventGetPlatformRepresentationForPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::LootLockerCurrentPlatform_eventGetPlatformRepresentationForPlatform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerCurrentPlatform);
	UClass* Z_Construct_UClass_ULootLockerCurrentPlatform_NoRegister()
	{
		return ULootLockerCurrentPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerCurrentPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentation, "GetPlatformRepresentation" }, // 1548844190
		{ &Z_Construct_UFunction_ULootLockerCurrentPlatform_GetPlatformRepresentationForPlatform, "GetPlatformRepresentationForPlatform" }, // 2562464476
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LootLockerPlatformManager.h" },
		{ "ModuleRelativePath", "Public/LootLockerPlatformManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerCurrentPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::ClassParams = {
		&ULootLockerCurrentPlatform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerCurrentPlatform()
	{
		if (!Z_Registration_Info_UClass_ULootLockerCurrentPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerCurrentPlatform.OuterSingleton, Z_Construct_UClass_ULootLockerCurrentPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerCurrentPlatform.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerCurrentPlatform>()
	{
		return ULootLockerCurrentPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerCurrentPlatform);
	ULootLockerCurrentPlatform::~ULootLockerCurrentPlatform() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::EnumInfo[] = {
		{ ELootLockerPlatform_StaticEnum, TEXT("ELootLockerPlatform"), &Z_Registration_Info_UEnum_ELootLockerPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 743282279U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::ScriptStructInfo[] = {
		{ FLootLockerPlatformRepresentation::StaticStruct, Z_Construct_UScriptStruct_FLootLockerPlatformRepresentation_Statics::NewStructOps, TEXT("LootLockerPlatformRepresentation"), &Z_Registration_Info_UScriptStruct_LootLockerPlatformRepresentation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootLockerPlatformRepresentation), 2325545968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerCurrentPlatform, ULootLockerCurrentPlatform::StaticClass, TEXT("ULootLockerCurrentPlatform"), &Z_Registration_Info_UClass_ULootLockerCurrentPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerCurrentPlatform), 3902013626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_313179548(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPlatformManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

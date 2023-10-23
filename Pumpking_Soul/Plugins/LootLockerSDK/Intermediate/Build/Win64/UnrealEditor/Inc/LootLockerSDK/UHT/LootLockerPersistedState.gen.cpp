// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerPersistedState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerPersistedState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPersistedState();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerPersistedState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	void ULootLockerPersistedState::StaticRegisterNativesULootLockerPersistedState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerPersistedState);
	UClass* Z_Construct_UClass_ULootLockerPersistedState_NoRegister()
	{
		return ULootLockerPersistedState::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerPersistedState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SteamToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteLabelEmail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WhiteLabelEmail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteLabelToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WhiteLabelToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastActivePlatform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastActivePlatform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerPersistedState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootLockerPersistedState.h" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, Token), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_Token_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_Token_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_SteamToken_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_SteamToken = { "SteamToken", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, SteamToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_SteamToken_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_SteamToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, RefreshToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_RefreshToken_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_RefreshToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_PlayerIdentifier_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_PlayerIdentifier = { "PlayerIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, PlayerIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_PlayerIdentifier_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_PlayerIdentifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelEmail_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelEmail = { "WhiteLabelEmail", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, WhiteLabelEmail), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelEmail_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelEmail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelToken_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelToken = { "WhiteLabelToken", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, WhiteLabelToken), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelToken_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelToken_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_LastActivePlatform_MetaData[] = {
		{ "Category", "LootLocker" },
		{ "ModuleRelativePath", "Public/LootLockerPersistedState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_LastActivePlatform = { "LastActivePlatform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootLockerPersistedState, LastActivePlatform), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_LastActivePlatform_MetaData), Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_LastActivePlatform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootLockerPersistedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_SteamToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_RefreshToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_PlayerIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelEmail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_WhiteLabelToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootLockerPersistedState_Statics::NewProp_LastActivePlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerPersistedState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerPersistedState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerPersistedState_Statics::ClassParams = {
		&ULootLockerPersistedState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULootLockerPersistedState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerPersistedState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerPersistedState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULootLockerPersistedState()
	{
		if (!Z_Registration_Info_UClass_ULootLockerPersistedState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerPersistedState.OuterSingleton, Z_Construct_UClass_ULootLockerPersistedState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerPersistedState.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerPersistedState>()
	{
		return ULootLockerPersistedState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerPersistedState);
	ULootLockerPersistedState::~ULootLockerPersistedState() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPersistedState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPersistedState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerPersistedState, ULootLockerPersistedState::StaticClass, TEXT("ULootLockerPersistedState"), &Z_Registration_Info_UClass_ULootLockerPersistedState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerPersistedState), 1948787675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPersistedState_h_1888643148(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPersistedState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerPersistedState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

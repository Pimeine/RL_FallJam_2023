// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerSDKManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerSDKManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerSDKManager();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerSDKManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	void ULootLockerSDKManager::StaticRegisterNativesULootLockerSDKManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerSDKManager);
	UClass* Z_Construct_UClass_ULootLockerSDKManager_NoRegister()
	{
		return ULootLockerSDKManager::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerSDKManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerSDKManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerSDKManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerSDKManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LootLockerSDKManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LootLockerSDKManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerSDKManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerSDKManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerSDKManager_Statics::ClassParams = {
		&ULootLockerSDKManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerSDKManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerSDKManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerSDKManager()
	{
		if (!Z_Registration_Info_UClass_ULootLockerSDKManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerSDKManager.OuterSingleton, Z_Construct_UClass_ULootLockerSDKManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerSDKManager.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerSDKManager>()
	{
		return ULootLockerSDKManager::StaticClass();
	}
	ULootLockerSDKManager::ULootLockerSDKManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerSDKManager);
	ULootLockerSDKManager::~ULootLockerSDKManager() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerSDKManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerSDKManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerSDKManager, ULootLockerSDKManager::StaticClass, TEXT("ULootLockerSDKManager"), &Z_Registration_Info_UClass_ULootLockerSDKManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerSDKManager), 1455477866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerSDKManager_h_1133543084(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerSDKManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerSDKManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

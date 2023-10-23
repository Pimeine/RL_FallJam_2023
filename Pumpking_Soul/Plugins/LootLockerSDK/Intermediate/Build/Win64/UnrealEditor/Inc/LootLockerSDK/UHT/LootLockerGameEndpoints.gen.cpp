// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerGameEndpoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerGameEndpoints() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerGameEndpoints();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerGameEndpoints_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	void ULootLockerGameEndpoints::StaticRegisterNativesULootLockerGameEndpoints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerGameEndpoints);
	UClass* Z_Construct_UClass_ULootLockerGameEndpoints_NoRegister()
	{
		return ULootLockerGameEndpoints::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerGameEndpoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerGameEndpoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerGameEndpoints_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerGameEndpoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootLockerGameEndpoints.h" },
		{ "ModuleRelativePath", "Public/LootLockerGameEndpoints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerGameEndpoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerGameEndpoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerGameEndpoints_Statics::ClassParams = {
		&ULootLockerGameEndpoints::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerGameEndpoints_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerGameEndpoints_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerGameEndpoints()
	{
		if (!Z_Registration_Info_UClass_ULootLockerGameEndpoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerGameEndpoints.OuterSingleton, Z_Construct_UClass_ULootLockerGameEndpoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerGameEndpoints.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerGameEndpoints>()
	{
		return ULootLockerGameEndpoints::StaticClass();
	}
	ULootLockerGameEndpoints::ULootLockerGameEndpoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerGameEndpoints);
	ULootLockerGameEndpoints::~ULootLockerGameEndpoints() {}
	struct Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerGameEndpoints, ULootLockerGameEndpoints::StaticClass, TEXT("ULootLockerGameEndpoints"), &Z_Registration_Info_UClass_ULootLockerGameEndpoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerGameEndpoints), 3228924553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_2800179372(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_RLfalljam2023_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerGameEndpoints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

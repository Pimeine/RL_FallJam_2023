// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LootLockerSDK/Public/LootLockerStateData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootLockerStateData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerStateData();
	LOOTLOCKERSDK_API UClass* Z_Construct_UClass_ULootLockerStateData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LootLockerSDK();
// End Cross Module References
	void ULootLockerStateData::StaticRegisterNativesULootLockerStateData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootLockerStateData);
	UClass* Z_Construct_UClass_ULootLockerStateData_NoRegister()
	{
		return ULootLockerStateData::StaticClass();
	}
	struct Z_Construct_UClass_ULootLockerStateData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULootLockerStateData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LootLockerSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerStateData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULootLockerStateData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootLockerStateData.h" },
		{ "ModuleRelativePath", "Public/LootLockerStateData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULootLockerStateData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootLockerStateData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootLockerStateData_Statics::ClassParams = {
		&ULootLockerStateData::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootLockerStateData_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootLockerStateData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULootLockerStateData()
	{
		if (!Z_Registration_Info_UClass_ULootLockerStateData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootLockerStateData.OuterSingleton, Z_Construct_UClass_ULootLockerStateData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULootLockerStateData.OuterSingleton;
	}
	template<> LOOTLOCKERSDK_API UClass* StaticClass<ULootLockerStateData>()
	{
		return ULootLockerStateData::StaticClass();
	}
	ULootLockerStateData::ULootLockerStateData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULootLockerStateData);
	ULootLockerStateData::~ULootLockerStateData() {}
	struct Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerStateData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerStateData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULootLockerStateData, ULootLockerStateData::StaticClass, TEXT("ULootLockerStateData"), &Z_Registration_Info_UClass_ULootLockerStateData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootLockerStateData), 855499603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerStateData_h_254811494(TEXT("/Script/LootLockerSDK"),
		Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerStateData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pumpking_Soul_Plugins_LootLockerSDK_Source_LootLockerSDK_Public_LootLockerStateData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

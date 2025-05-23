// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/DataAssets/DA_EnemyStartUpData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_EnemyStartUpData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UDA_EnemyStartUpData();
W1_API UClass* Z_Construct_UClass_UDA_EnemyStartUpData_NoRegister();
W1_API UClass* Z_Construct_UClass_UDA_StartUpDataBase();
// End Cross Module References

// Begin Class UDA_EnemyStartUpData
void UDA_EnemyStartUpData::StaticRegisterNativesUDA_EnemyStartUpData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_EnemyStartUpData);
UClass* Z_Construct_UClass_UDA_EnemyStartUpData_NoRegister()
{
	return UDA_EnemyStartUpData::StaticClass();
}
struct Z_Construct_UClass_UDA_EnemyStartUpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/DA_EnemyStartUpData.h" },
		{ "ModuleRelativePath", "DataAssets/DA_EnemyStartUpData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_EnemyStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDA_EnemyStartUpData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDA_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_EnemyStartUpData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_EnemyStartUpData_Statics::ClassParams = {
	&UDA_EnemyStartUpData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_EnemyStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_EnemyStartUpData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_EnemyStartUpData()
{
	if (!Z_Registration_Info_UClass_UDA_EnemyStartUpData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_EnemyStartUpData.OuterSingleton, Z_Construct_UClass_UDA_EnemyStartUpData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_EnemyStartUpData.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UDA_EnemyStartUpData>()
{
	return UDA_EnemyStartUpData::StaticClass();
}
UDA_EnemyStartUpData::UDA_EnemyStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_EnemyStartUpData);
UDA_EnemyStartUpData::~UDA_EnemyStartUpData() {}
// End Class UDA_EnemyStartUpData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_EnemyStartUpData, UDA_EnemyStartUpData::StaticClass, TEXT("UDA_EnemyStartUpData"), &Z_Registration_Info_UClass_UDA_EnemyStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_EnemyStartUpData), 2486599555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_350367322(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

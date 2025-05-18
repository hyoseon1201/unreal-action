// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/DataAssets/DA_HeroStartUpData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_HeroStartUpData() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UDA_HeroStartUpData();
W1_API UClass* Z_Construct_UClass_UDA_HeroStartUpData_NoRegister();
W1_API UClass* Z_Construct_UClass_UDA_StartUpDataBase();
// End Cross Module References

// Begin Class UDA_HeroStartUpData
void UDA_HeroStartUpData::StaticRegisterNativesUDA_HeroStartUpData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_HeroStartUpData);
UClass* Z_Construct_UClass_UDA_HeroStartUpData_NoRegister()
{
	return UDA_HeroStartUpData::StaticClass();
}
struct Z_Construct_UClass_UDA_HeroStartUpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/DA_HeroStartUpData.h" },
		{ "ModuleRelativePath", "DataAssets/DA_HeroStartUpData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_HeroStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDA_HeroStartUpData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDA_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_HeroStartUpData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_HeroStartUpData_Statics::ClassParams = {
	&UDA_HeroStartUpData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_HeroStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_HeroStartUpData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_HeroStartUpData()
{
	if (!Z_Registration_Info_UClass_UDA_HeroStartUpData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_HeroStartUpData.OuterSingleton, Z_Construct_UClass_UDA_HeroStartUpData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_HeroStartUpData.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UDA_HeroStartUpData>()
{
	return UDA_HeroStartUpData::StaticClass();
}
UDA_HeroStartUpData::UDA_HeroStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_HeroStartUpData);
UDA_HeroStartUpData::~UDA_HeroStartUpData() {}
// End Class UDA_HeroStartUpData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_HeroStartUpData, UDA_HeroStartUpData::StaticClass, TEXT("UDA_HeroStartUpData"), &Z_Registration_Info_UClass_UDA_HeroStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_HeroStartUpData), 2492248731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_3432344922(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_HeroStartUpData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UDA_EnemyStartUpData();
W1_API UClass* Z_Construct_UClass_UDA_EnemyStartUpData_NoRegister();
W1_API UClass* Z_Construct_UClass_UDA_StartUpDataBase();
W1_API UClass* Z_Construct_UClass_UW1EnemyGameplayAbility_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatAbilities_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "DataAssets/DA_EnemyStartUpData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyCombatAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyCombatAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_EnemyStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDA_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities_Inner = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UW1EnemyGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_EnemyStartUpData, EnemyCombatAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatAbilities_MetaData), NewProp_EnemyCombatAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_EnemyStartUpData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_EnemyStartUpData_Statics::NewProp_EnemyCombatAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_EnemyStartUpData_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UDA_EnemyStartUpData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_EnemyStartUpData_Statics::PropPointers),
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
		{ Z_Construct_UClass_UDA_EnemyStartUpData, UDA_EnemyStartUpData::StaticClass, TEXT("UDA_EnemyStartUpData"), &Z_Registration_Info_UClass_UDA_EnemyStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_EnemyStartUpData), 233635041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_1406182555(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_DataAssets_DA_EnemyStartUpData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

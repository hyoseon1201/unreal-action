// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Items/Weapons/W1WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1WeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1WeaponBase();
W1_API UClass* Z_Construct_UClass_AW1WeaponBase_NoRegister();
// End Cross Module References

// Begin Class AW1WeaponBase
void AW1WeaponBase::StaticRegisterNativesAW1WeaponBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1WeaponBase);
UClass* Z_Construct_UClass_AW1WeaponBase_NoRegister()
{
	return AW1WeaponBase::StaticClass();
}
struct Z_Construct_UClass_AW1WeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Weapons/W1WeaponBase.h" },
		{ "ModuleRelativePath", "Items/Weapons/W1WeaponBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1WeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AW1WeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1WeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1WeaponBase_Statics::ClassParams = {
	&AW1WeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1WeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1WeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1WeaponBase()
{
	if (!Z_Registration_Info_UClass_AW1WeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1WeaponBase.OuterSingleton, Z_Construct_UClass_AW1WeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1WeaponBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1WeaponBase>()
{
	return AW1WeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1WeaponBase);
AW1WeaponBase::~AW1WeaponBase() {}
// End Class AW1WeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1WeaponBase, AW1WeaponBase::StaticClass, TEXT("AW1WeaponBase"), &Z_Registration_Info_UClass_AW1WeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1WeaponBase), 3213448996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_129018820(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1WeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

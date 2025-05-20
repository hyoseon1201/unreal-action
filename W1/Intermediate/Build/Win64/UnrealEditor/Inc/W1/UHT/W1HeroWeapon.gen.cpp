// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Items/Weapons/W1HeroWeapon.h"
#include "W1/W1Types/W1StructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroWeapon() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1HeroWeapon();
W1_API UClass* Z_Construct_UClass_AW1HeroWeapon_NoRegister();
W1_API UClass* Z_Construct_UClass_AW1WeaponBase();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1HeroWeaponData();
// End Cross Module References

// Begin Class AW1HeroWeapon
void AW1HeroWeapon::StaticRegisterNativesAW1HeroWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1HeroWeapon);
UClass* Z_Construct_UClass_AW1HeroWeapon_NoRegister()
{
	return AW1HeroWeapon::StaticClass();
}
struct Z_Construct_UClass_AW1HeroWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Weapons/W1HeroWeapon.h" },
		{ "ModuleRelativePath", "Items/Weapons/W1HeroWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroWeaponData_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Items/Weapons/W1HeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroWeaponData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1HeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AW1HeroWeapon_Statics::NewProp_HeroWeaponData = { "HeroWeaponData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1HeroWeapon, HeroWeaponData), Z_Construct_UScriptStruct_FW1HeroWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroWeaponData_MetaData), NewProp_HeroWeaponData_MetaData) }; // 1400038117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1HeroWeapon_Statics::NewProp_HeroWeaponData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AW1HeroWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AW1WeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1HeroWeapon_Statics::ClassParams = {
	&AW1HeroWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1HeroWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1HeroWeapon()
{
	if (!Z_Registration_Info_UClass_AW1HeroWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1HeroWeapon.OuterSingleton, Z_Construct_UClass_AW1HeroWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1HeroWeapon.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1HeroWeapon>()
{
	return AW1HeroWeapon::StaticClass();
}
AW1HeroWeapon::AW1HeroWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1HeroWeapon);
AW1HeroWeapon::~AW1HeroWeapon() {}
// End Class AW1HeroWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1HeroWeapon, AW1HeroWeapon::StaticClass, TEXT("AW1HeroWeapon"), &Z_Registration_Info_UClass_AW1HeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1HeroWeapon), 2001768669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_1368504152(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Items_Weapons_W1HeroWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

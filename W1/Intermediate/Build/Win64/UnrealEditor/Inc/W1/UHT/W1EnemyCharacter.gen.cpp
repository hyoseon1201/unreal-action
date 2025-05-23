// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Characters/W1EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1EnemyCharacter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1CharacterBase();
W1_API UClass* Z_Construct_UClass_AW1EnemyCharacter();
W1_API UClass* Z_Construct_UClass_AW1EnemyCharacter_NoRegister();
W1_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
// End Cross Module References

// Begin Class AW1EnemyCharacter
void AW1EnemyCharacter::StaticRegisterNativesAW1EnemyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1EnemyCharacter);
UClass* Z_Construct_UClass_AW1EnemyCharacter_NoRegister()
{
	return AW1EnemyCharacter::StaticClass();
}
struct Z_Construct_UClass_AW1EnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/W1EnemyCharacter.h" },
		{ "ModuleRelativePath", "Characters/W1EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatComponent_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End APawn Interface\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/W1EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCombatComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1EnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW1EnemyCharacter_Statics::NewProp_EnemyCombatComponent = { "EnemyCombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AW1EnemyCharacter, EnemyCombatComponent), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatComponent_MetaData), NewProp_EnemyCombatComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW1EnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW1EnemyCharacter_Statics::NewProp_EnemyCombatComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1EnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AW1EnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AW1CharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1EnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1EnemyCharacter_Statics::ClassParams = {
	&AW1EnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AW1EnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AW1EnemyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1EnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1EnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1EnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AW1EnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1EnemyCharacter.OuterSingleton, Z_Construct_UClass_AW1EnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1EnemyCharacter.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1EnemyCharacter>()
{
	return AW1EnemyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1EnemyCharacter);
AW1EnemyCharacter::~AW1EnemyCharacter() {}
// End Class AW1EnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1EnemyCharacter, AW1EnemyCharacter::StaticClass, TEXT("AW1EnemyCharacter"), &Z_Registration_Info_UClass_AW1EnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1EnemyCharacter), 2519032637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_1039216325(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

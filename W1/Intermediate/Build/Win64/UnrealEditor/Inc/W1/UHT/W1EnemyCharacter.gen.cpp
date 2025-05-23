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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1EnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
AW1EnemyCharacter::AW1EnemyCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1EnemyCharacter);
AW1EnemyCharacter::~AW1EnemyCharacter() {}
// End Class AW1EnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1EnemyCharacter, AW1EnemyCharacter::StaticClass, TEXT("AW1EnemyCharacter"), &Z_Registration_Info_UClass_AW1EnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1EnemyCharacter), 2938216211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_2329790568(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1EnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

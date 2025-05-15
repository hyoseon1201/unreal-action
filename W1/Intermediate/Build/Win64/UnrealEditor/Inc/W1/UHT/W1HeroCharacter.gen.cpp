// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Characters/W1HeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroCharacter() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1CharacterBase();
W1_API UClass* Z_Construct_UClass_AW1HeroCharacter();
W1_API UClass* Z_Construct_UClass_AW1HeroCharacter_NoRegister();
// End Cross Module References

// Begin Class AW1HeroCharacter
void AW1HeroCharacter::StaticRegisterNativesAW1HeroCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1HeroCharacter);
UClass* Z_Construct_UClass_AW1HeroCharacter_NoRegister()
{
	return AW1HeroCharacter::StaticClass();
}
struct Z_Construct_UClass_AW1HeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/W1HeroCharacter.h" },
		{ "ModuleRelativePath", "Characters/W1HeroCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1HeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AW1HeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AW1CharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1HeroCharacter_Statics::ClassParams = {
	&AW1HeroCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1HeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1HeroCharacter()
{
	if (!Z_Registration_Info_UClass_AW1HeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1HeroCharacter.OuterSingleton, Z_Construct_UClass_AW1HeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1HeroCharacter.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1HeroCharacter>()
{
	return AW1HeroCharacter::StaticClass();
}
AW1HeroCharacter::AW1HeroCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1HeroCharacter);
AW1HeroCharacter::~AW1HeroCharacter() {}
// End Class AW1HeroCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1HeroCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1HeroCharacter, AW1HeroCharacter::StaticClass, TEXT("AW1HeroCharacter"), &Z_Registration_Info_UClass_AW1HeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1HeroCharacter), 789498925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1HeroCharacter_h_3254347934(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1HeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Characters_W1HeroCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

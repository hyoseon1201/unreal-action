// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/Abilities/W1EnemyGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1EnemyGameplayAbility() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1EnemyGameplayAbility();
W1_API UClass* Z_Construct_UClass_UW1EnemyGameplayAbility_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility();
// End Cross Module References

// Begin Class UW1EnemyGameplayAbility
void UW1EnemyGameplayAbility::StaticRegisterNativesUW1EnemyGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1EnemyGameplayAbility);
UClass* Z_Construct_UClass_UW1EnemyGameplayAbility_NoRegister()
{
	return UW1EnemyGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UW1EnemyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/Abilities/W1EnemyGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1EnemyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1EnemyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UW1GameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1EnemyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1EnemyGameplayAbility_Statics::ClassParams = {
	&UW1EnemyGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1EnemyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1EnemyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1EnemyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UW1EnemyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1EnemyGameplayAbility.OuterSingleton, Z_Construct_UClass_UW1EnemyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1EnemyGameplayAbility.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1EnemyGameplayAbility>()
{
	return UW1EnemyGameplayAbility::StaticClass();
}
UW1EnemyGameplayAbility::UW1EnemyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1EnemyGameplayAbility);
UW1EnemyGameplayAbility::~UW1EnemyGameplayAbility() {}
// End Class UW1EnemyGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1EnemyGameplayAbility, UW1EnemyGameplayAbility::StaticClass, TEXT("UW1EnemyGameplayAbility"), &Z_Registration_Info_UClass_UW1EnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1EnemyGameplayAbility), 1911496630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_3742664826(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

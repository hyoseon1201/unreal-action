// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/Abilities/W1GameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1GameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility_NoRegister();
W1_API UEnum* Z_Construct_UEnum_W1_EW1AbilityActivationPolicy();
// End Cross Module References

// Begin Enum EW1AbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EW1AbilityActivationPolicy;
static UEnum* EW1AbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EW1AbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EW1AbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_W1_EW1AbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("EW1AbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EW1AbilityActivationPolicy.OuterSingleton;
}
template<> W1_API UEnum* StaticEnum<EW1AbilityActivationPolicy>()
{
	return EW1AbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
		{ "OnGiven.Name", "EW1AbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "EW1AbilityActivationPolicy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EW1AbilityActivationPolicy::OnTriggered", (int64)EW1AbilityActivationPolicy::OnTriggered },
		{ "EW1AbilityActivationPolicy::OnGiven", (int64)EW1AbilityActivationPolicy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	"EW1AbilityActivationPolicy",
	"EW1AbilityActivationPolicy",
	Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_W1_EW1AbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EW1AbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EW1AbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_W1_EW1AbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EW1AbilityActivationPolicy.InnerSingleton;
}
// End Enum EW1AbilityActivationPolicy

// Begin Class UW1GameplayAbility
void UW1GameplayAbility::StaticRegisterNativesUW1GameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1GameplayAbility);
UClass* Z_Construct_UClass_UW1GameplayAbility_NoRegister()
{
	return UW1GameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UW1GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "W1Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End UGameplayAbility Interface\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1GameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UW1GameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UW1GameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1GameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_W1_EW1AbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationPolicy_MetaData), NewProp_AbilityActivationPolicy_MetaData) }; // 1202955949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW1GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1GameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1GameplayAbility_Statics::NewProp_AbilityActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1GameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW1GameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1GameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1GameplayAbility_Statics::ClassParams = {
	&UW1GameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UW1GameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UW1GameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1GameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1GameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1GameplayAbility()
{
	if (!Z_Registration_Info_UClass_UW1GameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1GameplayAbility.OuterSingleton, Z_Construct_UClass_UW1GameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1GameplayAbility.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1GameplayAbility>()
{
	return UW1GameplayAbility::StaticClass();
}
UW1GameplayAbility::UW1GameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1GameplayAbility);
UW1GameplayAbility::~UW1GameplayAbility() {}
// End Class UW1GameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EW1AbilityActivationPolicy_StaticEnum, TEXT("EW1AbilityActivationPolicy"), &Z_Registration_Info_UEnum_EW1AbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1202955949U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1GameplayAbility, UW1GameplayAbility::StaticClass, TEXT("UW1GameplayAbility"), &Z_Registration_Info_UClass_UW1GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1GameplayAbility), 677865064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_1578907320(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

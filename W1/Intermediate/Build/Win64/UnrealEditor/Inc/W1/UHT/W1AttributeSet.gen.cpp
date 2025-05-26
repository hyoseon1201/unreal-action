// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/W1AttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AttributeSet();
W1_API UClass* Z_Construct_UClass_UW1AttributeSet_NoRegister();
// End Cross Module References

// Begin Class UW1AttributeSet
void UW1AttributeSet::StaticRegisterNativesUW1AttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1AttributeSet);
UClass* Z_Construct_UClass_UW1AttributeSet_NoRegister()
{
	return UW1AttributeSet::StaticClass();
}
struct Z_Construct_UClass_UW1AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/W1AttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRage_MetaData[] = {
		{ "Category", "Rage" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRage_MetaData[] = {
		{ "Category", "Rage" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefensePower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTaken_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "AbilitySystems/W1AttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefensePower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTaken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1AttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_CurrentRage = { "CurrentRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, CurrentRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRage_MetaData), NewProp_CurrentRage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_MaxRage = { "MaxRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRage_MetaData), NewProp_MaxRage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_DefensePower = { "DefensePower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefensePower_MetaData), NewProp_DefensePower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1AttributeSet, DamageTaken), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTaken_MetaData), NewProp_DamageTaken_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW1AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_CurrentRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_MaxRage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_DefensePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1AttributeSet_Statics::NewProp_DamageTaken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW1AttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1AttributeSet_Statics::ClassParams = {
	&UW1AttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UW1AttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UW1AttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1AttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1AttributeSet()
{
	if (!Z_Registration_Info_UClass_UW1AttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1AttributeSet.OuterSingleton, Z_Construct_UClass_UW1AttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1AttributeSet.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1AttributeSet>()
{
	return UW1AttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1AttributeSet);
UW1AttributeSet::~UW1AttributeSet() {}
// End Class UW1AttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1AttributeSet, UW1AttributeSet::StaticClass, TEXT("UW1AttributeSet"), &Z_Registration_Info_UClass_UW1AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1AttributeSet), 4012997892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_1607595474(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

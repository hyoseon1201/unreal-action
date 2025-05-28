// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/W1Types/W1StructTypes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1StructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1HeroGameplayAbility_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1HeroAbilitySet();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1HeroWeaponData();
// End Cross Module References

// Begin ScriptStruct FW1HeroAbilitySet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_W1HeroAbilitySet;
class UScriptStruct* FW1HeroAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_W1HeroAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_W1HeroAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FW1HeroAbilitySet, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("W1HeroAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_W1HeroAbilitySet.OuterSingleton;
}
template<> W1_API UScriptStruct* StaticStruct<FW1HeroAbilitySet>()
{
	return FW1HeroAbilitySet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "InputTag" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "W1HeroAbilitySet" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FW1HeroAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UW1HeroGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::NewProp_AbilityToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	&NewStructOps,
	"W1HeroAbilitySet",
	Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::PropPointers),
	sizeof(FW1HeroAbilitySet),
	alignof(FW1HeroAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FW1HeroAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_W1HeroAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_W1HeroAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_W1HeroAbilitySet.InnerSingleton;
}
// End ScriptStruct FW1HeroAbilitySet

// Begin ScriptStruct FW1HeroWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_W1HeroWeaponData;
class UScriptStruct* FW1HeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_W1HeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_W1HeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FW1HeroWeaponData, (UObject*)Z_Construct_UPackage__Script_W1(), TEXT("W1HeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_W1HeroWeaponData.OuterSingleton;
}
template<> W1_API UScriptStruct* StaticStruct<FW1HeroWeaponData>()
{
	return FW1HeroWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayerToLink_MetaData[] = {
		{ "Category", "W1HeroWeaponData" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInputMappingContext_MetaData[] = {
		{ "Category", "W1HeroWeaponData" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponAbilities_MetaData[] = {
		{ "Category", "W1HeroWeaponData" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
		{ "TitleProperty", "InputTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBaseDamage_MetaData[] = {
		{ "Category", "W1HeroWeaponData" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftWeaponIconTexture_MetaData[] = {
		{ "Category", "W1HeroWeaponData" },
		{ "ModuleRelativePath", "W1Types/W1StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInputMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponBaseDamage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftWeaponIconTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FW1HeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponInputMappingContext = { "WeaponInputMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroWeaponData, WeaponInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInputMappingContext_MetaData), NewProp_WeaponInputMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FW1HeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 283327945
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_DefaultWeaponAbilities = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroWeaponData, DefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponAbilities_MetaData), NewProp_DefaultWeaponAbilities_MetaData) }; // 283327945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponBaseDamage = { "WeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroWeaponData, WeaponBaseDamage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBaseDamage_MetaData), NewProp_WeaponBaseDamage_MetaData) }; // 703790095
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_SoftWeaponIconTexture = { "SoftWeaponIconTexture", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FW1HeroWeaponData, SoftWeaponIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftWeaponIconTexture_MetaData), NewProp_SoftWeaponIconTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_DefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_WeaponBaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewProp_SoftWeaponIconTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
	nullptr,
	&NewStructOps,
	"W1HeroWeaponData",
	Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::PropPointers),
	sizeof(FW1HeroWeaponData),
	alignof(FW1HeroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FW1HeroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_W1HeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_W1HeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_W1HeroWeaponData.InnerSingleton;
}
// End ScriptStruct FW1HeroWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FW1HeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FW1HeroAbilitySet_Statics::NewStructOps, TEXT("W1HeroAbilitySet"), &Z_Registration_Info_UScriptStruct_W1HeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FW1HeroAbilitySet), 283327945U) },
		{ FW1HeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FW1HeroWeaponData_Statics::NewStructOps, TEXT("W1HeroWeaponData"), &Z_Registration_Info_UScriptStruct_W1HeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FW1HeroWeaponData), 88595468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_364584724(TEXT("/Script/W1"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1Types_W1StructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

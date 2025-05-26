// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/Abilities/W1HeroGameplayAbility.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1HeroCharacter_NoRegister();
W1_API UClass* Z_Construct_UClass_AW1HeroController_NoRegister();
W1_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility();
W1_API UClass* Z_Construct_UClass_UW1HeroGameplayAbility();
W1_API UClass* Z_Construct_UClass_UW1HeroGameplayAbility_NoRegister();
// End Cross Module References

// Begin Class UW1HeroGameplayAbility Function GetHeroCharacterFromActorInfo
struct Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics
{
	struct W1HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms
	{
		AW1HeroCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AW1HeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1HeroGameplayAbility, nullptr, "GetHeroCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::W1HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::W1HeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1HeroGameplayAbility::execGetHeroCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AW1HeroCharacter**)Z_Param__Result=P_THIS->GetHeroCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1HeroGameplayAbility Function GetHeroCharacterFromActorInfo

// Begin Class UW1HeroGameplayAbility Function GetHeroCombatComponentFromActorInfo
struct Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics
{
	struct W1HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms
	{
		UHeroCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1HeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1HeroGameplayAbility, nullptr, "GetHeroCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::W1HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::W1HeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1HeroGameplayAbility::execGetHeroCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHeroCombatComponent**)Z_Param__Result=P_THIS->GetHeroCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1HeroGameplayAbility Function GetHeroCombatComponentFromActorInfo

// Begin Class UW1HeroGameplayAbility Function GetHeroControllerFromActorInfo
struct Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics
{
	struct W1HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms
	{
		AW1HeroController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AW1HeroController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1HeroGameplayAbility, nullptr, "GetHeroControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::W1HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::W1HeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1HeroGameplayAbility::execGetHeroControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AW1HeroController**)Z_Param__Result=P_THIS->GetHeroControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1HeroGameplayAbility Function GetHeroControllerFromActorInfo

// Begin Class UW1HeroGameplayAbility Function MakeHeroDamageEffectSpecHandle
struct Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics
{
	struct W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms
	{
		TSubclassOf<UGameplayEffect> EffectClass;
		float InWeaponBaseDamage;
		FGameplayTag InCurrentAttackTypeTag;
		int32 InCurrentComboCount;
		FGameplayEffectSpecHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeaponBaseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurrentAttackTypeTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCurrentComboCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InWeaponBaseDamage = { "InWeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, InWeaponBaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentAttackTypeTag = { "InCurrentAttackTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, InCurrentAttackTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentComboCount = { "InCurrentComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, InCurrentComboCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InWeaponBaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentAttackTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1HeroGameplayAbility, nullptr, "MakeHeroDamageEffectSpecHandle", nullptr, nullptr, Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::W1HeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1HeroGameplayAbility::execMakeHeroDamageEffectSpecHandle)
{
	P_GET_OBJECT(UClass,Z_Param_EffectClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeaponBaseDamage);
	P_GET_STRUCT(FGameplayTag,Z_Param_InCurrentAttackTypeTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_InCurrentComboCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeHeroDamageEffectSpecHandle(Z_Param_EffectClass,Z_Param_InWeaponBaseDamage,Z_Param_InCurrentAttackTypeTag,Z_Param_InCurrentComboCount);
	P_NATIVE_END;
}
// End Class UW1HeroGameplayAbility Function MakeHeroDamageEffectSpecHandle

// Begin Class UW1HeroGameplayAbility
void UW1HeroGameplayAbility::StaticRegisterNativesUW1HeroGameplayAbility()
{
	UClass* Class = UW1HeroGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCharacterFromActorInfo", &UW1HeroGameplayAbility::execGetHeroCharacterFromActorInfo },
		{ "GetHeroCombatComponentFromActorInfo", &UW1HeroGameplayAbility::execGetHeroCombatComponentFromActorInfo },
		{ "GetHeroControllerFromActorInfo", &UW1HeroGameplayAbility::execGetHeroControllerFromActorInfo },
		{ "MakeHeroDamageEffectSpecHandle", &UW1HeroGameplayAbility::execMakeHeroDamageEffectSpecHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1HeroGameplayAbility);
UClass* Z_Construct_UClass_UW1HeroGameplayAbility_NoRegister()
{
	return UW1HeroGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UW1HeroGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystems/Abilities/W1HeroGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCharacterFromActorInfo, "GetHeroCharacterFromActorInfo" }, // 2178710105
		{ &Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroCombatComponentFromActorInfo, "GetHeroCombatComponentFromActorInfo" }, // 520287460
		{ &Z_Construct_UFunction_UW1HeroGameplayAbility_GetHeroControllerFromActorInfo, "GetHeroControllerFromActorInfo" }, // 3121922219
		{ &Z_Construct_UFunction_UW1HeroGameplayAbility_MakeHeroDamageEffectSpecHandle, "MakeHeroDamageEffectSpecHandle" }, // 3193931424
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1HeroGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1HeroGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UW1GameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1HeroGameplayAbility_Statics::ClassParams = {
	&UW1HeroGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1HeroGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1HeroGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UW1HeroGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1HeroGameplayAbility.OuterSingleton, Z_Construct_UClass_UW1HeroGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1HeroGameplayAbility.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1HeroGameplayAbility>()
{
	return UW1HeroGameplayAbility::StaticClass();
}
UW1HeroGameplayAbility::UW1HeroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1HeroGameplayAbility);
UW1HeroGameplayAbility::~UW1HeroGameplayAbility() {}
// End Class UW1HeroGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1HeroGameplayAbility, UW1HeroGameplayAbility::StaticClass, TEXT("UW1HeroGameplayAbility"), &Z_Registration_Info_UClass_UW1HeroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1HeroGameplayAbility), 1648679854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_4068599150(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1HeroGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/Abilities/W1GameplayAbility.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1GameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility_NoRegister();
W1_API UEnum* Z_Construct_UEnum_W1_EW1AbilityActivationPolicy();
W1_API UEnum* Z_Construct_UEnum_W1_EW1SuccessType();
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

// Begin Class UW1GameplayAbility Function BP_ApplyEffectSpecHandleToTarget
struct Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics
{
	struct W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms
	{
		AActor* TargetActor;
		FGameplayEffectSpecHandle InSpecHandle;
		EW1SuccessType OutSuccessType;
		FActiveGameplayEffectHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "DisplayName", "Apply Gameplay Effect Spec Handle To Target Actor" },
		{ "ExpandEnumAsExecs", "OutSuccessType" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSuccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSuccessType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle = { "InSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, InSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandle_MetaData), NewProp_InSpecHandle_MetaData) }; // 3383902265
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType = { "OutSuccessType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, OutSuccessType), Z_Construct_UEnum_W1_EW1SuccessType, METADATA_PARAMS(0, nullptr) }; // 1683812422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1GameplayAbility, nullptr, "BP_ApplyEffectSpecHandleToTarget", nullptr, nullptr, Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::W1GameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1GameplayAbility::execBP_ApplyEffectSpecHandleToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_InSpecHandle);
	P_GET_ENUM_REF(EW1SuccessType,Z_Param_Out_OutSuccessType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->BP_ApplyEffectSpecHandleToTarget(Z_Param_TargetActor,Z_Param_Out_InSpecHandle,(EW1SuccessType&)(Z_Param_Out_OutSuccessType));
	P_NATIVE_END;
}
// End Class UW1GameplayAbility Function BP_ApplyEffectSpecHandleToTarget

// Begin Class UW1GameplayAbility Function GetPawnCombatComponentFromActorInfo
struct Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics
{
	struct W1GameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms
	{
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1GameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1GameplayAbility, nullptr, "GetPawnCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::W1GameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::W1GameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1GameplayAbility::execGetPawnCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=P_THIS->GetPawnCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1GameplayAbility Function GetPawnCombatComponentFromActorInfo

// Begin Class UW1GameplayAbility Function GetW1AbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics
{
	struct W1GameplayAbility_eventGetW1AbilitySystemComponentFromActorInfo_Parms
	{
		UW1AbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1GameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1GameplayAbility_eventGetW1AbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1GameplayAbility, nullptr, "GetW1AbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::W1GameplayAbility_eventGetW1AbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::W1GameplayAbility_eventGetW1AbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1GameplayAbility::execGetW1AbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UW1AbilitySystemComponent**)Z_Param__Result=P_THIS->GetW1AbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1GameplayAbility Function GetW1AbilitySystemComponentFromActorInfo

// Begin Class UW1GameplayAbility
void UW1GameplayAbility::StaticRegisterNativesUW1GameplayAbility()
{
	UClass* Class = UW1GameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_ApplyEffectSpecHandleToTarget", &UW1GameplayAbility::execBP_ApplyEffectSpecHandleToTarget },
		{ "GetPawnCombatComponentFromActorInfo", &UW1GameplayAbility::execGetPawnCombatComponentFromActorInfo },
		{ "GetW1AbilitySystemComponentFromActorInfo", &UW1GameplayAbility::execGetW1AbilitySystemComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1GameplayAbility_BP_ApplyEffectSpecHandleToTarget, "BP_ApplyEffectSpecHandleToTarget" }, // 701877361
		{ &Z_Construct_UFunction_UW1GameplayAbility_GetPawnCombatComponentFromActorInfo, "GetPawnCombatComponentFromActorInfo" }, // 3927840673
		{ &Z_Construct_UFunction_UW1GameplayAbility_GetW1AbilitySystemComponentFromActorInfo, "GetW1AbilitySystemComponentFromActorInfo" }, // 3766114121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UW1GameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UW1GameplayAbility, UW1GameplayAbility::StaticClass, TEXT("UW1GameplayAbility"), &Z_Registration_Info_UClass_UW1GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1GameplayAbility), 3876213523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_3282711780(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1GameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

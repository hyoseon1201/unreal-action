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
W1_API UClass* Z_Construct_UClass_AW1EnemyCharacter_NoRegister();
W1_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1EnemyGameplayAbility();
W1_API UClass* Z_Construct_UClass_UW1EnemyGameplayAbility_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1GameplayAbility();
// End Cross Module References

// Begin Class UW1EnemyGameplayAbility Function GetEnemyCharacterFromActorInfo
struct Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics
{
	struct W1EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms
	{
		AW1EnemyCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AW1EnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1EnemyGameplayAbility, nullptr, "GetEnemyCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::W1EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::W1EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1EnemyGameplayAbility::execGetEnemyCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AW1EnemyCharacter**)Z_Param__Result=P_THIS->GetEnemyCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1EnemyGameplayAbility Function GetEnemyCharacterFromActorInfo

// Begin Class UW1EnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo
struct Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics
{
	struct W1EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms
	{
		UEnemyCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/Abilities/W1EnemyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1EnemyGameplayAbility, nullptr, "GetEnemyCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::W1EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::W1EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1EnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnemyCombatComponent**)Z_Param__Result=P_THIS->GetEnemyCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UW1EnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo

// Begin Class UW1EnemyGameplayAbility
void UW1EnemyGameplayAbility::StaticRegisterNativesUW1EnemyGameplayAbility()
{
	UClass* Class = UW1EnemyGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnemyCharacterFromActorInfo", &UW1EnemyGameplayAbility::execGetEnemyCharacterFromActorInfo },
		{ "GetEnemyCombatComponentFromActorInfo", &UW1EnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCharacterFromActorInfo, "GetEnemyCharacterFromActorInfo" }, // 186165483
		{ &Z_Construct_UFunction_UW1EnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo, "GetEnemyCombatComponentFromActorInfo" }, // 484330466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UW1EnemyGameplayAbility, UW1EnemyGameplayAbility::StaticClass, TEXT("UW1EnemyGameplayAbility"), &Z_Registration_Info_UClass_UW1EnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1EnemyGameplayAbility), 1087282576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_3918683765(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_Abilities_W1EnemyGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

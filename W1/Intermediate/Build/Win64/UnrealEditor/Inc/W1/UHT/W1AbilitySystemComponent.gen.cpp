// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/W1AbilitySystemComponent.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "W1/W1Types/W1StructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AbilitySystemComponent();
W1_API UClass* Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister();
W1_API UScriptStruct* Z_Construct_UScriptStruct_FW1HeroAbilitySet();
// End Cross Module References

// Begin Class UW1AbilitySystemComponent Function GrantHeroWeaponAbilities
struct Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics
{
	struct W1AbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms
	{
		TArray<FW1HeroAbilitySet> InDefaultWeaponAbilities;
		int32 ApplyLevel;
		TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ApplyLevel", "1" },
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/W1AbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultWeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InDefaultWeaponAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ApplyLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FW1HeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 283327945
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, InDefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDefaultWeaponAbilities_MetaData), NewProp_InDefaultWeaponAbilities_MetaData) }; // 283327945
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_ApplyLevel = { "ApplyLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, ApplyLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_ApplyLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1AbilitySystemComponent, nullptr, "GrantHeroWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::W1AbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::W1AbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1AbilitySystemComponent::execGrantHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FW1HeroAbilitySet,Z_Param_Out_InDefaultWeaponAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_ApplyLevel);
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantHeroWeaponAbilities(Z_Param_Out_InDefaultWeaponAbilities,Z_Param_ApplyLevel,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_NATIVE_END;
}
// End Class UW1AbilitySystemComponent Function GrantHeroWeaponAbilities

// Begin Class UW1AbilitySystemComponent Function RemovedGrantedHeroWeaponAbilities
struct Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics
{
	struct W1AbilitySystemComponent_eventRemovedGrantedHeroWeaponAbilities_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandlesToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/W1AbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandlesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandlesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove_Inner = { "InSpecHandlesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove = { "InSpecHandlesToRemove", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AbilitySystemComponent_eventRemovedGrantedHeroWeaponAbilities_Parms, InSpecHandlesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::NewProp_InSpecHandlesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1AbilitySystemComponent, nullptr, "RemovedGrantedHeroWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::W1AbilitySystemComponent_eventRemovedGrantedHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::W1AbilitySystemComponent_eventRemovedGrantedHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1AbilitySystemComponent::execRemovedGrantedHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandlesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovedGrantedHeroWeaponAbilities(Z_Param_Out_InSpecHandlesToRemove);
	P_NATIVE_END;
}
// End Class UW1AbilitySystemComponent Function RemovedGrantedHeroWeaponAbilities

// Begin Class UW1AbilitySystemComponent Function TryActivateAbilityByTag
struct Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics
{
	struct W1AbilitySystemComponent_eventTryActivateAbilityByTag_Parms
	{
		FGameplayTag AbilityTagToActivate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|Ability" },
		{ "ModuleRelativePath", "AbilitySystems/W1AbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTagToActivate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_AbilityTagToActivate = { "AbilityTagToActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AbilitySystemComponent_eventTryActivateAbilityByTag_Parms, AbilityTagToActivate), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((W1AbilitySystemComponent_eventTryActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(W1AbilitySystemComponent_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_AbilityTagToActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1AbilitySystemComponent, nullptr, "TryActivateAbilityByTag", nullptr, nullptr, Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::W1AbilitySystemComponent_eventTryActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::W1AbilitySystemComponent_eventTryActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1AbilitySystemComponent::execTryActivateAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTagToActivate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByTag(Z_Param_AbilityTagToActivate);
	P_NATIVE_END;
}
// End Class UW1AbilitySystemComponent Function TryActivateAbilityByTag

// Begin Class UW1AbilitySystemComponent
void UW1AbilitySystemComponent::StaticRegisterNativesUW1AbilitySystemComponent()
{
	UClass* Class = UW1AbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantHeroWeaponAbilities", &UW1AbilitySystemComponent::execGrantHeroWeaponAbilities },
		{ "RemovedGrantedHeroWeaponAbilities", &UW1AbilitySystemComponent::execRemovedGrantedHeroWeaponAbilities },
		{ "TryActivateAbilityByTag", &UW1AbilitySystemComponent::execTryActivateAbilityByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1AbilitySystemComponent);
UClass* Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister()
{
	return UW1AbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UW1AbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystems/W1AbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystems/W1AbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1AbilitySystemComponent_GrantHeroWeaponAbilities, "GrantHeroWeaponAbilities" }, // 2665217364
		{ &Z_Construct_UFunction_UW1AbilitySystemComponent_RemovedGrantedHeroWeaponAbilities, "RemovedGrantedHeroWeaponAbilities" }, // 400928270
		{ &Z_Construct_UFunction_UW1AbilitySystemComponent_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 2832516371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1AbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1AbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1AbilitySystemComponent_Statics::ClassParams = {
	&UW1AbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1AbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1AbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UW1AbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1AbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UW1AbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1AbilitySystemComponent.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1AbilitySystemComponent>()
{
	return UW1AbilitySystemComponent::StaticClass();
}
UW1AbilitySystemComponent::UW1AbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1AbilitySystemComponent);
UW1AbilitySystemComponent::~UW1AbilitySystemComponent() {}
// End Class UW1AbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1AbilitySystemComponent, UW1AbilitySystemComponent::StaticClass, TEXT("UW1AbilitySystemComponent"), &Z_Registration_Info_UClass_UW1AbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1AbilitySystemComponent), 2785688227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_1859670025(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

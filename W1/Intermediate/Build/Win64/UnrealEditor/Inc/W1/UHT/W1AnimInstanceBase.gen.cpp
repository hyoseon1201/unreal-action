// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AnimInstances/W1AnimInstanceBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AnimInstanceBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AnimInstanceBase();
W1_API UClass* Z_Construct_UClass_UW1AnimInstanceBase_NoRegister();
// End Cross Module References

// Begin Class UW1AnimInstanceBase Function DoesOwnerHaveTag
struct Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics
{
	struct W1AnimInstanceBase_eventDoesOwnerHaveTag_Parms
	{
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/W1AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1AnimInstanceBase_eventDoesOwnerHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((W1AnimInstanceBase_eventDoesOwnerHaveTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(W1AnimInstanceBase_eventDoesOwnerHaveTag_Parms), &Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1AnimInstanceBase, nullptr, "DoesOwnerHaveTag", nullptr, nullptr, Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::W1AnimInstanceBase_eventDoesOwnerHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::W1AnimInstanceBase_eventDoesOwnerHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1AnimInstanceBase::execDoesOwnerHaveTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesOwnerHaveTag(Z_Param_TagToCheck);
	P_NATIVE_END;
}
// End Class UW1AnimInstanceBase Function DoesOwnerHaveTag

// Begin Class UW1AnimInstanceBase
void UW1AnimInstanceBase::StaticRegisterNativesUW1AnimInstanceBase()
{
	UClass* Class = UW1AnimInstanceBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesOwnerHaveTag", &UW1AnimInstanceBase::execDoesOwnerHaveTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1AnimInstanceBase);
UClass* Z_Construct_UClass_UW1AnimInstanceBase_NoRegister()
{
	return UW1AnimInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UW1AnimInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/W1AnimInstanceBase.h" },
		{ "ModuleRelativePath", "AnimInstances/W1AnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1AnimInstanceBase_DoesOwnerHaveTag, "DoesOwnerHaveTag" }, // 3314804647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1AnimInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1AnimInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AnimInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1AnimInstanceBase_Statics::ClassParams = {
	&UW1AnimInstanceBase::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1AnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1AnimInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1AnimInstanceBase()
{
	if (!Z_Registration_Info_UClass_UW1AnimInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1AnimInstanceBase.OuterSingleton, Z_Construct_UClass_UW1AnimInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1AnimInstanceBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1AnimInstanceBase>()
{
	return UW1AnimInstanceBase::StaticClass();
}
UW1AnimInstanceBase::UW1AnimInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1AnimInstanceBase);
UW1AnimInstanceBase::~UW1AnimInstanceBase() {}
// End Class UW1AnimInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1AnimInstanceBase, UW1AnimInstanceBase::StaticClass, TEXT("UW1AnimInstanceBase"), &Z_Registration_Info_UClass_UW1AnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1AnimInstanceBase), 620284542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_1837479183(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

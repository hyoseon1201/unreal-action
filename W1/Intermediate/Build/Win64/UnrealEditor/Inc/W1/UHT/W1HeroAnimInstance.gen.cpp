// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AnimInstances/Hero/W1HeroAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroAnimInstance() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1HeroCharacter_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1CharacterAnimInstance();
W1_API UClass* Z_Construct_UClass_UW1HeroAnimInstance();
W1_API UClass* Z_Construct_UClass_UW1HeroAnimInstance_NoRegister();
// End Cross Module References

// Begin Class UW1HeroAnimInstance
void UW1HeroAnimInstance::StaticRegisterNativesUW1HeroAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1HeroAnimInstance);
UClass* Z_Construct_UClass_UW1HeroAnimInstance_NoRegister()
{
	return UW1HeroAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UW1HeroAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/W1HeroAnimInstance.h" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroCharacter_MetaData[] = {
		{ "Category", "AnimData|References" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldEnterRelaxState_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterRelaxStateThreshold_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroCharacter;
	static void NewProp_bShouldEnterRelaxState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnterRelaxState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterRelaxStateThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1HeroAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_OwningHeroCharacter = { "OwningHeroCharacter", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1HeroAnimInstance, OwningHeroCharacter), Z_Construct_UClass_AW1HeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroCharacter_MetaData), NewProp_OwningHeroCharacter_MetaData) };
void Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit(void* Obj)
{
	((UW1HeroAnimInstance*)Obj)->bShouldEnterRelaxState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState = { "bShouldEnterRelaxState", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UW1HeroAnimInstance), &Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldEnterRelaxState_MetaData), NewProp_bShouldEnterRelaxState_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold = { "EnterRelaxStateThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW1HeroAnimInstance, EnterRelaxStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterRelaxStateThreshold_MetaData), NewProp_EnterRelaxStateThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW1HeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_OwningHeroCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW1HeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW1HeroAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UW1CharacterAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1HeroAnimInstance_Statics::ClassParams = {
	&UW1HeroAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UW1HeroAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1HeroAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1HeroAnimInstance()
{
	if (!Z_Registration_Info_UClass_UW1HeroAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1HeroAnimInstance.OuterSingleton, Z_Construct_UClass_UW1HeroAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1HeroAnimInstance.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1HeroAnimInstance>()
{
	return UW1HeroAnimInstance::StaticClass();
}
UW1HeroAnimInstance::UW1HeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1HeroAnimInstance);
UW1HeroAnimInstance::~UW1HeroAnimInstance() {}
// End Class UW1HeroAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1HeroAnimInstance, UW1HeroAnimInstance::StaticClass, TEXT("UW1HeroAnimInstance"), &Z_Registration_Info_UClass_UW1HeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1HeroAnimInstance), 173067384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_1407107197(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

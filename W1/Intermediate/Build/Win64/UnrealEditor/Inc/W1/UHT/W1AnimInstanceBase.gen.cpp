// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AnimInstances/W1AnimInstanceBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AnimInstanceBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AnimInstanceBase();
W1_API UClass* Z_Construct_UClass_UW1AnimInstanceBase_NoRegister();
// End Cross Module References

// Begin Class UW1AnimInstanceBase
void UW1AnimInstanceBase::StaticRegisterNativesUW1AnimInstanceBase()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UW1AnimInstanceBase, UW1AnimInstanceBase::StaticClass, TEXT("UW1AnimInstanceBase"), &Z_Registration_Info_UClass_UW1AnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1AnimInstanceBase), 3226747862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_910270940(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_W1AnimInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

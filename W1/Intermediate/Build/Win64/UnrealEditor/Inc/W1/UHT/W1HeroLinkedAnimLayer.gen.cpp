// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AnimInstances/Hero/W1HeroLinkedAnimLayer.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroLinkedAnimLayer() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AnimInstanceBase();
W1_API UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer();
W1_API UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister();
// End Cross Module References

// Begin Class UW1HeroLinkedAnimLayer
void UW1HeroLinkedAnimLayer::StaticRegisterNativesUW1HeroLinkedAnimLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1HeroLinkedAnimLayer);
UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer_NoRegister()
{
	return UW1HeroLinkedAnimLayer::StaticClass();
}
struct Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/Hero/W1HeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "AnimInstances/Hero/W1HeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1HeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UW1AnimInstanceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::ClassParams = {
	&UW1HeroLinkedAnimLayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1HeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UW1HeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1HeroLinkedAnimLayer>()
{
	return UW1HeroLinkedAnimLayer::StaticClass();
}
UW1HeroLinkedAnimLayer::UW1HeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1HeroLinkedAnimLayer);
UW1HeroLinkedAnimLayer::~UW1HeroLinkedAnimLayer() {}
// End Class UW1HeroLinkedAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1HeroLinkedAnimLayer, UW1HeroLinkedAnimLayer::StaticClass, TEXT("UW1HeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UW1HeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1HeroLinkedAnimLayer), 1941671149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_878078137(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AnimInstances_Hero_W1HeroLinkedAnimLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

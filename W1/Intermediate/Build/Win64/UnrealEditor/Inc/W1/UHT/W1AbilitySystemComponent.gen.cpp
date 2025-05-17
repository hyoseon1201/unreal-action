// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/AbilitySystems/W1AbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1AbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1AbilitySystemComponent();
W1_API UClass* Z_Construct_UClass_UW1AbilitySystemComponent_NoRegister();
// End Cross Module References

// Begin Class UW1AbilitySystemComponent
void UW1AbilitySystemComponent::StaticRegisterNativesUW1AbilitySystemComponent()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_UW1AbilitySystemComponent, UW1AbilitySystemComponent::StaticClass, TEXT("UW1AbilitySystemComponent"), &Z_Registration_Info_UClass_UW1AbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1AbilitySystemComponent), 1169731283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_4110921291(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_AbilitySystems_W1AbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

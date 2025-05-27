// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Components/UI/HeroUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroUIComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UHeroUIComponent();
W1_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UPawnUIComponent();
// End Cross Module References

// Begin Class UHeroUIComponent
void UHeroUIComponent::StaticRegisterNativesUHeroUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroUIComponent);
UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister()
{
	return UHeroUIComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/HeroUIComponent.h" },
		{ "ModuleRelativePath", "Components/UI/HeroUIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams = {
	&UHeroUIComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroUIComponent()
{
	if (!Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton, Z_Construct_UClass_UHeroUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroUIComponent.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UHeroUIComponent>()
{
	return UHeroUIComponent::StaticClass();
}
UHeroUIComponent::UHeroUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroUIComponent);
UHeroUIComponent::~UHeroUIComponent() {}
// End Class UHeroUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroUIComponent, UHeroUIComponent::StaticClass, TEXT("UHeroUIComponent"), &Z_Registration_Info_UClass_UHeroUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroUIComponent), 2382376521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_195081955(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_HeroUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

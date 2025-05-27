// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Components/UI/PawnUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnUIComponent() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
W1_API UClass* Z_Construct_UClass_UPawnUIComponent();
W1_API UClass* Z_Construct_UClass_UPawnUIComponent_NoRegister();
// End Cross Module References

// Begin Class UPawnUIComponent
void UPawnUIComponent::StaticRegisterNativesUPawnUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnUIComponent);
UClass* Z_Construct_UClass_UPawnUIComponent_NoRegister()
{
	return UPawnUIComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/PawnUIComponent.h" },
		{ "ModuleRelativePath", "Components/UI/PawnUIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnUIComponent_Statics::ClassParams = {
	&UPawnUIComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnUIComponent()
{
	if (!Z_Registration_Info_UClass_UPawnUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnUIComponent.OuterSingleton, Z_Construct_UClass_UPawnUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnUIComponent.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UPawnUIComponent>()
{
	return UPawnUIComponent::StaticClass();
}
UPawnUIComponent::UPawnUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUIComponent);
UPawnUIComponent::~UPawnUIComponent() {}
// End Class UPawnUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnUIComponent, UPawnUIComponent::StaticClass, TEXT("UPawnUIComponent"), &Z_Registration_Info_UClass_UPawnUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnUIComponent), 3525864852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_2789013842(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_UI_PawnUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

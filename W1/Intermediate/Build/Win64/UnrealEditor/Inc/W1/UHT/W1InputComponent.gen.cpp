// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Components/Input/W1InputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1InputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UW1InputComponent();
W1_API UClass* Z_Construct_UClass_UW1InputComponent_NoRegister();
// End Cross Module References

// Begin Class UW1InputComponent
void UW1InputComponent::StaticRegisterNativesUW1InputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1InputComponent);
UClass* Z_Construct_UClass_UW1InputComponent_NoRegister()
{
	return UW1InputComponent::StaticClass();
}
struct Z_Construct_UClass_UW1InputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Components/Input/W1InputComponent.h" },
		{ "ModuleRelativePath", "Components/Input/W1InputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1InputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1InputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1InputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1InputComponent_Statics::ClassParams = {
	&UW1InputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1InputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1InputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1InputComponent()
{
	if (!Z_Registration_Info_UClass_UW1InputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1InputComponent.OuterSingleton, Z_Construct_UClass_UW1InputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1InputComponent.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1InputComponent>()
{
	return UW1InputComponent::StaticClass();
}
UW1InputComponent::UW1InputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1InputComponent);
UW1InputComponent::~UW1InputComponent() {}
// End Class UW1InputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1InputComponent, UW1InputComponent::StaticClass, TEXT("UW1InputComponent"), &Z_Registration_Info_UClass_UW1InputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1InputComponent), 517823558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_23221736(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Components_Input_W1InputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

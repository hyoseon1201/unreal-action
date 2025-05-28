// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Controllers/W1HeroController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1HeroController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_AW1HeroController();
W1_API UClass* Z_Construct_UClass_AW1HeroController_NoRegister();
// End Cross Module References

// Begin Class AW1HeroController
void AW1HeroController::StaticRegisterNativesAW1HeroController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW1HeroController);
UClass* Z_Construct_UClass_AW1HeroController_NoRegister()
{
	return AW1HeroController::StaticClass();
}
struct Z_Construct_UClass_AW1HeroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/W1HeroController.h" },
		{ "ModuleRelativePath", "Controllers/W1HeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW1HeroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AW1HeroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AW1HeroController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AW1HeroController, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AW1HeroController_Statics::ClassParams = {
	&AW1HeroController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AW1HeroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AW1HeroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AW1HeroController()
{
	if (!Z_Registration_Info_UClass_AW1HeroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW1HeroController.OuterSingleton, Z_Construct_UClass_AW1HeroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AW1HeroController.OuterSingleton;
}
template<> W1_API UClass* StaticClass<AW1HeroController>()
{
	return AW1HeroController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AW1HeroController);
AW1HeroController::~AW1HeroController() {}
// End Class AW1HeroController

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1HeroController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AW1HeroController, AW1HeroController::StaticClass, TEXT("AW1HeroController"), &Z_Registration_Info_UClass_AW1HeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW1HeroController), 1718523773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1HeroController_h_2774906612(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1HeroController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Controllers_W1HeroController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

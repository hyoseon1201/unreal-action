// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/Widgets/W1WidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1WidgetBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1WidgetBase();
W1_API UClass* Z_Construct_UClass_UW1WidgetBase_NoRegister();
// End Cross Module References

// Begin Class UW1WidgetBase Function BP_OnOwningEnemyUIComponentInitialized
struct W1WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms
{
	UEnemyUIComponent* OwningEnemyUIComponent;
};
static FName NAME_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized = FName(TEXT("BP_OnOwningEnemyUIComponentInitialized"));
void UW1WidgetBase::BP_OnOwningEnemyUIComponentInitialized(UEnemyUIComponent* OwningEnemyUIComponent)
{
	W1WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms Parms;
	Parms.OwningEnemyUIComponent=OwningEnemyUIComponent;
	ProcessEvent(FindFunctionChecked(NAME_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized),&Parms);
}
struct Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning EnemyUI Component Initialized" },
		{ "ModuleRelativePath", "Widgets/W1WidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningEnemyUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent = { "OwningEnemyUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms, OwningEnemyUIComponent), Z_Construct_UClass_UEnemyUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningEnemyUIComponent_MetaData), NewProp_OwningEnemyUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1WidgetBase, nullptr, "BP_OnOwningEnemyUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers), sizeof(W1WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(W1WidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UW1WidgetBase Function BP_OnOwningEnemyUIComponentInitialized

// Begin Class UW1WidgetBase Function BP_OnOwningHeroUIComponentInitialized
struct W1WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms
{
	UHeroUIComponent* OwningHeroUIComponent;
};
static FName NAME_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized = FName(TEXT("BP_OnOwningHeroUIComponentInitialized"));
void UW1WidgetBase::BP_OnOwningHeroUIComponentInitialized(UHeroUIComponent* OwningHeroUIComponent)
{
	W1WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms Parms;
	Parms.OwningHeroUIComponent=OwningHeroUIComponent;
	ProcessEvent(FindFunctionChecked(NAME_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized),&Parms);
}
struct Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning HeroUI Component Initialized" },
		{ "ModuleRelativePath", "Widgets/W1WidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent = { "OwningHeroUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms, OwningHeroUIComponent), Z_Construct_UClass_UHeroUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroUIComponent_MetaData), NewProp_OwningHeroUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1WidgetBase, nullptr, "BP_OnOwningHeroUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers), sizeof(W1WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(W1WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UW1WidgetBase Function BP_OnOwningHeroUIComponentInitialized

// Begin Class UW1WidgetBase Function InitEnemyCreatedWidget
struct Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics
{
	struct W1WidgetBase_eventInitEnemyCreatedWidget_Parms
	{
		AActor* OwningEnemyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/W1WidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor = { "OwningEnemyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1WidgetBase_eventInitEnemyCreatedWidget_Parms, OwningEnemyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1WidgetBase, nullptr, "InitEnemyCreatedWidget", nullptr, nullptr, Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::W1WidgetBase_eventInitEnemyCreatedWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::W1WidgetBase_eventInitEnemyCreatedWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1WidgetBase::execInitEnemyCreatedWidget)
{
	P_GET_OBJECT(AActor,Z_Param_OwningEnemyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEnemyCreatedWidget(Z_Param_OwningEnemyActor);
	P_NATIVE_END;
}
// End Class UW1WidgetBase Function InitEnemyCreatedWidget

// Begin Class UW1WidgetBase
void UW1WidgetBase::StaticRegisterNativesUW1WidgetBase()
{
	UClass* Class = UW1WidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitEnemyCreatedWidget", &UW1WidgetBase::execInitEnemyCreatedWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1WidgetBase);
UClass* Z_Construct_UClass_UW1WidgetBase_NoRegister()
{
	return UW1WidgetBase::StaticClass();
}
struct Z_Construct_UClass_UW1WidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/W1WidgetBase.h" },
		{ "ModuleRelativePath", "Widgets/W1WidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningEnemyUIComponentInitialized, "BP_OnOwningEnemyUIComponentInitialized" }, // 1283930413
		{ &Z_Construct_UFunction_UW1WidgetBase_BP_OnOwningHeroUIComponentInitialized, "BP_OnOwningHeroUIComponentInitialized" }, // 786504646
		{ &Z_Construct_UFunction_UW1WidgetBase_InitEnemyCreatedWidget, "InitEnemyCreatedWidget" }, // 1381623005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1WidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1WidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1WidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1WidgetBase_Statics::ClassParams = {
	&UW1WidgetBase::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1WidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1WidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1WidgetBase()
{
	if (!Z_Registration_Info_UClass_UW1WidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1WidgetBase.OuterSingleton, Z_Construct_UClass_UW1WidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1WidgetBase.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1WidgetBase>()
{
	return UW1WidgetBase::StaticClass();
}
UW1WidgetBase::UW1WidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1WidgetBase);
UW1WidgetBase::~UW1WidgetBase() {}
// End Class UW1WidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1WidgetBase, UW1WidgetBase::StaticClass, TEXT("UW1WidgetBase"), &Z_Registration_Info_UClass_UW1WidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1WidgetBase), 1904263101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_1222160631(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_Widgets_W1WidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

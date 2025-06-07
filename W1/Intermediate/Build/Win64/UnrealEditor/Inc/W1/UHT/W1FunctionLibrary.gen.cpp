// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W1/W1FunctionLibrary.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW1FunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_W1();
W1_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
W1_API UClass* Z_Construct_UClass_UW1FunctionLibrary();
W1_API UClass* Z_Construct_UClass_UW1FunctionLibrary_NoRegister();
W1_API UEnum* Z_Construct_UEnum_W1_EW1ConfirmType();
W1_API UEnum* Z_Construct_UEnum_W1_EW1ValidType();
// End Cross Module References

// Begin Class UW1FunctionLibrary Function AddGameplayTagToActorIfNone
struct Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics
{
	struct W1FunctionLibrary_eventAddGameplayTagToActorIfNone_Parms
	{
		AActor* InActor;
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "AddGameplayTagToActorIfNone", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::W1FunctionLibrary_eventAddGameplayTagToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::W1FunctionLibrary_eventAddGameplayTagToActorIfNone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execAddGameplayTagToActorIfNone)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UW1FunctionLibrary::AddGameplayTagToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function AddGameplayTagToActorIfNone

// Begin Class UW1FunctionLibrary Function BP_DoesActorHaveTag
struct Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics
{
	struct W1FunctionLibrary_eventBP_DoesActorHaveTag_Parms
	{
		AActor* InActor;
		FGameplayTag TagToCheck;
		EW1ConfirmType OutConfirmType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventBP_DoesActorHaveTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventBP_DoesActorHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_W1_EW1ConfirmType, METADATA_PARAMS(0, nullptr) }; // 1163415110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "BP_DoesActorHaveTag", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::W1FunctionLibrary_eventBP_DoesActorHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::W1FunctionLibrary_eventBP_DoesActorHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execBP_DoesActorHaveTag)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
	P_GET_ENUM_REF(EW1ConfirmType,Z_Param_Out_OutConfirmType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UW1FunctionLibrary::BP_DoesActorHaveTag(Z_Param_InActor,Z_Param_TagToCheck,(EW1ConfirmType&)(Z_Param_Out_OutConfirmType));
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function BP_DoesActorHaveTag

// Begin Class UW1FunctionLibrary Function BP_GetPawnCombatComponentFromActor
struct Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics
{
	struct W1FunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms
	{
		AActor* InActor;
		EW1ValidType OutValidType;
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "DisplayName", "GetPawnCombatComponentFromActor" },
		{ "ExpandEnumAsExecs", "OutValidType" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutValidType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutValidType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType = { "OutValidType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, OutValidType), Z_Construct_UEnum_W1_EW1ValidType, METADATA_PARAMS(0, nullptr) }; // 851855648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "BP_GetPawnCombatComponentFromActor", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::W1FunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::W1FunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execBP_GetPawnCombatComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_ENUM_REF(EW1ValidType,Z_Param_Out_OutValidType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=UW1FunctionLibrary::BP_GetPawnCombatComponentFromActor(Z_Param_InActor,(EW1ValidType&)(Z_Param_Out_OutValidType));
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function BP_GetPawnCombatComponentFromActor

// Begin Class UW1FunctionLibrary Function ComputeHitReactDirectionTag
struct Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics
{
	struct W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms
	{
		AActor* InAttacker;
		AActor* InVictim;
		float OutAngleDifference;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVictim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngleDifference;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InAttacker = { "InAttacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms, InAttacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InVictim = { "InVictim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms, InVictim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDifference = { "OutAngleDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms, OutAngleDifference), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InAttacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_InVictim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "ComputeHitReactDirectionTag", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::W1FunctionLibrary_eventComputeHitReactDirectionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execComputeHitReactDirectionTag)
{
	P_GET_OBJECT(AActor,Z_Param_InAttacker);
	P_GET_OBJECT(AActor,Z_Param_InVictim);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngleDifference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UW1FunctionLibrary::ComputeHitReactDirectionTag(Z_Param_InAttacker,Z_Param_InVictim,Z_Param_Out_OutAngleDifference);
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function ComputeHitReactDirectionTag

// Begin Class UW1FunctionLibrary Function GetScalableFloatValueAtLevel
struct Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics
{
	struct W1FunctionLibrary_eventGetScalableFloatValueAtLevel_Parms
	{
		FScalableFloat InScalableFloat;
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "CompactNodeTitle", "Get Value At Level" },
		{ "CPP_Default_InLevel", "1.000000" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InScalableFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InScalableFloat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat = { "InScalableFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InScalableFloat_MetaData), NewProp_InScalableFloat_MetaData) }; // 703790095
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "GetScalableFloatValueAtLevel", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::W1FunctionLibrary_eventGetScalableFloatValueAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::W1FunctionLibrary_eventGetScalableFloatValueAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execGetScalableFloatValueAtLevel)
{
	P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_InScalableFloat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UW1FunctionLibrary::GetScalableFloatValueAtLevel(Z_Param_Out_InScalableFloat,Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function GetScalableFloatValueAtLevel

// Begin Class UW1FunctionLibrary Function IsTargetPawnHostile
struct Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics
{
	struct W1FunctionLibrary_eventIsTargetPawnHostile_Parms
	{
		APawn* QueryPawn;
		APawn* TargetPawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn = { "QueryPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventIsTargetPawnHostile_Parms, QueryPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventIsTargetPawnHostile_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((W1FunctionLibrary_eventIsTargetPawnHostile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(W1FunctionLibrary_eventIsTargetPawnHostile_Parms), &Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "IsTargetPawnHostile", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::W1FunctionLibrary_eventIsTargetPawnHostile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::W1FunctionLibrary_eventIsTargetPawnHostile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execIsTargetPawnHostile)
{
	P_GET_OBJECT(APawn,Z_Param_QueryPawn);
	P_GET_OBJECT(APawn,Z_Param_TargetPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UW1FunctionLibrary::IsTargetPawnHostile(Z_Param_QueryPawn,Z_Param_TargetPawn);
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function IsTargetPawnHostile

// Begin Class UW1FunctionLibrary Function RemoveGameplayTagFromActorIfFound
struct Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics
{
	struct W1FunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms
	{
		AActor* InActor;
		FGameplayTag TagToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "W1|FunctionLibrary" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W1FunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW1FunctionLibrary, nullptr, "RemoveGameplayTagFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::W1FunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::W1FunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW1FunctionLibrary::execRemoveGameplayTagFromActorIfFound)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	UW1FunctionLibrary::RemoveGameplayTagFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
	P_NATIVE_END;
}
// End Class UW1FunctionLibrary Function RemoveGameplayTagFromActorIfFound

// Begin Class UW1FunctionLibrary
void UW1FunctionLibrary::StaticRegisterNativesUW1FunctionLibrary()
{
	UClass* Class = UW1FunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTagToActorIfNone", &UW1FunctionLibrary::execAddGameplayTagToActorIfNone },
		{ "BP_DoesActorHaveTag", &UW1FunctionLibrary::execBP_DoesActorHaveTag },
		{ "BP_GetPawnCombatComponentFromActor", &UW1FunctionLibrary::execBP_GetPawnCombatComponentFromActor },
		{ "ComputeHitReactDirectionTag", &UW1FunctionLibrary::execComputeHitReactDirectionTag },
		{ "GetScalableFloatValueAtLevel", &UW1FunctionLibrary::execGetScalableFloatValueAtLevel },
		{ "IsTargetPawnHostile", &UW1FunctionLibrary::execIsTargetPawnHostile },
		{ "RemoveGameplayTagFromActorIfFound", &UW1FunctionLibrary::execRemoveGameplayTagFromActorIfFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW1FunctionLibrary);
UClass* Z_Construct_UClass_UW1FunctionLibrary_NoRegister()
{
	return UW1FunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UW1FunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "W1FunctionLibrary.h" },
		{ "ModuleRelativePath", "W1FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW1FunctionLibrary_AddGameplayTagToActorIfNone, "AddGameplayTagToActorIfNone" }, // 2269320346
		{ &Z_Construct_UFunction_UW1FunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 2172562801
		{ &Z_Construct_UFunction_UW1FunctionLibrary_BP_GetPawnCombatComponentFromActor, "BP_GetPawnCombatComponentFromActor" }, // 939907904
		{ &Z_Construct_UFunction_UW1FunctionLibrary_ComputeHitReactDirectionTag, "ComputeHitReactDirectionTag" }, // 886069136
		{ &Z_Construct_UFunction_UW1FunctionLibrary_GetScalableFloatValueAtLevel, "GetScalableFloatValueAtLevel" }, // 3031419996
		{ &Z_Construct_UFunction_UW1FunctionLibrary_IsTargetPawnHostile, "IsTargetPawnHostile" }, // 3746625938
		{ &Z_Construct_UFunction_UW1FunctionLibrary_RemoveGameplayTagFromActorIfFound, "RemoveGameplayTagFromActorIfFound" }, // 105731849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW1FunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UW1FunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_W1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW1FunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW1FunctionLibrary_Statics::ClassParams = {
	&UW1FunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW1FunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UW1FunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW1FunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UW1FunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW1FunctionLibrary.OuterSingleton, Z_Construct_UClass_UW1FunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW1FunctionLibrary.OuterSingleton;
}
template<> W1_API UClass* StaticClass<UW1FunctionLibrary>()
{
	return UW1FunctionLibrary::StaticClass();
}
UW1FunctionLibrary::UW1FunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW1FunctionLibrary);
UW1FunctionLibrary::~UW1FunctionLibrary() {}
// End Class UW1FunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW1FunctionLibrary, UW1FunctionLibrary::StaticClass, TEXT("UW1FunctionLibrary"), &Z_Registration_Info_UClass_UW1FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW1FunctionLibrary), 1323551186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_2322274811(TEXT("/Script/W1"),
	Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_action_W1_Source_W1_W1FunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

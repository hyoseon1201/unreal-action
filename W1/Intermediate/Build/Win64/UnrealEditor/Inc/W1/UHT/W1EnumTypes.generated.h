// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "W1Types/W1EnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef W1_W1EnumTypes_generated_h
#error "W1EnumTypes.generated.h already included, missing '#pragma once' in W1EnumTypes.h"
#endif
#define W1_W1EnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_action_W1_Source_W1_W1Types_W1EnumTypes_h


#define FOREACH_ENUM_EW1CONFIRMTYPE(op) \
	op(EW1ConfirmType::Yes) \
	op(EW1ConfirmType::No) 

enum class EW1ConfirmType : uint8;
template<> struct TIsUEnumClass<EW1ConfirmType> { enum { Value = true }; };
template<> W1_API UEnum* StaticEnum<EW1ConfirmType>();

#define FOREACH_ENUM_EW1VALIDTYPE(op) \
	op(EW1ValidType::Valid) \
	op(EW1ValidType::InValid) 

enum class EW1ValidType : uint8;
template<> struct TIsUEnumClass<EW1ValidType> { enum { Value = true }; };
template<> W1_API UEnum* StaticEnum<EW1ValidType>();

#define FOREACH_ENUM_EW1SUCCESSTYPE(op) \
	op(EW1SuccessType::Successful) \
	op(EW1SuccessType::Failed) 

enum class EW1SuccessType : uint8;
template<> struct TIsUEnumClass<EW1SuccessType> { enum { Value = true }; };
template<> W1_API UEnum* StaticEnum<EW1SuccessType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLODTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSLOD_MassLODTypes_generated_h
#error "MassLODTypes.generated.h already included, missing '#pragma once' in MassLODTypes.h"
#endif
#define MASSLOD_MassLODTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h


#define FOREACH_ENUM_EMASSLOD(op) \
	op(EMassLOD::High) \
	op(EMassLOD::Medium) \
	op(EMassLOD::Low) \
	op(EMassLOD::Off) \
	op(EMassLOD::Max) 

namespace EMassLOD { enum Type : int; }
template<> MASSLOD_API UEnum* StaticEnum<EMassLOD::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

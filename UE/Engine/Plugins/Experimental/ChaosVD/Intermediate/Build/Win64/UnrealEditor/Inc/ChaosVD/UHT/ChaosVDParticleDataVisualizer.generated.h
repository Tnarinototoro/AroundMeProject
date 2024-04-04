// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/ChaosVDParticleDataVisualizer.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDParticleDataVisualizer_generated_h
#error "ChaosVDParticleDataVisualizer.generated.h already included, missing '#pragma once' in ChaosVDParticleDataVisualizer.h"
#endif
#define CHAOSVD_ChaosVDParticleDataVisualizer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDParticleDataVisualizer_h


#define FOREACH_ENUM_ECHAOSVDPARTICLEDATAVISUALIZATIONFLAGS(op) \
	op(EChaosVDParticleDataVisualizationFlags::None) \
	op(EChaosVDParticleDataVisualizationFlags::Velocity) \
	op(EChaosVDParticleDataVisualizationFlags::AngularVelocity) \
	op(EChaosVDParticleDataVisualizationFlags::Acceleration) \
	op(EChaosVDParticleDataVisualizationFlags::AngularAcceleration) \
	op(EChaosVDParticleDataVisualizationFlags::LinearImpulse) \
	op(EChaosVDParticleDataVisualizationFlags::AngularImpulse) 

enum class EChaosVDParticleDataVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDParticleDataVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDParticleDataVisualizationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

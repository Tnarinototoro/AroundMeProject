// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/ChaosVDCollisionDataVisualizer.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDCollisionDataVisualizer_generated_h
#error "ChaosVDCollisionDataVisualizer.generated.h already included, missing '#pragma once' in ChaosVDCollisionDataVisualizer.h"
#endif
#define CHAOSVD_ChaosVDCollisionDataVisualizer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDCollisionDataVisualizer_h


#define FOREACH_ENUM_ECHAOSVDCOLLISIONVISUALIZATIONFLAGS(op) \
	op(EChaosVDCollisionVisualizationFlags::None) \
	op(EChaosVDCollisionVisualizationFlags::ContactPoints) \
	op(EChaosVDCollisionVisualizationFlags::NetPushOut) \
	op(EChaosVDCollisionVisualizationFlags::NetImpulse) \
	op(EChaosVDCollisionVisualizationFlags::ContactNormal) \
	op(EChaosVDCollisionVisualizationFlags::AccumulatedImpulse) \
	op(EChaosVDCollisionVisualizationFlags::DrawOnlyActiveContacts) 

enum class EChaosVDCollisionVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDCollisionVisualizationFlags> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDCollisionVisualizationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

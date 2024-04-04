// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SimulationPBDBendingElementConfigNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_SimulationPBDBendingElementConfigNode_generated_h
#error "SimulationPBDBendingElementConfigNode.generated.h already included, missing '#pragma once' in SimulationPBDBendingElementConfigNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_SimulationPBDBendingElementConfigNode_generated_h

#define FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosClothAssetSimulationBaseConfigNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetSimulationPBDBendingElementConfigNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETRESTANGLECONSTRUCTIONTYPE(op) \
	op(EChaosClothAssetRestAngleConstructionType::Use3DRestAngles) \
	op(EChaosClothAssetRestAngleConstructionType::FlatnessRatio) \
	op(EChaosClothAssetRestAngleConstructionType::RestAngle) 

enum class EChaosClothAssetRestAngleConstructionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetRestAngleConstructionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetRestAngleConstructionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

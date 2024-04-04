// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/SelectionNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_SelectionNode_generated_h
#error "SelectionNode.generated.h already included, missing '#pragma once' in SelectionNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_SelectionNode_generated_h

#define FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetSelectionNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETSELECTIONTYPE(op) \
	op(EChaosClothAssetSelectionType::SimVertex2D) \
	op(EChaosClothAssetSelectionType::SimVertex3D) \
	op(EChaosClothAssetSelectionType::RenderVertex) \
	op(EChaosClothAssetSelectionType::SimFace) \
	op(EChaosClothAssetSelectionType::RenderFace) 

enum class EChaosClothAssetSelectionType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetSelectionType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

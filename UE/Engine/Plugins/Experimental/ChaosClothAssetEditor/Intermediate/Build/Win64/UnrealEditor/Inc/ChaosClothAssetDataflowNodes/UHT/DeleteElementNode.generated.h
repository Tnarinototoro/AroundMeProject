// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/DeleteElementNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_DeleteElementNode_generated_h
#error "DeleteElementNode.generated.h already included, missing '#pragma once' in DeleteElementNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_DeleteElementNode_generated_h

#define FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetDeleteElementNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETELEMENTTYPE(op) \
	op(EChaosClothAssetElementType::None) \
	op(EChaosClothAssetElementType::SimMesh) \
	op(EChaosClothAssetElementType::RenderMesh) \
	op(EChaosClothAssetElementType::SimPattern) \
	op(EChaosClothAssetElementType::RenderPattern) \
	op(EChaosClothAssetElementType::SimVertex2D) \
	op(EChaosClothAssetElementType::SimVertex3D) \
	op(EChaosClothAssetElementType::RenderVertex) \
	op(EChaosClothAssetElementType::SimFace) \
	op(EChaosClothAssetElementType::RenderFace) \
	op(EChaosClothAssetElementType::Seam) 

enum class EChaosClothAssetElementType : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetElementType> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetElementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

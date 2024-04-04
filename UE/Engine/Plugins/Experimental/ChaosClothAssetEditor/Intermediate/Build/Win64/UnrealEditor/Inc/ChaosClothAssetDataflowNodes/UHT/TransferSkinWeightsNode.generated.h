// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/TransferSkinWeightsNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTHASSETDATAFLOWNODES_TransferSkinWeightsNode_generated_h
#error "TransferSkinWeightsNode.generated.h already included, missing '#pragma once' in TransferSkinWeightsNode.h"
#endif
#define CHAOSCLOTHASSETDATAFLOWNODES_TransferSkinWeightsNode_generated_h

#define FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics; \
	CHAOSCLOTHASSETDATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<struct FChaosClothAssetTransferSkinWeightsNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h


#define FOREACH_ENUM_ECHAOSCLOTHASSETTRANSFERSKINWEIGHTSMETHOD(op) \
	op(EChaosClothAssetTransferSkinWeightsMethod::ClosestPointOnSurface) \
	op(EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights) 

enum class EChaosClothAssetTransferSkinWeightsMethod : uint8;
template<> struct TIsUEnumClass<EChaosClothAssetTransferSkinWeightsMethod> { enum { Value = true }; };
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetTransferSkinWeightsMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

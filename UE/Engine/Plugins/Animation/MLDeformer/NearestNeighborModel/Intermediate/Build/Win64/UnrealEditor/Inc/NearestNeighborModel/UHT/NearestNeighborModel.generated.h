// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClothPartEditorData;
struct FSkeletonCachePair;
#ifdef NEARESTNEIGHBORMODEL_NearestNeighborModel_generated_h
#error "NearestNeighborModel.generated.h already included, missing '#pragma once' in NearestNeighborModel.h"
#endif
#define NEARESTNEIGHBORMODEL_NearestNeighborModel_generated_h

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletonCachePair_Statics; \
	NEARESTNEIGHBORMODEL_API static class UScriptStruct* StaticStruct();


template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<struct FSkeletonCachePair>();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothPartEditorData_Statics; \
	NEARESTNEIGHBORMODEL_API static class UScriptStruct* StaticStruct();


template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<struct FClothPartEditorData>();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothPartData_Statics; \
	NEARESTNEIGHBORMODEL_API static class UScriptStruct* StaticStruct();


template<> NEARESTNEIGHBORMODEL_API UScriptStruct* StaticStruct<struct FClothPartData>();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClipInputs); \
	DECLARE_FUNCTION(execSetNeighborOffsets); \
	DECLARE_FUNCTION(execNeighborOffsets); \
	DECLARE_FUNCTION(execSetNeighborCoeffs); \
	DECLARE_FUNCTION(execNeighborCoeffs); \
	DECLARE_FUNCTION(execSetNumNeighbors); \
	DECLARE_FUNCTION(execSetVertexMean); \
	DECLARE_FUNCTION(execVertexMean); \
	DECLARE_FUNCTION(execSetPCABasis); \
	DECLARE_FUNCTION(execPCABasis); \
	DECLARE_FUNCTION(execGetNumNeighbors); \
	DECLARE_FUNCTION(execGetPCACoeffNum); \
	DECLARE_FUNCTION(execGetPCACoeffStart); \
	DECLARE_FUNCTION(execGetPartNumVerts); \
	DECLARE_FUNCTION(execGetNumParts);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetModelDir); \
	DECLARE_FUNCTION(execGetNearestNeighborData); \
	DECLARE_FUNCTION(execGetClothPartEditorData); \
	DECLARE_FUNCTION(execGetLearningRate); \
	DECLARE_FUNCTION(execGetBatchSize); \
	DECLARE_FUNCTION(execGetNumEpochs); \
	DECLARE_FUNCTION(execGetOutputDim); \
	DECLARE_FUNCTION(execGetHiddenLayerDims); \
	DECLARE_FUNCTION(execGetInputDim);


#else
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_ACCESSORS
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNearestNeighborModel, NO_API)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborModel(); \
	friend struct Z_Construct_UClass_UNearestNeighborModel_Statics; \
public: \
	DECLARE_CLASS(UNearestNeighborModel, UMLDeformerMorphModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), NO_API) \
	DECLARE_SERIALIZER(UNearestNeighborModel) \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNearestNeighborModel(UNearestNeighborModel&&); \
	NO_API UNearestNeighborModel(const UNearestNeighborModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborModel) \
	NO_API virtual ~UNearestNeighborModel();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_158_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_ACCESSORS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<class UNearestNeighborModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

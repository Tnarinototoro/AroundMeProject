// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieJobVariableAssignmentContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class UMovieGraphConfig;
class UMovieGraphVariable;
class UObject;
enum class EMovieGraphContainerType : uint8;
enum class EMovieGraphValueType : uint8;
#ifdef MOVIERENDERPIPELINECORE_MovieJobVariableAssignmentContainer_generated_h
#error "MovieJobVariableAssignmentContainer.generated.h already included, missing '#pragma once' in MovieJobVariableAssignmentContainer.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieJobVariableAssignmentContainer_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVariableAssignmentEnableState); \
	DECLARE_FUNCTION(execSetVariableAssignmentEnableState); \
	DECLARE_FUNCTION(execGetValueContainerType); \
	DECLARE_FUNCTION(execGetValueTypeObject); \
	DECLARE_FUNCTION(execGetValueType); \
	DECLARE_FUNCTION(execSetValueSerializedString); \
	DECLARE_FUNCTION(execSetValueClass); \
	DECLARE_FUNCTION(execSetValueObject); \
	DECLARE_FUNCTION(execSetValueEnum); \
	DECLARE_FUNCTION(execSetValueText); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execSetValueName); \
	DECLARE_FUNCTION(execSetValueDouble); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execSetValueInt64); \
	DECLARE_FUNCTION(execSetValueInt32); \
	DECLARE_FUNCTION(execSetValueByte); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetValueSerializedString); \
	DECLARE_FUNCTION(execGetValueClass); \
	DECLARE_FUNCTION(execGetValueObject); \
	DECLARE_FUNCTION(execGetValueEnum); \
	DECLARE_FUNCTION(execGetValueText); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execGetValueName); \
	DECLARE_FUNCTION(execGetValueDouble); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execGetValueInt64); \
	DECLARE_FUNCTION(execGetValueInt32); \
	DECLARE_FUNCTION(execGetValueByte); \
	DECLARE_FUNCTION(execGetValueBool); \
	DECLARE_FUNCTION(execSetGraphConfig);


#if WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGraphVariableOverrides);


#else
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieJobVariableAssignmentContainer(); \
	friend struct Z_Construct_UClass_UMovieJobVariableAssignmentContainer_Statics; \
public: \
	DECLARE_CLASS(UMovieJobVariableAssignmentContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMovieJobVariableAssignmentContainer)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieJobVariableAssignmentContainer(UMovieJobVariableAssignmentContainer&&); \
	NO_API UMovieJobVariableAssignmentContainer(const UMovieJobVariableAssignmentContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieJobVariableAssignmentContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieJobVariableAssignmentContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieJobVariableAssignmentContainer) \
	NO_API virtual ~UMovieJobVariableAssignmentContainer();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_20_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMovieJobVariableAssignmentContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieJobVariableAssignmentContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

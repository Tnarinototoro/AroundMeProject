// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MovieGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIERENDERPIPELINEEDITOR_MovieGraphSchema_generated_h
#error "MovieGraphSchema.generated.h already included, missing '#pragma once' in MovieGraphSchema.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MovieGraphSchema_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieGraphSchema(); \
	friend struct Z_Construct_UClass_UMovieGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UMovieGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMovieGraphSchema)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieGraphSchema(UMovieGraphSchema&&); \
	NO_API UMovieGraphSchema(const UMovieGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieGraphSchema) \
	NO_API virtual ~UMovieGraphSchema();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_12_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<class UMovieGraphSchema>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<struct FMovieGraphSchemaAction>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewNode_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphSchemaAction Super;


template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<struct FMovieGraphSchemaAction_NewNode>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewVariableNode_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphSchemaAction Super;


template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<struct FMovieGraphSchemaAction_NewVariableNode>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieGraphSchemaAction_NewComment_Statics; \
	MOVIERENDERPIPELINEEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieGraphSchemaAction Super;


template<> MOVIERENDERPIPELINEEDITOR_API UScriptStruct* StaticStruct<struct FMovieGraphSchemaAction_NewComment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

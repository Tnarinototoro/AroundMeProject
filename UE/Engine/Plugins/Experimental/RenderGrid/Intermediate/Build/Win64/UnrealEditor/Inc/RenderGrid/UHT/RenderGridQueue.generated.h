// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderGrid/RenderGridQueue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URenderGrid;
class URenderGridJob;
class URenderGridQueue;
struct FGuid;
#ifdef RENDERGRID_RenderGridQueue_generated_h
#error "RenderGridQueue.generated.h already included, missing '#pragma once' in RenderGridQueue.h"
#endif
#define RENDERGRID_RenderGridQueue_generated_h

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridMoviePipelineRenderJob(); \
	friend struct Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics; \
public: \
	DECLARE_CLASS(URenderGridMoviePipelineRenderJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridMoviePipelineRenderJob)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridMoviePipelineRenderJob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridMoviePipelineRenderJob(URenderGridMoviePipelineRenderJob&&); \
	NO_API URenderGridMoviePipelineRenderJob(const URenderGridMoviePipelineRenderJob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridMoviePipelineRenderJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridMoviePipelineRenderJob); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridMoviePipelineRenderJob) \
	NO_API virtual ~URenderGridMoviePipelineRenderJob();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_86_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGridMoviePipelineRenderJob>();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatusPercentage); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetJobsCompletedCount); \
	DECLARE_FUNCTION(execGetJobsRemainingCount); \
	DECLARE_FUNCTION(execGetJobsCount); \
	DECLARE_FUNCTION(execGetJobs); \
	DECLARE_FUNCTION(execGetJobStatusPercentage); \
	DECLARE_FUNCTION(execGetJobStatus); \
	DECLARE_FUNCTION(execGetCurrentlyRenderingJob); \
	DECLARE_FUNCTION(execGetRenderGrid); \
	DECLARE_FUNCTION(execIsCurrentlyRendering); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsCanceled); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsStarted); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execAddJob); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execToDebugString); \
	DECLARE_FUNCTION(execGetRemainingRenderingQueuesCount); \
	DECLARE_FUNCTION(execGetCurrentlyRenderingQueue); \
	DECLARE_FUNCTION(execCloseEditorOnCompletion);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridQueue(); \
	friend struct Z_Construct_UClass_URenderGridQueue_Statics; \
public: \
	DECLARE_CLASS(URenderGridQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridQueue)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridQueue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridQueue(URenderGridQueue&&); \
	NO_API URenderGridQueue(const URenderGridQueue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridQueue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridQueue) \
	NO_API virtual ~URenderGridQueue();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_182_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGridQueue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

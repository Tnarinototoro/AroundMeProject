// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineCommandLineEncoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineCommandLineEncoder_generated_h
#error "MoviePipelineCommandLineEncoder.generated.h already included, missing '#pragma once' in MoviePipelineCommandLineEncoder.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineCommandLineEncoder_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineCommandLineEncoder(); \
	friend struct Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineCommandLineEncoder, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineCommandLineEncoder)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineCommandLineEncoder(UMoviePipelineCommandLineEncoder&&); \
	NO_API UMoviePipelineCommandLineEncoder(const UMoviePipelineCommandLineEncoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineCommandLineEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCommandLineEncoder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineCommandLineEncoder) \
	NO_API virtual ~UMoviePipelineCommandLineEncoder();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineCommandLineEncoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h


#define FOREACH_ENUM_EMOVIEPIPELINEENCODEQUALITY(op) \
	op(EMoviePipelineEncodeQuality::Low) \
	op(EMoviePipelineEncodeQuality::Medium) \
	op(EMoviePipelineEncodeQuality::High) \
	op(EMoviePipelineEncodeQuality::Epic) 

enum class EMoviePipelineEncodeQuality : uint8;
template<> struct TIsUEnumClass<EMoviePipelineEncodeQuality> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineEncodeQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

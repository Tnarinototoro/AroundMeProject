// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureInstancePlaybackHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UInstancedStaticMeshComponent;
struct FAnimToTextureAutoPlayData;
struct FAnimToTextureFrameData;
#ifdef ANIMTOTEXTURE_AnimToTextureInstancePlaybackHelpers_generated_h
#error "AnimToTextureInstancePlaybackHelpers.generated.h already included, missing '#pragma once' in AnimToTextureInstancePlaybackHelpers.h"
#endif
#define ANIMTOTEXTURE_AnimToTextureInstancePlaybackHelpers_generated_h

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimToTextureFrameData>();

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<struct FAnimToTextureAutoPlayData>();

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFrameDataFromDataAsset); \
	DECLARE_FUNCTION(execGetFrame); \
	DECLARE_FUNCTION(execGetAutoPlayDataFromDataAsset); \
	DECLARE_FUNCTION(execUpdateInstanceFrameData); \
	DECLARE_FUNCTION(execUpdateInstanceAutoPlayData); \
	DECLARE_FUNCTION(execBatchUpdateInstancesFrameData); \
	DECLARE_FUNCTION(execBatchUpdateInstancesAutoPlayData); \
	DECLARE_FUNCTION(execSetupInstancedMeshComponent);


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_ACCESSORS
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimToTextureInstancePlaybackLibrary(); \
	friend struct Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimToTextureInstancePlaybackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), NO_API) \
	DECLARE_SERIALIZER(UAnimToTextureInstancePlaybackLibrary)


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimToTextureInstancePlaybackLibrary(UAnimToTextureInstancePlaybackLibrary&&); \
	NO_API UAnimToTextureInstancePlaybackLibrary(const UAnimToTextureInstancePlaybackLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureInstancePlaybackLibrary) \
	NO_API virtual ~UAnimToTextureInstancePlaybackLibrary();


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_ACCESSORS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMTOTEXTURE_API UClass* StaticClass<class UAnimToTextureInstancePlaybackLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

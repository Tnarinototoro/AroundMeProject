// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/LevelSequenceVCamLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
struct FPilotableSequenceCameraInfo;
#ifdef VIRTUALCAMERA_LevelSequenceVCamLibrary_generated_h
#error "LevelSequenceVCamLibrary.generated.h already included, missing '#pragma once' in LevelSequenceVCamLibrary.h"
#endif
#define VIRTUALCAMERA_LevelSequenceVCamLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics; \
	VIRTUALCAMERA_API static class UScriptStruct* StaticStruct();


template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<struct FPilotableSequenceCameraInfo>();

#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindPilotableCamerasInActiveLevelSequence); \
	DECLARE_FUNCTION(execHasAnyCameraCutsInLevelSequence);


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceVCamLibrary(); \
	friend struct Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceVCamLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceVCamLibrary)


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceVCamLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceVCamLibrary(ULevelSequenceVCamLibrary&&); \
	NO_API ULevelSequenceVCamLibrary(const ULevelSequenceVCamLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceVCamLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceVCamLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceVCamLibrary) \
	NO_API virtual ~ULevelSequenceVCamLibrary();


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class ULevelSequenceVCamLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

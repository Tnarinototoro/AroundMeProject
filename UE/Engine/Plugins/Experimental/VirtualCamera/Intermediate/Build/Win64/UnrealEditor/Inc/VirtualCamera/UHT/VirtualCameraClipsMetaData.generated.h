// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequence/VirtualCameraClipsMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameRate;
#ifdef VIRTUALCAMERA_VirtualCameraClipsMetaData_generated_h
#error "VirtualCameraClipsMetaData.generated.h already included, missing '#pragma once' in VirtualCameraClipsMetaData.h"
#endif
#define VIRTUALCAMERA_VirtualCameraClipsMetaData_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsACineCameraRecording); \
	DECLARE_FUNCTION(execSetDisplayRate); \
	DECLARE_FUNCTION(execSetLengthInFrames); \
	DECLARE_FUNCTION(execSetFrameCountEnd); \
	DECLARE_FUNCTION(execSetFrameCountStart); \
	DECLARE_FUNCTION(execSetRecordedLevelName); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execGetIsACineCameraRecording); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execGetLengthInFrames); \
	DECLARE_FUNCTION(execGetFrameCountEnd); \
	DECLARE_FUNCTION(execGetFrameCountStart); \
	DECLARE_FUNCTION(execGetRecordedLevelName); \
	DECLARE_FUNCTION(execGetSelected); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execGetAllClipsMetaDataTags); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsCreatedFromVCam); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FavoriteLevel); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsFlagged); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsNoGood); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsCineACineCameraRecording); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_DisplayRate); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_LengthInFrames); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FrameCountEnd); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FrameCountStart); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_RecordedLevel); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_IsSelected); \
	DECLARE_FUNCTION(execGetClipsMetaDataTag_FocalLength);


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraClipsMetaData(); \
	friend struct Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraClipsMetaData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraClipsMetaData) \
	virtual UObject* _getUObject() const override { return const_cast<UVirtualCameraClipsMetaData*>(this); }


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraClipsMetaData(UVirtualCameraClipsMetaData&&); \
	NO_API UVirtualCameraClipsMetaData(const UVirtualCameraClipsMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraClipsMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraClipsMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraClipsMetaData) \
	NO_API virtual ~UVirtualCameraClipsMetaData();


#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraClipsMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

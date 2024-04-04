// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGoogleARCoreCameraConfig;
#ifdef GOOGLEARCOREBASE_GoogleARCoreTypes_generated_h
#error "GoogleARCoreTypes.generated.h already included, missing '#pragma once' in GoogleARCoreTypes.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCoreTypes_generated_h

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GOOGLEARCOREBASE_API UScriptStruct* StaticStruct<struct FGoogleARCoreCameraConfig>();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_319_DELEGATE \
static void FGoogleARCoreOnConfigCameraDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& GoogleARCoreOnConfigCameraDynamicDelegate, TArray<FGoogleARCoreCameraConfig> const& SupportedCameraConfig);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreEventManager(); \
	friend struct Z_Construct_UClass_UGoogleARCoreEventManager_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreEventManager)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreEventManager(UGoogleARCoreEventManager&&); \
	NO_API UGoogleARCoreEventManager(const UGoogleARCoreEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreEventManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoogleARCoreEventManager)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_313_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_316_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEARCOREBASE_API UClass* StaticClass<class UGoogleARCoreEventManager>();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReleasePointCloud); \
	DECLARE_FUNCTION(execGetPointInTrackingSpace); \
	DECLARE_FUNCTION(execGetPointId); \
	DECLARE_FUNCTION(execGetPoint); \
	DECLARE_FUNCTION(execGetPointNum); \
	DECLARE_FUNCTION(execIsUpdated);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCorePointCloud(); \
	friend struct Z_Construct_UClass_UGoogleARCorePointCloud_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCorePointCloud, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCorePointCloud)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCorePointCloud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCorePointCloud(UGoogleARCorePointCloud&&); \
	NO_API UGoogleARCorePointCloud(const UGoogleARCorePointCloud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCorePointCloud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCorePointCloud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCorePointCloud)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_369_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_375_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEARCOREBASE_API UClass* StaticClass<class UGoogleARCorePointCloud>();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreEditorSettings(); \
	friend struct Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreEditorSettings(UGoogleARCoreEditorSettings&&); \
	NO_API UGoogleARCoreEditorSettings(const UGoogleARCoreEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreEditorSettings) \
	NO_API virtual ~UGoogleARCoreEditorSettings();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_424_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_427_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEARCOREBASE_API UClass* StaticClass<class UGoogleARCoreEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h


#define FOREACH_ENUM_EGOOGLEARCOREFUNCTIONSTATUS(op) \
	op(EGoogleARCoreFunctionStatus::Success) \
	op(EGoogleARCoreFunctionStatus::Fatal) \
	op(EGoogleARCoreFunctionStatus::SessionPaused) \
	op(EGoogleARCoreFunctionStatus::NotTracking) \
	op(EGoogleARCoreFunctionStatus::ResourceExhausted) \
	op(EGoogleARCoreFunctionStatus::NotAvailable) \
	op(EGoogleARCoreFunctionStatus::InvalidType) \
	op(EGoogleARCoreFunctionStatus::IllegalState) \
	op(EGoogleARCoreFunctionStatus::Unknown) 

enum class EGoogleARCoreFunctionStatus : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreFunctionStatus> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreFunctionStatus>();

#define FOREACH_ENUM_EGOOGLEARCORELINETRACECHANNEL(op) \
	op(EGoogleARCoreLineTraceChannel::None) \
	op(EGoogleARCoreLineTraceChannel::FeaturePoint) \
	op(EGoogleARCoreLineTraceChannel::InfinitePlane) \
	op(EGoogleARCoreLineTraceChannel::PlaneUsingExtent) \
	op(EGoogleARCoreLineTraceChannel::PlaneUsingBoundaryPolygon) \
	op(EGoogleARCoreLineTraceChannel::FeaturePointWithSurfaceNormal) \
	op(EGoogleARCoreLineTraceChannel::AugmentedImage) 

enum class EGoogleARCoreLineTraceChannel : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreLineTraceChannel> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreLineTraceChannel>();

#define FOREACH_ENUM_EGOOGLEARCORECAMERAFACING(op) \
	op(EGoogleARCoreCameraFacing::None) \
	op(EGoogleARCoreCameraFacing::Back) \
	op(EGoogleARCoreCameraFacing::Front) 

enum class EGoogleARCoreCameraFacing : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreCameraFacing> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCameraFacing>();

#define FOREACH_ENUM_EGOOGLEARCOREAUGMENTEDFACEMODE(op) \
	op(EGoogleARCoreAugmentedFaceMode::Disabled) \
	op(EGoogleARCoreAugmentedFaceMode::PoseAndMesh) 

enum class EGoogleARCoreAugmentedFaceMode : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreAugmentedFaceMode> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreAugmentedFaceMode>();

#define FOREACH_ENUM_EGOOGLEARCORETRACKINGFAILUREREASON(op) \
	op(EGoogleARCoreTrackingFailureReason::None) \
	op(EGoogleARCoreTrackingFailureReason::BadState) \
	op(EGoogleARCoreTrackingFailureReason::InsufficientLight) \
	op(EGoogleARCoreTrackingFailureReason::ExcessiveMotion) \
	op(EGoogleARCoreTrackingFailureReason::InsufficientFeatures) 

enum class EGoogleARCoreTrackingFailureReason : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreTrackingFailureReason> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreTrackingFailureReason>();

#define FOREACH_ENUM_EGOOGLEARCORECAMERAFPS(op) \
	op(EGoogleARCoreCameraFPS::FPS_Any) \
	op(EGoogleARCoreCameraFPS::FPS_30) \
	op(EGoogleARCoreCameraFPS::FPS_60) 

enum class EGoogleARCoreCameraFPS : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreCameraFPS> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCameraFPS>();

#define FOREACH_ENUM_EGOOGLEARCORECAMERADEPTHSENSORUSAGE(op) \
	op(EGoogleARCoreCameraDepthSensorUsage::DepthSensor_Any) \
	op(EGoogleARCoreCameraDepthSensorUsage::DepthSensor_RequireAndUse) \
	op(EGoogleARCoreCameraDepthSensorUsage::DepthSensor_DoNotUse) 

enum class EGoogleARCoreCameraDepthSensorUsage : uint8;
template<> struct TIsUEnumClass<EGoogleARCoreCameraDepthSensorUsage> { enum { Value = true }; };
template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCameraDepthSensorUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

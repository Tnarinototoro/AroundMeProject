// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class AWaterZone;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;
class UWaterSplineComponent;
class UWaterWavesBase;
#ifdef WATER_WaterBodyComponent_generated_h
#error "WaterBodyComponent.generated.h already included, missing '#pragma once' in WaterBodyComponent.h"
#endif
#define WATER_WaterBodyComponent_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FUnderwaterPostProcessSettings>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execSetWaterZoneOverride); \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterSurfaceInfoAtLocation); \
	DECLARE_FUNCTION(execSetWaterAndUnderWaterPostProcessMaterial); \
	DECLARE_FUNCTION(execGetWaterInfoMaterialInstance); \
	DECLARE_FUNCTION(execGetUnderwaterPostProcessMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterLODMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterStaticMeshMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterial); \
	DECLARE_FUNCTION(execGetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyActor); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetStandardRenderableComponents); \
	DECLARE_FUNCTION(execGetCollisionComponents);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_ACCESSORS \
static void GetWaterMeshOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetWaterMeshOverride_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterBodyComponent, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyComponent(); \
	friend struct Z_Construct_UClass_UWaterBodyComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterBodyComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterBodyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBodyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBodyComponent(UWaterBodyComponent&&); \
	NO_API UWaterBodyComponent(const UWaterBodyComponent&); \
public: \
	NO_API virtual ~UWaterBodyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_120_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterBodyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

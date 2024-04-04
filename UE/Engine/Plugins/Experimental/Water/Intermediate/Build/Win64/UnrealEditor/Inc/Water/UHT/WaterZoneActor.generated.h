// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterZoneActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterZoneActor_generated_h
#error "WaterZoneActor.generated.h already included, missing '#pragma once' in WaterZoneActor.h"
#endif
#define WATER_WaterZoneActor_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_RPC_WRAPPERS
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceUpdateWaterInfoTexture);


#else
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_EDITOR_ONLY_RPC_WRAPPERS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAWaterZone(); \
	friend struct Z_Construct_UClass_AWaterZone_Statics; \
public: \
	DECLARE_CLASS(AWaterZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterZone)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterZone(AWaterZone&&); \
	NO_API AWaterZone(const AWaterZone&); \
public: \
	NO_API virtual ~AWaterZone();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRDeviceVisualizationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef XRBASE_XRDeviceVisualizationComponent_generated_h
#error "XRDeviceVisualizationComponent.generated.h already included, missing '#pragma once' in XRDeviceVisualizationComponent.h"
#endif
#define XRBASE_XRDeviceVisualizationComponent_generated_h

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsRenderingActive); \
	DECLARE_FUNCTION(execSetCustomDisplayMesh); \
	DECLARE_FUNCTION(execSetDisplayModelSource); \
	DECLARE_FUNCTION(execSetIsVisualizationActive);


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_ACCESSORS
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUXRDeviceVisualizationComponent(); \
	friend struct Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics; \
public: \
	DECLARE_CLASS(UXRDeviceVisualizationComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRBase"), NO_API) \
	DECLARE_SERIALIZER(UXRDeviceVisualizationComponent)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRDeviceVisualizationComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRDeviceVisualizationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRDeviceVisualizationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRDeviceVisualizationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRDeviceVisualizationComponent(UXRDeviceVisualizationComponent&&); \
	NO_API UXRDeviceVisualizationComponent(const UXRDeviceVisualizationComponent&); \
public: \
	NO_API virtual ~UXRDeviceVisualizationComponent();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XRBASE_API UClass* StaticClass<class UXRDeviceVisualizationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRDeviceVisualizationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

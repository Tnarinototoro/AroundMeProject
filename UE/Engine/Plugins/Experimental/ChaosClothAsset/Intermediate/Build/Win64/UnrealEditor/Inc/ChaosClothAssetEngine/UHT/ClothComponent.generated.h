// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosClothAsset/ClothComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosClothAsset;
#ifdef CHAOSCLOTHASSETENGINE_ClothComponent_generated_h
#error "ClothComponent.generated.h already included, missing '#pragma once' in ClothComponent.h"
#endif
#define CHAOSCLOTHASSETENGINE_ClothComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecreateClothSimulationProxy); \
	DECLARE_FUNCTION(execResetConfigProperties); \
	DECLARE_FUNCTION(execIsSimulationEnabled); \
	DECLARE_FUNCTION(execSetEnableSimulation); \
	DECLARE_FUNCTION(execIsSimulationSuspended); \
	DECLARE_FUNCTION(execResumeSimulation); \
	DECLARE_FUNCTION(execSuspendSimulation); \
	DECLARE_FUNCTION(execForceNextUpdateTeleportAndReset); \
	DECLARE_FUNCTION(execForceNextUpdateTeleport); \
	DECLARE_FUNCTION(execResetTeleportMode); \
	DECLARE_FUNCTION(execGetClothAsset); \
	DECLARE_FUNCTION(execSetClothAsset);


#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_ACCESSORS \
static void GetClothAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetClothAsset_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothComponent(); \
	friend struct Z_Construct_UClass_UChaosClothComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosClothComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosClothAssetEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosClothComponent)


#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosClothComponent(UChaosClothComponent&&); \
	NO_API UChaosClothComponent(const UChaosClothComponent&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothComponent)


#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTHASSETENGINE_API UClass* StaticClass<class UChaosClothComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABuoyancyManager;
class UObject;
#ifdef WATER_BuoyancyManager_generated_h
#error "BuoyancyManager.generated.h already included, missing '#pragma once' in BuoyancyManager.h"
#endif
#define WATER_BuoyancyManager_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBuoyancyComponentManager);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesABuoyancyManager(); \
	friend struct Z_Construct_UClass_ABuoyancyManager_Statics; \
public: \
	DECLARE_CLASS(ABuoyancyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(ABuoyancyManager)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuoyancyManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuoyancyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuoyancyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuoyancyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuoyancyManager(ABuoyancyManager&&); \
	NO_API ABuoyancyManager(const ABuoyancyManager&); \
public: \
	NO_API virtual ~ABuoyancyManager();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class ABuoyancyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

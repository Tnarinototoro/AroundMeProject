// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Visualizers/ChaosVDDataVisualizerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDDataVisualizerBase_generated_h
#error "ChaosVDDataVisualizerBase.generated.h already included, missing '#pragma once' in ChaosVDDataVisualizerBase.h"
#endif
#define CHAOSVD_ChaosVDDataVisualizerBase_generated_h

#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSVD_API UChaosVDVisualizerContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CHAOSVD_API UChaosVDVisualizerContainerInterface(UChaosVDVisualizerContainerInterface&&); \
	CHAOSVD_API UChaosVDVisualizerContainerInterface(const UChaosVDVisualizerContainerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSVD_API, UChaosVDVisualizerContainerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVDVisualizerContainerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVDVisualizerContainerInterface) \
	CHAOSVD_API virtual ~UChaosVDVisualizerContainerInterface();


#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosVDVisualizerContainerInterface(); \
	friend struct Z_Construct_UClass_UChaosVDVisualizerContainerInterface_Statics; \
public: \
	DECLARE_CLASS(UChaosVDVisualizerContainerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosVD"), CHAOSVD_API) \
	DECLARE_SERIALIZER(UChaosVDVisualizerContainerInterface)


#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosVDVisualizerContainerInterface() {} \
public: \
	typedef UChaosVDVisualizerContainerInterface UClassType; \
	typedef IChaosVDVisualizerContainerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVD_API UClass* StaticClass<class UChaosVDVisualizerContainerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDDataVisualizerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

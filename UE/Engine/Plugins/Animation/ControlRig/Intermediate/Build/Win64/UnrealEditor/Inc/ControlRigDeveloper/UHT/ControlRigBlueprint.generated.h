// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
class UControlRigBlueprint;
class UObject;
class URigHierarchyController;
class USkeletalMesh;
#ifdef CONTROLRIGDEVELOPER_ControlRigBlueprint_generated_h
#error "ControlRigBlueprint.generated.h already included, missing '#pragma once' in ControlRigBlueprint.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigBlueprint_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHierarchyController); \
	DECLARE_FUNCTION(execGetCurrentlyOpenRigBlueprints); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh); \
	DECLARE_FUNCTION(execCreateControlRig); \
	DECLARE_FUNCTION(execGetControlRigClass);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigBlueprint, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigBlueprint(); \
	friend struct Z_Construct_UClass_UControlRigBlueprint_Statics; \
public: \
	DECLARE_CLASS(UControlRigBlueprint, URigVMBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), NO_API) \
	DECLARE_SERIALIZER(UControlRigBlueprint) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRigBlueprint*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigBlueprint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigBlueprint(UControlRigBlueprint&&); \
	NO_API UControlRigBlueprint(const UControlRigBlueprint&); \
public: \
	NO_API virtual ~UControlRigBlueprint();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_32_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<class UControlRigBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

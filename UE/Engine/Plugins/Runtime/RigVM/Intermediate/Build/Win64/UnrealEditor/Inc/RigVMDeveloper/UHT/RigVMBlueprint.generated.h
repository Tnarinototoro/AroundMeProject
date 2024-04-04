// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEdGraph;
class UObject;
class URigVMController;
class URigVMFunctionLibrary;
class URigVMGraph;
class URigVMHost;
class UStruct;
struct FRigVMGraphVariableDescription;
#ifdef RIGVMDEVELOPER_RigVMBlueprint_generated_h
#error "RigVMBlueprint.generated.h already included, missing '#pragma once' in RigVMBlueprint.h"
#endif
#define RIGVMDEVELOPER_RigVMBlueprint_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMPythonSettings>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMEdGraphDisplaySettings>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMOldPublicFunctionArg_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMOldPublicFunctionArg>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_170_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMOldPublicFunctionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMOldPublicFunctionData>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvailableRigVMStructs); \
	DECLARE_FUNCTION(execCreateRigVMHost); \
	DECLARE_FUNCTION(execGetRigVMHostClass); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execGetOrCreateController); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetFocusedModel); \
	DECLARE_FUNCTION(execRemoveModel); \
	DECLARE_FUNCTION(execAddModel); \
	DECLARE_FUNCTION(execGetLocalFunctionLibrary); \
	DECLARE_FUNCTION(execGetAllModels); \
	DECLARE_FUNCTION(execGetDefaultModel); \
	DECLARE_FUNCTION(execGetModel); \
	DECLARE_FUNCTION(execRequestRigVMInit); \
	DECLARE_FUNCTION(execGetAutoVMRecompile); \
	DECLARE_FUNCTION(execSetAutoVMRecompile); \
	DECLARE_FUNCTION(execRequestAutoVMRecompilation); \
	DECLARE_FUNCTION(execRecompileVMIfRequired); \
	DECLARE_FUNCTION(execRecompileVM);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuspendNotifications); \
	DECLARE_FUNCTION(execChangeMemberVariableType); \
	DECLARE_FUNCTION(execRenameMemberVariable); \
	DECLARE_FUNCTION(execRemoveMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execGetMemberVariables);


#else
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_EDITOR_ONLY_RPC_WRAPPERS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMBlueprint, NO_API)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_INCLASS \
private: \
	static void StaticRegisterNativesURigVMBlueprint(); \
	friend struct Z_Construct_UClass_URigVMBlueprint_Statics; \
public: \
	DECLARE_CLASS(URigVMBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMBlueprint) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URigVMBlueprint*>(this); }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMBlueprint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMBlueprint(URigVMBlueprint&&); \
	NO_API URigVMBlueprint(const URigVMBlueprint&); \
public: \
	NO_API virtual ~URigVMBlueprint();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_198_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h_201_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

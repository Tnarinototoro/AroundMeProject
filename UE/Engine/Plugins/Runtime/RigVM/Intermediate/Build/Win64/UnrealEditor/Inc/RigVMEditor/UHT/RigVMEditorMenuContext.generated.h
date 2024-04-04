// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/RigVMEditorMenuContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMBlueprint;
class URigVMHost;
struct FRigVMEditorGraphMenuContext;
#ifdef RIGVMEDITOR_RigVMEditorMenuContext_generated_h
#error "RigVMEditorMenuContext.generated.h already included, missing '#pragma once' in RigVMEditorMenuContext.h"
#endif
#define RIGVMEDITOR_RigVMEditorMenuContext_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMEditorGraphMenuContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMEDITOR_API UScriptStruct* StaticStruct<struct FRigVMEditorGraphMenuContext>();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphMenuContext); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execGetRigVMHost); \
	DECLARE_FUNCTION(execGetRigVMBlueprint);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_ACCESSORS
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEditorMenuContext(); \
	friend struct Z_Construct_UClass_URigVMEditorMenuContext_Statics; \
public: \
	DECLARE_CLASS(URigVMEditorMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMEditor"), NO_API) \
	DECLARE_SERIALIZER(URigVMEditorMenuContext)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMEditorMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMEditorMenuContext(URigVMEditorMenuContext&&); \
	NO_API URigVMEditorMenuContext(const URigVMEditorMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMEditorMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEditorMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMEditorMenuContext) \
	NO_API virtual ~URigVMEditorMenuContext();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_49_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_ACCESSORS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMEDITOR_API UClass* StaticClass<class URigVMEditorMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMEditorMenuContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

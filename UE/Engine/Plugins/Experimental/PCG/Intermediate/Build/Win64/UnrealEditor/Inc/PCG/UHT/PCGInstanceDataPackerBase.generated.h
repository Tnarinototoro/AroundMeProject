// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InstanceDataPackers/PCGInstanceDataPackerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGMetadata;
class UPCGSpatialData;
struct FPCGContext;
struct FPCGMeshInstanceList;
struct FPCGPackedCustomData;
#ifdef PCG_PCGInstanceDataPackerBase_generated_h
#error "PCGInstanceDataPackerBase.generated.h already included, missing '#pragma once' in PCGInstanceDataPackerBase.h"
#endif
#define PCG_PCGInstanceDataPackerBase_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPCGPackedCustomData_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


template<> PCG_API UScriptStruct* StaticStruct<struct FPCGPackedCustomData>();

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPackCustomDataFromAttributes); \
	DECLARE_FUNCTION(execAddTypeToPacking); \
	DECLARE_FUNCTION(execPackInstances);


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstanceDataPackerBase(); \
	friend struct Z_Construct_UClass_UPCGInstanceDataPackerBase_Statics; \
public: \
	DECLARE_CLASS(UPCGInstanceDataPackerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGInstanceDataPackerBase)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGInstanceDataPackerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGInstanceDataPackerBase(UPCGInstanceDataPackerBase&&); \
	NO_API UPCGInstanceDataPackerBase(const UPCGInstanceDataPackerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGInstanceDataPackerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstanceDataPackerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstanceDataPackerBase) \
	NO_API virtual ~UPCGInstanceDataPackerBase();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGInstanceDataPackerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_InstanceDataPackers_PCGInstanceDataPackerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

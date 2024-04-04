// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSystem_generated_h
#error "NiagaraSystem.generated.h already included, missing '#pragma once' in NiagaraSystem.h"
#endif
#define NIAGARA_NiagaraSystem_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterCompiledData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraParameterDataSetBinding>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraParameterDataSetBindingCollection>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemCompiledData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemScalabilityOverrides>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystem(); \
	friend struct Z_Construct_UClass_UNiagaraSystem_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSystem) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystem) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraSystem(UNiagaraSystem&&); \
	NIAGARA_API UNiagaraSystem(const UNiagaraSystem&); \
public:


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_210_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_213_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

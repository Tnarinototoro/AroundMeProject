// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceLandscape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceLandscape_generated_h
#error "NiagaraDataInterfaceLandscape.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceLandscape.h"
#endif
#define NIAGARA_NiagaraDataInterfaceLandscape_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceLandscape(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceLandscape, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceLandscape)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceLandscape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceLandscape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceLandscape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceLandscape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraDataInterfaceLandscape(UNiagaraDataInterfaceLandscape&&); \
	NIAGARA_API UNiagaraDataInterfaceLandscape(const UNiagaraDataInterfaceLandscape&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceLandscape();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_37_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceLandscape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h


#define FOREACH_ENUM_ENDILANDSCAPE_SOURCEMODE(op) \
	op(ENDILandscape_SourceMode::Default) \
	op(ENDILandscape_SourceMode::Source) \
	op(ENDILandscape_SourceMode::AttachParent) 

enum class ENDILandscape_SourceMode : uint8;
template<> struct TIsUEnumClass<ENDILandscape_SourceMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDILandscape_SourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

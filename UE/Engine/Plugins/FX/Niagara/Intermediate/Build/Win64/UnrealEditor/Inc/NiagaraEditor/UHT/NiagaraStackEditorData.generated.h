// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraStackEditorData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraStackEditorData_generated_h
#error "NiagaraStackEditorData.generated.h already included, missing '#pragma once' in NiagaraStackEditorData.h"
#endif
#define NIAGARAEDITOR_NiagaraStackEditorData_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraStackEditorData(); \
	friend struct Z_Construct_UClass_UNiagaraStackEditorData_Statics; \
public: \
	DECLARE_CLASS(UNiagaraStackEditorData, UNiagaraEditorDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraStackEditorData)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraStackEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraStackEditorData(UNiagaraStackEditorData&&); \
	NO_API UNiagaraStackEditorData(const UNiagaraStackEditorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraStackEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraStackEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraStackEditorData) \
	NO_API virtual ~UNiagaraStackEditorData();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_22_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraStackEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h


#define FOREACH_ENUM_ENIAGARASTACKENTRYINLINEDISPLAYMODE(op) \
	op(ENiagaraStackEntryInlineDisplayMode::Expression) \
	op(ENiagaraStackEntryInlineDisplayMode::GraphHorizontal) \
	op(ENiagaraStackEntryInlineDisplayMode::GraphVertical) \
	op(ENiagaraStackEntryInlineDisplayMode::GraphHybrid) \
	op(ENiagaraStackEntryInlineDisplayMode::None) 

enum class ENiagaraStackEntryInlineDisplayMode;
template<> struct TIsUEnumClass<ENiagaraStackEntryInlineDisplayMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraStackEntryInlineDisplayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

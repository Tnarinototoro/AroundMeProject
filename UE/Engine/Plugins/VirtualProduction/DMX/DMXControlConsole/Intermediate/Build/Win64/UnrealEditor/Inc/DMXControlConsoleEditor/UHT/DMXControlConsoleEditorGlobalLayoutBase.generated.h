// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layouts/DMXControlConsoleEditorGlobalLayoutBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMXCONTROLCONSOLEEDITOR_DMXControlConsoleEditorGlobalLayoutBase_generated_h
#error "DMXControlConsoleEditorGlobalLayoutBase.generated.h already included, missing '#pragma once' in DMXControlConsoleEditorGlobalLayoutBase.h"
#endif
#define DMXCONTROLCONSOLEEDITOR_DMXControlConsoleEditorGlobalLayoutBase_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXControlConsoleEditorGlobalLayoutBase(); \
	friend struct Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics; \
public: \
	DECLARE_CLASS(UDMXControlConsoleEditorGlobalLayoutBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DMXControlConsoleEditor"), NO_API) \
	DECLARE_SERIALIZER(UDMXControlConsoleEditorGlobalLayoutBase)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXControlConsoleEditorGlobalLayoutBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXControlConsoleEditorGlobalLayoutBase(UDMXControlConsoleEditorGlobalLayoutBase&&); \
	NO_API UDMXControlConsoleEditorGlobalLayoutBase(const UDMXControlConsoleEditorGlobalLayoutBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXControlConsoleEditorGlobalLayoutBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXControlConsoleEditorGlobalLayoutBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXControlConsoleEditorGlobalLayoutBase) \
	NO_API virtual ~UDMXControlConsoleEditorGlobalLayoutBase();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<class UDMXControlConsoleEditorGlobalLayoutBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h


#define FOREACH_ENUM_EDMXCONTROLCONSOLELAYOUTMODE(op) \
	op(EDMXControlConsoleLayoutMode::Horizontal) \
	op(EDMXControlConsoleLayoutMode::Vertical) \
	op(EDMXControlConsoleLayoutMode::Grid) \
	op(EDMXControlConsoleLayoutMode::None) 

enum class EDMXControlConsoleLayoutMode : uint8;
template<> struct TIsUEnumClass<EDMXControlConsoleLayoutMode> { enum { Value = true }; };
template<> DMXCONTROLCONSOLEEDITOR_API UEnum* StaticEnum<EDMXControlConsoleLayoutMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectColumn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSER_ObjectColumn_generated_h
#error "ObjectColumn.generated.h already included, missing '#pragma once' in ObjectColumn.h"
#endif
#define CHOOSER_ObjectColumn_generated_h

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectContextProperty_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserParameterObjectBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FObjectContextProperty>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChooserObjectRowData_Statics; \
	CHOOSER_API static class UScriptStruct* StaticStruct();


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FChooserObjectRowData>();

#define FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectColumn_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FChooserColumnBase Super;


template<> CHOOSER_API UScriptStruct* StaticStruct<struct FObjectColumn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h


#define FOREACH_ENUM_EOBJECTCOLUMNCELLVALUECOMPARISON(op) \
	op(EObjectColumnCellValueComparison::MatchEqual) \
	op(EObjectColumnCellValueComparison::MatchNotEqual) \
	op(EObjectColumnCellValueComparison::MatchAny) \
	op(EObjectColumnCellValueComparison::Modulus) 

enum class EObjectColumnCellValueComparison;
template<> struct TIsUEnumClass<EObjectColumnCellValueComparison> { enum { Value = true }; };
template<> CHOOSER_API UEnum* StaticEnum<EObjectColumnCellValueComparison>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreePropertyBindings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreePropertyBindings_generated_h
#error "StateTreePropertyBindings.generated.h already included, missing '#pragma once' in StateTreePropertyBindings.h"
#endif
#define STATETREEMODULE_StateTreePropertyBindings_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeBindableStructDesc>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyPathSegment>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_317_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyPath>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_463_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeEditorPropertyPath>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_498_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyPathBinding>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_573_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertySegment>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_604_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyBinding>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_633_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyIndirection>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_668_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyCopy>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_707_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyCopyBatch>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_731_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreePropertyBindings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h


#define FOREACH_ENUM_ESTATETREEBINDABLESTRUCTSOURCE(op) \
	op(EStateTreeBindableStructSource::Context) \
	op(EStateTreeBindableStructSource::Parameter) \
	op(EStateTreeBindableStructSource::Evaluator) \
	op(EStateTreeBindableStructSource::GlobalTask) \
	op(EStateTreeBindableStructSource::State) \
	op(EStateTreeBindableStructSource::Task) \
	op(EStateTreeBindableStructSource::Condition) 

enum class EStateTreeBindableStructSource : uint8;
template<> struct TIsUEnumClass<EStateTreeBindableStructSource> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBindableStructSource>();

#define FOREACH_ENUM_ESTATETREEPROPERTYACCESSTYPE(op) \
	op(EStateTreePropertyAccessType::Offset) \
	op(EStateTreePropertyAccessType::Object) \
	op(EStateTreePropertyAccessType::WeakObject) \
	op(EStateTreePropertyAccessType::SoftObject) \
	op(EStateTreePropertyAccessType::ObjectInstance) \
	op(EStateTreePropertyAccessType::StructInstance) \
	op(EStateTreePropertyAccessType::IndexArray) 

enum class EStateTreePropertyAccessType : uint8;
template<> struct TIsUEnumClass<EStateTreePropertyAccessType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyAccessType>();

#define FOREACH_ENUM_ESTATETREEPROPERTYCOPYTYPE(op) \
	op(EStateTreePropertyCopyType::None) \
	op(EStateTreePropertyCopyType::CopyPlain) \
	op(EStateTreePropertyCopyType::CopyComplex) \
	op(EStateTreePropertyCopyType::CopyBool) \
	op(EStateTreePropertyCopyType::CopyStruct) \
	op(EStateTreePropertyCopyType::CopyObject) \
	op(EStateTreePropertyCopyType::CopyName) \
	op(EStateTreePropertyCopyType::CopyFixedArray) \
	op(EStateTreePropertyCopyType::StructReference) \
	op(EStateTreePropertyCopyType::PromoteBoolToByte) \
	op(EStateTreePropertyCopyType::PromoteBoolToInt32) \
	op(EStateTreePropertyCopyType::PromoteBoolToUInt32) \
	op(EStateTreePropertyCopyType::PromoteBoolToInt64) \
	op(EStateTreePropertyCopyType::PromoteBoolToFloat) \
	op(EStateTreePropertyCopyType::PromoteBoolToDouble) \
	op(EStateTreePropertyCopyType::PromoteByteToInt32) \
	op(EStateTreePropertyCopyType::PromoteByteToUInt32) \
	op(EStateTreePropertyCopyType::PromoteByteToInt64) \
	op(EStateTreePropertyCopyType::PromoteByteToFloat) \
	op(EStateTreePropertyCopyType::PromoteByteToDouble) \
	op(EStateTreePropertyCopyType::PromoteInt32ToInt64) \
	op(EStateTreePropertyCopyType::PromoteInt32ToFloat) \
	op(EStateTreePropertyCopyType::PromoteInt32ToDouble) \
	op(EStateTreePropertyCopyType::PromoteUInt32ToInt64) \
	op(EStateTreePropertyCopyType::PromoteUInt32ToFloat) \
	op(EStateTreePropertyCopyType::PromoteUInt32ToDouble) \
	op(EStateTreePropertyCopyType::PromoteFloatToInt32) \
	op(EStateTreePropertyCopyType::PromoteFloatToInt64) \
	op(EStateTreePropertyCopyType::PromoteFloatToDouble) \
	op(EStateTreePropertyCopyType::DemoteDoubleToInt32) \
	op(EStateTreePropertyCopyType::DemoteDoubleToInt64) \
	op(EStateTreePropertyCopyType::DemoteDoubleToFloat) 

enum class EStateTreePropertyCopyType : uint8;
template<> struct TIsUEnumClass<EStateTreePropertyCopyType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyCopyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

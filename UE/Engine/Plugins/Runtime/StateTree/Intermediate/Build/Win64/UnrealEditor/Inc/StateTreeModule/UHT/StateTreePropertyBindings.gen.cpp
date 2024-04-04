// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreePropertyBindings.h"
#include "StateTreeIndexTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreePropertyBindings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBinding();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopy();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyIndirection();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPath();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathBinding();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathSegment();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertySegment();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeBindableStructSource;
	static UEnum* EStateTreeBindableStructSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeBindableStructSource"));
		}
		return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBindableStructSource>()
	{
		return EStateTreeBindableStructSource_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators[] = {
		{ "EStateTreeBindableStructSource::Context", (int64)EStateTreeBindableStructSource::Context },
		{ "EStateTreeBindableStructSource::Parameter", (int64)EStateTreeBindableStructSource::Parameter },
		{ "EStateTreeBindableStructSource::Evaluator", (int64)EStateTreeBindableStructSource::Evaluator },
		{ "EStateTreeBindableStructSource::GlobalTask", (int64)EStateTreeBindableStructSource::GlobalTask },
		{ "EStateTreeBindableStructSource::State", (int64)EStateTreeBindableStructSource::State },
		{ "EStateTreeBindableStructSource::Task", (int64)EStateTreeBindableStructSource::Task },
		{ "EStateTreeBindableStructSource::Condition", (int64)EStateTreeBindableStructSource::Condition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams[] = {
		{ "Condition.Comment", "/** Source is State condition */" },
		{ "Condition.Name", "EStateTreeBindableStructSource::Condition" },
		{ "Condition.ToolTip", "Source is State condition" },
		{ "Context.Comment", "/** Source is StateTree context object */" },
		{ "Context.Name", "EStateTreeBindableStructSource::Context" },
		{ "Context.ToolTip", "Source is StateTree context object" },
		{ "Evaluator.Comment", "/** Source is StateTree evaluator */" },
		{ "Evaluator.Name", "EStateTreeBindableStructSource::Evaluator" },
		{ "Evaluator.ToolTip", "Source is StateTree evaluator" },
		{ "GlobalTask.Comment", "/** Source is StateTree global task */" },
		{ "GlobalTask.Name", "EStateTreeBindableStructSource::GlobalTask" },
		{ "GlobalTask.ToolTip", "Source is StateTree global task" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "Parameter.Comment", "/** Source is StateTree parameter */" },
		{ "Parameter.Name", "EStateTreeBindableStructSource::Parameter" },
		{ "Parameter.ToolTip", "Source is StateTree parameter" },
		{ "State.Comment", "/** Source is State parameter */" },
		{ "State.Name", "EStateTreeBindableStructSource::State" },
		{ "State.ToolTip", "Source is State parameter" },
		{ "Task.Comment", "/** Source is State task */" },
		{ "Task.Name", "EStateTreeBindableStructSource::Task" },
		{ "Task.ToolTip", "Source is State task" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeBindableStructSource",
		"EStateTreeBindableStructSource",
		Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeBindableStructSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyAccessType;
	static UEnum* EStateTreePropertyAccessType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyAccessType"));
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyAccessType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyAccessType>()
	{
		return EStateTreePropertyAccessType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators[] = {
		{ "EStateTreePropertyAccessType::Offset", (int64)EStateTreePropertyAccessType::Offset },
		{ "EStateTreePropertyAccessType::Object", (int64)EStateTreePropertyAccessType::Object },
		{ "EStateTreePropertyAccessType::WeakObject", (int64)EStateTreePropertyAccessType::WeakObject },
		{ "EStateTreePropertyAccessType::SoftObject", (int64)EStateTreePropertyAccessType::SoftObject },
		{ "EStateTreePropertyAccessType::ObjectInstance", (int64)EStateTreePropertyAccessType::ObjectInstance },
		{ "EStateTreePropertyAccessType::StructInstance", (int64)EStateTreePropertyAccessType::StructInstance },
		{ "EStateTreePropertyAccessType::IndexArray", (int64)EStateTreePropertyAccessType::IndexArray },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of access a property path describes.\n */" },
		{ "IndexArray.Comment", "// Access node needs to dereference an instanced struct of specific type at its current address\n" },
		{ "IndexArray.Name", "EStateTreePropertyAccessType::IndexArray" },
		{ "IndexArray.ToolTip", "Access node needs to dereference an instanced struct of specific type at its current address" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "Object.Comment", "// Access node is a simple basePtr + offset\n" },
		{ "Object.Name", "EStateTreePropertyAccessType::Object" },
		{ "Object.ToolTip", "Access node is a simple basePtr + offset" },
		{ "ObjectInstance.Comment", "// Access is a soft object\n" },
		{ "ObjectInstance.Name", "EStateTreePropertyAccessType::ObjectInstance" },
		{ "ObjectInstance.ToolTip", "Access is a soft object" },
		{ "Offset.Name", "EStateTreePropertyAccessType::Offset" },
		{ "SoftObject.Comment", "// Access is a weak object\n" },
		{ "SoftObject.Name", "EStateTreePropertyAccessType::SoftObject" },
		{ "SoftObject.ToolTip", "Access is a weak object" },
		{ "StructInstance.Comment", "// Access node needs to dereference an object of specific type at its current address\n" },
		{ "StructInstance.Name", "EStateTreePropertyAccessType::StructInstance" },
		{ "StructInstance.ToolTip", "Access node needs to dereference an object of specific type at its current address" },
		{ "ToolTip", "The type of access a property path describes." },
		{ "WeakObject.Comment", "// Access node needs to dereference an object at its current address\n" },
		{ "WeakObject.Name", "EStateTreePropertyAccessType::WeakObject" },
		{ "WeakObject.ToolTip", "Access node needs to dereference an object at its current address" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreePropertyAccessType",
		"EStateTreePropertyAccessType",
		Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyAccessType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreePropertyCopyType;
	static UEnum* EStateTreePropertyCopyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreePropertyCopyType"));
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyCopyType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyCopyType>()
	{
		return EStateTreePropertyCopyType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators[] = {
		{ "EStateTreePropertyCopyType::None", (int64)EStateTreePropertyCopyType::None },
		{ "EStateTreePropertyCopyType::CopyPlain", (int64)EStateTreePropertyCopyType::CopyPlain },
		{ "EStateTreePropertyCopyType::CopyComplex", (int64)EStateTreePropertyCopyType::CopyComplex },
		{ "EStateTreePropertyCopyType::CopyBool", (int64)EStateTreePropertyCopyType::CopyBool },
		{ "EStateTreePropertyCopyType::CopyStruct", (int64)EStateTreePropertyCopyType::CopyStruct },
		{ "EStateTreePropertyCopyType::CopyObject", (int64)EStateTreePropertyCopyType::CopyObject },
		{ "EStateTreePropertyCopyType::CopyName", (int64)EStateTreePropertyCopyType::CopyName },
		{ "EStateTreePropertyCopyType::CopyFixedArray", (int64)EStateTreePropertyCopyType::CopyFixedArray },
		{ "EStateTreePropertyCopyType::StructReference", (int64)EStateTreePropertyCopyType::StructReference },
		{ "EStateTreePropertyCopyType::PromoteBoolToByte", (int64)EStateTreePropertyCopyType::PromoteBoolToByte },
		{ "EStateTreePropertyCopyType::PromoteBoolToInt32", (int64)EStateTreePropertyCopyType::PromoteBoolToInt32 },
		{ "EStateTreePropertyCopyType::PromoteBoolToUInt32", (int64)EStateTreePropertyCopyType::PromoteBoolToUInt32 },
		{ "EStateTreePropertyCopyType::PromoteBoolToInt64", (int64)EStateTreePropertyCopyType::PromoteBoolToInt64 },
		{ "EStateTreePropertyCopyType::PromoteBoolToFloat", (int64)EStateTreePropertyCopyType::PromoteBoolToFloat },
		{ "EStateTreePropertyCopyType::PromoteBoolToDouble", (int64)EStateTreePropertyCopyType::PromoteBoolToDouble },
		{ "EStateTreePropertyCopyType::PromoteByteToInt32", (int64)EStateTreePropertyCopyType::PromoteByteToInt32 },
		{ "EStateTreePropertyCopyType::PromoteByteToUInt32", (int64)EStateTreePropertyCopyType::PromoteByteToUInt32 },
		{ "EStateTreePropertyCopyType::PromoteByteToInt64", (int64)EStateTreePropertyCopyType::PromoteByteToInt64 },
		{ "EStateTreePropertyCopyType::PromoteByteToFloat", (int64)EStateTreePropertyCopyType::PromoteByteToFloat },
		{ "EStateTreePropertyCopyType::PromoteByteToDouble", (int64)EStateTreePropertyCopyType::PromoteByteToDouble },
		{ "EStateTreePropertyCopyType::PromoteInt32ToInt64", (int64)EStateTreePropertyCopyType::PromoteInt32ToInt64 },
		{ "EStateTreePropertyCopyType::PromoteInt32ToFloat", (int64)EStateTreePropertyCopyType::PromoteInt32ToFloat },
		{ "EStateTreePropertyCopyType::PromoteInt32ToDouble", (int64)EStateTreePropertyCopyType::PromoteInt32ToDouble },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToInt64", (int64)EStateTreePropertyCopyType::PromoteUInt32ToInt64 },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToFloat", (int64)EStateTreePropertyCopyType::PromoteUInt32ToFloat },
		{ "EStateTreePropertyCopyType::PromoteUInt32ToDouble", (int64)EStateTreePropertyCopyType::PromoteUInt32ToDouble },
		{ "EStateTreePropertyCopyType::PromoteFloatToInt32", (int64)EStateTreePropertyCopyType::PromoteFloatToInt32 },
		{ "EStateTreePropertyCopyType::PromoteFloatToInt64", (int64)EStateTreePropertyCopyType::PromoteFloatToInt64 },
		{ "EStateTreePropertyCopyType::PromoteFloatToDouble", (int64)EStateTreePropertyCopyType::PromoteFloatToDouble },
		{ "EStateTreePropertyCopyType::DemoteDoubleToInt32", (int64)EStateTreePropertyCopyType::DemoteDoubleToInt32 },
		{ "EStateTreePropertyCopyType::DemoteDoubleToInt64", (int64)EStateTreePropertyCopyType::DemoteDoubleToInt64 },
		{ "EStateTreePropertyCopyType::DemoteDoubleToFloat", (int64)EStateTreePropertyCopyType::DemoteDoubleToFloat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes how the copy should be performed.\n */" },
		{ "CopyBool.Comment", "// For more complex data types, we need to call the properties copy function\n" },
		{ "CopyBool.Name", "EStateTreePropertyCopyType::CopyBool" },
		{ "CopyBool.ToolTip", "For more complex data types, we need to call the properties copy function" },
		{ "CopyComplex.Comment", "// For plain old data types, we do a simple memcpy.\n" },
		{ "CopyComplex.Name", "EStateTreePropertyCopyType::CopyComplex" },
		{ "CopyComplex.ToolTip", "For plain old data types, we do a simple memcpy." },
		{ "CopyFixedArray.Comment", "// FName needs special case because its size changes between editor/compiler and runtime.\n" },
		{ "CopyFixedArray.Name", "EStateTreePropertyCopyType::CopyFixedArray" },
		{ "CopyFixedArray.ToolTip", "FName needs special case because its size changes between editor/compiler and runtime." },
		{ "CopyName.Comment", "// Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc.\n" },
		{ "CopyName.Name", "EStateTreePropertyCopyType::CopyName" },
		{ "CopyName.ToolTip", "Read and write properties using object property helpers, as source/dest could be regular/weak/soft etc." },
		{ "CopyObject.Comment", "// Use struct copy operation, as this needs to correctly handle CPP struct ops\n" },
		{ "CopyObject.Name", "EStateTreePropertyCopyType::CopyObject" },
		{ "CopyObject.ToolTip", "Use struct copy operation, as this needs to correctly handle CPP struct ops" },
		{ "CopyPlain.Comment", "// No copying\n" },
		{ "CopyPlain.Name", "EStateTreePropertyCopyType::CopyPlain" },
		{ "CopyPlain.ToolTip", "No copying" },
		{ "CopyStruct.Comment", "// Read and write properties using bool property helpers, as source/dest could be bitfield or boolean\n" },
		{ "CopyStruct.Name", "EStateTreePropertyCopyType::CopyStruct" },
		{ "CopyStruct.ToolTip", "Read and write properties using bool property helpers, as source/dest could be bitfield or boolean" },
		{ "DemoteDoubleToFloat.Name", "EStateTreePropertyCopyType::DemoteDoubleToFloat" },
		{ "DemoteDoubleToInt32.Comment", "/* Double promotions */" },
		{ "DemoteDoubleToInt32.Name", "EStateTreePropertyCopyType::DemoteDoubleToInt32" },
		{ "DemoteDoubleToInt32.ToolTip", "Double promotions" },
		{ "DemoteDoubleToInt64.Name", "EStateTreePropertyCopyType::DemoteDoubleToInt64" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "None.Name", "EStateTreePropertyCopyType::None" },
		{ "PromoteBoolToByte.Comment", "/* Bool promotions */" },
		{ "PromoteBoolToByte.Name", "EStateTreePropertyCopyType::PromoteBoolToByte" },
		{ "PromoteBoolToByte.ToolTip", "Bool promotions" },
		{ "PromoteBoolToDouble.Name", "EStateTreePropertyCopyType::PromoteBoolToDouble" },
		{ "PromoteBoolToFloat.Name", "EStateTreePropertyCopyType::PromoteBoolToFloat" },
		{ "PromoteBoolToInt32.Name", "EStateTreePropertyCopyType::PromoteBoolToInt32" },
		{ "PromoteBoolToInt64.Name", "EStateTreePropertyCopyType::PromoteBoolToInt64" },
		{ "PromoteBoolToUInt32.Name", "EStateTreePropertyCopyType::PromoteBoolToUInt32" },
		{ "PromoteByteToDouble.Name", "EStateTreePropertyCopyType::PromoteByteToDouble" },
		{ "PromoteByteToFloat.Name", "EStateTreePropertyCopyType::PromoteByteToFloat" },
		{ "PromoteByteToInt32.Comment", "/* Byte promotions */" },
		{ "PromoteByteToInt32.Name", "EStateTreePropertyCopyType::PromoteByteToInt32" },
		{ "PromoteByteToInt32.ToolTip", "Byte promotions" },
		{ "PromoteByteToInt64.Name", "EStateTreePropertyCopyType::PromoteByteToInt64" },
		{ "PromoteByteToUInt32.Name", "EStateTreePropertyCopyType::PromoteByteToUInt32" },
		{ "PromoteFloatToDouble.Name", "EStateTreePropertyCopyType::PromoteFloatToDouble" },
		{ "PromoteFloatToInt32.Comment", "/* Float promotions */" },
		{ "PromoteFloatToInt32.Name", "EStateTreePropertyCopyType::PromoteFloatToInt32" },
		{ "PromoteFloatToInt32.ToolTip", "Float promotions" },
		{ "PromoteFloatToInt64.Name", "EStateTreePropertyCopyType::PromoteFloatToInt64" },
		{ "PromoteInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteInt32ToDouble.Name", "EStateTreePropertyCopyType::PromoteInt32ToDouble" },
		{ "PromoteInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteInt32ToFloat.Name", "EStateTreePropertyCopyType::PromoteInt32ToFloat" },
		{ "PromoteInt32ToInt64.Comment", "/* Int32 promotions */" },
		{ "PromoteInt32ToInt64.Name", "EStateTreePropertyCopyType::PromoteInt32ToInt64" },
		{ "PromoteInt32ToInt64.ToolTip", "Int32 promotions" },
		{ "PromoteUInt32ToDouble.Comment", "// This is strictly sketchy because of potential data loss, but it is usually OK in the general case\n" },
		{ "PromoteUInt32ToDouble.Name", "EStateTreePropertyCopyType::PromoteUInt32ToDouble" },
		{ "PromoteUInt32ToDouble.ToolTip", "This is strictly sketchy because of potential data loss, but it is usually OK in the general case" },
		{ "PromoteUInt32ToFloat.Name", "EStateTreePropertyCopyType::PromoteUInt32ToFloat" },
		{ "PromoteUInt32ToInt64.Comment", "/* UInt32 promotions */" },
		{ "PromoteUInt32ToInt64.Name", "EStateTreePropertyCopyType::PromoteUInt32ToInt64" },
		{ "PromoteUInt32ToInt64.ToolTip", "UInt32 promotions" },
		{ "StructReference.Comment", "// Array needs special handling for fixed size TArrays\n" },
		{ "StructReference.Name", "EStateTreePropertyCopyType::StructReference" },
		{ "StructReference.ToolTip", "Array needs special handling for fixed size TArrays" },
		{ "ToolTip", "Describes how the copy should be performed." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreePropertyCopyType",
		"EStateTreePropertyCopyType",
		Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreePropertyCopyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc;
class UScriptStruct* FStateTreeBindableStructDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBindableStructDesc"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBindableStructDesc>()
{
	return FStateTreeBindableStructDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Descriptor for a struct or class that can be a binding source or target.\n * Each struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Descriptor for a struct or class that can be a binding source or target.\nEach struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBindableStructDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The type of the struct or class. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The type of the struct or class." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct_MetaData), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the container (cosmetic). */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Name of the container (cosmetic)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, DataSource), Z_Construct_UEnum_StateTreeModule_EStateTreeBindableStructSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_MetaData), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_MetaData) }; // 493173484
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier of the struct. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Unique identifier of the struct." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeBindableStructDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_DataSource,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeBindableStructDesc",
		Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers),
		sizeof(FStateTreeBindableStructDesc),
		alignof(FStateTreeBindableStructDesc),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment;
class UScriptStruct* FStateTreePropertyPathSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyPathSegment"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyPathSegment>()
{
	return FStateTreePropertyPathSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct describing a path segment in FStateTreePropertyPath. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Struct describing a path segment in FStateTreePropertyPath." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyPathSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Name of the property" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathSegment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Array index if the property is dynamic or static array. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array index if the property is dynamic or static array." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathSegment, ArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct_MetaData[] = {
		{ "Comment", "/** Type of the instanced struct or object reference by the property at the segment. This allows the path to be resolved when it points to a specific instance. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the instanced struct or object reference by the property at the segment. This allows the path to be resolved when it points to a specific instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct = { "InstanceStruct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathSegment, InstanceStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewProp_InstanceStruct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyPathSegment",
		Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers),
		sizeof(FStateTreePropertyPathSegment),
		alignof(FStateTreePropertyPathSegment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyPath;
class UScriptStruct* FStateTreePropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPath, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPath.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyPath>()
{
	return FStateTreePropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a property path used for property binding in StateTree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Representation of a property path used for property binding in StateTree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyPath>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID_MetaData[] = {
		{ "Comment", "/** ID of the struct this property path is relative to. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "ID of the struct this property path is relative to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID = { "StructID", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPath, StructID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyPathSegment, METADATA_PARAMS(0, nullptr) }; // 330646232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_MetaData[] = {
		{ "Comment", "/** Path segments pointing to a specific property on the path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Path segments pointing to a specific property on the path." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPath, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_MetaData) }; // 330646232
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_StructID,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewProp_Segments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyPath",
		Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers),
		sizeof(FStateTreePropertyPath),
		alignof(FStateTreePropertyPath),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath;
class UScriptStruct* FStateTreeEditorPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEditorPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEditorPropertyPath>()
{
	return FStateTreeEditorPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEditorPropertyPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID_MetaData[] = {
		{ "Comment", "/** Handle of the struct this property path is relative to. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Handle of the struct this property path is relative to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID = { "StructID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEditorPropertyPath, StructID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID_MetaData), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** Property path segments */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property path segments" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeEditorPropertyPath, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_MetaData), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_StructID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeEditorPropertyPath",
		Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers),
		sizeof(FStateTreeEditorPropertyPath),
		alignof(FStateTreeEditorPropertyPath),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding;
class UScriptStruct* FStateTreePropertyPathBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyPathBinding"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyPathBinding>()
{
	return FStateTreePropertyPathBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePropertyPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPropertyPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledSourceStructIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledSourceStructIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPath;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Representation of a property binding in StateTree\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Representation of a property binding in StateTree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyPathBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath_MetaData[] = {
		{ "Comment", "/** Source property path of the binding */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property path of the binding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath = { "SourcePropertyPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, SourcePropertyPath), Z_Construct_UScriptStruct_FStateTreePropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath_MetaData) }; // 2150826004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath_MetaData[] = {
		{ "Comment", "/** Target property path of the binding */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property path of the binding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath = { "TargetPropertyPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, TargetPropertyPath), Z_Construct_UScriptStruct_FStateTreePropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath_MetaData) }; // 2150826004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_CompiledSourceStructIndex_MetaData[] = {
		{ "Comment", "/** ID of the struct this property path is relative to. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "ID of the struct this property path is relative to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_CompiledSourceStructIndex = { "CompiledSourceStructIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, CompiledSourceStructIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_CompiledSourceStructIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_CompiledSourceStructIndex_MetaData) }; // 1063223217
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, SourcePath_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath_MetaData) }; // 3047515383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyPathBinding, TargetPath_DEPRECATED), Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath_MetaData) }; // 3047515383
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_CompiledSourceStructIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewProp_TargetPath,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyPathBinding",
		Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers),
		sizeof(FStateTreePropertyPathBinding),
		alignof(FStateTreePropertyPathBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyPathBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertySegment;
class UScriptStruct* FStateTreePropertySegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertySegment, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertySegment"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertySegment.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertySegment>()
{
	return FStateTreePropertySegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated. Describes a segment of a property path. Used for storage only.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Deprecated. Describes a segment of a property path. Used for storage only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertySegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Property name. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Property name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Index in the array the property points at. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index in the array the property points at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, ArrayIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex_MetaData) }; // 1063223217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex_MetaData[] = {
		{ "Comment", "/** Index to next segment. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to next segment." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, NextIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex_MetaData) }; // 1063223217
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of access/indirection. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of access/indirection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertySegment, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_MetaData) }; // 2807235647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_NextIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertySegment",
		Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers),
		sizeof(FStateTreePropertySegment),
		alignof(FStateTreePropertySegment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertySegment()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertySegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBinding;
class UScriptStruct* FStateTreePropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBinding, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBinding>()
{
	return FStateTreePropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CopyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CopyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated. Describes property binding, the property from source path is copied into the property at the target path.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Deprecated. Describes property binding, the property from source path is copied into the property at the target path." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/** Source property path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, SourcePath), Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath_MetaData) }; // 2907176733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath_MetaData[] = {
		{ "Comment", "/** Target property path. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, TargetPath), Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath_MetaData) }; // 2907176733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex_MetaData[] = {
		{ "Comment", "/** Index to the source struct the source path refers to, sources are stored in FStateTreePropertyBindings. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to the source struct the source path refers to, sources are stored in FStateTreePropertyBindings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex = { "SourceStructIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, SourceStructIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex_MetaData) }; // 1063223217
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_MetaData[] = {
		{ "Comment", "/** The type of copy to use between the properties. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "The type of copy to use between the properties." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType = { "CopyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBinding, CopyType), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_MetaData) }; // 3361047817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_TargetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_SourceStructIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewProp_CopyType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyBinding",
		Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers),
		sizeof(FStateTreePropertyBinding),
		alignof(FStateTreePropertyBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection;
class UScriptStruct* FStateTreePropertyIndirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyIndirection, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyIndirection"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyIndirection>()
{
	return FStateTreePropertyIndirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used internally.\n * Property indirection is a resolved property path segment, used for accessing properties in structs.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Used internally.\nProperty indirection is a resolved property path segment, used for accessing properties in structs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyIndirection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Index in the array the property points at. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index in the array the property points at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, ArrayIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex_MetaData) }; // 1063223217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Cached offset of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached offset of the property" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex_MetaData[] = {
		{ "Comment", "/** Cached offset of the property */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached offset of the property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, NextIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex_MetaData) }; // 1063223217
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of access/indirection. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of access/indirection." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyAccessType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_MetaData) }; // 2807235647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct_MetaData[] = {
		{ "Comment", "/** Type of the struct or object instance in case the segment is pointing into an instanced data. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the struct or object instance in case the segment is pointing into an instanced data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct = { "InstanceStruct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyIndirection, InstanceStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_NextIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewProp_InstanceStruct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyIndirection",
		Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers),
		sizeof(FStateTreePropertyIndirection),
		alignof(FStateTreePropertyIndirection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyIndirection()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyCopy;
class UScriptStruct* FStateTreePropertyCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyCopy, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyCopy"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyCopy>()
{
	return FStateTreePropertyCopy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceIndirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetIndirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CopySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used internally.\n * Describes property copy, the property from source is copied into the property at the target.\n * Copy target struct is described in the property copy batch.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Used internally.\nDescribes property copy, the property from source is copied into the property at the target.\nCopy target struct is described in the property copy batch." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyCopy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection_MetaData[] = {
		{ "Comment", "/** Source property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Source property access." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection = { "SourceIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, SourceIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection_MetaData) }; // 2051143143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection_MetaData[] = {
		{ "Comment", "/** Target property access. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Target property access." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection = { "TargetIndirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, TargetIndirection), Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection_MetaData) }; // 2051143143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize_MetaData[] = {
		{ "Comment", "/** Cached property element size * dim. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Cached property element size * dim." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize = { "CopySize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, CopySize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex_MetaData[] = {
		{ "Comment", "/** Index to the struct the source path refers to, sources are stored in FStateTreePropertyBindings. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to the struct the source path refers to, sources are stored in FStateTreePropertyBindings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex = { "SourceStructIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, SourceStructIndex), Z_Construct_UScriptStruct_FStateTreeIndex16, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex_MetaData) }; // 1063223217
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the copy */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Type of the copy" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopy, Type), Z_Construct_UEnum_StateTreeModule_EStateTreePropertyCopyType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_MetaData) }; // 3361047817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceIndirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_TargetIndirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_CopySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_SourceStructIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyCopy",
		Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers),
		sizeof(FStateTreePropertyCopy),
		alignof(FStateTreePropertyCopy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopy()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyCopy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch;
class UScriptStruct* FStateTreePropertyCopyBatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyCopyBatch"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyCopyBatch>()
{
	return FStateTreePropertyCopyBatch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsBegin_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_BindingsBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsEnd_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_BindingsEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a batch of property copies from many sources to one target struct.\n * Note: The batch is used to reference both bindings and copies (a binding turns into copy when resolved).\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Describes a batch of property copies from many sources to one target struct.\nNote: The batch is used to reference both bindings and copies (a binding turns into copy when resolved)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyCopyBatch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct_MetaData[] = {
		{ "Comment", "/** Expected target struct */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Expected target struct" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct = { "TargetStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, TargetStruct), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct_MetaData) }; // 1359209355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin_MetaData[] = {
		{ "Comment", "/** Index to first binding/copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to first binding/copy." },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin = { "BindingsBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, BindingsBegin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd_MetaData[] = {
		{ "Comment", "/** Index to one past the last binding/copy. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Index to one past the last binding/copy." },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd = { "BindingsEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyCopyBatch, BindingsEnd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_TargetStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewProp_BindingsEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyCopyBatch",
		Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers),
		sizeof(FStateTreePropertyCopyBatch),
		alignof(FStateTreePropertyCopyBatch),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBindings;
class UScriptStruct* FStateTreePropertyBindings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBindings, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreePropertyBindings"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBindings>()
{
	return FStateTreePropertyBindings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceStructs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CopyBatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyBatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CopyBatches;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyPathBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPathBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyPathBindings;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertySegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertySegments;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyCopies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyCopies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyCopies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyIndirections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndirections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIndirections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Runtime storage and execution of property bindings.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Runtime storage and execution of property bindings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBindings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_Inner = { "SourceStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(0, nullptr) }; // 1359209355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_MetaData[] = {
		{ "Comment", "/** Array of expected source structs. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of expected source structs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs = { "SourceStructs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, SourceStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_MetaData) }; // 1359209355
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_Inner = { "CopyBatches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch, METADATA_PARAMS(0, nullptr) }; // 1675061495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_MetaData[] = {
		{ "Comment", "/** Array of copy batches. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of copy batches." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches = { "CopyBatches", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, CopyBatches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_MetaData) }; // 1675061495
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_Inner = { "PropertyPathBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding, METADATA_PARAMS(0, nullptr) }; // 3907025818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_MetaData[] = {
		{ "Comment", "/** Array of property bindings, resolved into arrays of copies before use. */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property bindings, resolved into arrays of copies before use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings = { "PropertyPathBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyPathBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_MetaData) }; // 3907025818
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_Inner = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyBinding, METADATA_PARAMS(0, nullptr) }; // 1703009351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_MetaData) }; // 1703009351
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_Inner = { "PropertySegments", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertySegment, METADATA_PARAMS(0, nullptr) }; // 2907176733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments = { "PropertySegments", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertySegments_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_MetaData) }; // 2907176733
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_Inner = { "PropertyCopies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyCopy, METADATA_PARAMS(0, nullptr) }; // 1071905033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_MetaData[] = {
		{ "Comment", "/** Array of property copies */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property copies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies = { "PropertyCopies", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyCopies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_MetaData) }; // 1071905033
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_Inner = { "PropertyIndirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreePropertyIndirection, METADATA_PARAMS(0, nullptr) }; // 2051143143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_MetaData[] = {
		{ "Comment", "/** Array of property indirections, indexed by accesses*/" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindings.h" },
		{ "ToolTip", "Array of property indirections, indexed by accesses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections = { "PropertyIndirections", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreePropertyBindings, PropertyIndirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_MetaData), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_MetaData) }; // 2051143143
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_SourceStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_CopyBatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyPathBindings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertySegments,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyCopies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewProp_PropertyIndirections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyBindings",
		Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers),
		sizeof(FStateTreePropertyBindings),
		alignof(FStateTreePropertyBindings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindings()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyBindings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo[] = {
		{ EStateTreeBindableStructSource_StaticEnum, TEXT("EStateTreeBindableStructSource"), &Z_Registration_Info_UEnum_EStateTreeBindableStructSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 493173484U) },
		{ EStateTreePropertyAccessType_StaticEnum, TEXT("EStateTreePropertyAccessType"), &Z_Registration_Info_UEnum_EStateTreePropertyAccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2807235647U) },
		{ EStateTreePropertyCopyType_StaticEnum, TEXT("EStateTreePropertyCopyType"), &Z_Registration_Info_UEnum_EStateTreePropertyCopyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3361047817U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeBindableStructDesc::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc_Statics::NewStructOps, TEXT("StateTreeBindableStructDesc"), &Z_Registration_Info_UScriptStruct_StateTreeBindableStructDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBindableStructDesc), 1359209355U) },
		{ FStateTreePropertyPathSegment::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyPathSegment_Statics::NewStructOps, TEXT("StateTreePropertyPathSegment"), &Z_Registration_Info_UScriptStruct_StateTreePropertyPathSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyPathSegment), 330646232U) },
		{ FStateTreePropertyPath::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyPath_Statics::NewStructOps, TEXT("StateTreePropertyPath"), &Z_Registration_Info_UScriptStruct_StateTreePropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyPath), 2150826004U) },
		{ FStateTreeEditorPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath_Statics::NewStructOps, TEXT("StateTreeEditorPropertyPath"), &Z_Registration_Info_UScriptStruct_StateTreeEditorPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEditorPropertyPath), 3047515383U) },
		{ FStateTreePropertyPathBinding::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyPathBinding_Statics::NewStructOps, TEXT("StateTreePropertyPathBinding"), &Z_Registration_Info_UScriptStruct_StateTreePropertyPathBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyPathBinding), 3907025818U) },
		{ FStateTreePropertySegment::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertySegment_Statics::NewStructOps, TEXT("StateTreePropertySegment"), &Z_Registration_Info_UScriptStruct_StateTreePropertySegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertySegment), 2907176733U) },
		{ FStateTreePropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBinding_Statics::NewStructOps, TEXT("StateTreePropertyBinding"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBinding), 1703009351U) },
		{ FStateTreePropertyIndirection::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyIndirection_Statics::NewStructOps, TEXT("StateTreePropertyIndirection"), &Z_Registration_Info_UScriptStruct_StateTreePropertyIndirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyIndirection), 2051143143U) },
		{ FStateTreePropertyCopy::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyCopy_Statics::NewStructOps, TEXT("StateTreePropertyCopy"), &Z_Registration_Info_UScriptStruct_StateTreePropertyCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyCopy), 1071905033U) },
		{ FStateTreePropertyCopyBatch::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyCopyBatch_Statics::NewStructOps, TEXT("StateTreePropertyCopyBatch"), &Z_Registration_Info_UScriptStruct_StateTreePropertyCopyBatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyCopyBatch), 1675061495U) },
		{ FStateTreePropertyBindings::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBindings_Statics::NewStructOps, TEXT("StateTreePropertyBindings"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBindings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBindings), 363619849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_2940005800(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreePropertyBindings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

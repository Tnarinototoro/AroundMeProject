// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_RemapCurvesBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "CurveExpressionsDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RemapCurvesBase() {}
// Cross Module References
	CURVEEXPRESSION_API UClass* Z_Construct_UClass_UCurveExpressionsDataAsset_NoRegister();
	CURVEEXPRESSION_API UEnum* Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FCurveExpressionList();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_CurveExpression();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemapCurvesExpressionSource;
	static UEnum* ERemapCurvesExpressionSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemapCurvesExpressionSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemapCurvesExpressionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource, (UObject*)Z_Construct_UPackage__Script_CurveExpression(), TEXT("ERemapCurvesExpressionSource"));
		}
		return Z_Registration_Info_UEnum_ERemapCurvesExpressionSource.OuterSingleton;
	}
	template<> CURVEEXPRESSION_API UEnum* StaticEnum<ERemapCurvesExpressionSource>()
	{
		return ERemapCurvesExpressionSource_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::Enumerators[] = {
		{ "ERemapCurvesExpressionSource::ExpressionList", (int64)ERemapCurvesExpressionSource::ExpressionList },
		{ "ERemapCurvesExpressionSource::DataAsset", (int64)ERemapCurvesExpressionSource::DataAsset },
		{ "ERemapCurvesExpressionSource::ExpressionMap", (int64)ERemapCurvesExpressionSource::ExpressionMap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DataAsset.Name", "ERemapCurvesExpressionSource::DataAsset" },
		{ "ExpressionList.Name", "ERemapCurvesExpressionSource::ExpressionList" },
		{ "ExpressionMap.Name", "ERemapCurvesExpressionSource::ExpressionMap" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveExpression,
		nullptr,
		"ERemapCurvesExpressionSource",
		"ERemapCurvesExpressionSource",
		Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource()
	{
		if (!Z_Registration_Info_UEnum_ERemapCurvesExpressionSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemapCurvesExpressionSource.InnerSingleton, Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemapCurvesExpressionSource.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_RemapCurvesBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RemapCurvesBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase;
class UScriptStruct* FAnimNode_RemapCurvesBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase, (UObject*)Z_Construct_UPackage__Script_CurveExpression(), TEXT("AnimNode_RemapCurvesBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase.OuterSingleton;
}
template<> CURVEEXPRESSION_API UScriptStruct* StaticStruct<FAnimNode_RemapCurvesBase>()
{
	return FAnimNode_RemapCurvesBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpressionSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExpressionSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveExpressionsDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveExpressionsDataAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveExpressions_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveExpressions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurveExpressions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpressionsImmutable_MetaData[];
#endif
		static void NewProp_bExpressionsImmutable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpressionsImmutable;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedConstantNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedConstantNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedConstantNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RemapCurvesBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RemapCurvesBase, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_SourcePose_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_SourcePose_MetaData) }; // 1465313103
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource_MetaData[] = {
		{ "Category", "Expressions" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource = { "ExpressionSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RemapCurvesBase, ExpressionSource), Z_Construct_UEnum_CurveExpression_ERemapCurvesExpressionSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource_MetaData) }; // 2014796967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionList_MetaData[] = {
		{ "Category", "Expressions" },
		{ "EditCondition", "ExpressionSource==ERemapCurvesExpressionSource::ExpressionList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionList = { "ExpressionList", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RemapCurvesBase, ExpressionList), Z_Construct_UScriptStruct_FCurveExpressionList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionList_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionList_MetaData) }; // 1558340293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressionsDataAsset_MetaData[] = {
		{ "Category", "Expressions" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressionsDataAsset = { "CurveExpressionsDataAsset", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RemapCurvesBase, CurveExpressionsDataAsset), Z_Construct_UClass_UCurveExpressionsDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressionsDataAsset_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressionsDataAsset_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_ValueProp = { "CurveExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_Key_KeyProp = { "CurveExpressions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_MetaData[] = {
		{ "Category", "Expressions" },
		{ "DisplayName", "Expression Map" },
		{ "EditCondition", "ExpressionSource==ERemapCurvesExpressionSource::ExpressionMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions = { "CurveExpressions", nullptr, (EPropertyFlags)0x0010000000000044, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RemapCurvesBase, CurveExpressions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable_MetaData[] = {
		{ "Category", "Expressions" },
		{ "Comment", "/** The expression map given is immutable and will not change during runtime. Improves performance. */" },
		{ "DisplayName", "Expression Map Does Not Change at Runtime" },
		{ "EditCondition", "ExpressionSource==ERemapCurvesExpressionSource::ExpressionMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The expression map given is immutable and will not change during runtime. Improves performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable_SetBit(void* Obj)
	{
		((FAnimNode_RemapCurvesBase*)Obj)->bExpressionsImmutable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable = { "bExpressionsImmutable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RemapCurvesBase), &Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames_Inner = { "CachedConstantNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames_MetaData[] = {
		{ "Comment", "// Serialized data.\n" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurvesBase.h" },
		{ "ToolTip", "Serialized data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames = { "CachedConstantNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RemapCurvesBase, CachedConstantNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames_MetaData), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_ExpressionList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressionsDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CurveExpressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_bExpressionsImmutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewProp_CachedConstantNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpression,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RemapCurvesBase",
		Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::PropPointers),
		sizeof(FAnimNode_RemapCurvesBase),
		alignof(FAnimNode_RemapCurvesBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics::EnumInfo[] = {
		{ ERemapCurvesExpressionSource_StaticEnum, TEXT("ERemapCurvesExpressionSource"), &Z_Registration_Info_UEnum_ERemapCurvesExpressionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2014796967U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RemapCurvesBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase_Statics::NewStructOps, TEXT("AnimNode_RemapCurvesBase"), &Z_Registration_Info_UScriptStruct_AnimNode_RemapCurvesBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RemapCurvesBase), 1055684031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_2789526918(TEXT("/Script/CurveExpression"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurvesBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

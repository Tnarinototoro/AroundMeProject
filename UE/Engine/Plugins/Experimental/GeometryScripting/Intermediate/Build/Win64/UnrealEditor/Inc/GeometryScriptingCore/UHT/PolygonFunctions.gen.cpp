// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/PolygonFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
#include "GeometryScript/PolyPathFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolygonFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolyPath();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType;
	static UEnum* EGeometryScriptPolyOffsetJoinType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPolyOffsetJoinType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPolyOffsetJoinType>()
	{
		return EGeometryScriptPolyOffsetJoinType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::Enumerators[] = {
		{ "EGeometryScriptPolyOffsetJoinType::Square", (int64)EGeometryScriptPolyOffsetJoinType::Square },
		{ "EGeometryScriptPolyOffsetJoinType::Round", (int64)EGeometryScriptPolyOffsetJoinType::Round },
		{ "EGeometryScriptPolyOffsetJoinType::Miter", (int64)EGeometryScriptPolyOffsetJoinType::Miter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Join types to define the shape of corners between polygon and polypath edges\n" },
		{ "Miter.Comment", "/* Squaring of convex edge joins with acute angles (\"spikes\"). Use in combination with MiterLimit. */" },
		{ "Miter.Name", "EGeometryScriptPolyOffsetJoinType::Miter" },
		{ "Miter.ToolTip", "Squaring of convex edge joins with acute angles (\"spikes\"). Use in combination with MiterLimit." },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "Round.Comment", "/* Arcs on all convex edge joins. */" },
		{ "Round.Name", "EGeometryScriptPolyOffsetJoinType::Round" },
		{ "Round.ToolTip", "Arcs on all convex edge joins." },
		{ "Square.Comment", "/* Uniform squaring on all convex edge joins. */" },
		{ "Square.Name", "EGeometryScriptPolyOffsetJoinType::Square" },
		{ "Square.ToolTip", "Uniform squaring on all convex edge joins." },
		{ "ToolTip", "Join types to define the shape of corners between polygon and polypath edges" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPolyOffsetJoinType",
		"EGeometryScriptPolyOffsetJoinType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType;
	static UEnum* EGeometryScriptPathOffsetEndType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptPathOffsetEndType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPathOffsetEndType>()
	{
		return EGeometryScriptPathOffsetEndType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::Enumerators[] = {
		{ "EGeometryScriptPathOffsetEndType::Butt", (int64)EGeometryScriptPathOffsetEndType::Butt },
		{ "EGeometryScriptPathOffsetEndType::Square", (int64)EGeometryScriptPathOffsetEndType::Square },
		{ "EGeometryScriptPathOffsetEndType::Round", (int64)EGeometryScriptPathOffsetEndType::Round },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Butt.Comment", "/* Offsets both sides of a path, with square blunt ends */" },
		{ "Butt.Name", "EGeometryScriptPathOffsetEndType::Butt" },
		{ "Butt.ToolTip", "Offsets both sides of a path, with square blunt ends" },
		{ "Comment", "// End types to apply when offsetting open paths\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "Round.Comment", "/* Offsets both sides of a path, with round extended ends */" },
		{ "Round.Name", "EGeometryScriptPathOffsetEndType::Round" },
		{ "Round.ToolTip", "Offsets both sides of a path, with round extended ends" },
		{ "Square.Comment", "/* Offsets both sides of a path, with square extended ends */" },
		{ "Square.Name", "EGeometryScriptPathOffsetEndType::Square" },
		{ "Square.ToolTip", "Offsets both sides of a path, with square extended ends" },
		{ "ToolTip", "End types to apply when offsetting open paths" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptPathOffsetEndType",
		"EGeometryScriptPathOffsetEndType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions;
class UScriptStruct* FGeometryScriptPolygonOffsetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptPolygonOffsetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptPolygonOffsetOptions>()
{
	return FGeometryScriptPolygonOffsetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_JoinType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_JoinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiterLimit_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MiterLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOffsetBothSides_MetaData[];
#endif
		static void NewProp_bOffsetBothSides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffsetBothSides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepsPerRadianScale_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepsPerRadianScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumStepsPerRadian_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumStepsPerRadian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptPolygonOffsetOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// How to join / extend corners between two edges\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "How to join / extend corners between two edges" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType = { "JoinType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptPolygonOffsetOptions, JoinType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType_MetaData), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType_MetaData) }; // 1594480818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MiterLimit_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// if JoinType is Miter, limits how far the miter can extend\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "if JoinType is Miter, limits how far the miter can extend" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MiterLimit = { "MiterLimit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptPolygonOffsetOptions, MiterLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MiterLimit_MetaData), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MiterLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether to apply the offset to both sides of the polygon, i.e. adding an inner hole to any polygon. If false, the offset is only applied to one side.\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Whether to apply the offset to both sides of the polygon, i.e. adding an inner hole to any polygon. If false, the offset is only applied to one side." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides_SetBit(void* Obj)
	{
		((FGeometryScriptPolygonOffsetOptions*)Obj)->bOffsetBothSides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides = { "bOffsetBothSides", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryScriptPolygonOffsetOptions), &Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides_MetaData), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_StepsPerRadianScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scales the default number of vertices (per radian) used for round joins.\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Scales the default number of vertices (per radian) used for round joins." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_StepsPerRadianScale = { "StepsPerRadianScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptPolygonOffsetOptions, StepsPerRadianScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_StepsPerRadianScale_MetaData), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_StepsPerRadianScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MaximumStepsPerRadian_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Maximum vertices per radian for round joins. Only applied if > 0.\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Maximum vertices per radian for round joins. Only applied if > 0." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MaximumStepsPerRadian = { "MaximumStepsPerRadian", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptPolygonOffsetOptions, MaximumStepsPerRadian), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MaximumStepsPerRadian_MetaData), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MaximumStepsPerRadian_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_JoinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MiterLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_bOffsetBothSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_StepsPerRadianScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewProp_MaximumStepsPerRadian,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptPolygonOffsetOptions",
		Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::PropPointers),
		sizeof(FGeometryScriptPolygonOffsetOptions),
		alignof(FGeometryScriptPolygonOffsetOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions;
class UScriptStruct* FGeometryScriptOpenPathOffsetOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptOpenPathOffsetOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptOpenPathOffsetOptions>()
{
	return FGeometryScriptOpenPathOffsetOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_JoinType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_JoinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiterLimit_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MiterLimit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EndType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepsPerRadianScale_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepsPerRadianScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumStepsPerRadian_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumStepsPerRadian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptOpenPathOffsetOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// How to join / extend corners between two edges\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "How to join / extend corners between two edges" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType = { "JoinType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptOpenPathOffsetOptions, JoinType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPolyOffsetJoinType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType_MetaData), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType_MetaData) }; // 1594480818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MiterLimit_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// if JoinType is Miter, limits how far the miter can extend\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "if JoinType is Miter, limits how far the miter can extend" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MiterLimit = { "MiterLimit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptOpenPathOffsetOptions, MiterLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MiterLimit_MetaData), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MiterLimit_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// How the ends of a path should be closed off\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "How the ends of a path should be closed off" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptOpenPathOffsetOptions, EndType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptPathOffsetEndType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType_MetaData), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType_MetaData) }; // 2105267825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_StepsPerRadianScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scales the default number of vertices (per radian) used for round joins and ends.\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Scales the default number of vertices (per radian) used for round joins and ends." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_StepsPerRadianScale = { "StepsPerRadianScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptOpenPathOffsetOptions, StepsPerRadianScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_StepsPerRadianScale_MetaData), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_StepsPerRadianScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MaximumStepsPerRadian_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Maximum vertices per radian for round joins and ends. Only applied if > 0.\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Maximum vertices per radian for round joins and ends. Only applied if > 0." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MaximumStepsPerRadian = { "MaximumStepsPerRadian", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptOpenPathOffsetOptions, MaximumStepsPerRadian), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MaximumStepsPerRadian_MetaData), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MaximumStepsPerRadian_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_JoinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MiterLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_EndType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_StepsPerRadianScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewProp_MaximumStepsPerRadian,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptOpenPathOffsetOptions",
		Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::PropPointers),
		sizeof(FGeometryScriptOpenPathOffsetOptions),
		alignof(FGeometryScriptOpenPathOffsetOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execConv_ArrayOfVector2DToGeometryScriptSimplePolygon)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PathVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptSimplePolygon*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(Z_Param_Out_PathVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execConv_ArrayToGeometryScriptSimplePolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptSimplePolygon*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayToGeometryScriptSimplePolygon(Z_Param_Out_PathVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execConv_GeometryScriptSimplePolygonToArrayOfVector2D)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArrayOfVector2D(Z_Param_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execConv_GeometryScriptSimplePolygonToArray)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArray(Z_Param_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execConvertSplineToPolygon)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_STRUCT_REF(FGeometryScriptSimplePolygon,Z_Param_Out_Polygon);
		P_GET_STRUCT(FGeometryScriptSplineSamplingOptions,Z_Param_SamplingOptions);
		P_GET_ENUM(EGeometryScriptAxis,Z_Param_DropAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_SimplePolygonFunctions::ConvertSplineToPolygon(Z_Param_Spline,Z_Param_Out_Polygon,Z_Param_SamplingOptions,EGeometryScriptAxis(Z_Param_DropAxis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonBounds)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox2D*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonBounds(Z_Param_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonArea)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArea(Z_Param_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonArcLength)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArcLength(Z_Param_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonTangent)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bPolygonIsEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonTangent(Z_Param_Polygon,Z_Param_VertexIndex,Z_Param_Out_bPolygonIsEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execAddPolygonVertex)
	{
		P_GET_STRUCT_REF(FGeometryScriptSimplePolygon,Z_Param_Out_Polygon);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::AddPolygonVertex(Z_Param_Out_Polygon,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execSetPolygonVertex)
	{
		P_GET_STRUCT_REF(FGeometryScriptSimplePolygon,Z_Param_Out_Polygon);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_UBOOL_REF(Z_Param_Out_bPolygonIsEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_SimplePolygonFunctions::SetPolygonVertex(Z_Param_Out_Polygon,Z_Param_VertexIndex,Z_Param_Position,Z_Param_Out_bPolygonIsEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonVertex)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_UBOOL_REF(Z_Param_Out_bPolygonIsEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertex(Z_Param_Polygon,Z_Param_VertexIndex,Z_Param_Out_bPolygonIsEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonVertexCount)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertexCount(Z_Param_Polygon);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_SimplePolygonFunctions::StaticRegisterNativesUGeometryScriptLibrary_SimplePolygonFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPolygonVertex", &UGeometryScriptLibrary_SimplePolygonFunctions::execAddPolygonVertex },
			{ "Conv_ArrayOfVector2DToGeometryScriptSimplePolygon", &UGeometryScriptLibrary_SimplePolygonFunctions::execConv_ArrayOfVector2DToGeometryScriptSimplePolygon },
			{ "Conv_ArrayToGeometryScriptSimplePolygon", &UGeometryScriptLibrary_SimplePolygonFunctions::execConv_ArrayToGeometryScriptSimplePolygon },
			{ "Conv_GeometryScriptSimplePolygonToArray", &UGeometryScriptLibrary_SimplePolygonFunctions::execConv_GeometryScriptSimplePolygonToArray },
			{ "Conv_GeometryScriptSimplePolygonToArrayOfVector2D", &UGeometryScriptLibrary_SimplePolygonFunctions::execConv_GeometryScriptSimplePolygonToArrayOfVector2D },
			{ "ConvertSplineToPolygon", &UGeometryScriptLibrary_SimplePolygonFunctions::execConvertSplineToPolygon },
			{ "GetPolygonArcLength", &UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonArcLength },
			{ "GetPolygonArea", &UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonArea },
			{ "GetPolygonBounds", &UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonBounds },
			{ "GetPolygonTangent", &UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonTangent },
			{ "GetPolygonVertex", &UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonVertex },
			{ "GetPolygonVertexCount", &UGeometryScriptLibrary_SimplePolygonFunctions::execGetPolygonVertexCount },
			{ "SetPolygonVertex", &UGeometryScriptLibrary_SimplePolygonFunctions::execSetPolygonVertex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventAddPolygonVertex_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			FVector2D Position;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventAddPolygonVertex_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventAddPolygonVertex_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Vertex Index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventAddPolygonVertex_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Set the specified vertex of a Simple Polygon. Returns the index of the added vertex.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the specified vertex of a Simple Polygon. Returns the index of the added vertex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "AddPolygonVertex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventAddPolygonVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventAddPolygonVertex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayOfVector2DToGeometryScriptSimplePolygon_Parms
		{
			TArray<FVector2D> PathVertices;
			FGeometryScriptSimplePolygon ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_Inner = { "PathVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices = { "PathVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayOfVector2DToGeometryScriptSimplePolygon_Parms, PathVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayOfVector2DToGeometryScriptSimplePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns a Polygon created from an array of 2D position vectors.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Array Of Vector2D To Simple Polygon" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Returns a Polygon created from an array of 2D position vectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "Conv_ArrayOfVector2DToGeometryScriptSimplePolygon", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayOfVector2DToGeometryScriptSimplePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayOfVector2DToGeometryScriptSimplePolygon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayToGeometryScriptSimplePolygon_Parms
		{
			TArray<FVector> PathVertices;
			FGeometryScriptSimplePolygon ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_Inner = { "PathVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices = { "PathVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayToGeometryScriptSimplePolygon_Parms, PathVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayToGeometryScriptSimplePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_PathVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/** \n\x09 * Returns a Polygon created from an array of 3D position vectors, ignoring the Z coordinate.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Array Of Vector To Simple Polygon" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Returns a Polygon created from an array of 3D position vectors, ignoring the Z coordinate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "Conv_ArrayToGeometryScriptSimplePolygon", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayToGeometryScriptSimplePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_ArrayToGeometryScriptSimplePolygon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArray_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArray_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns an array of 3D vectors with the Polygon vertex locations, with Z coordinate set to zero.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Simple Polygon To Array Of Vector" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Returns an array of 3D vectors with the Polygon vertex locations, with Z coordinate set to zero." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "Conv_GeometryScriptSimplePolygonToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArrayOfVector2D_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArrayOfVector2D_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArrayOfVector2D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns an array of 2D Vectors with the Polygon vertex locations.\n\x09 */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Simple Polygon To Array Of Vector2D" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Returns an array of 2D Vectors with the Polygon vertex locations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "Conv_GeometryScriptSimplePolygonToArrayOfVector2D", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArrayOfVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConv_GeometryScriptSimplePolygonToArrayOfVector2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms
		{
			const USplineComponent* Spline;
			FGeometryScriptSimplePolygon Polygon;
			FGeometryScriptSplineSamplingOptions SamplingOptions;
			EGeometryScriptAxis DropAxis;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DropAxis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DropAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Spline_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Spline_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_SamplingOptions = { "SamplingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms, SamplingOptions), Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions, METADATA_PARAMS(0, nullptr) }; // 1339537908
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_DropAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_DropAxis = { "DropAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms, DropAxis), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis, METADATA_PARAMS(0, nullptr) }; // 739834563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_SamplingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_DropAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::NewProp_DropAxis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Sample positions from a USplineComponent into a Simple Polyon, based on the given SamplingOptions\n\x09 */" },
		{ "CPP_Default_DropAxis", "Z" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Sample positions from a USplineComponent into a Simple Polyon, based on the given SamplingOptions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "ConvertSplineToPolygon", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventConvertSplineToPolygon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArcLength_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArcLength_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArcLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns the arc length of a Simple Polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the arc length of a Simple Polygon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "GetPolygonArcLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArcLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArcLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArea_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArea_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns the area enclosed by a Simple Polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the area enclosed by a Simple Polygon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "GetPolygonArea", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonBounds_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			FBox2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonBounds_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns the bounding box of a Simple Polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the bounding box of a Simple Polygon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "GetPolygonBounds", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			int32 VertexIndex;
			bool bPolygonIsEmpty;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
		static void NewProp_bPolygonIsEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolygonIsEmpty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms, VertexIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_bPolygonIsEmpty_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms*)Obj)->bPolygonIsEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_bPolygonIsEmpty = { "bPolygonIsEmpty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_bPolygonIsEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_bPolygonIsEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns a vertex's tangent of a Simple Polygon. VertexIndex loops around, so e.g., -1 gives the tangent of the last vertex in the polygon.\n\x09 * If Polygon has no vertices, returns the zero vector.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns a vertex's tangent of a Simple Polygon. VertexIndex loops around, so e.g., -1 gives the tangent of the last vertex in the polygon.\nIf Polygon has no vertices, returns the zero vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "GetPolygonTangent", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonTangent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			int32 VertexIndex;
			bool bPolygonIsEmpty;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
		static void NewProp_bPolygonIsEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolygonIsEmpty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms, VertexIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_bPolygonIsEmpty_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms*)Obj)->bPolygonIsEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_bPolygonIsEmpty = { "bPolygonIsEmpty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_bPolygonIsEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_bPolygonIsEmpty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns the specified vertex of a Simple Polygon. VertexIndex loops around, so e.g., -1 gives the last vertex in the polygon.\n\x09 * If Polygon has no vertices, returns the zero vector.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the specified vertex of a Simple Polygon. VertexIndex loops around, so e.g., -1 gives the last vertex in the polygon.\nIf Polygon has no vertices, returns the zero vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "GetPolygonVertex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertexCount_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertexCount_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertexCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Returns the number of vertices in a Simple Polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of vertices in a Simple Polygon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "GetPolygonVertexCount", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertexCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventGetPolygonVertexCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics
	{
		struct GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms
		{
			FGeometryScriptSimplePolygon Polygon;
			int32 VertexIndex;
			FVector2D Position;
			bool bPolygonIsEmpty;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_bPolygonIsEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPolygonIsEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms, Polygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms, VertexIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_bPolygonIsEmpty_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms*)Obj)->bPolygonIsEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_bPolygonIsEmpty = { "bPolygonIsEmpty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_bPolygonIsEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::NewProp_bPolygonIsEmpty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|SimplePolygon" },
		{ "Comment", "/**\n\x09 * Set the specified vertex of a Simple Polygon. VertexIndex loops around, so e.g., -1 gives the last vertex in the polygon.\n\x09 * Does nothing if Polygon has no vertices.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the specified vertex of a Simple Polygon. VertexIndex loops around, so e.g., -1 gives the last vertex in the polygon.\nDoes nothing if Polygon has no vertices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, nullptr, "SetPolygonVertex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::GeometryScriptLibrary_SimplePolygonFunctions_eventSetPolygonVertex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_SimplePolygonFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_AddPolygonVertex, "AddPolygonVertex" }, // 3248326760
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayOfVector2DToGeometryScriptSimplePolygon, "Conv_ArrayOfVector2DToGeometryScriptSimplePolygon" }, // 1485185659
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_ArrayToGeometryScriptSimplePolygon, "Conv_ArrayToGeometryScriptSimplePolygon" }, // 1970405659
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArray, "Conv_GeometryScriptSimplePolygonToArray" }, // 1178551615
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_Conv_GeometryScriptSimplePolygonToArrayOfVector2D, "Conv_GeometryScriptSimplePolygonToArrayOfVector2D" }, // 4280355474
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_ConvertSplineToPolygon, "ConvertSplineToPolygon" }, // 316385434
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArcLength, "GetPolygonArcLength" }, // 2692518188
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonArea, "GetPolygonArea" }, // 664973120
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonBounds, "GetPolygonBounds" }, // 2637968368
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonTangent, "GetPolygonTangent" }, // 3237987259
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertex, "GetPolygonVertex" }, // 1446637335
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_GetPolygonVertexCount, "GetPolygonVertexCount" }, // 42425301
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SimplePolygonFunctions_SetPolygonVertex, "SetPolygonVertex" }, // 3574085864
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/PolygonFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptName", "GeometryScript_SimplePolygon" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_SimplePolygonFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_SimplePolygonFunctions>()
	{
		return UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass();
	}
	UGeometryScriptLibrary_SimplePolygonFunctions::UGeometryScriptLibrary_SimplePolygonFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_SimplePolygonFunctions);
	UGeometryScriptLibrary_SimplePolygonFunctions::~UGeometryScriptLibrary_SimplePolygonFunctions() {}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonsFromOpenPolyPathsOffset)
	{
		P_GET_TARRAY(FGeometryScriptPolyPath,Z_Param_PolyPaths);
		P_GET_STRUCT(FGeometryScriptOpenPathOffsetOptions,Z_Param_OffsetOptions);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Offset);
		P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccess);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromOpenPolyPathsOffset(Z_Param_PolyPaths,Z_Param_OffsetOptions,Z_Param_Offset,Z_Param_Out_bOperationSuccess,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonsFromPathOffset)
	{
		P_GET_TARRAY(FVector2D,Z_Param_Path);
		P_GET_STRUCT(FGeometryScriptOpenPathOffsetOptions,Z_Param_OffsetOptions);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Offset);
		P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccess);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromPathOffset(Z_Param_Path,Z_Param_OffsetOptions,Z_Param_Offset,Z_Param_Out_bOperationSuccess,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsMorphologyClose)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptPolygonOffsetOptions,Z_Param_OffsetOptions);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Offset);
		P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccess);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyClose(Z_Param_PolygonList,Z_Param_OffsetOptions,Z_Param_Offset,Z_Param_Out_bOperationSuccess,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsMorphologyOpen)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptPolygonOffsetOptions,Z_Param_OffsetOptions);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Offset);
		P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccess);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyOpen(Z_Param_PolygonList,Z_Param_OffsetOptions,Z_Param_Offset,Z_Param_Out_bOperationSuccess,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsOffsets)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptPolygonOffsetOptions,Z_Param_OffsetOptions);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_FirstOffset);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SecondOffset);
		P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccess);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffsets(Z_Param_PolygonList,Z_Param_OffsetOptions,Z_Param_FirstOffset,Z_Param_SecondOffset,Z_Param_Out_bOperationSuccess,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsOffset)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptPolygonOffsetOptions,Z_Param_OffsetOptions);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Offset);
		P_GET_UBOOL_REF(Z_Param_Out_bOperationSuccess);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffset(Z_Param_PolygonList,Z_Param_OffsetOptions,Z_Param_Offset,Z_Param_Out_bOperationSuccess,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsExclusiveOr)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonsToExclusiveOr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsExclusiveOr(Z_Param_PolygonList,Z_Param_PolygonsToExclusiveOr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsIntersection)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonsToIntersect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsIntersection(Z_Param_PolygonList,Z_Param_PolygonsToIntersect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsDifference)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonsToSubtract);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsDifference(Z_Param_PolygonList,Z_Param_PolygonsToSubtract);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execPolygonsUnion)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL(Z_Param_bCopyInputOnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::PolygonsUnion(Z_Param_PolygonList,Z_Param_bCopyInputOnFailure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execAppendPolygonList)
	{
		P_GET_STRUCT_REF(FGeometryScriptGeneralPolygonList,Z_Param_Out_PolygonList);
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonsToAppend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolygonListFunctions::AppendPolygonList(Z_Param_Out_PolygonList,Z_Param_PolygonsToAppend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonListFromSimplePolygons)
	{
		P_GET_TARRAY_REF(FGeometryScriptSimplePolygon,Z_Param_Out_OuterPolygons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSimplePolygons(Z_Param_Out_OuterPolygons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execAddPolygonToList)
	{
		P_GET_STRUCT_REF(FGeometryScriptGeneralPolygonList,Z_Param_Out_PolygonList);
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_OuterPolygon);
		P_GET_TARRAY_REF(FGeometryScriptSimplePolygon,Z_Param_Out_HolePolygons);
		P_GET_UBOOL(Z_Param_bFixHoleOrientations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::AddPolygonToList(Z_Param_Out_PolygonList,Z_Param_OuterPolygon,Z_Param_Out_HolePolygons,Z_Param_bFixHoleOrientations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonListFromSinglePolygon)
	{
		P_GET_STRUCT(FGeometryScriptSimplePolygon,Z_Param_OuterPolygon);
		P_GET_TARRAY_REF(FGeometryScriptSimplePolygon,Z_Param_Out_HolePolygons);
		P_GET_UBOOL(Z_Param_bFixHoleOrientations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptGeneralPolygonList*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSinglePolygon(Z_Param_OuterPolygon,Z_Param_Out_HolePolygons,Z_Param_bFixHoleOrientations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonListBounds)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox2D*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListBounds(Z_Param_PolygonList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonListArea)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListArea(Z_Param_PolygonList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonBounds)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL_REF(Z_Param_Out_bValidIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox2D*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonBounds(Z_Param_PolygonList,Z_Param_Out_bValidIndex,Z_Param_PolygonIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonArea)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL_REF(Z_Param_Out_bValidIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonArea(Z_Param_PolygonList,Z_Param_Out_bValidIndex,Z_Param_PolygonIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertex)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidVertex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_HoleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertex(Z_Param_PolygonList,Z_Param_Out_bIsValidVertex,Z_Param_VertexIndex,Z_Param_PolygonIndex,Z_Param_HoleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetSimplePolygon)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL_REF(Z_Param_Out_bValidIndices);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_HoleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptSimplePolygon*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetSimplePolygon(Z_Param_PolygonList,Z_Param_Out_bValidIndices,Z_Param_PolygonIndex,Z_Param_HoleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertices)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutVertices);
		P_GET_UBOOL_REF(Z_Param_Out_bValidIndices);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_HoleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertices(Z_Param_PolygonList,Z_Param_Out_OutVertices,Z_Param_Out_bValidIndices,Z_Param_PolygonIndex,Z_Param_HoleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertexCount)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL_REF(Z_Param_Out_bValidIndices);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_HoleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertexCount(Z_Param_PolygonList,Z_Param_Out_bValidIndices,Z_Param_PolygonIndex,Z_Param_HoleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonHoleCount)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_GET_UBOOL_REF(Z_Param_Out_bValidIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonHoleCount(Z_Param_PolygonList,Z_Param_Out_bValidIndex,Z_Param_PolygonIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonCount)
	{
		P_GET_STRUCT(FGeometryScriptGeneralPolygonList,Z_Param_PolygonList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolygonListFunctions::GetPolygonCount(Z_Param_PolygonList);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_PolygonListFunctions::StaticRegisterNativesUGeometryScriptLibrary_PolygonListFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_PolygonListFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPolygonToList", &UGeometryScriptLibrary_PolygonListFunctions::execAddPolygonToList },
			{ "AppendPolygonList", &UGeometryScriptLibrary_PolygonListFunctions::execAppendPolygonList },
			{ "CreatePolygonListFromSimplePolygons", &UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonListFromSimplePolygons },
			{ "CreatePolygonListFromSinglePolygon", &UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonListFromSinglePolygon },
			{ "CreatePolygonsFromOpenPolyPathsOffset", &UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonsFromOpenPolyPathsOffset },
			{ "CreatePolygonsFromPathOffset", &UGeometryScriptLibrary_PolygonListFunctions::execCreatePolygonsFromPathOffset },
			{ "GetPolygonArea", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonArea },
			{ "GetPolygonBounds", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonBounds },
			{ "GetPolygonCount", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonCount },
			{ "GetPolygonHoleCount", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonHoleCount },
			{ "GetPolygonListArea", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonListArea },
			{ "GetPolygonListBounds", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonListBounds },
			{ "GetPolygonVertex", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertex },
			{ "GetPolygonVertexCount", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertexCount },
			{ "GetPolygonVertices", &UGeometryScriptLibrary_PolygonListFunctions::execGetPolygonVertices },
			{ "GetSimplePolygon", &UGeometryScriptLibrary_PolygonListFunctions::execGetSimplePolygon },
			{ "PolygonsDifference", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsDifference },
			{ "PolygonsExclusiveOr", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsExclusiveOr },
			{ "PolygonsIntersection", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsIntersection },
			{ "PolygonsMorphologyClose", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsMorphologyClose },
			{ "PolygonsMorphologyOpen", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsMorphologyOpen },
			{ "PolygonsOffset", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsOffset },
			{ "PolygonsOffsets", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsOffsets },
			{ "PolygonsUnion", &UGeometryScriptLibrary_PolygonListFunctions::execPolygonsUnion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptSimplePolygon OuterPolygon;
			TArray<FGeometryScriptSimplePolygon> HolePolygons;
			bool bFixHoleOrientations;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterPolygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HolePolygons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HolePolygons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HolePolygons;
		static void NewProp_bFixHoleOrientations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixHoleOrientations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_OuterPolygon = { "OuterPolygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms, OuterPolygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons_Inner = { "HolePolygons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons = { "HolePolygons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms, HolePolygons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons_MetaData) }; // 4184713527
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_bFixHoleOrientations_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms*)Obj)->bFixHoleOrientations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_bFixHoleOrientations = { "bFixHoleOrientations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_bFixHoleOrientations_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Polygon Index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_OuterPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_HolePolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_bFixHoleOrientations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "HolePolygons" },
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Add Polygon to a Polygon List, with optional holes. Returns index of the added polygon.\n\x09 */" },
		{ "CPP_Default_bFixHoleOrientations", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add Polygon to a Polygon List, with optional holes. Returns index of the added polygon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "AddPolygonToList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::GeometryScriptLibrary_PolygonListFunctions_eventAddPolygonToList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventAppendPolygonList_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptGeneralPolygonList PolygonsToAppend;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonsToAppend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventAppendPolygonList_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::NewProp_PolygonsToAppend = { "PolygonsToAppend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventAppendPolygonList_Parms, PolygonsToAppend), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::NewProp_PolygonsToAppend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Append the polygons in 'Polygons to Append' to Polygon List\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Append the polygons in 'Polygons to Append' to Polygon List" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "AppendPolygonList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::GeometryScriptLibrary_PolygonListFunctions_eventAppendPolygonList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::GeometryScriptLibrary_PolygonListFunctions_eventAppendPolygonList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSimplePolygons_Parms
		{
			TArray<FGeometryScriptSimplePolygon> OuterPolygons;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterPolygons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterPolygons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OuterPolygons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons_Inner = { "OuterPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons = { "OuterPolygons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSimplePolygons_Parms, OuterPolygons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons_MetaData) }; // 4184713527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Polygon List" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSimplePolygons_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_ReturnValue_MetaData) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_OuterPolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Create a Polygon List from an array of Simple Polygons\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Create a Polygon List from an array of Simple Polygons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "CreatePolygonListFromSimplePolygons", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSimplePolygons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSimplePolygons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms
		{
			FGeometryScriptSimplePolygon OuterPolygon;
			TArray<FGeometryScriptSimplePolygon> HolePolygons;
			bool bFixHoleOrientations;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterPolygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HolePolygons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HolePolygons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HolePolygons;
		static void NewProp_bFixHoleOrientations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixHoleOrientations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_OuterPolygon = { "OuterPolygon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms, OuterPolygon), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons_Inner = { "HolePolygons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons = { "HolePolygons", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms, HolePolygons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons_MetaData) }; // 4184713527
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_bFixHoleOrientations_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms*)Obj)->bFixHoleOrientations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_bFixHoleOrientations = { "bFixHoleOrientations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_bFixHoleOrientations_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Polygon List" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_ReturnValue_MetaData) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_OuterPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_HolePolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_bFixHoleOrientations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "HolePolygons" },
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Create a Polygon List of a single Polygon, with optional holes\n\x09 */" },
		{ "CPP_Default_bFixHoleOrientations", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a Polygon List of a single Polygon, with optional holes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "CreatePolygonListFromSinglePolygon", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonListFromSinglePolygon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms
		{
			TArray<FGeometryScriptPolyPath> PolyPaths;
			FGeometryScriptOpenPathOffsetOptions OffsetOptions;
			double Offset;
			bool bOperationSuccess;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolyPaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
		static void NewProp_bOperationSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccess;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_PolyPaths_Inner = { "PolyPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(0, nullptr) }; // 4293158870
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_PolyPaths = { "PolyPaths", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms, PolyPaths), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4293158870
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms, OffsetOptions), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions, METADATA_PARAMS(0, nullptr) }; // 1010569539
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bOperationSuccess_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms*)Obj)->bOperationSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bOperationSuccess = { "bOperationSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bOperationSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_PolyPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_PolyPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bOperationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Apply an offset to a set of open 2D PolyPaths, generating closed polygons as a result */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Apply an offset to a set of open 2D PolyPaths, generating closed polygons as a result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "CreatePolygonsFromOpenPolyPathsOffset", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromOpenPolyPathsOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms
		{
			TArray<FVector2D> Path;
			FGeometryScriptOpenPathOffsetOptions OffsetOptions;
			double Offset;
			bool bOperationSuccess;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
		static void NewProp_bOperationSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccess;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms, OffsetOptions), Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions, METADATA_PARAMS(0, nullptr) }; // 1010569539
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bOperationSuccess_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms*)Obj)->bOperationSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bOperationSuccess = { "bOperationSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bOperationSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bOperationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Apply an offset to a single open 2D path, generating closed polygons as a result */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ToolTip", "Apply an offset to a single open 2D path, generating closed polygons as a result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "CreatePolygonsFromPathOffset", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::GeometryScriptLibrary_PolygonListFunctions_eventCreatePolygonsFromPathOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bValidIndex;
			int32 PolygonIndex;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_bValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms*)Obj)->bValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_bValidIndex = { "bValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_bValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_bValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the area enclosed by a Polygon. Returns zero for an invalid PolygonIndex. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the area enclosed by a Polygon. Returns zero for an invalid PolygonIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonArea", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bValidIndex;
			int32 PolygonIndex;
			FBox2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_bValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms*)Obj)->bValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_bValidIndex = { "bValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_bValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_bValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the bounding box of a Polygon. Returns an empty, invalid box for an invalid PolygonIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the bounding box of a Polygon. Returns an empty, invalid box for an invalid PolygonIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonBounds", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonCount_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonCount_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the number of polygons in the Polygon List\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of polygons in the Polygon List" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonCount", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bValidIndex;
			int32 PolygonIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_bValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms*)Obj)->bValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_bValidIndex = { "bValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_bValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_bValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the number of holes in a Polygon. Returns zero for an invalid PolygonIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of holes in a Polygon. Returns zero for an invalid PolygonIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonHoleCount", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonHoleCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListArea_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListArea_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListArea_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the area enclosed by a Polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the area enclosed by a Polygon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonListArea", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListArea_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListBounds_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FBox2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListBounds_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the bounding box of a Polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the bounding box of a Polygon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonListBounds", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonListBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bIsValidVertex;
			int32 VertexIndex;
			int32 PolygonIndex;
			int32 HoleIndex;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bIsValidVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidVertex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HoleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_bIsValidVertex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms*)Obj)->bIsValidVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_bIsValidVertex = { "bIsValidVertex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_bIsValidVertex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms, VertexIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_HoleIndex = { "HoleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms, HoleIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_bIsValidVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_HoleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the specified vertex of a Polygon -- either of the outer polygon, if HoleIndex is -1, or specified inner hole.\n\x09 * Vertex will be the zero vector for invalid Polygon or Hole indices, or if the polygon is empty. VertexIndex will loop.\n\x09 */" },
		{ "CPP_Default_HoleIndex", "-1" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the specified vertex of a Polygon -- either of the outer polygon, if HoleIndex is -1, or specified inner hole.\nVertex will be the zero vector for invalid Polygon or Hole indices, or if the polygon is empty. VertexIndex will loop." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonVertex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bValidIndices;
			int32 PolygonIndex;
			int32 HoleIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bValidIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HoleIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_bValidIndices_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms*)Obj)->bValidIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_bValidIndices = { "bValidIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_bValidIndices_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_HoleIndex = { "HoleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms, HoleIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_bValidIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_HoleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the number of vertices in a Polygon's outer shape, if HoleIndex is -1, or in the specified inner hole.\n\x09 * Returns 0 for invalid Polygon or Hole indices.\n\x09 */" },
		{ "CPP_Default_HoleIndex", "-1" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of vertices in a Polygon's outer shape, if HoleIndex is -1, or in the specified inner hole.\nReturns 0 for invalid Polygon or Hole indices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonVertexCount", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertexCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			TArray<FVector2D> OutVertices;
			bool bValidIndices;
			int32 PolygonIndex;
			int32 HoleIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVertices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVertices;
		static void NewProp_bValidIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HoleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_OutVertices_Inner = { "OutVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_OutVertices = { "OutVertices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms, OutVertices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_bValidIndices_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms*)Obj)->bValidIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_bValidIndices = { "bValidIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_bValidIndices_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_HoleIndex = { "HoleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms, HoleIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_OutVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_OutVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_bValidIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::NewProp_HoleIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns the vertices of a Polygon -- either of the outer polygon, if HoleIndex is -1, or specified inner hole.\n\x09 * OutVertices will be empty for invalid Polygon or Hole indices.\n\x09 */" },
		{ "CPP_Default_HoleIndex", "-1" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the vertices of a Polygon -- either of the outer polygon, if HoleIndex is -1, or specified inner hole.\nOutVertices will be empty for invalid Polygon or Hole indices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetPolygonVertices", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetPolygonVertices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bValidIndices;
			int32 PolygonIndex;
			int32 HoleIndex;
			FGeometryScriptSimplePolygon ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bValidIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HoleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_bValidIndices_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms*)Obj)->bValidIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_bValidIndices = { "bValidIndices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_bValidIndices_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms, PolygonIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_HoleIndex = { "HoleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms, HoleIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptSimplePolygon, METADATA_PARAMS(0, nullptr) }; // 4184713527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_bValidIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_PolygonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_HoleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/**\n\x09 * Returns a specified Simple Polygon from a Polygon List -- either the outer polygon, if HoleIndex is -1, or specified inner hole.\n\x09 * Polygon will be empty for invalid Polygon or Hole indices.\n\x09 */" },
		{ "CPP_Default_HoleIndex", "-1" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns a specified Simple Polygon from a Polygon List -- either the outer polygon, if HoleIndex is -1, or specified inner hole.\nPolygon will be empty for invalid Polygon or Hole indices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "GetSimplePolygon", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::GeometryScriptLibrary_PolygonListFunctions_eventGetSimplePolygon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsDifference_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptGeneralPolygonList PolygonsToSubtract;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonsToSubtract;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsDifference_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::NewProp_PolygonsToSubtract = { "PolygonsToSubtract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsDifference_Parms, PolygonsToSubtract), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsDifference_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::NewProp_PolygonsToSubtract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Compute difference of Polygon List and Polygons to Subtract */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute difference of Polygon List and Polygons to Subtract" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsDifference", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsDifference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsExclusiveOr_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonsToExclusiveOr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsExclusiveOr_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::NewProp_PolygonsToExclusiveOr = { "PolygonsToExclusiveOr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsExclusiveOr_Parms, PolygonsToExclusiveOr), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsExclusiveOr_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::NewProp_PolygonsToExclusiveOr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Compute exclusive or of Polygon List and Polygons to Exclusive Or */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute exclusive or of Polygon List and Polygons to Exclusive Or" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsExclusiveOr", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsExclusiveOr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsExclusiveOr_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsIntersection_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptGeneralPolygonList PolygonsToIntersect;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonsToIntersect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsIntersection_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::NewProp_PolygonsToIntersect = { "PolygonsToIntersect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsIntersection_Parms, PolygonsToIntersect), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::NewProp_PolygonsToIntersect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Compute intersection of Polygon List and Polygons to Intersect */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute intersection of Polygon List and Polygons to Intersect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsIntersection", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsIntersection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptPolygonOffsetOptions OffsetOptions;
			double Offset;
			bool bOperationSuccess;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
		static void NewProp_bOperationSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccess;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms, OffsetOptions), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions, METADATA_PARAMS(0, nullptr) }; // 3858176205
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bOperationSuccess_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms*)Obj)->bOperationSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bOperationSuccess = { "bOperationSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bOperationSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bOperationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Apply a morphological \"close\" operator to a list of closed polygons -- first offsetting by +Offset, then by -Offset. If Offset is negative, this will instead function as an 'Open' operation */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply a morphological \"close\" operator to a list of closed polygons -- first offsetting by +Offset, then by -Offset. If Offset is negative, this will instead function as an 'Open' operation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsMorphologyClose", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyClose_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptPolygonOffsetOptions OffsetOptions;
			double Offset;
			bool bOperationSuccess;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
		static void NewProp_bOperationSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccess;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms, OffsetOptions), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions, METADATA_PARAMS(0, nullptr) }; // 3858176205
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bOperationSuccess_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms*)Obj)->bOperationSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bOperationSuccess = { "bOperationSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bOperationSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bOperationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Apply a morphological \"open\" operator to a list of closed polygons -- first offsetting by -Offset, then by +Offset. If Offset is negative, this will instead function as a 'Close' operation */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply a morphological \"open\" operator to a list of closed polygons -- first offsetting by -Offset, then by +Offset. If Offset is negative, this will instead function as a 'Close' operation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsMorphologyOpen", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsMorphologyOpen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptPolygonOffsetOptions OffsetOptions;
			double Offset;
			bool bOperationSuccess;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
		static void NewProp_bOperationSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccess;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms, OffsetOptions), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions, METADATA_PARAMS(0, nullptr) }; // 3858176205
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms, Offset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bOperationSuccess_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms*)Obj)->bOperationSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bOperationSuccess = { "bOperationSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bOperationSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bOperationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Apply a single offset to a list of closed polygons */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply a single offset to a list of closed polygons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsOffset", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			FGeometryScriptPolygonOffsetOptions OffsetOptions;
			double FirstOffset;
			double SecondOffset;
			bool bOperationSuccess;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FirstOffset;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SecondOffset;
		static void NewProp_bOperationSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperationSuccess;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms, OffsetOptions), Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions, METADATA_PARAMS(0, nullptr) }; // 3858176205
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_FirstOffset = { "FirstOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms, FirstOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_SecondOffset = { "SecondOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms, SecondOffset), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bOperationSuccess_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms*)Obj)->bOperationSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bOperationSuccess = { "bOperationSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bOperationSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_FirstOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_SecondOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bOperationSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Apply two offsets in sequence to a list of closed polygons */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Apply two offsets in sequence to a list of closed polygons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsOffsets", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsOffsets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics
	{
		struct GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms
		{
			FGeometryScriptGeneralPolygonList PolygonList;
			bool bCopyInputOnFailure;
			FGeometryScriptGeneralPolygonList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonList;
		static void NewProp_bCopyInputOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyInputOnFailure;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_PolygonList = { "PolygonList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms, PolygonList), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_bCopyInputOnFailure_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms*)Obj)->bCopyInputOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_bCopyInputOnFailure = { "bCopyInputOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_bCopyInputOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptGeneralPolygonList, METADATA_PARAMS(0, nullptr) }; // 1907959885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_PolygonList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_bCopyInputOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolygonList" },
		{ "Comment", "/** Compute union of all polygons in Polygon List. Also resolves self-intersections within each polygon. */" },
		{ "CPP_Default_bCopyInputOnFailure", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compute union of all polygons in Polygon List. Also resolves self-intersections within each polygon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, nullptr, "PolygonsUnion", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::GeometryScriptLibrary_PolygonListFunctions_eventPolygonsUnion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_PolygonListFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_PolygonListFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AddPolygonToList, "AddPolygonToList" }, // 1927906946
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_AppendPolygonList, "AppendPolygonList" }, // 2643221388
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSimplePolygons, "CreatePolygonListFromSimplePolygons" }, // 1895409217
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonListFromSinglePolygon, "CreatePolygonListFromSinglePolygon" }, // 220206680
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromOpenPolyPathsOffset, "CreatePolygonsFromOpenPolyPathsOffset" }, // 1972442887
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_CreatePolygonsFromPathOffset, "CreatePolygonsFromPathOffset" }, // 750917168
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonArea, "GetPolygonArea" }, // 214533708
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonBounds, "GetPolygonBounds" }, // 2263316492
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonCount, "GetPolygonCount" }, // 3557033726
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonHoleCount, "GetPolygonHoleCount" }, // 1982946458
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListArea, "GetPolygonListArea" }, // 4173873195
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonListBounds, "GetPolygonListBounds" }, // 184413108
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertex, "GetPolygonVertex" }, // 1584451808
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertexCount, "GetPolygonVertexCount" }, // 1496196055
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetPolygonVertices, "GetPolygonVertices" }, // 3083903396
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_GetSimplePolygon, "GetSimplePolygon" }, // 1834291926
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsDifference, "PolygonsDifference" }, // 3374792907
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsExclusiveOr, "PolygonsExclusiveOr" }, // 2188709464
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsIntersection, "PolygonsIntersection" }, // 349087046
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyClose, "PolygonsMorphologyClose" }, // 4214129672
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsMorphologyOpen, "PolygonsMorphologyOpen" }, // 1019755150
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffset, "PolygonsOffset" }, // 1672723622
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsOffsets, "PolygonsOffsets" }, // 1688764075
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolygonListFunctions_PolygonsUnion, "PolygonsUnion" }, // 2769103796
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/PolygonFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolygonFunctions.h" },
		{ "ScriptName", "GeometryScript_PolygonList" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_PolygonListFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_PolygonListFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_PolygonListFunctions>()
	{
		return UGeometryScriptLibrary_PolygonListFunctions::StaticClass();
	}
	UGeometryScriptLibrary_PolygonListFunctions::UGeometryScriptLibrary_PolygonListFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_PolygonListFunctions);
	UGeometryScriptLibrary_PolygonListFunctions::~UGeometryScriptLibrary_PolygonListFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptPolyOffsetJoinType_StaticEnum, TEXT("EGeometryScriptPolyOffsetJoinType"), &Z_Registration_Info_UEnum_EGeometryScriptPolyOffsetJoinType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1594480818U) },
		{ EGeometryScriptPathOffsetEndType_StaticEnum, TEXT("EGeometryScriptPathOffsetEndType"), &Z_Registration_Info_UEnum_EGeometryScriptPathOffsetEndType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2105267825U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptPolygonOffsetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptPolygonOffsetOptions_Statics::NewStructOps, TEXT("GeometryScriptPolygonOffsetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptPolygonOffsetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptPolygonOffsetOptions), 3858176205U) },
		{ FGeometryScriptOpenPathOffsetOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptOpenPathOffsetOptions_Statics::NewStructOps, TEXT("GeometryScriptOpenPathOffsetOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptOpenPathOffsetOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptOpenPathOffsetOptions), 1010569539U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, UGeometryScriptLibrary_SimplePolygonFunctions::StaticClass, TEXT("UGeometryScriptLibrary_SimplePolygonFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_SimplePolygonFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_SimplePolygonFunctions), 3396671017U) },
		{ Z_Construct_UClass_UGeometryScriptLibrary_PolygonListFunctions, UGeometryScriptLibrary_PolygonListFunctions::StaticClass, TEXT("UGeometryScriptLibrary_PolygonListFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_PolygonListFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_PolygonListFunctions), 2392102664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_846998314(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolygonFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

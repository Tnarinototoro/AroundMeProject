// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveOps/TriangulateCurvesOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangulateCurvesOp() {}
// Cross Module References
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes();
	UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlattenCurveMethod;
	static UEnum* EFlattenCurveMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlattenCurveMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlattenCurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EFlattenCurveMethod"));
		}
		return Z_Registration_Info_UEnum_EFlattenCurveMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EFlattenCurveMethod>()
	{
		return EFlattenCurveMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enumerators[] = {
		{ "EFlattenCurveMethod::DoNotFlatten", (int64)EFlattenCurveMethod::DoNotFlatten },
		{ "EFlattenCurveMethod::ToBestFitPlane", (int64)EFlattenCurveMethod::ToBestFitPlane },
		{ "EFlattenCurveMethod::AlongX", (int64)EFlattenCurveMethod::AlongX },
		{ "EFlattenCurveMethod::AlongY", (int64)EFlattenCurveMethod::AlongY },
		{ "EFlattenCurveMethod::AlongZ", (int64)EFlattenCurveMethod::AlongZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enum_MetaDataParams[] = {
		{ "AlongX.Name", "EFlattenCurveMethod::AlongX" },
		{ "AlongY.Name", "EFlattenCurveMethod::AlongY" },
		{ "AlongZ.Name", "EFlattenCurveMethod::AlongZ" },
		{ "DoNotFlatten.Name", "EFlattenCurveMethod::DoNotFlatten" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "ToBestFitPlane.Name", "EFlattenCurveMethod::ToBestFitPlane" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EFlattenCurveMethod",
		"EFlattenCurveMethod",
		Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod()
	{
		if (!Z_Registration_Info_UEnum_EFlattenCurveMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlattenCurveMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlattenCurveMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombineCurvesMethod;
	static UEnum* ECombineCurvesMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECombineCurvesMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECombineCurvesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ECombineCurvesMethod"));
		}
		return Z_Registration_Info_UEnum_ECombineCurvesMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<ECombineCurvesMethod>()
	{
		return ECombineCurvesMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enumerators[] = {
		{ "ECombineCurvesMethod::LeaveSeparate", (int64)ECombineCurvesMethod::LeaveSeparate },
		{ "ECombineCurvesMethod::Union", (int64)ECombineCurvesMethod::Union },
		{ "ECombineCurvesMethod::Intersect", (int64)ECombineCurvesMethod::Intersect },
		{ "ECombineCurvesMethod::Difference", (int64)ECombineCurvesMethod::Difference },
		{ "ECombineCurvesMethod::ExclusiveOr", (int64)ECombineCurvesMethod::ExclusiveOr },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enum_MetaDataParams[] = {
		{ "Difference.Name", "ECombineCurvesMethod::Difference" },
		{ "ExclusiveOr.Name", "ECombineCurvesMethod::ExclusiveOr" },
		{ "Intersect.Name", "ECombineCurvesMethod::Intersect" },
		{ "LeaveSeparate.Name", "ECombineCurvesMethod::LeaveSeparate" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Union.Name", "ECombineCurvesMethod::Union" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"ECombineCurvesMethod",
		"ECombineCurvesMethod",
		Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod()
	{
		if (!Z_Registration_Info_UEnum_ECombineCurvesMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombineCurvesMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECombineCurvesMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod;
	static UEnum* EOffsetClosedCurvesMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOffsetClosedCurvesMethod"));
		}
		return Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetClosedCurvesMethod>()
	{
		return EOffsetClosedCurvesMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enumerators[] = {
		{ "EOffsetClosedCurvesMethod::DoNotOffset", (int64)EOffsetClosedCurvesMethod::DoNotOffset },
		{ "EOffsetClosedCurvesMethod::OffsetOuterSide", (int64)EOffsetClosedCurvesMethod::OffsetOuterSide },
		{ "EOffsetClosedCurvesMethod::OffsetBothSides", (int64)EOffsetClosedCurvesMethod::OffsetBothSides },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enum_MetaDataParams[] = {
		{ "DoNotOffset.Name", "EOffsetClosedCurvesMethod::DoNotOffset" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "OffsetBothSides.Name", "EOffsetClosedCurvesMethod::OffsetBothSides" },
		{ "OffsetOuterSide.Name", "EOffsetClosedCurvesMethod::OffsetOuterSide" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EOffsetClosedCurvesMethod",
		"EOffsetClosedCurvesMethod",
		Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod()
	{
		if (!Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod;
	static UEnum* EOffsetOpenCurvesMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOffsetOpenCurvesMethod"));
		}
		return Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetOpenCurvesMethod>()
	{
		return EOffsetOpenCurvesMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enumerators[] = {
		{ "EOffsetOpenCurvesMethod::TreatAsClosed", (int64)EOffsetOpenCurvesMethod::TreatAsClosed },
		{ "EOffsetOpenCurvesMethod::Offset", (int64)EOffsetOpenCurvesMethod::Offset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Offset.Name", "EOffsetOpenCurvesMethod::Offset" },
		{ "TreatAsClosed.Name", "EOffsetOpenCurvesMethod::TreatAsClosed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EOffsetOpenCurvesMethod",
		"EOffsetOpenCurvesMethod",
		Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod()
	{
		if (!Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetJoinMethod;
	static UEnum* EOffsetJoinMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetJoinMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetJoinMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOffsetJoinMethod"));
		}
		return Z_Registration_Info_UEnum_EOffsetJoinMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetJoinMethod>()
	{
		return EOffsetJoinMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enumerators[] = {
		{ "EOffsetJoinMethod::Square", (int64)EOffsetJoinMethod::Square },
		{ "EOffsetJoinMethod::Miter", (int64)EOffsetJoinMethod::Miter },
		{ "EOffsetJoinMethod::Round", (int64)EOffsetJoinMethod::Round },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enum_MetaDataParams[] = {
		{ "Miter.Name", "EOffsetJoinMethod::Miter" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Round.Name", "EOffsetJoinMethod::Round" },
		{ "Square.Name", "EOffsetJoinMethod::Square" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EOffsetJoinMethod",
		"EOffsetJoinMethod",
		Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod()
	{
		if (!Z_Registration_Info_UEnum_EOffsetJoinMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetJoinMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetJoinMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenCurveEndShapes;
	static UEnum* EOpenCurveEndShapes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpenCurveEndShapes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpenCurveEndShapes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOpenCurveEndShapes"));
		}
		return Z_Registration_Info_UEnum_EOpenCurveEndShapes.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOpenCurveEndShapes>()
	{
		return EOpenCurveEndShapes_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enumerators[] = {
		{ "EOpenCurveEndShapes::Square", (int64)EOpenCurveEndShapes::Square },
		{ "EOpenCurveEndShapes::Round", (int64)EOpenCurveEndShapes::Round },
		{ "EOpenCurveEndShapes::Butt", (int64)EOpenCurveEndShapes::Butt },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enum_MetaDataParams[] = {
		{ "Butt.Name", "EOpenCurveEndShapes::Butt" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Round.Name", "EOpenCurveEndShapes::Round" },
		{ "Square.Name", "EOpenCurveEndShapes::Square" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EOpenCurveEndShapes",
		"EOpenCurveEndShapes",
		Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes()
	{
		if (!Z_Registration_Info_UEnum_EOpenCurveEndShapes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenCurveEndShapes.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpenCurveEndShapes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics::EnumInfo[] = {
		{ EFlattenCurveMethod_StaticEnum, TEXT("EFlattenCurveMethod"), &Z_Registration_Info_UEnum_EFlattenCurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3616640731U) },
		{ ECombineCurvesMethod_StaticEnum, TEXT("ECombineCurvesMethod"), &Z_Registration_Info_UEnum_ECombineCurvesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2747145132U) },
		{ EOffsetClosedCurvesMethod_StaticEnum, TEXT("EOffsetClosedCurvesMethod"), &Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3689371341U) },
		{ EOffsetOpenCurvesMethod_StaticEnum, TEXT("EOffsetOpenCurvesMethod"), &Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3083150027U) },
		{ EOffsetJoinMethod_StaticEnum, TEXT("EOffsetJoinMethod"), &Z_Registration_Info_UEnum_EOffsetJoinMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3794167088U) },
		{ EOpenCurveEndShapes_StaticEnum, TEXT("EOpenCurveEndShapes"), &Z_Registration_Info_UEnum_EOpenCurveEndShapes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1638066377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_2282462114(TEXT("/Script/ModelingOperators"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

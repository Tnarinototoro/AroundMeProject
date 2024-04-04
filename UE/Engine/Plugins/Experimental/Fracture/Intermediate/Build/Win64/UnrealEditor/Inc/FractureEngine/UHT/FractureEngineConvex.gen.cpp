// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureEngineConvex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEngineConvex() {}
// Cross Module References
	FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod();
	UPackage* Z_Construct_UPackage__Script_FractureEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvexHullSimplifyMethod;
	static UEnum* EConvexHullSimplifyMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod, (UObject*)Z_Construct_UPackage__Script_FractureEngine(), TEXT("EConvexHullSimplifyMethod"));
		}
		return Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.OuterSingleton;
	}
	template<> FRACTUREENGINE_API UEnum* StaticEnum<EConvexHullSimplifyMethod>()
	{
		return EConvexHullSimplifyMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::Enumerators[] = {
		{ "EConvexHullSimplifyMethod::MeshQSlim", (int64)EConvexHullSimplifyMethod::MeshQSlim },
		{ "EConvexHullSimplifyMethod::AngleTolerance", (int64)EConvexHullSimplifyMethod::AngleTolerance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::Enum_MetaDataParams[] = {
		{ "AngleTolerance.Name", "EConvexHullSimplifyMethod::AngleTolerance" },
		{ "MeshQSlim.Name", "EConvexHullSimplifyMethod::MeshQSlim" },
		{ "ModuleRelativePath", "Public/FractureEngineConvex.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEngine,
		nullptr,
		"EConvexHullSimplifyMethod",
		"EConvexHullSimplifyMethod",
		Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod()
	{
		if (!Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.InnerSingleton, Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConvexHullSimplifyMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h_Statics::EnumInfo[] = {
		{ EConvexHullSimplifyMethod_StaticEnum, TEXT("EConvexHullSimplifyMethod"), &Z_Registration_Info_UEnum_EConvexHullSimplifyMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 957807357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h_1510707345(TEXT("/Script/FractureEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Fracture_Source_FractureEngine_Public_FractureEngineConvex_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshRepairFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshRepairFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions;
class UScriptStruct* FGeometryScriptWeldEdgesOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptWeldEdgesOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptWeldEdgesOptions>()
{
	return FGeometryScriptWeldEdgesOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUniquePairs_MetaData[];
#endif
		static void NewProp_bOnlyUniquePairs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUniquePairs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptWeldEdgesOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Edges are coincident if both pairs of endpoint vertices, and their midpoint, are closer than this distance */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "Edges are coincident if both pairs of endpoint vertices, and their midpoint, are closer than this distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptWeldEdgesOptions, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_Tolerance_MetaData), Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_Tolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Only merge unambiguous pairs that have unique duplicate-edge matches */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "Only merge unambiguous pairs that have unique duplicate-edge matches" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs_SetBit(void* Obj)
	{
		((FGeometryScriptWeldEdgesOptions*)Obj)->bOnlyUniquePairs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs = { "bOnlyUniquePairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryScriptWeldEdgesOptions), &Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs_MetaData), Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewProp_bOnlyUniquePairs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptWeldEdgesOptions",
		Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::PropPointers),
		sizeof(FGeometryScriptWeldEdgesOptions),
		alignof(FGeometryScriptWeldEdgesOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions;
class UScriptStruct* FGeometryScriptResolveTJunctionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptResolveTJunctionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptResolveTJunctionOptions>()
{
	return FGeometryScriptResolveTJunctionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptResolveTJunctionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptResolveTJunctionOptions, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewProp_Tolerance_MetaData), Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewProp_Tolerance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewProp_Tolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptResolveTJunctionOptions",
		Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::PropPointers),
		sizeof(FGeometryScriptResolveTJunctionOptions),
		alignof(FGeometryScriptResolveTJunctionOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod;
	static UEnum* EGeometryScriptFillHolesMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptFillHolesMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptFillHolesMethod>()
	{
		return EGeometryScriptFillHolesMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::Enumerators[] = {
		{ "EGeometryScriptFillHolesMethod::Automatic", (int64)EGeometryScriptFillHolesMethod::Automatic },
		{ "EGeometryScriptFillHolesMethod::MinimalFill", (int64)EGeometryScriptFillHolesMethod::MinimalFill },
		{ "EGeometryScriptFillHolesMethod::PolygonTriangulation", (int64)EGeometryScriptFillHolesMethod::PolygonTriangulation },
		{ "EGeometryScriptFillHolesMethod::TriangleFan", (int64)EGeometryScriptFillHolesMethod::TriangleFan },
		{ "EGeometryScriptFillHolesMethod::PlanarProjection", (int64)EGeometryScriptFillHolesMethod::PlanarProjection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::Enum_MetaDataParams[] = {
		{ "Automatic.Name", "EGeometryScriptFillHolesMethod::Automatic" },
		{ "BlueprintType", "true" },
		{ "MinimalFill.Name", "EGeometryScriptFillHolesMethod::MinimalFill" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "PlanarProjection.Name", "EGeometryScriptFillHolesMethod::PlanarProjection" },
		{ "PolygonTriangulation.Name", "EGeometryScriptFillHolesMethod::PolygonTriangulation" },
		{ "TriangleFan.Name", "EGeometryScriptFillHolesMethod::TriangleFan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptFillHolesMethod",
		"EGeometryScriptFillHolesMethod",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions;
class UScriptStruct* FGeometryScriptFillHolesOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptFillHolesOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptFillHolesOptions>()
{
	return FGeometryScriptFillHolesOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FillMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FillMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteIsolatedTriangles_MetaData[];
#endif
		static void NewProp_bDeleteIsolatedTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteIsolatedTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptFillHolesOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod = { "FillMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptFillHolesOptions, FillMethod), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptFillHolesMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod_MetaData), Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod_MetaData) }; // 2962151726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Delete floating, disconnected triangles, as they produce a \"hole\" that cannot be filled */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "Delete floating, disconnected triangles, as they produce a \"hole\" that cannot be filled" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles_SetBit(void* Obj)
	{
		((FGeometryScriptFillHolesOptions*)Obj)->bDeleteIsolatedTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles = { "bDeleteIsolatedTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryScriptFillHolesOptions), &Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles_MetaData), Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_FillMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewProp_bDeleteIsolatedTriangles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptFillHolesOptions",
		Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::PropPointers),
		sizeof(FGeometryScriptFillHolesOptions),
		alignof(FGeometryScriptFillHolesOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions;
class UScriptStruct* FGeometryScriptRemoveSmallComponentOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRemoveSmallComponentOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRemoveSmallComponentOptions>()
{
	return FGeometryScriptRemoveSmallComponentOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinTriangleCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRemoveSmallComponentOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveSmallComponentOptions, MinVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinVolume_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinArea_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinArea = { "MinArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveSmallComponentOptions, MinArea), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinArea_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinTriangleCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinTriangleCount = { "MinTriangleCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveSmallComponentOptions, MinTriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinTriangleCount_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinTriangleCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewProp_MinTriangleCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRemoveSmallComponentOptions",
		Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::PropPointers),
		sizeof(FGeometryScriptRemoveSmallComponentOptions),
		alignof(FGeometryScriptRemoveSmallComponentOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod;
	static UEnum* EGeometryScriptRemoveHiddenTrianglesMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptRemoveHiddenTrianglesMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemoveHiddenTrianglesMethod>()
	{
		return EGeometryScriptRemoveHiddenTrianglesMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::Enumerators[] = {
		{ "EGeometryScriptRemoveHiddenTrianglesMethod::FastWindingNumber", (int64)EGeometryScriptRemoveHiddenTrianglesMethod::FastWindingNumber },
		{ "EGeometryScriptRemoveHiddenTrianglesMethod::RaycastOcclusionTest", (int64)EGeometryScriptRemoveHiddenTrianglesMethod::RaycastOcclusionTest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FastWindingNumber.Name", "EGeometryScriptRemoveHiddenTrianglesMethod::FastWindingNumber" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "RaycastOcclusionTest.Name", "EGeometryScriptRemoveHiddenTrianglesMethod::RaycastOcclusionTest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptRemoveHiddenTrianglesMethod",
		"EGeometryScriptRemoveHiddenTrianglesMethod",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions;
class UScriptStruct* FGeometryScriptRemoveHiddenTrianglesOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptRemoveHiddenTrianglesOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptRemoveHiddenTrianglesOptions>()
{
	return FGeometryScriptRemoveHiddenTrianglesOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerTriangle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerTriangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkSelection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShrinkSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingIsoValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingIsoValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaysPerSample_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RaysPerSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompactResult_MetaData[];
#endif
		static void NewProp_bCompactResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptRemoveHiddenTrianglesOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveHiddenTrianglesOptions, Method), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRemoveHiddenTrianglesMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method_MetaData) }; // 3952359980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_SamplesPerTriangle_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// add triangle samples per triangle (in addition to TriangleSamplingMethod)\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "add triangle samples per triangle (in addition to TriangleSamplingMethod)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_SamplesPerTriangle = { "SamplesPerTriangle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveHiddenTrianglesOptions, SamplesPerTriangle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_SamplesPerTriangle_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_SamplesPerTriangle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_ShrinkSelection_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// once triangles to remove are identified, do iterations of boundary erosion, ie contract selection by boundary vertex one-rings\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "once triangles to remove are identified, do iterations of boundary erosion, ie contract selection by boundary vertex one-rings" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_ShrinkSelection = { "ShrinkSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveHiddenTrianglesOptions, ShrinkSelection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_ShrinkSelection_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_ShrinkSelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_WindingIsoValue_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// use this as winding isovalue for WindingNumber mode\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "use this as winding isovalue for WindingNumber mode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_WindingIsoValue = { "WindingIsoValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveHiddenTrianglesOptions, WindingIsoValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_WindingIsoValue_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_WindingIsoValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_RaysPerSample_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// random rays to add beyond +/- major axes, for raycast sampling\n" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "random rays to add beyond +/- major axes, for raycast sampling" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_RaysPerSample = { "RaysPerSample", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveHiddenTrianglesOptions, RaysPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_RaysPerSample_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_RaysPerSample_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_NormalOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Nudge sample points out by this amount to try to counteract numerical issues */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ToolTip", "Nudge sample points out by this amount to try to counteract numerical issues" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_NormalOffset = { "NormalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptRemoveHiddenTrianglesOptions, NormalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_NormalOffset_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_NormalOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult_SetBit(void* Obj)
	{
		((FGeometryScriptRemoveHiddenTrianglesOptions*)Obj)->bCompactResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult = { "bCompactResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryScriptRemoveHiddenTrianglesOptions), &Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult_MetaData), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_SamplesPerTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_ShrinkSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_WindingIsoValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_RaysPerSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_NormalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewProp_bCompactResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptRemoveHiddenTrianglesOptions",
		Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::PropPointers),
		sizeof(FGeometryScriptRemoveHiddenTrianglesOptions),
		alignof(FGeometryScriptRemoveHiddenTrianglesOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode;
	static UEnum* EGeometryScriptRepairMeshMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptRepairMeshMode"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRepairMeshMode>()
	{
		return EGeometryScriptRepairMeshMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::Enumerators[] = {
		{ "EGeometryScriptRepairMeshMode::DeleteOnly", (int64)EGeometryScriptRepairMeshMode::DeleteOnly },
		{ "EGeometryScriptRepairMeshMode::RepairOrDelete", (int64)EGeometryScriptRepairMeshMode::RepairOrDelete },
		{ "EGeometryScriptRepairMeshMode::RepairOrSkip", (int64)EGeometryScriptRepairMeshMode::RepairOrSkip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DeleteOnly.Name", "EGeometryScriptRepairMeshMode::DeleteOnly" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "RepairOrDelete.Name", "EGeometryScriptRepairMeshMode::RepairOrDelete" },
		{ "RepairOrSkip.Name", "EGeometryScriptRepairMeshMode::RepairOrSkip" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptRepairMeshMode",
		"EGeometryScriptRepairMeshMode",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions;
class UScriptStruct* FGeometryScriptDegenerateTriangleOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptDegenerateTriangleOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptDegenerateTriangleOptions>()
{
	return FGeometryScriptDegenerateTriangleOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTriangleArea_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinTriangleArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompactOnCompletion_MetaData[];
#endif
		static void NewProp_bCompactOnCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactOnCompletion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptDegenerateTriangleOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptDegenerateTriangleOptions, Mode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptRepairMeshMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode_MetaData), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode_MetaData) }; // 2962952874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinTriangleArea_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinTriangleArea = { "MinTriangleArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptDegenerateTriangleOptions, MinTriangleArea), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinTriangleArea_MetaData), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinTriangleArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinEdgeLength_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinEdgeLength = { "MinEdgeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptDegenerateTriangleOptions, MinEdgeLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinEdgeLength_MetaData), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinEdgeLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion_SetBit(void* Obj)
	{
		((FGeometryScriptDegenerateTriangleOptions*)Obj)->bCompactOnCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion = { "bCompactOnCompletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryScriptDegenerateTriangleOptions), &Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion_MetaData), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinTriangleArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_MinEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewProp_bCompactOnCompletion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptDegenerateTriangleOptions",
		Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::PropPointers),
		sizeof(FGeometryScriptDegenerateTriangleOptions),
		alignof(FGeometryScriptDegenerateTriangleOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execRepairMeshDegenerateGeometry)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptDegenerateTriangleOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execSplitMeshBowties)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL(Z_Param_bMeshBowties);
		P_GET_UBOOL(Z_Param_bAttributeBowties);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties(Z_Param_TargetMesh,Z_Param_bMeshBowties,Z_Param_bAttributeBowties,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execRemoveHiddenTriangles)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptRemoveHiddenTrianglesOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execRemoveSmallComponents)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptRemoveSmallComponentOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents(Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execFillAllMeshHoles)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptFillHolesOptions,Z_Param_FillOptions);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumFilledHoles);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumFailedHoleFills);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles(Z_Param_TargetMesh,Z_Param_FillOptions,Z_Param_Out_NumFilledHoles,Z_Param_Out_NumFailedHoleFills,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execWeldMeshEdges)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptWeldEdgesOptions,Z_Param_WeldOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges(Z_Param_TargetMesh,Z_Param_WeldOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execResolveMeshTJunctions)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptResolveTJunctionOptions,Z_Param_ResolveOptions);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions(Z_Param_TargetMesh,Z_Param_ResolveOptions,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshRepairFunctions::execCompactMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshRepairFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshRepairFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompactMesh", &UGeometryScriptLibrary_MeshRepairFunctions::execCompactMesh },
			{ "FillAllMeshHoles", &UGeometryScriptLibrary_MeshRepairFunctions::execFillAllMeshHoles },
			{ "RemoveHiddenTriangles", &UGeometryScriptLibrary_MeshRepairFunctions::execRemoveHiddenTriangles },
			{ "RemoveSmallComponents", &UGeometryScriptLibrary_MeshRepairFunctions::execRemoveSmallComponents },
			{ "RepairMeshDegenerateGeometry", &UGeometryScriptLibrary_MeshRepairFunctions::execRepairMeshDegenerateGeometry },
			{ "ResolveMeshTJunctions", &UGeometryScriptLibrary_MeshRepairFunctions::execResolveMeshTJunctions },
			{ "SplitMeshBowties", &UGeometryScriptLibrary_MeshRepairFunctions::execSplitMeshBowties },
			{ "WeldMeshEdges", &UGeometryScriptLibrary_MeshRepairFunctions::execWeldMeshEdges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventCompactMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventCompactMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventCompactMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventCompactMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Compacts the mesh's vertices and triangles to remove any \"holes\" in the Vertex ID or Triangle ID lists.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compacts the mesh's vertices and triangles to remove any \"holes\" in the Vertex ID or Triangle ID lists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "CompactMesh", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventCompactMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventCompactMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptFillHolesOptions FillOptions;
			int32 NumFilledHoles;
			int32 NumFailedHoleFills;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFilledHoles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFailedHoleFills;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_FillOptions = { "FillOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms, FillOptions), Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions, METADATA_PARAMS(0, nullptr) }; // 3213985895
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_NumFilledHoles = { "NumFilledHoles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms, NumFilledHoles), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_NumFailedHoleFills = { "NumFailedHoleFills", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms, NumFailedHoleFills), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_FillOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_NumFilledHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_NumFailedHoleFills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Tries to fill all open boundary loops (such as holes in the geometry surface) of a mesh.\n\x09* @param FillOptions specifies the method used to fill the holes.\n\x09* @param NumFilledHoles reports the number of holes filled by the function.\n\x09* @param NumFailedHolesFills reports the detected holes that were unable to be filled.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Tries to fill all open boundary loops (such as holes in the geometry surface) of a mesh.\n@param FillOptions specifies the method used to fill the holes.\n@param NumFilledHoles reports the number of holes filled by the function.\n@param NumFailedHolesFills reports the detected holes that were unable to be filled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "FillAllMeshHoles", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventFillAllMeshHoles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptRemoveHiddenTrianglesOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions, METADATA_PARAMS(0, nullptr) }; // 2888695048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Removes any triangles in the mesh that are not visible from the exterior view, under various definitions of \"visible\" and \"outside\"\n\x09* as specified by the Options.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes any triangles in the mesh that are not visible from the exterior view, under various definitions of \"visible\" and \"outside\"\nas specified by the Options." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "RemoveHiddenTriangles", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventRemoveHiddenTriangles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptRemoveSmallComponentOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions, METADATA_PARAMS(0, nullptr) }; // 2089469883
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/*\n\x09* Removes connected components of the mesh that have a volume, area, or triangle count below a threshold as specified by the Options.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Removes connected components of the mesh that have a volume, area, or triangle count below a threshold as specified by the Options." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "RemoveSmallComponents", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventRemoveSmallComponents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptDegenerateTriangleOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions, METADATA_PARAMS(0, nullptr) }; // 2911763745
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Removes triangles that have area or edge length below specified amounts depending on the Options requested.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes triangles that have area or edge length below specified amounts depending on the Options requested." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "RepairMeshDegenerateGeometry", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventRepairMeshDegenerateGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptResolveTJunctionOptions ResolveOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolveOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ResolveOptions = { "ResolveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms, ResolveOptions), Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions, METADATA_PARAMS(0, nullptr) }; // 1244746916
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ResolveOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Attempts to resolve T-Junctions in the mesh by addition of vertices and welding.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempts to resolve T-Junctions in the mesh by addition of vertices and welding." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "ResolveMeshTJunctions", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventResolveMeshTJunctions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bMeshBowties;
			bool bAttributeBowties;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bMeshBowties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshBowties;
		static void NewProp_bAttributeBowties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttributeBowties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bMeshBowties_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms*)Obj)->bMeshBowties = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bMeshBowties = { "bMeshBowties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bMeshBowties_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bAttributeBowties_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms*)Obj)->bAttributeBowties = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bAttributeBowties = { "bAttributeBowties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bAttributeBowties_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bMeshBowties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_bAttributeBowties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Splits Bowties in the mesh and/or the attributes.  A Bowtie is formed when a single vertex is connected to more than two boundary edges, \n\x09* and splitting duplicates the shared vertex so each triangle will have a unique copy.\n\x09*/" },
		{ "CPP_Default_bAttributeBowties", "true" },
		{ "CPP_Default_bMeshBowties", "true" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Splits Bowties in the mesh and/or the attributes.  A Bowtie is formed when a single vertex is connected to more than two boundary edges,\nand splitting duplicates the shared vertex so each triangle will have a unique copy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "SplitMeshBowties", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventSplitMeshBowties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics
	{
		struct GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptWeldEdgesOptions WeldOptions;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeldOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_WeldOptions = { "WeldOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms, WeldOptions), Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions, METADATA_PARAMS(0, nullptr) }; // 3857555013
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_WeldOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Repair" },
		{ "Comment", "/**\n\x09* Welds any open boundary edges of the mesh together if possible in order to remove \"cracks.\"\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Welds any open boundary edges of the mesh together if possible in order to remove \"cracks.\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, nullptr, "WeldMeshEdges", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::GeometryScriptLibrary_MeshRepairFunctions_eventWeldMeshEdges_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshRepairFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshRepairFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh, "CompactMesh" }, // 653717309
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles, "FillAllMeshHoles" }, // 752715244
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles, "RemoveHiddenTriangles" }, // 3029526045
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents, "RemoveSmallComponents" }, // 1341413892
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry, "RepairMeshDegenerateGeometry" }, // 2775531820
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions, "ResolveMeshTJunctions" }, // 2719400846
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties, "SplitMeshBowties" }, // 3217927633
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges, "WeldMeshEdges" }, // 2458688642
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshRepairFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshRepairFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshRepair" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshRepairFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshRepairFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshRepairFunctions>()
	{
		return UGeometryScriptLibrary_MeshRepairFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshRepairFunctions::UGeometryScriptLibrary_MeshRepairFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshRepairFunctions);
	UGeometryScriptLibrary_MeshRepairFunctions::~UGeometryScriptLibrary_MeshRepairFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptFillHolesMethod_StaticEnum, TEXT("EGeometryScriptFillHolesMethod"), &Z_Registration_Info_UEnum_EGeometryScriptFillHolesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2962151726U) },
		{ EGeometryScriptRemoveHiddenTrianglesMethod_StaticEnum, TEXT("EGeometryScriptRemoveHiddenTrianglesMethod"), &Z_Registration_Info_UEnum_EGeometryScriptRemoveHiddenTrianglesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3952359980U) },
		{ EGeometryScriptRepairMeshMode_StaticEnum, TEXT("EGeometryScriptRepairMeshMode"), &Z_Registration_Info_UEnum_EGeometryScriptRepairMeshMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2962952874U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptWeldEdgesOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics::NewStructOps, TEXT("GeometryScriptWeldEdgesOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptWeldEdgesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptWeldEdgesOptions), 3857555013U) },
		{ FGeometryScriptResolveTJunctionOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics::NewStructOps, TEXT("GeometryScriptResolveTJunctionOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptResolveTJunctionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptResolveTJunctionOptions), 1244746916U) },
		{ FGeometryScriptFillHolesOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics::NewStructOps, TEXT("GeometryScriptFillHolesOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptFillHolesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptFillHolesOptions), 3213985895U) },
		{ FGeometryScriptRemoveSmallComponentOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics::NewStructOps, TEXT("GeometryScriptRemoveSmallComponentOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptRemoveSmallComponentOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRemoveSmallComponentOptions), 2089469883U) },
		{ FGeometryScriptRemoveHiddenTrianglesOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics::NewStructOps, TEXT("GeometryScriptRemoveHiddenTrianglesOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptRemoveHiddenTrianglesOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptRemoveHiddenTrianglesOptions), 2888695048U) },
		{ FGeometryScriptDegenerateTriangleOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics::NewStructOps, TEXT("GeometryScriptDegenerateTriangleOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptDegenerateTriangleOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptDegenerateTriangleOptions), 2911763745U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions, UGeometryScriptLibrary_MeshRepairFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshRepairFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshRepairFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshRepairFunctions), 2426774966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_2781244017(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

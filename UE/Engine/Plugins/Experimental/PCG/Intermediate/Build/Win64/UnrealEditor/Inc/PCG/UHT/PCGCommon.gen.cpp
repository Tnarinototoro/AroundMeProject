// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCommon() {}
// Cross Module References
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttachOptions();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGChangeType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGDataType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGExclusiveDataType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGHiGenGrid();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGChangeType;
	static UEnum* EPCGChangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGChangeType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGChangeType"));
		}
		return Z_Registration_Info_UEnum_EPCGChangeType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGChangeType>()
	{
		return EPCGChangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGChangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enumerators[] = {
		{ "EPCGChangeType::None", (int64)EPCGChangeType::None },
		{ "EPCGChangeType::Cosmetic", (int64)EPCGChangeType::Cosmetic },
		{ "EPCGChangeType::Settings", (int64)EPCGChangeType::Settings },
		{ "EPCGChangeType::Input", (int64)EPCGChangeType::Input },
		{ "EPCGChangeType::Edge", (int64)EPCGChangeType::Edge },
		{ "EPCGChangeType::Node", (int64)EPCGChangeType::Node },
		{ "EPCGChangeType::Structural", (int64)EPCGChangeType::Structural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Cosmetic.Name", "EPCGChangeType::Cosmetic" },
		{ "Edge.Name", "EPCGChangeType::Edge" },
		{ "Input.Name", "EPCGChangeType::Input" },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "Node.Name", "EPCGChangeType::Node" },
		{ "None.Name", "EPCGChangeType::None" },
		{ "Settings.Name", "EPCGChangeType::Settings" },
		{ "Structural.Name", "EPCGChangeType::Structural" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGChangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGChangeType",
		"EPCGChangeType",
		Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGChangeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGChangeType()
	{
		if (!Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGChangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGChangeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDataType;
	static UEnum* EPCGDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGDataType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGDataType"));
		}
		return Z_Registration_Info_UEnum_EPCGDataType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGDataType>()
	{
		return EPCGDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enumerators[] = {
		{ "EPCGDataType::None", (int64)EPCGDataType::None },
		{ "EPCGDataType::Point", (int64)EPCGDataType::Point },
		{ "EPCGDataType::Spline", (int64)EPCGDataType::Spline },
		{ "EPCGDataType::LandscapeSpline", (int64)EPCGDataType::LandscapeSpline },
		{ "EPCGDataType::PolyLine", (int64)EPCGDataType::PolyLine },
		{ "EPCGDataType::Landscape", (int64)EPCGDataType::Landscape },
		{ "EPCGDataType::Texture", (int64)EPCGDataType::Texture },
		{ "EPCGDataType::RenderTarget", (int64)EPCGDataType::RenderTarget },
		{ "EPCGDataType::BaseTexture", (int64)EPCGDataType::BaseTexture },
		{ "EPCGDataType::Surface", (int64)EPCGDataType::Surface },
		{ "EPCGDataType::Volume", (int64)EPCGDataType::Volume },
		{ "EPCGDataType::Primitive", (int64)EPCGDataType::Primitive },
		{ "EPCGDataType::Concrete", (int64)EPCGDataType::Concrete },
		{ "EPCGDataType::Composite", (int64)EPCGDataType::Composite },
		{ "EPCGDataType::Spatial", (int64)EPCGDataType::Spatial },
		{ "EPCGDataType::Param", (int64)EPCGDataType::Param },
		{ "EPCGDataType::Settings", (int64)EPCGDataType::Settings },
		{ "EPCGDataType::Other", (int64)EPCGDataType::Other },
		{ "EPCGDataType::Any", (int64)EPCGDataType::Any },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "EPCGDataType::Any" },
		{ "BaseTexture.Hidden", "" },
		{ "BaseTexture.Name", "EPCGDataType::BaseTexture" },
		{ "Bitflags", "" },
		{ "Comment", "// Bitmask containing the various data types supported in PCG. Note that this enum cannot be a blueprint type because\n// enums have to be uint8 for blueprint, and we already use more than 8 bits in the bitmask.\n// This is why we have a parallel enum just below that must match on a name basis 1:1 to allow the make/break functions to work properly\n// in blueprint.\n" },
		{ "Composite.Comment", "/** Boolean operations like union, difference, intersection. */" },
		{ "Composite.Hidden", "" },
		{ "Composite.Name", "EPCGDataType::Composite" },
		{ "Composite.ToolTip", "Boolean operations like union, difference, intersection." },
		{ "Concrete.Comment", "/** Simple concrete data. */" },
		{ "Concrete.Name", "EPCGDataType::Concrete" },
		{ "Concrete.ToolTip", "Simple concrete data." },
		{ "Landscape.Name", "EPCGDataType::Landscape" },
		{ "LandscapeSpline.Name", "EPCGDataType::LandscapeSpline" },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGDataType::None" },
		{ "Other.Name", "EPCGDataType::Other" },
		{ "Param.DisplayName", "Attribute Set" },
		{ "Param.Name", "EPCGDataType::Param" },
		{ "Point.Name", "EPCGDataType::Point" },
		{ "PolyLine.DisplayName", "Curve" },
		{ "PolyLine.Name", "EPCGDataType::PolyLine" },
		{ "Primitive.Name", "EPCGDataType::Primitive" },
		{ "RenderTarget.Name", "EPCGDataType::RenderTarget" },
		{ "Settings.Hidden", "" },
		{ "Settings.Name", "EPCGDataType::Settings" },
		{ "Spatial.Comment", "/** Combinations of concrete data and/or boolean operations. */" },
		{ "Spatial.Name", "EPCGDataType::Spatial" },
		{ "Spatial.ToolTip", "Combinations of concrete data and/or boolean operations." },
		{ "Spline.Name", "EPCGDataType::Spline" },
		{ "Surface.Name", "EPCGDataType::Surface" },
		{ "Texture.Name", "EPCGDataType::Texture" },
		{ "ToolTip", "Bitmask containing the various data types supported in PCG. Note that this enum cannot be a blueprint type because\nenums have to be uint8 for blueprint, and we already use more than 8 bits in the bitmask.\nThis is why we have a parallel enum just below that must match on a name basis 1:1 to allow the make/break functions to work properly\nin blueprint." },
		{ "Volume.Name", "EPCGDataType::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGDataType",
		"EPCGDataType",
		Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGDataType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGDataType()
	{
		if (!Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDataType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExclusiveDataType;
	static UEnum* EPCGExclusiveDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExclusiveDataType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGExclusiveDataType"));
		}
		return Z_Registration_Info_UEnum_EPCGExclusiveDataType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGExclusiveDataType>()
	{
		return EPCGExclusiveDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::Enumerators[] = {
		{ "EPCGExclusiveDataType::None", (int64)EPCGExclusiveDataType::None },
		{ "EPCGExclusiveDataType::Point", (int64)EPCGExclusiveDataType::Point },
		{ "EPCGExclusiveDataType::Spline", (int64)EPCGExclusiveDataType::Spline },
		{ "EPCGExclusiveDataType::LandscapeSpline", (int64)EPCGExclusiveDataType::LandscapeSpline },
		{ "EPCGExclusiveDataType::PolyLine", (int64)EPCGExclusiveDataType::PolyLine },
		{ "EPCGExclusiveDataType::Landscape", (int64)EPCGExclusiveDataType::Landscape },
		{ "EPCGExclusiveDataType::Texture", (int64)EPCGExclusiveDataType::Texture },
		{ "EPCGExclusiveDataType::RenderTarget", (int64)EPCGExclusiveDataType::RenderTarget },
		{ "EPCGExclusiveDataType::BaseTexture", (int64)EPCGExclusiveDataType::BaseTexture },
		{ "EPCGExclusiveDataType::Surface", (int64)EPCGExclusiveDataType::Surface },
		{ "EPCGExclusiveDataType::Volume", (int64)EPCGExclusiveDataType::Volume },
		{ "EPCGExclusiveDataType::Primitive", (int64)EPCGExclusiveDataType::Primitive },
		{ "EPCGExclusiveDataType::Concrete", (int64)EPCGExclusiveDataType::Concrete },
		{ "EPCGExclusiveDataType::Composite", (int64)EPCGExclusiveDataType::Composite },
		{ "EPCGExclusiveDataType::Spatial", (int64)EPCGExclusiveDataType::Spatial },
		{ "EPCGExclusiveDataType::Param", (int64)EPCGExclusiveDataType::Param },
		{ "EPCGExclusiveDataType::Settings", (int64)EPCGExclusiveDataType::Settings },
		{ "EPCGExclusiveDataType::Other", (int64)EPCGExclusiveDataType::Other },
		{ "EPCGExclusiveDataType::Any", (int64)EPCGExclusiveDataType::Any },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "EPCGExclusiveDataType::Any" },
		{ "BaseTexture.Hidden", "" },
		{ "BaseTexture.Name", "EPCGExclusiveDataType::BaseTexture" },
		{ "BlueprintType", "true" },
		{ "Comment", "// As discussed just before, a parallel version for \"exclusive\" (as in only type) of the EPCGDataType enum. Needed for blueprint compatibility.\n" },
		{ "Composite.Hidden", "" },
		{ "Composite.Name", "EPCGExclusiveDataType::Composite" },
		{ "Concrete.Name", "EPCGExclusiveDataType::Concrete" },
		{ "DisplayName", "PCG Data Type" },
		{ "Landscape.Name", "EPCGExclusiveDataType::Landscape" },
		{ "LandscapeSpline.Name", "EPCGExclusiveDataType::LandscapeSpline" },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPCGExclusiveDataType::None" },
		{ "Other.Name", "EPCGExclusiveDataType::Other" },
		{ "Param.DisplayName", "Attribute Set" },
		{ "Param.Name", "EPCGExclusiveDataType::Param" },
		{ "Point.Name", "EPCGExclusiveDataType::Point" },
		{ "PolyLine.DisplayName", "Curve" },
		{ "PolyLine.Name", "EPCGExclusiveDataType::PolyLine" },
		{ "Primitive.Name", "EPCGExclusiveDataType::Primitive" },
		{ "RenderTarget.Name", "EPCGExclusiveDataType::RenderTarget" },
		{ "Settings.Hidden", "" },
		{ "Settings.Name", "EPCGExclusiveDataType::Settings" },
		{ "Spatial.Name", "EPCGExclusiveDataType::Spatial" },
		{ "Spline.Name", "EPCGExclusiveDataType::Spline" },
		{ "Surface.Name", "EPCGExclusiveDataType::Surface" },
		{ "Texture.Name", "EPCGExclusiveDataType::Texture" },
		{ "ToolTip", "As discussed just before, a parallel version for \"exclusive\" (as in only type) of the EPCGDataType enum. Needed for blueprint compatibility." },
		{ "Volume.Name", "EPCGExclusiveDataType::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGExclusiveDataType",
		"EPCGExclusiveDataType",
		Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGExclusiveDataType()
	{
		if (!Z_Registration_Info_UEnum_EPCGExclusiveDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExclusiveDataType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGExclusiveDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGExclusiveDataType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGHiGenGrid;
	static UEnum* EPCGHiGenGrid_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGHiGenGrid, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGHiGenGrid"));
		}
		return Z_Registration_Info_UEnum_EPCGHiGenGrid.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGHiGenGrid>()
	{
		return EPCGHiGenGrid_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::Enumerators[] = {
		{ "EPCGHiGenGrid::Uninitialized", (int64)EPCGHiGenGrid::Uninitialized },
		{ "EPCGHiGenGrid::Grid32", (int64)EPCGHiGenGrid::Grid32 },
		{ "EPCGHiGenGrid::Grid64", (int64)EPCGHiGenGrid::Grid64 },
		{ "EPCGHiGenGrid::Grid128", (int64)EPCGHiGenGrid::Grid128 },
		{ "EPCGHiGenGrid::Grid256", (int64)EPCGHiGenGrid::Grid256 },
		{ "EPCGHiGenGrid::Grid512", (int64)EPCGHiGenGrid::Grid512 },
		{ "EPCGHiGenGrid::Grid1024", (int64)EPCGHiGenGrid::Grid1024 },
		{ "EPCGHiGenGrid::Grid2048", (int64)EPCGHiGenGrid::Grid2048 },
		{ "EPCGHiGenGrid::GridMin", (int64)EPCGHiGenGrid::GridMin },
		{ "EPCGHiGenGrid::GridMax", (int64)EPCGHiGenGrid::GridMax },
		{ "EPCGHiGenGrid::Unbounded", (int64)EPCGHiGenGrid::Unbounded },
		{ "EPCGHiGenGrid::GenerationDefault", (int64)EPCGHiGenGrid::GenerationDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Comment", "/** Describes one or more target execution grids. */" },
		{ "GenerationDefault.Comment", "// Flag for grid not known yet. Represents the default grid size (which can be changed at runtime on PCGWorldActor)\n" },
		{ "GenerationDefault.Hidden", "" },
		{ "GenerationDefault.Name", "EPCGHiGenGrid::GenerationDefault" },
		{ "GenerationDefault.ToolTip", "Flag for grid not known yet. Represents the default grid size (which can be changed at runtime on PCGWorldActor)" },
		{ "Grid1024.DisplayName", "102400" },
		{ "Grid1024.Name", "EPCGHiGenGrid::Grid1024" },
		{ "Grid128.DisplayName", "12800" },
		{ "Grid128.Name", "EPCGHiGenGrid::Grid128" },
		{ "Grid2048.DisplayName", "204800" },
		{ "Grid2048.Name", "EPCGHiGenGrid::Grid2048" },
		{ "Grid256.DisplayName", "25600" },
		{ "Grid256.Name", "EPCGHiGenGrid::Grid256" },
		{ "Grid32.Comment", "// NOTE: When adding new grids, increment PCGHiGenGrid::NumGridValues below.\n" },
		{ "Grid32.DisplayName", "3200" },
		{ "Grid32.Name", "EPCGHiGenGrid::Grid32" },
		{ "Grid32.ToolTip", "NOTE: When adding new grids, increment PCGHiGenGrid::NumGridValues below." },
		{ "Grid512.DisplayName", "51200" },
		{ "Grid512.Name", "EPCGHiGenGrid::Grid512" },
		{ "Grid64.DisplayName", "6400" },
		{ "Grid64.Name", "EPCGHiGenGrid::Grid64" },
		{ "GridMax.Hidden", "" },
		{ "GridMax.Name", "EPCGHiGenGrid::GridMax" },
		{ "GridMin.Hidden", "" },
		{ "GridMin.Name", "EPCGHiGenGrid::GridMin" },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "ToolTip", "Describes one or more target execution grids." },
		{ "Unbounded.Comment", "// Should execute once rather than executing on any grid\n" },
		{ "Unbounded.Name", "EPCGHiGenGrid::Unbounded" },
		{ "Unbounded.ToolTip", "Should execute once rather than executing on any grid" },
		{ "Uninitialized.Hidden", "" },
		{ "Uninitialized.Name", "EPCGHiGenGrid::Uninitialized" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGHiGenGrid",
		"EPCGHiGenGrid",
		Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGHiGenGrid()
	{
		if (!Z_Registration_Info_UEnum_EPCGHiGenGrid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGHiGenGrid.InnerSingleton, Z_Construct_UEnum_PCG_EPCGHiGenGrid_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGHiGenGrid.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttachOptions;
	static UEnum* EPCGAttachOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttachOptions, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttachOptions"));
		}
		return Z_Registration_Info_UEnum_EPCGAttachOptions.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttachOptions>()
	{
		return EPCGAttachOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::Enumerators[] = {
		{ "EPCGAttachOptions::NotAttached", (int64)EPCGAttachOptions::NotAttached },
		{ "EPCGAttachOptions::Attached", (int64)EPCGAttachOptions::Attached },
		{ "EPCGAttachOptions::InFolder", (int64)EPCGAttachOptions::InFolder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::Enum_MetaDataParams[] = {
		{ "Attached.Name", "EPCGAttachOptions::Attached" },
		{ "Attached.Tooltip", "Actor will be attached to the target actor in the given node" },
		{ "InFolder.Name", "EPCGAttachOptions::InFolder" },
		{ "InFolder.Tooltip", "Actor will be placed in an actor folder containing the name of the target actor." },
		{ "ModuleRelativePath", "Public/PCGCommon.h" },
		{ "NotAttached.Name", "EPCGAttachOptions::NotAttached" },
		{ "NotAttached.Tooltip", "Actor will not be attached to the target actor nor placed in an actor folder" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttachOptions",
		"EPCGAttachOptions",
		Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttachOptions()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttachOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttachOptions.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttachOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttachOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGCommon_h_Statics::EnumInfo[] = {
		{ EPCGChangeType_StaticEnum, TEXT("EPCGChangeType"), &Z_Registration_Info_UEnum_EPCGChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2229467426U) },
		{ EPCGDataType_StaticEnum, TEXT("EPCGDataType"), &Z_Registration_Info_UEnum_EPCGDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3852861111U) },
		{ EPCGExclusiveDataType_StaticEnum, TEXT("EPCGExclusiveDataType"), &Z_Registration_Info_UEnum_EPCGExclusiveDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2341094698U) },
		{ EPCGHiGenGrid_StaticEnum, TEXT("EPCGHiGenGrid"), &Z_Registration_Info_UEnum_EPCGHiGenGrid, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1747751934U) },
		{ EPCGAttachOptions_StaticEnum, TEXT("EPCGAttachOptions"), &Z_Registration_Info_UEnum_EPCGAttachOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 227260305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGCommon_h_603752598(TEXT("/Script/PCG"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

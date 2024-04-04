// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Operations/SubdividePoly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubdividePoly() {}
// Cross Module References
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme();
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals();
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs();
	MODELINGCOMPONENTSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubdivisionScheme;
	static UEnum* ESubdivisionScheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionScheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubdivisionScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme, (UObject*)Z_Construct_UPackage__Script_ModelingComponentsEditorOnly(), TEXT("ESubdivisionScheme"));
		}
		return Z_Registration_Info_UEnum_ESubdivisionScheme.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionScheme>()
	{
		return ESubdivisionScheme_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::Enumerators[] = {
		{ "ESubdivisionScheme::Bilinear", (int64)ESubdivisionScheme::Bilinear },
		{ "ESubdivisionScheme::CatmullClark", (int64)ESubdivisionScheme::CatmullClark },
		{ "ESubdivisionScheme::Loop", (int64)ESubdivisionScheme::Loop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::Enum_MetaDataParams[] = {
		{ "Bilinear.Comment", "// Subdivides like Catmull-Clark, but does not smooth the result (i.e. the vertices remain\n// in their original planes).\n" },
		{ "Bilinear.Name", "ESubdivisionScheme::Bilinear" },
		{ "Bilinear.ToolTip", "Subdivides like Catmull-Clark, but does not smooth the result (i.e. the vertices remain\nin their original planes)." },
		{ "CatmullClark.Comment", "// Common subdivision scheme typically used with quad-dominant meshes. In our tools, it uses\n// the group topology to build a cage that serves as the starting point.\n" },
		{ "CatmullClark.DisplayName", "Catmull-Clark" },
		{ "CatmullClark.Name", "ESubdivisionScheme::CatmullClark" },
		{ "CatmullClark.ToolTip", "Common subdivision scheme typically used with quad-dominant meshes. In our tools, it uses\nthe group topology to build a cage that serves as the starting point." },
		{ "Comment", "/**\n * Subdivision scheme\n */" },
		{ "Loop.Comment", "// Subdivision scheme developed by Charles Loop that operates directly on triangle meshes, and\n// therefore does not use the group topology. \n" },
		{ "Loop.Name", "ESubdivisionScheme::Loop" },
		{ "Loop.ToolTip", "Subdivision scheme developed by Charles Loop that operates directly on triangle meshes, and\ntherefore does not use the group topology." },
		{ "ModuleRelativePath", "Public/Operations/SubdividePoly.h" },
		{ "ToolTip", "Subdivision scheme" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
		nullptr,
		"ESubdivisionScheme",
		"ESubdivisionScheme",
		Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionScheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubdivisionScheme.InnerSingleton, Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionScheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubdivisionScheme.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme;
	static UEnum* ESubdivisionBoundaryScheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme, (UObject*)Z_Construct_UPackage__Script_ModelingComponentsEditorOnly(), TEXT("ESubdivisionBoundaryScheme"));
		}
		return Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionBoundaryScheme>()
	{
		return ESubdivisionBoundaryScheme_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::Enumerators[] = {
		{ "ESubdivisionBoundaryScheme::SmoothCorners", (int64)ESubdivisionBoundaryScheme::SmoothCorners },
		{ "ESubdivisionBoundaryScheme::SharpCorners", (int64)ESubdivisionBoundaryScheme::SharpCorners },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Operations/SubdividePoly.h" },
		{ "SharpCorners.Comment", "// Corners with only one adjoining face are constrained to be passed through. For example, this\n// will keep the corners of a vertically deformed square patch sharp even as the rest of the patch\n// is vertically smoothed.\n" },
		{ "SharpCorners.Name", "ESubdivisionBoundaryScheme::SharpCorners" },
		{ "SharpCorners.ToolTip", "Corners with only one adjoining face are constrained to be passed through. For example, this\nwill keep the corners of a vertically deformed square patch sharp even as the rest of the patch\nis vertically smoothed." },
		{ "SmoothCorners.Comment", "// Corners with only one adjoining face are smoothed along with the rest of the mesh boundary. For\n// example, a square patch will have rounded corners.\n" },
		{ "SmoothCorners.Name", "ESubdivisionBoundaryScheme::SmoothCorners" },
		{ "SmoothCorners.ToolTip", "Corners with only one adjoining face are smoothed along with the rest of the mesh boundary. For\nexample, a square patch will have rounded corners." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
		nullptr,
		"ESubdivisionBoundaryScheme",
		"ESubdivisionBoundaryScheme",
		Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme.InnerSingleton, Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionBoundaryScheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubdivisionOutputNormals;
	static UEnum* ESubdivisionOutputNormals_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionOutputNormals.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubdivisionOutputNormals.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals, (UObject*)Z_Construct_UPackage__Script_ModelingComponentsEditorOnly(), TEXT("ESubdivisionOutputNormals"));
		}
		return Z_Registration_Info_UEnum_ESubdivisionOutputNormals.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionOutputNormals>()
	{
		return ESubdivisionOutputNormals_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::Enumerators[] = {
		{ "ESubdivisionOutputNormals::Interpolated", (int64)ESubdivisionOutputNormals::Interpolated },
		{ "ESubdivisionOutputNormals::Generated", (int64)ESubdivisionOutputNormals::Generated },
		{ "ESubdivisionOutputNormals::None", (int64)ESubdivisionOutputNormals::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Method for computing normals on the output mesh\n */" },
		{ "Generated.Comment", "// Recompute normals after subdivision\n" },
		{ "Generated.Name", "ESubdivisionOutputNormals::Generated" },
		{ "Generated.ToolTip", "Recompute normals after subdivision" },
		{ "Interpolated.Comment", "// Copy normals to poly mesh then interpolate to new triangles as we subdivide.\n" },
		{ "Interpolated.Name", "ESubdivisionOutputNormals::Interpolated" },
		{ "Interpolated.ToolTip", "Copy normals to poly mesh then interpolate to new triangles as we subdivide." },
		{ "ModuleRelativePath", "Public/Operations/SubdividePoly.h" },
		{ "None.Comment", "// Leave normals uninitialized on output mesh\n" },
		{ "None.Name", "ESubdivisionOutputNormals::None" },
		{ "None.ToolTip", "Leave normals uninitialized on output mesh" },
		{ "ToolTip", "Method for computing normals on the output mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
		nullptr,
		"ESubdivisionOutputNormals",
		"ESubdivisionOutputNormals",
		Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionOutputNormals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubdivisionOutputNormals.InnerSingleton, Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputNormals_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubdivisionOutputNormals.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubdivisionOutputUVs;
	static UEnum* ESubdivisionOutputUVs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionOutputUVs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubdivisionOutputUVs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs, (UObject*)Z_Construct_UPackage__Script_ModelingComponentsEditorOnly(), TEXT("ESubdivisionOutputUVs"));
		}
		return Z_Registration_Info_UEnum_ESubdivisionOutputUVs.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionOutputUVs>()
	{
		return ESubdivisionOutputUVs_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::Enumerators[] = {
		{ "ESubdivisionOutputUVs::Interpolated", (int64)ESubdivisionOutputUVs::Interpolated },
		{ "ESubdivisionOutputUVs::None", (int64)ESubdivisionOutputUVs::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Method for computing UVs on the output mesh\n */" },
		{ "Interpolated.Comment", "// Copy UVs to poly mesh vertices then interpolate as we subdivide.\n" },
		{ "Interpolated.Name", "ESubdivisionOutputUVs::Interpolated" },
		{ "Interpolated.ToolTip", "Copy UVs to poly mesh vertices then interpolate as we subdivide." },
		{ "ModuleRelativePath", "Public/Operations/SubdividePoly.h" },
		{ "None.Comment", "// Leave UVs uninitialized on output mesh\n" },
		{ "None.Name", "ESubdivisionOutputUVs::None" },
		{ "None.ToolTip", "Leave UVs uninitialized on output mesh" },
		{ "ToolTip", "Method for computing UVs on the output mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
		nullptr,
		"ESubdivisionOutputUVs",
		"ESubdivisionOutputUVs",
		Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs()
	{
		if (!Z_Registration_Info_UEnum_ESubdivisionOutputUVs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubdivisionOutputUVs.InnerSingleton, Z_Construct_UEnum_ModelingComponentsEditorOnly_ESubdivisionOutputUVs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubdivisionOutputUVs.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_Operations_SubdividePoly_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_Operations_SubdividePoly_h_Statics::EnumInfo[] = {
		{ ESubdivisionScheme_StaticEnum, TEXT("ESubdivisionScheme"), &Z_Registration_Info_UEnum_ESubdivisionScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1895305572U) },
		{ ESubdivisionBoundaryScheme_StaticEnum, TEXT("ESubdivisionBoundaryScheme"), &Z_Registration_Info_UEnum_ESubdivisionBoundaryScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2913008969U) },
		{ ESubdivisionOutputNormals_StaticEnum, TEXT("ESubdivisionOutputNormals"), &Z_Registration_Info_UEnum_ESubdivisionOutputNormals, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 373763196U) },
		{ ESubdivisionOutputUVs_StaticEnum, TEXT("ESubdivisionOutputUVs"), &Z_Registration_Info_UEnum_ESubdivisionOutputUVs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4158379390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_Operations_SubdividePoly_h_2978089501(TEXT("/Script/ModelingComponentsEditorOnly"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_Operations_SubdividePoly_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_Operations_SubdividePoly_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

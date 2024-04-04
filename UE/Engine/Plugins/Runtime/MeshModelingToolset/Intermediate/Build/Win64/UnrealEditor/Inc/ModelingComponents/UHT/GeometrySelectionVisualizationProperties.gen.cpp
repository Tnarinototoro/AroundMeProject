// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertySets/GeometrySelectionVisualizationProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySelectionVisualizationProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometrySelectionElementType;
	static UEnum* EGeometrySelectionElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometrySelectionElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometrySelectionElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EGeometrySelectionElementType"));
		}
		return Z_Registration_Info_UEnum_EGeometrySelectionElementType.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EGeometrySelectionElementType>()
	{
		return EGeometrySelectionElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::Enumerators[] = {
		{ "EGeometrySelectionElementType::Vertex", (int64)EGeometrySelectionElementType::Vertex },
		{ "EGeometrySelectionElementType::Edge", (int64)EGeometrySelectionElementType::Edge },
		{ "EGeometrySelectionElementType::Face", (int64)EGeometrySelectionElementType::Face },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//~Keep this synchronised with EGeometryElementType\n" },
		{ "Edge.Comment", "//~Keep this synchronised with EGeometryElementType\n" },
		{ "Edge.Name", "EGeometrySelectionElementType::Edge" },
		{ "Face.Comment", "//~Keep this synchronised with EGeometryElementType\n" },
		{ "Face.Name", "EGeometrySelectionElementType::Face" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "Vertex.Comment", "//~Keep this synchronised with EGeometryElementType\n" },
		{ "Vertex.Name", "EGeometrySelectionElementType::Vertex" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EGeometrySelectionElementType",
		"EGeometrySelectionElementType",
		Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType()
	{
		if (!Z_Registration_Info_UEnum_EGeometrySelectionElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometrySelectionElementType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometrySelectionElementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometrySelectionTopologyType;
	static UEnum* EGeometrySelectionTopologyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometrySelectionTopologyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometrySelectionTopologyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EGeometrySelectionTopologyType"));
		}
		return Z_Registration_Info_UEnum_EGeometrySelectionTopologyType.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EGeometrySelectionTopologyType>()
	{
		return EGeometrySelectionTopologyType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::Enumerators[] = {
		{ "EGeometrySelectionTopologyType::Triangle", (int64)EGeometrySelectionTopologyType::Triangle },
		{ "EGeometrySelectionTopologyType::Polygroup", (int64)EGeometrySelectionTopologyType::Polygroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//~Keep this synchronised with EGeometryTopologyType\n" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "Polygroup.Comment", "//~Keep this synchronised with EGeometryTopologyType\n" },
		{ "Polygroup.Name", "EGeometrySelectionTopologyType::Polygroup" },
		{ "Triangle.Comment", "//~Keep this synchronised with EGeometryTopologyType\n" },
		{ "Triangle.Name", "EGeometrySelectionTopologyType::Triangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EGeometrySelectionTopologyType",
		"EGeometrySelectionTopologyType",
		Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType()
	{
		if (!Z_Registration_Info_UEnum_EGeometrySelectionTopologyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometrySelectionTopologyType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometrySelectionTopologyType.InnerSingleton;
	}
	void UGeometrySelectionVisualizationProperties::StaticRegisterNativesUGeometrySelectionVisualizationProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometrySelectionVisualizationProperties);
	UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister()
	{
		return UGeometrySelectionVisualizationProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShowTriangleROIBorder_MetaData[];
#endif
		static void NewProp_bEnableShowTriangleROIBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShowTriangleROIBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShowEdgeSelectionVertices_MetaData[];
#endif
		static void NewProp_bEnableShowEdgeSelectionVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShowEdgeSelectionVertices;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionElementType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionTopologyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionTopologyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionTopologyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelection_MetaData[];
#endif
		static void NewProp_bShowSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTriangleROIBorder_MetaData[];
#endif
		static void NewProp_bShowTriangleROIBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTriangleROIBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHidden_MetaData[];
#endif
		static void NewProp_bShowHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEdgeSelectionVertices_MetaData[];
#endif
		static void NewProp_bShowEdgeSelectionVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEdgeSelectionVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleROIBorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleROIBorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriangleMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleMaterialShowingHidden_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriangleMaterialShowingHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterialShowingHidden_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterialShowingHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointMaterialShowingHidden_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointMaterialShowingHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder_MetaData[] = {
		{ "Comment", "/**\n\x09 * This option should be enabled for tools in which the triangle color is reserved for some tool function.  The\n\x09 * Generate PolyGroups tool, for example, uses triangle color to indicate the polygroup id.\n\x09 * \n\x09 * If true show a user option to visualize the geometry selection as the border of the triangles in the selection\n\x09 * ROI (region of influence).\n\x09 */" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "This option should be enabled for tools in which the triangle color is reserved for some tool function.  The\nGenerate PolyGroups tool, for example, uses triangle color to indicate the polygroup id.\n\nIf true show a user option to visualize the geometry selection as the border of the triangles in the selection\nROI (region of influence)." },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder_SetBit(void* Obj)
	{
		((UGeometrySelectionVisualizationProperties*)Obj)->bEnableShowTriangleROIBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder = { "bEnableShowTriangleROIBorder", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometrySelectionVisualizationProperties), &Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices_MetaData[] = {
		{ "Comment", "/**\n\x09 * This option should be enabled for tools that treat edge selections as if they were vertex selections containing\n\x09 * all incident vertices.  See EditNormalsTool for an example.  For such tools seeing the vertex selection\n\x09 * corresponding to the edges selection can be useful for understanding the output.\n\x09 * \n\x09 * If true  edge selections can be visualized as a line set or as a set of points touched by the selection\n\x09 * If false edge selections are always visualized as a line set\n\x09 */" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "This option should be enabled for tools that treat edge selections as if they were vertex selections containing\nall incident vertices.  See EditNormalsTool for an example.  For such tools seeing the vertex selection\ncorresponding to the edges selection can be useful for understanding the output.\n\nIf true  edge selections can be visualized as a line set or as a set of points touched by the selection\nIf false edge selections are always visualized as a line set" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices_SetBit(void* Obj)
	{
		((UGeometrySelectionVisualizationProperties*)Obj)->bEnableShowEdgeSelectionVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices = { "bEnableShowEdgeSelectionVertices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometrySelectionVisualizationProperties), &Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType_MetaData[] = {
		{ "Comment", "/**\n\x09 * Geometry type of the geometry selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Geometry type of the geometry selection" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType = { "SelectionElementType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, SelectionElementType), Z_Construct_UEnum_ModelingComponents_EGeometrySelectionElementType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType_MetaData) }; // 3201511422
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType_MetaData[] = {
		{ "Comment", "/**\n\x09 * Topology type of the geometry selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Topology type of the geometry selection" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType = { "SelectionTopologyType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, SelectionTopologyType), Z_Construct_UEnum_ModelingComponents_EGeometrySelectionTopologyType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType_MetaData) }; // 2615271974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Render the geometry selection */" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Render the geometry selection" },
	};
#endif
	void Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection_SetBit(void* Obj)
	{
		((UGeometrySelectionVisualizationProperties*)Obj)->bShowSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection = { "bShowSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometrySelectionVisualizationProperties), &Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Render the geometry selection as the border of the triangles in the ROI (region of influence) */" },
		{ "DisplayName", "Show Selection ROI" },
		{ "EditCondition", "bEnableShowTriangleROIBorder" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Render the geometry selection as the border of the triangles in the ROI (region of influence)" },
	};
#endif
	void Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder_SetBit(void* Obj)
	{
		((UGeometrySelectionVisualizationProperties*)Obj)->bShowTriangleROIBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder = { "bShowTriangleROIBorder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometrySelectionVisualizationProperties), &Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Show occluded parts of the selection */" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Show occluded parts of the selection" },
	};
#endif
	void Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden_SetBit(void* Obj)
	{
		((UGeometrySelectionVisualizationProperties*)Obj)->bShowHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden = { "bShowHidden", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometrySelectionVisualizationProperties), &Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** This tool treats edge selections as vertex selections. Enable this to show the edited vertices */" },
		{ "EditCondition", "SelectionElementType == EGeometrySelectionElementType::Edge && bEnableShowEdgeSelectionVertices" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "This tool treats edge selections as vertex selections. Enable this to show the edited vertices" },
	};
#endif
	void Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices_SetBit(void* Obj)
	{
		((UGeometrySelectionVisualizationProperties*)Obj)->bShowEdgeSelectionVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices = { "bShowEdgeSelectionVertices", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometrySelectionVisualizationProperties), &Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Line thickness used to render the geometry selection */" },
		{ "EditCondition", "SelectionElementType == EGeometrySelectionElementType::Edge || (bEnableShowTriangleROIBorder && bShowTriangleROIBorder)" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Line thickness used to render the geometry selection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineThickness_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointSize_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Point size used to render the geometry selection */" },
		{ "EditCondition", "SelectionElementType == EGeometrySelectionElementType::Vertex || (SelectionElementType == EGeometrySelectionElementType::Edge && bShowEdgeSelectionVertices && bEnableShowEdgeSelectionVertices)" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Point size used to render the geometry selection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, PointSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointSize_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_DepthBias_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Depth bias used to slightly shift depth of points/lines */" },
		{ "EditCondition", "(bEnableShowTriangleROIBorder && bShowTriangleROIBorder) || (bShowSelection && SelectionElementType != EGeometrySelectionElementType::Face)" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Depth bias used to slightly shift depth of points/lines" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "-2.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_DepthBias = { "DepthBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, DepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_DepthBias_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_DepthBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_FaceColor_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Color used to render the geometry selection */" },
		{ "DisplayName", "Selection Color" },
		{ "EditCondition", "false && SelectionElementType == EGeometrySelectionElementType::Face" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Color used to render the geometry selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_FaceColor = { "FaceColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, FaceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_FaceColor_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_FaceColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineColor_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Color used to render the geometry selection */" },
		{ "DisplayName", "Selection Color" },
		{ "EditCondition", "SelectionElementType == EGeometrySelectionElementType::Edge" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Color used to render the geometry selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineColor_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointColor_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Color used to render the geometry selection */" },
		{ "DisplayName", "Selection Color" },
		{ "EditCondition", "SelectionElementType == EGeometrySelectionElementType::Vertex" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Color used to render the geometry selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointColor = { "PointColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, PointColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointColor_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleROIBorderColor_MetaData[] = {
		{ "Category", "Selection Visualization" },
		{ "Comment", "/** Color used to render the geometry selection ROI */" },
		{ "DisplayName", "Selection ROI Color" },
		{ "EditCondition", "bEnableShowTriangleROIBorder" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Color used to render the geometry selection ROI" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleROIBorderColor = { "TriangleROIBorderColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, TriangleROIBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleROIBorderColor_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleROIBorderColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterial_MetaData[] = {
		{ "Comment", "// Internal data/transient properties\n" },
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "ToolTip", "Internal data/transient properties" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterial = { "TriangleMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, TriangleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterial_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterial_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterial = { "PointMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, PointMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterial_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterialShowingHidden_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterialShowingHidden = { "TriangleMaterialShowingHidden", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, TriangleMaterialShowingHidden), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterialShowingHidden_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterialShowingHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden = { "LineMaterialShowingHidden", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, LineMaterialShowingHidden), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterialShowingHidden_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertySets/GeometrySelectionVisualizationProperties.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterialShowingHidden = { "PointMaterialShowingHidden", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometrySelectionVisualizationProperties, PointMaterialShowingHidden), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterialShowingHidden_MetaData), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterialShowingHidden_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowTriangleROIBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bEnableShowEdgeSelectionVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_SelectionTopologyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowTriangleROIBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_bShowEdgeSelectionVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_DepthBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_FaceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleROIBorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_TriangleMaterialShowingHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_LineMaterialShowingHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::NewProp_PointMaterialShowingHidden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometrySelectionVisualizationProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::ClassParams = {
		&UGeometrySelectionVisualizationProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties()
	{
		if (!Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.OuterSingleton, Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UGeometrySelectionVisualizationProperties>()
	{
		return UGeometrySelectionVisualizationProperties::StaticClass();
	}
	UGeometrySelectionVisualizationProperties::UGeometrySelectionVisualizationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometrySelectionVisualizationProperties);
	UGeometrySelectionVisualizationProperties::~UGeometrySelectionVisualizationProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics::EnumInfo[] = {
		{ EGeometrySelectionElementType_StaticEnum, TEXT("EGeometrySelectionElementType"), &Z_Registration_Info_UEnum_EGeometrySelectionElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3201511422U) },
		{ EGeometrySelectionTopologyType_StaticEnum, TEXT("EGeometrySelectionTopologyType"), &Z_Registration_Info_UEnum_EGeometrySelectionTopologyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2615271974U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometrySelectionVisualizationProperties, UGeometrySelectionVisualizationProperties::StaticClass, TEXT("UGeometrySelectionVisualizationProperties"), &Z_Registration_Info_UClass_UGeometrySelectionVisualizationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometrySelectionVisualizationProperties), 3099655391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_3719565692(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

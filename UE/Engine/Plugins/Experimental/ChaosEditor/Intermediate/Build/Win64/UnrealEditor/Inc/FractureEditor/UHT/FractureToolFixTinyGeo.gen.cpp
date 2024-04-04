// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolFixTinyGeo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolFixTinyGeo() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTinyGeoSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTinyGeoSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolFixTinyGeo();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolFixTinyGeo_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EMergeType();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EUseBoneSelection();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometrySelectionMethod;
	static UEnum* EGeometrySelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometrySelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometrySelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EGeometrySelectionMethod"));
		}
		return Z_Registration_Info_UEnum_EGeometrySelectionMethod.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EGeometrySelectionMethod>()
	{
		return EGeometrySelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::Enumerators[] = {
		{ "EGeometrySelectionMethod::VolumeCubeRoot", (int64)EGeometrySelectionMethod::VolumeCubeRoot },
		{ "EGeometrySelectionMethod::RelativeVolume", (int64)EGeometrySelectionMethod::RelativeVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "RelativeVolume.Comment", "// Select by cube root of volume relative to the overall shape's cube root of volume\n" },
		{ "RelativeVolume.Name", "EGeometrySelectionMethod::RelativeVolume" },
		{ "RelativeVolume.ToolTip", "Select by cube root of volume relative to the overall shape's cube root of volume" },
		{ "VolumeCubeRoot.Comment", "// Select by cube root of volume\n" },
		{ "VolumeCubeRoot.DisplayName", "Size" },
		{ "VolumeCubeRoot.Name", "EGeometrySelectionMethod::VolumeCubeRoot" },
		{ "VolumeCubeRoot.ToolTip", "Select by cube root of volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EGeometrySelectionMethod",
		"EGeometrySelectionMethod",
		Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_EGeometrySelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometrySelectionMethod.InnerSingleton, Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometrySelectionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeighborSelectionMethod;
	static UEnum* ENeighborSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeighborSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeighborSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("ENeighborSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_ENeighborSelectionMethod.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<ENeighborSelectionMethod>()
	{
		return ENeighborSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::Enumerators[] = {
		{ "ENeighborSelectionMethod::LargestNeighbor", (int64)ENeighborSelectionMethod::LargestNeighbor },
		{ "ENeighborSelectionMethod::NearestCenter", (int64)ENeighborSelectionMethod::NearestCenter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "LargestNeighbor.Comment", "// Merge to the neighbor with the largest volume\n" },
		{ "LargestNeighbor.Name", "ENeighborSelectionMethod::LargestNeighbor" },
		{ "LargestNeighbor.ToolTip", "Merge to the neighbor with the largest volume" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "NearestCenter.Comment", "// Merge to the neighbor with the closest center\n" },
		{ "NearestCenter.Name", "ENeighborSelectionMethod::NearestCenter" },
		{ "NearestCenter.ToolTip", "Merge to the neighbor with the closest center" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"ENeighborSelectionMethod",
		"ENeighborSelectionMethod",
		Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_ENeighborSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeighborSelectionMethod.InnerSingleton, Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeighborSelectionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUseBoneSelection;
	static UEnum* EUseBoneSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUseBoneSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUseBoneSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EUseBoneSelection, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EUseBoneSelection"));
		}
		return Z_Registration_Info_UEnum_EUseBoneSelection.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EUseBoneSelection>()
	{
		return EUseBoneSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::Enumerators[] = {
		{ "EUseBoneSelection::NoEffect", (int64)EUseBoneSelection::NoEffect },
		{ "EUseBoneSelection::AlsoMergeSelected", (int64)EUseBoneSelection::AlsoMergeSelected },
		{ "EUseBoneSelection::OnlyMergeSelected", (int64)EUseBoneSelection::OnlyMergeSelected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::Enum_MetaDataParams[] = {
		{ "AlsoMergeSelected.Name", "EUseBoneSelection::AlsoMergeSelected" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "NoEffect.Name", "EUseBoneSelection::NoEffect" },
		{ "OnlyMergeSelected.Name", "EUseBoneSelection::OnlyMergeSelected" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EUseBoneSelection",
		"EUseBoneSelection",
		Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EUseBoneSelection()
	{
		if (!Z_Registration_Info_UEnum_EUseBoneSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUseBoneSelection.InnerSingleton, Z_Construct_UEnum_FractureEditor_EUseBoneSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUseBoneSelection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMergeType;
	static UEnum* EMergeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMergeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMergeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EMergeType, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EMergeType"));
		}
		return Z_Registration_Info_UEnum_EMergeType.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EMergeType>()
	{
		return EMergeType_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EMergeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EMergeType_Statics::Enumerators[] = {
		{ "EMergeType::MergeGeometry", (int64)EMergeType::MergeGeometry },
		{ "EMergeType::MergeClusters", (int64)EMergeType::MergeClusters },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EMergeType_Statics::Enum_MetaDataParams[] = {
		{ "MergeClusters.Name", "EMergeType::MergeClusters" },
		{ "MergeGeometry.Name", "EMergeType::MergeGeometry" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EMergeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EMergeType",
		"EMergeType",
		Z_Construct_UEnum_FractureEditor_EMergeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMergeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMergeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEditor_EMergeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EMergeType()
	{
		if (!Z_Registration_Info_UEnum_EMergeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMergeType.InnerSingleton, Z_Construct_UEnum_FractureEditor_EMergeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMergeType.InnerSingleton;
	}
	void UFractureTinyGeoSettings::StaticRegisterNativesUFractureTinyGeoSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureTinyGeoSettings);
	UClass* Z_Construct_UClass_UFractureTinyGeoSettings_NoRegister()
	{
		return UFractureTinyGeoSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureTinyGeoSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MergeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnFractureLevel_MetaData[];
#endif
		static void NewProp_bOnFractureLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnFractureLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyClusters_MetaData[];
#endif
		static void NewProp_bOnlyClusters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyClusters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySameParent_MetaData[];
#endif
		static void NewProp_bOnlySameParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySameParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFractureLevelIsAll_MetaData[];
#endif
		static void NewProp_bFractureLevelIsAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFractureLevelIsAll;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NeighborSelection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighborSelection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NeighborSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyToConnected_MetaData[];
#endif
		static void NewProp_bOnlyToConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyToConnected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UseBoneSelection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseBoneSelection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UseBoneSelection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolumeCubeRoot_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinVolumeCubeRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeVolume_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativeVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureTinyGeoSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings controlling how geometry is selected and merged into neighboring geometry */" },
		{ "IncludePath", "FractureToolFixTinyGeo.h" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings controlling how geometry is selected and merged into neighboring geometry" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "// Whether to merge small geometry, or small clusters\n" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Whether to merge small geometry, or small clusters" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType = { "MergeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureTinyGeoSettings, MergeType), Z_Construct_UEnum_FractureEditor_EMergeType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType_MetaData) }; // 4102287767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "// Only consider bones at the current Fracture Level\n" },
		{ "EditCondition", "!bFractureLevelIsAll && MergeType == EMergeType::MergeClusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Only consider bones at the current Fracture Level" },
	};
#endif
	void Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel_SetBit(void* Obj)
	{
		((UFractureTinyGeoSettings*)Obj)->bOnFractureLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel = { "bOnFractureLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureTinyGeoSettings), &Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "// Only auto-consider clusters for merging. Note that leaf nodes can still be consider if manually selected.\n" },
		{ "EditCondition", "!bFractureLevelIsAll && MergeType == EMergeType::MergeClusters && bOnFractureLevel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Only auto-consider clusters for merging. Note that leaf nodes can still be consider if manually selected." },
	};
#endif
	void Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters_SetBit(void* Obj)
	{
		((UFractureTinyGeoSettings*)Obj)->bOnlyClusters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters = { "bOnlyClusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureTinyGeoSettings), &Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "// Only merge to neighbors with the same parent in the hierarchy\n" },
		{ "EditCondition", "MergeType == EMergeType::MergeClusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Only merge to neighbors with the same parent in the hierarchy" },
	};
#endif
	void Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent_SetBit(void* Obj)
	{
		((UFractureTinyGeoSettings*)Obj)->bOnlySameParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent = { "bOnlySameParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureTinyGeoSettings), &Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll_MetaData[] = {
		{ "Comment", "// Helper variable to let the EditConditions above check whether the Fracture Level is set to 'All'\n" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Helper variable to let the EditConditions above check whether the Fracture Level is set to 'All'" },
	};
#endif
	void Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll_SetBit(void* Obj)
	{
		((UFractureTinyGeoSettings*)Obj)->bFractureLevelIsAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll = { "bFractureLevelIsAll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureTinyGeoSettings), &Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "DisplayName", "Merge To" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection = { "NeighborSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureTinyGeoSettings, NeighborSelection), Z_Construct_UEnum_FractureEditor_ENeighborSelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection_MetaData) }; // 3837037348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "// Only merge pieces that are connected in the proximity graph. If unchecked, connected pieces will still be favored, but if none are available the closest disconnected piece can be merged.\n" },
		{ "EditCondition", "MergeType == EMergeType::MergeClusters" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Only merge pieces that are connected in the proximity graph. If unchecked, connected pieces will still be favored, but if none are available the closest disconnected piece can be merged." },
	};
#endif
	void Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected_SetBit(void* Obj)
	{
		((UFractureTinyGeoSettings*)Obj)->bOnlyToConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected = { "bOnlyToConnected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFractureTinyGeoSettings), &Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Options for using the current bone selection */" },
		{ "DisplayName", "Bone Selection" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "Options for using the current bone selection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection = { "UseBoneSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureTinyGeoSettings, UseBoneSelection), Z_Construct_UEnum_FractureEditor_EUseBoneSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection_MetaData) }; // 832526056
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureTinyGeoSettings, SelectionMethod), Z_Construct_UEnum_FractureEditor_EGeometrySelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod_MetaData) }; // 2548970700
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MinVolumeCubeRoot_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMin", ".00001" },
		{ "Comment", "/** If size (cube root of volume) is less than this value, geometry should be merged into neighbors -- i.e. a value of 2 merges geometry smaller than a 2x2x2 cube */" },
		{ "DisplayName", "MinSize" },
		{ "EditCondition", "SelectionMethod == EGeometrySelectionMethod::VolumeCubeRoot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "If size (cube root of volume) is less than this value, geometry should be merged into neighbors -- i.e. a value of 2 merges geometry smaller than a 2x2x2 cube" },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MinVolumeCubeRoot = { "MinVolumeCubeRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureTinyGeoSettings, MinVolumeCubeRoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MinVolumeCubeRoot_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MinVolumeCubeRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_RelativeVolume_MetaData[] = {
		{ "Category", "FilterSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If cube root of volume relative to the overall shape's cube root of volume is less than this, the geometry should be merged into its neighbors.\n\x09(Note: This is a bit different from the histogram viewer's \"Relative Size,\" which instead shows values relative to the largest rigid bone.) */" },
		{ "EditCondition", "SelectionMethod == EGeometrySelectionMethod::RelativeVolume" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ToolTip", "If cube root of volume relative to the overall shape's cube root of volume is less than this, the geometry should be merged into its neighbors.\n      (Note: This is a bit different from the histogram viewer's \"Relative Size,\" which instead shows values relative to the largest rigid bone.)" },
		{ "UIMax", ".1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_RelativeVolume = { "RelativeVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureTinyGeoSettings, RelativeVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_RelativeVolume_MetaData), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_RelativeVolume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureTinyGeoSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MergeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnFractureLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyClusters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlySameParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bFractureLevelIsAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_NeighborSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_bOnlyToConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_UseBoneSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_SelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_MinVolumeCubeRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTinyGeoSettings_Statics::NewProp_RelativeVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureTinyGeoSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureTinyGeoSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureTinyGeoSettings_Statics::ClassParams = {
		&UFractureTinyGeoSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureTinyGeoSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureTinyGeoSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTinyGeoSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureTinyGeoSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureTinyGeoSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureTinyGeoSettings.OuterSingleton, Z_Construct_UClass_UFractureTinyGeoSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureTinyGeoSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureTinyGeoSettings>()
	{
		return UFractureTinyGeoSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureTinyGeoSettings);
	UFractureTinyGeoSettings::~UFractureTinyGeoSettings() {}
	void UFractureToolFixTinyGeo::StaticRegisterNativesUFractureToolFixTinyGeo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolFixTinyGeo);
	UClass* Z_Construct_UClass_UFractureToolFixTinyGeo_NoRegister()
	{
		return UFractureToolFixTinyGeo::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolFixTinyGeo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TinyGeoSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TinyGeoSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "Comment", "// Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools\n" },
		{ "DisplayName", "Geometry Merge Tool" },
		{ "IncludePath", "FractureToolFixTinyGeo.h" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Note this tool doesn't actually fracture, but it does remake pieces of geometry and shares a lot of machinery with the fracture tools" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::NewProp_TinyGeoSettings_MetaData[] = {
		{ "Category", "FixGeo" },
		{ "ModuleRelativePath", "Private/FractureToolFixTinyGeo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::NewProp_TinyGeoSettings = { "TinyGeoSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFractureToolFixTinyGeo, TinyGeoSettings), Z_Construct_UClass_UFractureTinyGeoSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::NewProp_TinyGeoSettings_MetaData), Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::NewProp_TinyGeoSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::NewProp_TinyGeoSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolFixTinyGeo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::ClassParams = {
		&UFractureToolFixTinyGeo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::Class_MetaDataParams), Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFractureToolFixTinyGeo()
	{
		if (!Z_Registration_Info_UClass_UFractureToolFixTinyGeo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolFixTinyGeo.OuterSingleton, Z_Construct_UClass_UFractureToolFixTinyGeo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolFixTinyGeo.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolFixTinyGeo>()
	{
		return UFractureToolFixTinyGeo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolFixTinyGeo);
	UFractureToolFixTinyGeo::~UFractureToolFixTinyGeo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics::EnumInfo[] = {
		{ EGeometrySelectionMethod_StaticEnum, TEXT("EGeometrySelectionMethod"), &Z_Registration_Info_UEnum_EGeometrySelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2548970700U) },
		{ ENeighborSelectionMethod_StaticEnum, TEXT("ENeighborSelectionMethod"), &Z_Registration_Info_UEnum_ENeighborSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3837037348U) },
		{ EUseBoneSelection_StaticEnum, TEXT("EUseBoneSelection"), &Z_Registration_Info_UEnum_EUseBoneSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 832526056U) },
		{ EMergeType_StaticEnum, TEXT("EMergeType"), &Z_Registration_Info_UEnum_EMergeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4102287767U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureTinyGeoSettings, UFractureTinyGeoSettings::StaticClass, TEXT("UFractureTinyGeoSettings"), &Z_Registration_Info_UClass_UFractureTinyGeoSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureTinyGeoSettings), 3142460899U) },
		{ Z_Construct_UClass_UFractureToolFixTinyGeo, UFractureToolFixTinyGeo::StaticClass, TEXT("UFractureToolFixTinyGeo"), &Z_Registration_Info_UClass_UFractureToolFixTinyGeo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolFixTinyGeo), 4291323255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_77436994(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolFixTinyGeo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

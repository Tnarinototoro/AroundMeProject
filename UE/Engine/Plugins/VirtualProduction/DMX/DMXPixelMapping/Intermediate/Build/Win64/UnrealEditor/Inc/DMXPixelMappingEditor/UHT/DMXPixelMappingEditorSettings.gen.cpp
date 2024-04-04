// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../DMXPixelMappingEditor/Private/Settings/DMXPixelMappingEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingEditorSettings();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingEditorSettings_NoRegister();
	DMXPIXELMAPPINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings();
	DMXPIXELMAPPINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings;
class UScriptStruct* FDMXPixelMappingHierarchySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingEditor(), TEXT("DMXPixelMappingHierarchySettings"));
	}
	return Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings.OuterSingleton;
}
template<> DMXPIXELMAPPINGEDITOR_API UScriptStruct* StaticStruct<FDMXPixelMappingHierarchySettings>()
{
	return FDMXPixelMappingHierarchySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEditorColorColumn_MetaData[];
#endif
		static void NewProp_bShowEditorColorColumn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEditorColorColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFixtureIDColumn_MetaData[];
#endif
		static void NewProp_bShowFixtureIDColumn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFixtureIDColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPatchColumn_MetaData[];
#endif
		static void NewProp_bShowPatchColumn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPatchColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortByColumnId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SortByColumnId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSortAscending_MetaData[];
#endif
		static void NewProp_bSortAscending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortAscending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXPixelMappingHierarchySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn_MetaData[] = {
		{ "Comment", "/** If true, shows the editor color column */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows the editor color column" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn_SetBit(void* Obj)
	{
		((FDMXPixelMappingHierarchySettings*)Obj)->bShowEditorColorColumn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn = { "bShowEditorColorColumn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingHierarchySettings), &Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn_MetaData[] = {
		{ "Comment", "/** If true, shows the fixture ID column */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows the fixture ID column" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn_SetBit(void* Obj)
	{
		((FDMXPixelMappingHierarchySettings*)Obj)->bShowFixtureIDColumn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn = { "bShowFixtureIDColumn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingHierarchySettings), &Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn_MetaData[] = {
		{ "Comment", "/** If true, shows the patch column */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows the patch column" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn_SetBit(void* Obj)
	{
		((FDMXPixelMappingHierarchySettings*)Obj)->bShowPatchColumn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn = { "bShowPatchColumn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingHierarchySettings), &Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_SortByColumnId_MetaData[] = {
		{ "Comment", "/** The sort by column Id. Can be none or a valid column id */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "The sort by column Id. Can be none or a valid column id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_SortByColumnId = { "SortByColumnId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXPixelMappingHierarchySettings, SortByColumnId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_SortByColumnId_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_SortByColumnId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending_MetaData[] = {
		{ "Comment", "/** If true, the current sort mode is ascending */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, the current sort mode is ascending" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending_SetBit(void* Obj)
	{
		((FDMXPixelMappingHierarchySettings*)Obj)->bSortAscending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending = { "bSortAscending", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingHierarchySettings), &Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowEditorColorColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowFixtureIDColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bShowPatchColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_SortByColumnId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewProp_bSortAscending,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
		nullptr,
		&NewStructOps,
		"DMXPixelMappingHierarchySettings",
		Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::PropPointers),
		sizeof(FDMXPixelMappingHierarchySettings),
		alignof(FDMXPixelMappingHierarchySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings.InnerSingleton, Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings;
class UScriptStruct* FDMXPixelMappingDesignerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingEditor(), TEXT("DMXPixelMappingDesignerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings.OuterSingleton;
}
template<> DMXPIXELMAPPINGEDITOR_API UScriptStruct* StaticStruct<FDMXPixelMappingDesignerSettings>()
{
	return FDMXPixelMappingDesignerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleChildrenWithParent_MetaData[];
#endif
		static void NewProp_bScaleChildrenWithParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleChildrenWithParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSelectGroup_MetaData[];
#endif
		static void NewProp_bAlwaysSelectGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSelectGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyLayoutScriptWhenLoaded_MetaData[];
#endif
		static void NewProp_bApplyLayoutScriptWhenLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyLayoutScriptWhenLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMatrixCells_MetaData[];
#endif
		static void NewProp_bShowMatrixCells_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMatrixCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowComponentNames_MetaData[];
#endif
		static void NewProp_bShowComponentNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowComponentNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPatchInfo_MetaData[];
#endif
		static void NewProp_bShowPatchInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPatchInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCellIDs_MetaData[];
#endif
		static void NewProp_bShowCellIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCellIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXPixelMappingDesignerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent_MetaData[] = {
		{ "Comment", "/** If true, scales children when the parent component is resized */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, scales children when the parent component is resized" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bScaleChildrenWithParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent = { "bScaleChildrenWithParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup_MetaData[] = {
		{ "Comment", "/** If true, selects parent when a child is clicked */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, selects parent when a child is clicked" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bAlwaysSelectGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup = { "bAlwaysSelectGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_MetaData[] = {
		{ "Comment", "/** If true, applies layout scripts instantly when they are loaded */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, applies layout scripts instantly when they are loaded" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bApplyLayoutScriptWhenLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded = { "bApplyLayoutScriptWhenLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells_MetaData[] = {
		{ "Comment", "/**  If true, shows a widget for each cell. It is recommended that this is turned off when pixel mapping large quantities of fixtures. */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows a widget for each cell. It is recommended that this is turned off when pixel mapping large quantities of fixtures." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bShowMatrixCells = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells = { "bShowMatrixCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames_MetaData[] = {
		{ "Comment", "/** If true, shows the name of the Fixture Patch where applicable. It is recommended that this is turned off when pixel mapping large quantities of fixtures. */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows the name of the Fixture Patch where applicable. It is recommended that this is turned off when pixel mapping large quantities of fixtures." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bShowComponentNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames = { "bShowComponentNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo_MetaData[] = {
		{ "Comment", "/** If true, shows Fixture info bout the Fixture Patch where applicable. It is recommended that this is turned off when pixel mapping large quantities of fixtures. */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows Fixture info bout the Fixture Patch where applicable. It is recommended that this is turned off when pixel mapping large quantities of fixtures." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bShowPatchInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo = { "bShowPatchInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs_MetaData[] = {
		{ "Comment", "/** If true, shows Cell IDs where applicable. It is recommended that this is turned off when pixel mapping large quantities of fixtures. */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "If true, shows Cell IDs where applicable. It is recommended that this is turned off when pixel mapping large quantities of fixtures." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs_SetBit(void* Obj)
	{
		((FDMXPixelMappingDesignerSettings*)Obj)->bShowCellIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs = { "bShowCellIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXPixelMappingDesignerSettings), &Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs_MetaData), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bScaleChildrenWithParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bAlwaysSelectGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bApplyLayoutScriptWhenLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowMatrixCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowComponentNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowPatchInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewProp_bShowCellIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
		nullptr,
		&NewStructOps,
		"DMXPixelMappingDesignerSettings",
		Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::PropPointers),
		sizeof(FDMXPixelMappingDesignerSettings),
		alignof(FDMXPixelMappingDesignerSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings.InnerSingleton, Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings.InnerSingleton;
	}
	void UDMXPixelMappingEditorSettings::StaticRegisterNativesUDMXPixelMappingEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingEditorSettings);
	UClass* Z_Construct_UClass_UDMXPixelMappingEditorSettings_NoRegister()
	{
		return UDMXPixelMappingEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesignerSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesignerSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Layout options for the Pixel Mapping editor */" },
		{ "IncludePath", "Settings/DMXPixelMappingEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "Layout options for the Pixel Mapping editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_HierarchySettings_MetaData[] = {
		{ "Comment", "/** Settings for the hierarchy tab */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "Settings for the hierarchy tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_HierarchySettings = { "HierarchySettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingEditorSettings, HierarchySettings), Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_HierarchySettings_MetaData), Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_HierarchySettings_MetaData) }; // 3571210697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_DesignerSettings_MetaData[] = {
		{ "Comment", "/** Settings for the designer tab */" },
		{ "ModuleRelativePath", "Private/Settings/DMXPixelMappingEditorSettings.h" },
		{ "ToolTip", "Settings for the designer tab" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_DesignerSettings = { "DesignerSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingEditorSettings, DesignerSettings), Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_DesignerSettings_MetaData), Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_DesignerSettings_MetaData) }; // 1026740971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_HierarchySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::NewProp_DesignerSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::ClassParams = {
		&UDMXPixelMappingEditorSettings::StaticClass,
		"DMXPixelMappingEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingEditorSettings.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingEditorSettings.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGEDITOR_API UClass* StaticClass<UDMXPixelMappingEditorSettings>()
	{
		return UDMXPixelMappingEditorSettings::StaticClass();
	}
	UDMXPixelMappingEditorSettings::UDMXPixelMappingEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingEditorSettings);
	UDMXPixelMappingEditorSettings::~UDMXPixelMappingEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FDMXPixelMappingHierarchySettings::StaticStruct, Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics::NewStructOps, TEXT("DMXPixelMappingHierarchySettings"), &Z_Registration_Info_UScriptStruct_DMXPixelMappingHierarchySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXPixelMappingHierarchySettings), 3571210697U) },
		{ FDMXPixelMappingDesignerSettings::StaticStruct, Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics::NewStructOps, TEXT("DMXPixelMappingDesignerSettings"), &Z_Registration_Info_UScriptStruct_DMXPixelMappingDesignerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXPixelMappingDesignerSettings), 1026740971U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingEditorSettings, UDMXPixelMappingEditorSettings::StaticClass, TEXT("UDMXPixelMappingEditorSettings"), &Z_Registration_Info_UClass_UDMXPixelMappingEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingEditorSettings), 2767335123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_1016204256(TEXT("/Script/DMXPixelMappingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

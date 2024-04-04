// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXEditorSettings();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXEditorSettings_NoRegister();
	DMXEDITOR_API UEnum* Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings();
	DMXEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings;
class UScriptStruct* FDMXMVRFixtureListSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("DMXMVRFixtureListSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings.OuterSingleton;
}
template<> DMXEDITOR_API UScriptStruct* StaticStruct<FDMXMVRFixtureListSettings>()
{
	return FDMXMVRFixtureListSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureIDColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixtureIDColumnWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureTypeColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixtureTypeColumnWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModeColumnWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PatchColumnWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortByCollumnID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SortByCollumnID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Fixture Patch List */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Settings for the Fixture Patch List" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMVRFixtureListSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureIDColumnWidth_MetaData[] = {
		{ "Comment", "/** Width of the Fixture ID column */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Width of the Fixture ID column" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureIDColumnWidth = { "FixtureIDColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMVRFixtureListSettings, FixtureIDColumnWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureIDColumnWidth_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureIDColumnWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureTypeColumnWidth_MetaData[] = {
		{ "Comment", "/** With of the Fixture Type column */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "With of the Fixture Type column" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureTypeColumnWidth = { "FixtureTypeColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMVRFixtureListSettings, FixtureTypeColumnWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureTypeColumnWidth_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureTypeColumnWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_ModeColumnWidth_MetaData[] = {
		{ "Comment", "/** With of the Mode column */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "With of the Mode column" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_ModeColumnWidth = { "ModeColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMVRFixtureListSettings, ModeColumnWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_ModeColumnWidth_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_ModeColumnWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_PatchColumnWidth_MetaData[] = {
		{ "Comment", "/** With of the Patch column */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "With of the Patch column" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_PatchColumnWidth = { "PatchColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMVRFixtureListSettings, PatchColumnWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_PatchColumnWidth_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_PatchColumnWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_SortByCollumnID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_SortByCollumnID = { "SortByCollumnID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMVRFixtureListSettings, SortByCollumnID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_SortByCollumnID_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_SortByCollumnID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureIDColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_FixtureTypeColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_ModeColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_PatchColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewProp_SortByCollumnID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		&NewStructOps,
		"DMXMVRFixtureListSettings",
		Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::PropPointers),
		sizeof(FDMXMVRFixtureListSettings),
		alignof(FDMXMVRFixtureListSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings.InnerSingleton, Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode;
	static UEnum* EDMXFixturePatcherNameDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("EDMXFixturePatcherNameDisplayMode"));
		}
		return Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode.OuterSingleton;
	}
	template<> DMXEDITOR_API UEnum* StaticEnum<EDMXFixturePatcherNameDisplayMode>()
	{
		return EDMXFixturePatcherNameDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::Enumerators[] = {
		{ "EDMXFixturePatcherNameDisplayMode::FixtureIDAndFixturePatchName", (int64)EDMXFixturePatcherNameDisplayMode::FixtureIDAndFixturePatchName },
		{ "EDMXFixturePatcherNameDisplayMode::FixtureID", (int64)EDMXFixturePatcherNameDisplayMode::FixtureID },
		{ "EDMXFixturePatcherNameDisplayMode::FixturePatchName", (int64)EDMXFixturePatcherNameDisplayMode::FixturePatchName },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "FixtureID.Name", "EDMXFixturePatcherNameDisplayMode::FixtureID" },
		{ "FixtureIDAndFixturePatchName.Name", "EDMXFixturePatcherNameDisplayMode::FixtureIDAndFixturePatchName" },
		{ "FixturePatchName.Name", "EDMXFixturePatcherNameDisplayMode::FixturePatchName" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		"EDMXFixturePatcherNameDisplayMode",
		"EDMXFixturePatcherNameDisplayMode",
		Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode.InnerSingleton, Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings;
class UScriptStruct* FDMXMVRFixturePatcherSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("DMXMVRFixturePatcherSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings.OuterSingleton;
}
template<> DMXEDITOR_API UScriptStruct* StaticStruct<FDMXMVRFixturePatcherSettings>()
{
	return FDMXMVRFixturePatcherSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonitorEnabled_MetaData[];
#endif
		static void NewProp_bMonitorEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonitorEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FixturePatchNameDisplayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchNameDisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FixturePatchNameDisplayMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Fixture Patcher */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Settings for the Fixture Patcher" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMVRFixturePatcherSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled_SetBit(void* Obj)
	{
		((FDMXMVRFixturePatcherSettings*)Obj)->bMonitorEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled = { "bMonitorEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXMVRFixturePatcherSettings), &Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode = { "FixturePatchNameDisplayMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMVRFixturePatcherSettings, FixturePatchNameDisplayMode), Z_Construct_UEnum_DMXEditor_EDMXFixturePatcherNameDisplayMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode_MetaData), Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode_MetaData) }; // 3137495604
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_bMonitorEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewProp_FixturePatchNameDisplayMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		&NewStructOps,
		"DMXMVRFixturePatcherSettings",
		Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::PropPointers),
		sizeof(FDMXMVRFixturePatcherSettings),
		alignof(FDMXMVRFixturePatcherSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings.InnerSingleton, Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings;
class UScriptStruct* FDMXFixtureTypeFunctionsEditorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("DMXFixtureTypeFunctionsEditorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings.OuterSingleton;
}
template<> DMXEDITOR_API UScriptStruct* StaticStruct<FDMXFixtureTypeFunctionsEditorSettings>()
{
	return FDMXFixtureTypeFunctionsEditorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NameColumnWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeColumnWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Fixture Type Functions Editor */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Settings for the Fixture Type Functions Editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureTypeFunctionsEditorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_NameColumnWidth_MetaData[] = {
		{ "Comment", "/** Width of the function name column */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Width of the function name column" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_NameColumnWidth = { "NameColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXFixtureTypeFunctionsEditorSettings, NameColumnWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_NameColumnWidth_MetaData), Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_NameColumnWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_AttributeColumnWidth_MetaData[] = {
		{ "Comment", "/** With of the attribute column */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "With of the attribute column" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_AttributeColumnWidth = { "AttributeColumnWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXFixtureTypeFunctionsEditorSettings, AttributeColumnWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_AttributeColumnWidth_MetaData), Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_AttributeColumnWidth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_NameColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewProp_AttributeColumnWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		&NewStructOps,
		"DMXFixtureTypeFunctionsEditorSettings",
		Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::PropPointers),
		sizeof(FDMXFixtureTypeFunctionsEditorSettings),
		alignof(FDMXFixtureTypeFunctionsEditorSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor;
class UScriptStruct* FDMXOutputConsoleFaderDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("DMXOutputConsoleFaderDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor.OuterSingleton;
}
template<> DMXEDITOR_API UScriptStruct* StaticStruct<FDMXOutputConsoleFaderDescriptor>()
{
	return FDMXOutputConsoleFaderDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FaderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniversID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniversID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProtocolName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOutputConsoleFaderDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_FaderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_FaderName = { "FaderName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, FaderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_FaderName_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_FaderName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, MaxValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, MinValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MinValue_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_UniversID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_UniversID = { "UniversID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, UniversID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_UniversID_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_UniversID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_StartingAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_StartingAddress = { "StartingAddress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, StartingAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_StartingAddress_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_StartingAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_EndingAddress_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_EndingAddress = { "EndingAddress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, EndingAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_EndingAddress_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_EndingAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_ProtocolName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_ProtocolName = { "ProtocolName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXOutputConsoleFaderDescriptor, ProtocolName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_ProtocolName_MetaData), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_ProtocolName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_FaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_UniversID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_StartingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_EndingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewProp_ProtocolName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		&NewStructOps,
		"DMXOutputConsoleFaderDescriptor",
		Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::PropPointers),
		sizeof(FDMXOutputConsoleFaderDescriptor),
		alignof(FDMXOutputConsoleFaderDescriptor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor;
class UScriptStruct* FDMXMonitorSourceDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor, (UObject*)Z_Construct_UPackage__Script_DMXEditor(), TEXT("DMXMonitorSourceDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor.OuterSingleton;
}
template<> DMXEDITOR_API UScriptStruct* StaticStruct<FDMXMonitorSourceDescriptor>()
{
	return FDMXMonitorSourceDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonitorAllPorts_MetaData[];
#endif
		static void NewProp_bMonitorAllPorts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonitorAllPorts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonitorInputPorts_MetaData[];
#endif
		static void NewProp_bMonitorInputPorts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonitorInputPorts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitoredPortGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MonitoredPortGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to describe a monitor source, so it can be stored in settings \n * Defaults to Monitor all Inputs.\n */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Struct to describe a monitor source, so it can be stored in settings\nDefaults to Monitor all Inputs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMonitorSourceDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts_MetaData[] = {
		{ "Comment", "/** True if all ports should be monitored */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "True if all ports should be monitored" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts_SetBit(void* Obj)
	{
		((FDMXMonitorSourceDescriptor*)Obj)->bMonitorAllPorts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts = { "bMonitorAllPorts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXMonitorSourceDescriptor), &Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts_MetaData), Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts_MetaData[] = {
		{ "Comment", "/** True if Input Ports should be monitored. Only relevant if bMonitorAllPorts */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "True if Input Ports should be monitored. Only relevant if bMonitorAllPorts" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts_SetBit(void* Obj)
	{
		((FDMXMonitorSourceDescriptor*)Obj)->bMonitorInputPorts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts = { "bMonitorInputPorts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDMXMonitorSourceDescriptor), &Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts_MetaData), Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_MonitoredPortGuid_MetaData[] = {
		{ "Comment", "/** The monitored Port Guid. Only relevant if !bMonitorAllPorts*/" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "The monitored Port Guid. Only relevant if !bMonitorAllPorts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_MonitoredPortGuid = { "MonitoredPortGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDMXMonitorSourceDescriptor, MonitoredPortGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_MonitoredPortGuid_MetaData), Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_MonitoredPortGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorAllPorts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_bMonitorInputPorts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewProp_MonitoredPortGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
		nullptr,
		&NewStructOps,
		"DMXMonitorSourceDescriptor",
		Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::PropPointers),
		sizeof(FDMXMonitorSourceDescriptor),
		alignof(FDMXMonitorSourceDescriptor),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor.InnerSingleton;
	}
	void UDMXEditorSettings::StaticRegisterNativesUDMXEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEditorSettings);
	UClass* Z_Construct_UClass_UDMXEditorSettings_NoRegister()
	{
		return UDMXEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGDTFImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastGDTFImportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMVRImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastMVRImportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMVRExportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastMVRExportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixturePatcherDMXMonitorEnabled_MetaData[];
#endif
		static void NewProp_bFixturePatcherDMXMonitorEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixturePatcherDMXMonitorEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureTypeFunctionsEditorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixtureTypeFunctionsEditorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MVRFixtureListSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MVRFixtureListSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatcherSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatcherSettings;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputConsoleFaders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputConsoleFaders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputConsoleFaders;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsMonitorUniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelsMonitorUniverseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsMonitorSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelsMonitorSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityMonitorSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivityMonitorSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityMonitorMinUniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActivityMonitorMinUniverseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityMonitorMaxUniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActivityMonitorMaxUniverseID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings that holds editor configurations. Not accessible in Project Settings. TODO: Idealy rename to UDMXEditorConfiguration */" },
		{ "IncludePath", "DMXEditorSettings.h" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Settings that holds editor configurations. Not accessible in Project Settings. TODO: Idealy rename to UDMXEditorConfiguration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastGDTFImportPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastGDTFImportPath = { "LastGDTFImportPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, LastGDTFImportPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastGDTFImportPath_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastGDTFImportPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRImportPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRImportPath = { "LastMVRImportPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, LastMVRImportPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRImportPath_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRImportPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRExportPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRExportPath = { "LastMVRExportPath", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, LastMVRExportPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRExportPath_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRExportPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled_MetaData[] = {
		{ "Comment", "/** Deprecated 5.3, moved to FDMXMVRFixturePatcherSettings */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Deprecated 5.3, moved to FDMXMVRFixturePatcherSettings" },
	};
#endif
	void Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled_SetBit(void* Obj)
	{
		((UDMXEditorSettings*)Obj)->bFixturePatcherDMXMonitorEnabled_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled = { "bFixturePatcherDMXMonitorEnabled", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXEditorSettings), &Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixtureTypeFunctionsEditorSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixtureTypeFunctionsEditorSettings = { "FixtureTypeFunctionsEditorSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, FixtureTypeFunctionsEditorSettings), Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixtureTypeFunctionsEditorSettings_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixtureTypeFunctionsEditorSettings_MetaData) }; // 446390845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_MVRFixtureListSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_MVRFixtureListSettings = { "MVRFixtureListSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, MVRFixtureListSettings), Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_MVRFixtureListSettings_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_MVRFixtureListSettings_MetaData) }; // 3319422523
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixturePatcherSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixturePatcherSettings = { "FixturePatcherSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, FixturePatcherSettings), Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixturePatcherSettings_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixturePatcherSettings_MetaData) }; // 3132403501
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders_Inner = { "OutputConsoleFaders", nullptr, (EPropertyFlags)0x0000000820004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor, METADATA_PARAMS(0, nullptr) }; // 1701544397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated since Console is now saved in the new DMXControlConsolePreset, upgrade path is in DMXControlConsoleModule." },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders = { "OutputConsoleFaders", nullptr, (EPropertyFlags)0x0010000820004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, OutputConsoleFaders_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders_MetaData) }; // 1701544397
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorUniverseID_MetaData[] = {
		{ "Comment", "/** The Universe ID to be monitored in the Channels Monitor  */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "The Universe ID to be monitored in the Channels Monitor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorUniverseID = { "ChannelsMonitorUniverseID", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, ChannelsMonitorUniverseID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorUniverseID_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorUniverseID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorSource_MetaData[] = {
		{ "Comment", "/** Source for the channels monitor */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Source for the channels monitor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorSource = { "ChannelsMonitorSource", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, ChannelsMonitorSource), Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorSource_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorSource_MetaData) }; // 3753465645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorSource_MetaData[] = {
		{ "Comment", "/** Source for the DMX Activity Monitor */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "Source for the DMX Activity Monitor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorSource = { "ActivityMonitorSource", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, ActivityMonitorSource), Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorSource_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorSource_MetaData) }; // 3753465645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMinUniverseID_MetaData[] = {
		{ "Comment", "/** ID of the first universe to monitor in the DMX Activity Monitor  */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "ID of the first universe to monitor in the DMX Activity Monitor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMinUniverseID = { "ActivityMonitorMinUniverseID", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, ActivityMonitorMinUniverseID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMinUniverseID_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMinUniverseID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMaxUniverseID_MetaData[] = {
		{ "Comment", "/** ID of the last universe to monitor in the DMX Activity Monitor */" },
		{ "ModuleRelativePath", "Public/DMXEditorSettings.h" },
		{ "ToolTip", "ID of the last universe to monitor in the DMX Activity Monitor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMaxUniverseID = { "ActivityMonitorMaxUniverseID", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXEditorSettings, ActivityMonitorMaxUniverseID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMaxUniverseID_MetaData), Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMaxUniverseID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastGDTFImportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRImportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_LastMVRExportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_bFixturePatcherDMXMonitorEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixtureTypeFunctionsEditorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_MVRFixtureListSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_FixturePatcherSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_OutputConsoleFaders,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorUniverseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ChannelsMonitorSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMinUniverseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEditorSettings_Statics::NewProp_ActivityMonitorMaxUniverseID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEditorSettings_Statics::ClassParams = {
		&UDMXEditorSettings::StaticClass,
		"DMXEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDMXEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEditorSettings.OuterSingleton, Z_Construct_UClass_UDMXEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEditorSettings.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXEditorSettings>()
	{
		return UDMXEditorSettings::StaticClass();
	}
	UDMXEditorSettings::UDMXEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEditorSettings);
	UDMXEditorSettings::~UDMXEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::EnumInfo[] = {
		{ EDMXFixturePatcherNameDisplayMode_StaticEnum, TEXT("EDMXFixturePatcherNameDisplayMode"), &Z_Registration_Info_UEnum_EDMXFixturePatcherNameDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3137495604U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FDMXMVRFixtureListSettings::StaticStruct, Z_Construct_UScriptStruct_FDMXMVRFixtureListSettings_Statics::NewStructOps, TEXT("DMXMVRFixtureListSettings"), &Z_Registration_Info_UScriptStruct_DMXMVRFixtureListSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMVRFixtureListSettings), 3319422523U) },
		{ FDMXMVRFixturePatcherSettings::StaticStruct, Z_Construct_UScriptStruct_FDMXMVRFixturePatcherSettings_Statics::NewStructOps, TEXT("DMXMVRFixturePatcherSettings"), &Z_Registration_Info_UScriptStruct_DMXMVRFixturePatcherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMVRFixturePatcherSettings), 3132403501U) },
		{ FDMXFixtureTypeFunctionsEditorSettings::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureTypeFunctionsEditorSettings_Statics::NewStructOps, TEXT("DMXFixtureTypeFunctionsEditorSettings"), &Z_Registration_Info_UScriptStruct_DMXFixtureTypeFunctionsEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureTypeFunctionsEditorSettings), 446390845U) },
		{ FDMXOutputConsoleFaderDescriptor::StaticStruct, Z_Construct_UScriptStruct_FDMXOutputConsoleFaderDescriptor_Statics::NewStructOps, TEXT("DMXOutputConsoleFaderDescriptor"), &Z_Registration_Info_UScriptStruct_DMXOutputConsoleFaderDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOutputConsoleFaderDescriptor), 1701544397U) },
		{ FDMXMonitorSourceDescriptor::StaticStruct, Z_Construct_UScriptStruct_FDMXMonitorSourceDescriptor_Statics::NewStructOps, TEXT("DMXMonitorSourceDescriptor"), &Z_Registration_Info_UScriptStruct_DMXMonitorSourceDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMonitorSourceDescriptor), 3753465645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEditorSettings, UDMXEditorSettings::StaticClass, TEXT("UDMXEditorSettings"), &Z_Registration_Info_UClass_UDMXEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEditorSettings), 783882310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_3377076637(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

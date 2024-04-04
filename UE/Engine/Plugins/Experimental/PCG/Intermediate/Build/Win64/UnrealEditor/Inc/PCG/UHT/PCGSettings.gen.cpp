// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGSettings.h"
#include "PCGDebug.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Tests/Determinism/PCGDeterminismSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	PCG_API UClass* Z_Construct_UClass_UPCGData();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsInstance();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsInstance_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsInterface();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGTrivialSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGTrivialSettings_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGSettingsType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGDeterminismSettings();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPropertyAliases();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGSettingsOverridableParam();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSettingsExecutionMode;
	static UEnum* EPCGSettingsExecutionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSettingsExecutionMode"));
		}
		return Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSettingsExecutionMode>()
	{
		return EPCGSettingsExecutionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::Enumerators[] = {
		{ "EPCGSettingsExecutionMode::Enabled", (int64)EPCGSettingsExecutionMode::Enabled },
		{ "EPCGSettingsExecutionMode::Debug", (int64)EPCGSettingsExecutionMode::Debug },
		{ "EPCGSettingsExecutionMode::Isolated", (int64)EPCGSettingsExecutionMode::Isolated },
		{ "EPCGSettingsExecutionMode::Disabled", (int64)EPCGSettingsExecutionMode::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::Enum_MetaDataParams[] = {
		{ "Debug.Name", "EPCGSettingsExecutionMode::Debug" },
		{ "Disabled.Name", "EPCGSettingsExecutionMode::Disabled" },
		{ "Enabled.Name", "EPCGSettingsExecutionMode::Enabled" },
		{ "Isolated.Name", "EPCGSettingsExecutionMode::Isolated" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSettingsExecutionMode",
		"EPCGSettingsExecutionMode",
		Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode()
	{
		if (!Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSettingsExecutionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGSettingsType;
	static UEnum* EPCGSettingsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSettingsType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGSettingsType"));
		}
		return Z_Registration_Info_UEnum_EPCGSettingsType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGSettingsType>()
	{
		return EPCGSettingsType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGSettingsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::Enumerators[] = {
		{ "EPCGSettingsType::InputOutput", (int64)EPCGSettingsType::InputOutput },
		{ "EPCGSettingsType::Spatial", (int64)EPCGSettingsType::Spatial },
		{ "EPCGSettingsType::Density", (int64)EPCGSettingsType::Density },
		{ "EPCGSettingsType::Blueprint", (int64)EPCGSettingsType::Blueprint },
		{ "EPCGSettingsType::Metadata", (int64)EPCGSettingsType::Metadata },
		{ "EPCGSettingsType::Filter", (int64)EPCGSettingsType::Filter },
		{ "EPCGSettingsType::Sampler", (int64)EPCGSettingsType::Sampler },
		{ "EPCGSettingsType::Spawner", (int64)EPCGSettingsType::Spawner },
		{ "EPCGSettingsType::Subgraph", (int64)EPCGSettingsType::Subgraph },
		{ "EPCGSettingsType::Debug", (int64)EPCGSettingsType::Debug },
		{ "EPCGSettingsType::Generic", (int64)EPCGSettingsType::Generic },
		{ "EPCGSettingsType::Param", (int64)EPCGSettingsType::Param },
		{ "EPCGSettingsType::HierarchicalGeneration", (int64)EPCGSettingsType::HierarchicalGeneration },
		{ "EPCGSettingsType::ControlFlow", (int64)EPCGSettingsType::ControlFlow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::Enum_MetaDataParams[] = {
		{ "Blueprint.Name", "EPCGSettingsType::Blueprint" },
		{ "ControlFlow.Name", "EPCGSettingsType::ControlFlow" },
		{ "Debug.Name", "EPCGSettingsType::Debug" },
		{ "Density.Name", "EPCGSettingsType::Density" },
		{ "Filter.Name", "EPCGSettingsType::Filter" },
		{ "Generic.Name", "EPCGSettingsType::Generic" },
		{ "HierarchicalGeneration.Name", "EPCGSettingsType::HierarchicalGeneration" },
		{ "InputOutput.Name", "EPCGSettingsType::InputOutput" },
		{ "Metadata.Name", "EPCGSettingsType::Metadata" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "Param.Name", "EPCGSettingsType::Param" },
		{ "Sampler.Name", "EPCGSettingsType::Sampler" },
		{ "Spatial.Name", "EPCGSettingsType::Spatial" },
		{ "Spawner.Name", "EPCGSettingsType::Spawner" },
		{ "Subgraph.Name", "EPCGSettingsType::Subgraph" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGSettingsType",
		"EPCGSettingsType",
		Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGSettingsType()
	{
		if (!Z_Registration_Info_UEnum_EPCGSettingsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGSettingsType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGSettingsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGSettingsType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPropertyAliases;
class UScriptStruct* FPCGPropertyAliases::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPropertyAliases.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPropertyAliases.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPropertyAliases, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPropertyAliases"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPropertyAliases.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPropertyAliases>()
{
	return FPCGPropertyAliases::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Aliases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aliases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Aliases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Dummy struct to bypass the UHT limitation for array of arrays.\n" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Dummy struct to bypass the UHT limitation for array of arrays." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPropertyAliases>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases_Inner = { "Aliases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases = { "Aliases", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPropertyAliases, Aliases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases_MetaData), Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewProp_Aliases,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPropertyAliases",
		Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::PropPointers),
		sizeof(FPCGPropertyAliases),
		alignof(FPCGPropertyAliases),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPropertyAliases()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPropertyAliases.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPropertyAliases.InnerSingleton, Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPropertyAliases.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam;
class UScriptStruct* FPCGSettingsOverridableParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGSettingsOverridableParam"));
	}
	return Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGSettingsOverridableParam>()
{
	return FPCGSettingsOverridableParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertiesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertiesNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapOfAliases_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapOfAliases_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapOfAliases_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapOfAliases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNameClash_MetaData[];
#endif
		static void NewProp_bHasNameClash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNameClash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGSettingsOverridableParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSettingsOverridableParam, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_Label_MetaData), Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames_Inner = { "PropertiesNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames = { "PropertiesNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSettingsOverridableParam, PropertiesNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames_MetaData), Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSettingsOverridableParam, PropertyClass), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertyClass_MetaData), Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertyClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_ValueProp = { "MapOfAliases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPCGPropertyAliases, METADATA_PARAMS(0, nullptr) }; // 1650006203
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_Key_KeyProp = { "MapOfAliases_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_MetaData[] = {
		{ "Comment", "// Map of all aliases for a given property, using its Index (to avoid name clashes within the same path)\n" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Map of all aliases for a given property, using its Index (to avoid name clashes within the same path)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases = { "MapOfAliases", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSettingsOverridableParam, MapOfAliases), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_MetaData), Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_MetaData) }; // 1650006203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash_MetaData[] = {
		{ "Comment", "// If this flag is true, Label will be the full property path.\n" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "If this flag is true, Label will be the full property path." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash_SetBit(void* Obj)
	{
		((FPCGSettingsOverridableParam*)Obj)->bHasNameClash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash = { "bHasNameClash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGSettingsOverridableParam), &Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash_MetaData), Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertiesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_PropertyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_MapOfAliases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewProp_bHasNameClash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGSettingsOverridableParam",
		Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::PropPointers),
		sizeof(FPCGSettingsOverridableParam),
		alignof(FPCGSettingsOverridableParam),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGSettingsOverridableParam()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam.InnerSingleton, Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo;
class UScriptStruct* FPCGPreConfiguredSettingsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPreConfiguredSettingsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPreConfiguredSettingsInfo>()
{
	return FPCGPreConfiguredSettingsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreconfiguredIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreconfiguredIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Pre-configured settings info\n* Will be passed to the settings to pre-configure the settings on creation.\n* Example: Maths operations: Add, Mul, etc...\n*/" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Pre-configured settings info\nWill be passed to the settings to pre-configure the settings on creation.\nExample: Maths operations: Add, Mul, etc..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPreConfiguredSettingsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_PreconfiguredIndex_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/* Index used by the settings to know which preconfigured settings it needs to set. */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Index used by the settings to know which preconfigured settings it needs to set." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_PreconfiguredIndex = { "PreconfiguredIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPreConfiguredSettingsInfo, PreconfiguredIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_PreconfiguredIndex_MetaData), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_PreconfiguredIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/* Label for the exposed asset. Can also be used instead of the index, if it is easier to deal with strings. */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Label for the exposed asset. Can also be used instead of the index, if it is easier to deal with strings." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPreConfiguredSettingsInfo, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Label_MetaData), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Label_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPreConfiguredSettingsInfo, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Tooltip_MetaData), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Tooltip_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_PreconfiguredIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Label,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewProp_Tooltip,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPreConfiguredSettingsInfo",
		Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::PropPointers),
		sizeof(FPCGPreConfiguredSettingsInfo),
		alignof(FPCGPreConfiguredSettingsInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo.InnerSingleton, Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo.InnerSingleton;
	}
	void UPCGSettingsInterface::StaticRegisterNativesUPCGSettingsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSettingsInterface);
	UClass* Z_Construct_UClass_UPCGSettingsInterface_NoRegister()
	{
		return UPCGSettingsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSettingsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBreakDebugger_MetaData[];
#endif
		static void NewProp_bBreakDebugger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBreakDebugger;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSettingsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGSettings.h" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UPCGSettingsInterface*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSettingsInterface), &Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UPCGSettingsInterface*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSettingsInterface), &Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug_MetaData), Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettingsInterface, DebugSettings), Z_Construct_UScriptStruct_FPCGDebugVisualizationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_DebugSettings_MetaData), Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_DebugSettings_MetaData) }; // 2223053569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If a debugger is attached, triggers a breakpoint inside IPCGElement::Execute(). Editor only. Transient. */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "If a debugger is attached, triggers a breakpoint inside IPCGElement::Execute(). Editor only. Transient." },
	};
#endif
	void Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger_SetBit(void* Obj)
	{
		((UPCGSettingsInterface*)Obj)->bBreakDebugger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger = { "bBreakDebugger", nullptr, (EPropertyFlags)0x0010040800202005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSettingsInterface), &Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger_MetaData), Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSettingsInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bDebug,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsInterface_Statics::NewProp_bBreakDebugger,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSettingsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSettingsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSettingsInterface_Statics::ClassParams = {
		&UPCGSettingsInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSettingsInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSettingsInterface_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInterface_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGSettingsInterface()
	{
		if (!Z_Registration_Info_UClass_UPCGSettingsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSettingsInterface.OuterSingleton, Z_Construct_UClass_UPCGSettingsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSettingsInterface.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSettingsInterface>()
	{
		return UPCGSettingsInterface::StaticClass();
	}
	UPCGSettingsInterface::UPCGSettingsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSettingsInterface);
	UPCGSettingsInterface::~UPCGSettingsInterface() {}
	void UPCGSettings::StaticRegisterNativesUPCGSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSettings);
	UClass* Z_Construct_UClass_UPCGSettings_NoRegister()
	{
		return UPCGSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilterOnTags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterOnTags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_FilterOnTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPassThroughFilteredOutInputs_MetaData[];
#endif
		static void NewProp_bPassThroughFilteredOutInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassThroughFilteredOutInputs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagsAppliedOnOutput_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsAppliedOnOutput_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TagsAppliedOnOutput;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeterminismSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeterminismSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeed_MetaData[];
#endif
		static void NewProp_bUseSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOverridableParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedOverridableParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedOverridableParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettingsInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Base class for settings-as-data in the PCG framework\n*/" },
		{ "IncludePath", "PCGSettings.h" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Base class for settings-as-data in the PCG framework" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bUseSeed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_Seed_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_Seed_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags_ElementProp = { "FilterOnTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Warning - this is deprecated and will be removed soon since we have a Filter By Tag node for this specific purpose */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Warning - this is deprecated and will be removed soon since we have a Filter By Tag node for this specific purpose" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags = { "FilterOnTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, FilterOnTags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Warning - this is deprecated and will be removed soon since we have a Filter By Tag node for this specific purpose */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Warning - this is deprecated and will be removed soon since we have a Filter By Tag node for this specific purpose" },
	};
#endif
	void Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs_SetBit(void* Obj)
	{
		((UPCGSettings*)Obj)->bPassThroughFilteredOutInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs = { "bPassThroughFilteredOutInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSettings), &Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput_ElementProp = { "TagsAppliedOnOutput", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Applies the specified tags on the output data. Note - this might be replaced by a dedicated Tagging node */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Applies the specified tags on the output data. Note - this might be replaced by a dedicated Tagging node" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput = { "TagsAppliedOnOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, TagsAppliedOnOutput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, ExecutionMode_DEPRECATED), Z_Construct_UEnum_PCG_EPCGSettingsExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode_MetaData) }; // 1890298867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_DeterminismSettings_MetaData[] = {
		{ "Category", "Determinism" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_DeterminismSettings = { "DeterminismSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, DeterminismSettings), Z_Construct_UScriptStruct_FPCGDeterminismSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_DeterminismSettings_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_DeterminismSettings_MetaData) }; // 2892208462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UPCGSettings*)Obj)->bExposeToLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010010800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSettings), &Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010010800000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, Category), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_Category_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_Category_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "AssetInfo" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// By default, settings won't use a seed. Set this bool to true in the child ctor to allow edition and use it.\n" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "By default, settings won't use a seed. Set this bool to true in the child ctor to allow edition and use it." },
	};
#endif
	void Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed_SetBit(void* Obj)
	{
		((UPCGSettings*)Obj)->bUseSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed = { "bUseSeed", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGSettings), &Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams_Inner = { "CachedOverridableParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGSettingsOverridableParam, METADATA_PARAMS(0, nullptr) }; // 1832670724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams_MetaData[] = {
		{ "Comment", "/** Needs to be serialized since property metadata (used to populate this array) is not available at runtime. */" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Needs to be serialized since property metadata (used to populate this array) is not available at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams = { "CachedOverridableParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettings, CachedOverridableParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams_MetaData), Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams_MetaData) }; // 1832670724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_FilterOnTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_bPassThroughFilteredOutInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_TagsAppliedOnOutput,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_DeterminismSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_bUseSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettings_Statics::NewProp_CachedOverridableParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSettings_Statics::ClassParams = {
		&UPCGSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSettings.OuterSingleton, Z_Construct_UClass_UPCGSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSettings>()
	{
		return UPCGSettings::StaticClass();
	}
	UPCGSettings::UPCGSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSettings);
	UPCGSettings::~UPCGSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPCGSettings)
	void UPCGSettingsInstance::StaticRegisterNativesUPCGSettingsInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSettingsInstance);
	UClass* Z_Construct_UClass_UPCGSettingsInstance_NoRegister()
	{
		return UPCGSettingsInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSettingsInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSettingsInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettingsInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCGSettings.h" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_OriginalSettings_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_OriginalSettings = { "OriginalSettings", nullptr, (EPropertyFlags)0x0014000800022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettingsInstance, OriginalSettings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_OriginalSettings_MetaData), Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_OriginalSettings_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Instance" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettingsInstance, Settings), Z_Construct_UClass_UPCGSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_Settings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSettingsInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_OriginalSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsInstance_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSettingsInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSettingsInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSettingsInstance_Statics::ClassParams = {
		&UPCGSettingsInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSettingsInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSettingsInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGSettingsInstance()
	{
		if (!Z_Registration_Info_UClass_UPCGSettingsInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSettingsInstance.OuterSingleton, Z_Construct_UClass_UPCGSettingsInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSettingsInstance.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSettingsInstance>()
	{
		return UPCGSettingsInstance::StaticClass();
	}
	UPCGSettingsInstance::UPCGSettingsInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSettingsInstance);
	UPCGSettingsInstance::~UPCGSettingsInstance() {}
	void UPCGTrivialSettings::StaticRegisterNativesUPCGTrivialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGTrivialSettings);
	UClass* Z_Construct_UClass_UPCGTrivialSettings_NoRegister()
	{
		return UPCGTrivialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGTrivialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGTrivialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTrivialSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGTrivialSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Trivial / Pass-through settings used for input/output nodes */" },
		{ "IncludePath", "PCGSettings.h" },
		{ "ModuleRelativePath", "Public/PCGSettings.h" },
		{ "ToolTip", "Trivial / Pass-through settings used for input/output nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGTrivialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGTrivialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGTrivialSettings_Statics::ClassParams = {
		&UPCGTrivialSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGTrivialSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGTrivialSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGTrivialSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGTrivialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGTrivialSettings.OuterSingleton, Z_Construct_UClass_UPCGTrivialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGTrivialSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGTrivialSettings>()
	{
		return UPCGTrivialSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGTrivialSettings);
	UPCGTrivialSettings::~UPCGTrivialSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::EnumInfo[] = {
		{ EPCGSettingsExecutionMode_StaticEnum, TEXT("EPCGSettingsExecutionMode"), &Z_Registration_Info_UEnum_EPCGSettingsExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1890298867U) },
		{ EPCGSettingsType_StaticEnum, TEXT("EPCGSettingsType"), &Z_Registration_Info_UEnum_EPCGSettingsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 180144913U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::ScriptStructInfo[] = {
		{ FPCGPropertyAliases::StaticStruct, Z_Construct_UScriptStruct_FPCGPropertyAliases_Statics::NewStructOps, TEXT("PCGPropertyAliases"), &Z_Registration_Info_UScriptStruct_PCGPropertyAliases, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPropertyAliases), 1650006203U) },
		{ FPCGSettingsOverridableParam::StaticStruct, Z_Construct_UScriptStruct_FPCGSettingsOverridableParam_Statics::NewStructOps, TEXT("PCGSettingsOverridableParam"), &Z_Registration_Info_UScriptStruct_PCGSettingsOverridableParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGSettingsOverridableParam), 1832670724U) },
		{ FPCGPreConfiguredSettingsInfo::StaticStruct, Z_Construct_UScriptStruct_FPCGPreConfiguredSettingsInfo_Statics::NewStructOps, TEXT("PCGPreConfiguredSettingsInfo"), &Z_Registration_Info_UScriptStruct_PCGPreConfiguredSettingsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPreConfiguredSettingsInfo), 1717054666U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSettingsInterface, UPCGSettingsInterface::StaticClass, TEXT("UPCGSettingsInterface"), &Z_Registration_Info_UClass_UPCGSettingsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSettingsInterface), 1221281592U) },
		{ Z_Construct_UClass_UPCGSettings, UPCGSettings::StaticClass, TEXT("UPCGSettings"), &Z_Registration_Info_UClass_UPCGSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSettings), 1610313526U) },
		{ Z_Construct_UClass_UPCGSettingsInstance, UPCGSettingsInstance::StaticClass, TEXT("UPCGSettingsInstance"), &Z_Registration_Info_UClass_UPCGSettingsInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSettingsInstance), 2559287203U) },
		{ Z_Construct_UClass_UPCGTrivialSettings, UPCGTrivialSettings::StaticClass, TEXT("UPCGTrivialSettings"), &Z_Registration_Info_UClass_UPCGTrivialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGTrivialSettings), 4204763469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_244918142(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

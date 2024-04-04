// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateData();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityTemplateID;
class UScriptStruct* FMassEntityTemplateID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityTemplateID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityTemplateID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityTemplateID, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassEntityTemplateID"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityTemplateID.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassEntityTemplateID>()
{
	return FMassEntityTemplateID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlavorHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FlavorHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_TotalHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//ID of the template an entity is using\n" },
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
		{ "ToolTip", "ID of the template an entity is using" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityTemplateID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_ConfigGuid_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_ConfigGuid = { "ConfigGuid", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassEntityTemplateID, ConfigGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_ConfigGuid_MetaData), Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_ConfigGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_FlavorHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_FlavorHash = { "FlavorHash", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassEntityTemplateID, FlavorHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_FlavorHash_MetaData), Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_FlavorHash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_TotalHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_TotalHash = { "TotalHash", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassEntityTemplateID, TotalHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_TotalHash_MetaData), Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_TotalHash_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_ConfigGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_FlavorHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_TotalHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassEntityTemplateID",
		Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers),
		sizeof(FMassEntityTemplateID),
		alignof(FMassEntityTemplateID),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityTemplateID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityTemplateID.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityTemplateID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityTemplateData;
class UScriptStruct* FMassEntityTemplateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityTemplateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityTemplateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityTemplateData, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassEntityTemplateData"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityTemplateData.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassEntityTemplateData>()
{
	return FMassEntityTemplateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Serves as data used to define and build finalized FMassEntityTemplate instances. Describes composition and initial\n * values of fragments for entities created with this data, and lets users modify and extend the data. Once finalized as \n * FMassEntityTemplate the data will become immutable. \n */" },
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
		{ "ToolTip", "Serves as data used to define and build finalized FMassEntityTemplate instances. Describes composition and initial\nvalues of fragments for entities created with this data, and lets users modify and extend the data. Once finalized as\nFMassEntityTemplate the data will become immutable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityTemplateData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassEntityTemplateData",
		nullptr,
		0,
		sizeof(FMassEntityTemplateData),
		alignof(FMassEntityTemplateData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityTemplateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityTemplateData.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityTemplateData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMassEntityTemplateID::StaticStruct, Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewStructOps, TEXT("MassEntityTemplateID"), &Z_Registration_Info_UScriptStruct_MassEntityTemplateID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityTemplateID), 3626400659U) },
		{ FMassEntityTemplateData::StaticStruct, Z_Construct_UScriptStruct_FMassEntityTemplateData_Statics::NewStructOps, TEXT("MassEntityTemplateData"), &Z_Registration_Info_UScriptStruct_MassEntityTemplateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityTemplateData), 3456993325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_1660209439(TEXT("/Script/MassSpawner"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

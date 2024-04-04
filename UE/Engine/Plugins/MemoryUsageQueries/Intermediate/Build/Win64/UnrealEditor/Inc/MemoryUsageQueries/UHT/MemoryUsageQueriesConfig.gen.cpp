// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MemoryUsageQueriesConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryUsageQueriesConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEMORYUSAGEQUERIES_API UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig();
	MEMORYUSAGEQUERIES_API UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister();
	MEMORYUSAGEQUERIES_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionInfo();
	UPackage* Z_Construct_UPackage__Script_MemoryUsageQueries();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionInfo;
class UScriptStruct* FCollectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionInfo, (UObject*)Z_Construct_UPackage__Script_MemoryUsageQueries(), TEXT("CollectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionInfo.OuterSingleton;
}
template<> MEMORYUSAGEQUERIES_API UScriptStruct* StaticStruct<FCollectionInfo>()
{
	return FCollectionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Includes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Includes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Includes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Excludes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Excludes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Excludes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BudgetMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BudgetMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \xe2\x80\x9cMemQuery Collection\xe2\x80\x9d will list memory consumption based on assets discovered that have a path\n// matching the one described in the ini file.\n// Matching supports Wildcards. e.g. */Game*/*\n// This will match assets such as /SomePath/Game/SomeLevelAsset\n// \n// Define these in DefaultMemoryUsageQueries.ini in your project \xe2\x80\x93 you have to provide preset name and UClass.\n// \n// e.g. Include all Characters and Pawns but exclude anything with Item in the path. Demonstrates wildcard usage.\n// [/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n// +Collections = (Name=\"Pawns\", Includes=(\"*/Character*/*\", \"/Pawn/\"), Excludes=(\"*/Item*/*\"))\n//\n// A budget can be defined which will compare the total memory against the budget\n// e.g.\n// [/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n// +Collections = (Name=\"Pawns\", Includes=(\"/Character/\", \"/Pawn/\"), BudgetMB=2.0)\n//\n// \"MemQuery Savings\" command will list all derived classes with potential savings for the specified preset.\n// \n// e.g.\n// [/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n// +SavingsPresets = ((\"Pawns\", \"/Script/OurProject.OurCharacter\"))\n//\n" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
		{ "ToolTip", "\xe2\x80\x9cMemQuery Collection\xe2\x80\x9d will list memory consumption based on assets discovered that have a path\nmatching the one described in the ini file.\nMatching supports Wildcards. e.g. Game*\nThis will match assets such as /SomePath/Game/SomeLevelAsset\n\nDefine these in DefaultMemoryUsageQueries.ini in your project \xe2\x80\x93 you have to provide preset name and UClass.\n\ne.g. Include all Characters and Pawns but exclude anything with Item in the path. Demonstrates wildcard usage.\n[/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n+Collections = (Name=\"Pawns\", Includes=(\"Character*\", \"/Pawn/\"), Excludes=(\"Item*\"))\n\nA budget can be defined which will compare the total memory against the budget\ne.g.\n[/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n+Collections = (Name=\"Pawns\", Includes=(\"/Character/\", \"/Pawn/\"), BudgetMB=2.0)\n\n\"MemQuery Savings\" command will list all derived classes with potential savings for the specified preset.\n\ne.g.\n[/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n+SavingsPresets = ((\"Pawns\", \"/Script/OurProject.OurCharacter\"))" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// Name of the collection\n" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
		{ "ToolTip", "Name of the collection" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes_Inner = { "Includes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes_MetaData[] = {
		{ "Comment", "// Collection of substrings to include whne matching against asset package paths\n" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
		{ "ToolTip", "Collection of substrings to include whne matching against asset package paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes = { "Includes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionInfo, Includes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes_MetaData), Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes_MetaData[] = {
		{ "Comment", "// Paths of asset package paths to exclude from the results\n" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
		{ "ToolTip", "Paths of asset package paths to exclude from the results" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionInfo, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes_MetaData), Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_BudgetMB_MetaData[] = {
		{ "Comment", "// Budget in MB\n" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
		{ "ToolTip", "Budget in MB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_BudgetMB = { "BudgetMB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollectionInfo, BudgetMB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_BudgetMB_MetaData), Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_BudgetMB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Includes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_Excludes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewProp_BudgetMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MemoryUsageQueries,
		nullptr,
		&NewStructOps,
		"CollectionInfo",
		Z_Construct_UScriptStruct_FCollectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::PropPointers),
		sizeof(FCollectionInfo),
		alignof(FCollectionInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollectionInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FCollectionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionInfo.InnerSingleton;
	}
	void UMemoryUsageQueriesConfig::StaticRegisterNativesUMemoryUsageQueriesConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemoryUsageQueriesConfig);
	UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister()
	{
		return UMemoryUsageQueriesConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Collections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavingsPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavingsPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavingsPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SavingsPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MemoryUsageQueries,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MemoryUsageQueriesConfig.h" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections_Inner = { "Collections", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCollectionInfo, METADATA_PARAMS(0, nullptr) }; // 3728942735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemoryUsageQueriesConfig, Collections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections_MetaData), Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections_MetaData) }; // 3728942735
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_ValueProp = { "SavingsPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_Key_KeyProp = { "SavingsPresets_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets = { "SavingsPresets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemoryUsageQueriesConfig, SavingsPresets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_MetaData), Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_Collections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryUsageQueriesConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::ClassParams = {
		&UMemoryUsageQueriesConfig::StaticClass,
		"MemoryUsageQueries",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig()
	{
		if (!Z_Registration_Info_UClass_UMemoryUsageQueriesConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemoryUsageQueriesConfig.OuterSingleton, Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMemoryUsageQueriesConfig.OuterSingleton;
	}
	template<> MEMORYUSAGEQUERIES_API UClass* StaticClass<UMemoryUsageQueriesConfig>()
	{
		return UMemoryUsageQueriesConfig::StaticClass();
	}
	UMemoryUsageQueriesConfig::UMemoryUsageQueriesConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryUsageQueriesConfig);
	UMemoryUsageQueriesConfig::~UMemoryUsageQueriesConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ScriptStructInfo[] = {
		{ FCollectionInfo::StaticStruct, Z_Construct_UScriptStruct_FCollectionInfo_Statics::NewStructOps, TEXT("CollectionInfo"), &Z_Registration_Info_UScriptStruct_CollectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionInfo), 3728942735U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMemoryUsageQueriesConfig, UMemoryUsageQueriesConfig::StaticClass, TEXT("UMemoryUsageQueriesConfig"), &Z_Registration_Info_UClass_UMemoryUsageQueriesConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemoryUsageQueriesConfig), 1784821702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_2018452794(TEXT("/Script/MemoryUsageQueries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

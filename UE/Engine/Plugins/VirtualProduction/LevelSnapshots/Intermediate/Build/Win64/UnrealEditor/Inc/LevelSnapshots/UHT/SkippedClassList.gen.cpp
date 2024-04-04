// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Settings/SkippedClassList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkippedClassList() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSkippedClassList();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkippedClassList;
class UScriptStruct* FSkippedClassList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkippedClassList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkippedClassList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkippedClassList, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SkippedClassList"));
	}
	return Z_Registration_Info_UScriptStruct_SkippedClassList.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSkippedClassList>()
{
	return FSkippedClassList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkippedClassList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkippedClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkippedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SkippedClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkippedClassList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/SkippedClassList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkippedClassList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses_ElementProp = { "SkippedClasses", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/* These actor and component classes are skipped. */" },
		{ "ModuleRelativePath", "Public/Settings/SkippedClassList.h" },
		{ "ToolTip", "These actor and component classes are skipped." },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FSoftClassPath>, "The structure 'FSoftClassPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses = { "SkippedClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkippedClassList, SkippedClasses), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses_MetaData), Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkippedClassList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewProp_SkippedClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkippedClassList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SkippedClassList",
		Z_Construct_UScriptStruct_FSkippedClassList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkippedClassList_Statics::PropPointers),
		sizeof(FSkippedClassList),
		alignof(FSkippedClassList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkippedClassList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkippedClassList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkippedClassList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkippedClassList()
	{
		if (!Z_Registration_Info_UScriptStruct_SkippedClassList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkippedClassList.InnerSingleton, Z_Construct_UScriptStruct_FSkippedClassList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkippedClassList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SkippedClassList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SkippedClassList_h_Statics::ScriptStructInfo[] = {
		{ FSkippedClassList::StaticStruct, Z_Construct_UScriptStruct_FSkippedClassList_Statics::NewStructOps, TEXT("SkippedClassList"), &Z_Registration_Info_UScriptStruct_SkippedClassList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkippedClassList), 3353138869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SkippedClassList_h_4116237530(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SkippedClassList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SkippedClassList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

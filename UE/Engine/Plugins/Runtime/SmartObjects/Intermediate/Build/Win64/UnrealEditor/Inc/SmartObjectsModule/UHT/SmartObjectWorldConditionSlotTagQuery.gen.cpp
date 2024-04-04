// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditions/SmartObjectWorldConditionSlotTagQuery.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectWorldConditionSlotTagQuery() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState;
class UScriptStruct* FSmartObjectWorldConditionSlotTagQueryState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectWorldConditionSlotTagQueryState"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectWorldConditionSlotTagQueryState>()
{
	return FSmartObjectWorldConditionSlotTagQueryState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * World condition to match Smart Object slots's runtime tags.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionSlotTagQuery.h" },
		{ "ToolTip", "World condition to match Smart Object slots's runtime tags." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectWorldConditionSlotTagQueryState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectWorldConditionSlotTagQueryState",
		nullptr,
		0,
		sizeof(FSmartObjectWorldConditionSlotTagQueryState),
		alignof(FSmartObjectWorldConditionSlotTagQueryState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartObjectWorldConditionSlotTagQuery>() == std::is_polymorphic<FSmartObjectWorldConditionBase>(), "USTRUCT FSmartObjectWorldConditionSlotTagQuery cannot be polymorphic unless super FSmartObjectWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery;
class UScriptStruct* FSmartObjectWorldConditionSlotTagQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectWorldConditionSlotTagQuery"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectWorldConditionSlotTagQuery>()
{
	return FSmartObjectWorldConditionSlotTagQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Match Runtime Slot Tags" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionSlotTagQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectWorldConditionSlotTagQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewProp_TagQuery_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Smart Object Slot's runtime tags needs to match this query for the condition to evaluate true. */" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionSlotTagQuery.h" },
		{ "ToolTip", "Smart Object Slot's runtime tags needs to match this query for the condition to evaluate true." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectWorldConditionSlotTagQuery, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewProp_TagQuery_MetaData), Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewProp_TagQuery_MetaData) }; // 1191468383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewProp_TagQuery,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase,
		&NewStructOps,
		"SmartObjectWorldConditionSlotTagQuery",
		Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::PropPointers),
		sizeof(FSmartObjectWorldConditionSlotTagQuery),
		alignof(FSmartObjectWorldConditionSlotTagQuery),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSlotTagQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSlotTagQuery_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectWorldConditionSlotTagQueryState::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQueryState_Statics::NewStructOps, TEXT("SmartObjectWorldConditionSlotTagQueryState"), &Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQueryState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectWorldConditionSlotTagQueryState), 3928276235U) },
		{ FSmartObjectWorldConditionSlotTagQuery::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectWorldConditionSlotTagQuery_Statics::NewStructOps, TEXT("SmartObjectWorldConditionSlotTagQuery"), &Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionSlotTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectWorldConditionSlotTagQuery), 3552950386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSlotTagQuery_h_4012850805(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSlotTagQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionSlotTagQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

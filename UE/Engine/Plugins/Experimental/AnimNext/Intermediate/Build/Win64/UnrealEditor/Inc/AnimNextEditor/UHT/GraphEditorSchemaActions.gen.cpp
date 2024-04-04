// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/GraphEditorSchemaActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphEditorSchemaActions() {}
// Cross Module References
	ANIMNEXTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction();
	ANIMNEXTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory();
	ANIMNEXTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextGraphSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAnimNextGraphSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction;
class UScriptStruct* FAnimNextGraphSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction, (UObject*)Z_Construct_UPackage__Script_AnimNextEditor(), TEXT("AnimNextGraphSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction.OuterSingleton;
}
template<> ANIMNEXTEDITOR_API UScriptStruct* StaticStruct<FAnimNextGraphSchemaAction>()
{
	return FAnimNextGraphSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graph/GraphEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraphSchemaAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AnimNextGraphSchemaAction",
		nullptr,
		0,
		sizeof(FAnimNextGraphSchemaAction),
		alignof(FAnimNextGraphSchemaAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNextGraphSchemaAction_RigUnit>() == std::is_polymorphic<FAnimNextGraphSchemaAction>(), "USTRUCT FAnimNextGraphSchemaAction_RigUnit cannot be polymorphic unless super FAnimNextGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit;
class UScriptStruct* FAnimNextGraphSchemaAction_RigUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit, (UObject*)Z_Construct_UPackage__Script_AnimNextEditor(), TEXT("AnimNextGraphSchemaAction_RigUnit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit.OuterSingleton;
}
template<> ANIMNEXTEDITOR_API UScriptStruct* StaticStruct<FAnimNextGraphSchemaAction_RigUnit>()
{
	return FAnimNextGraphSchemaAction_RigUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graph/GraphEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraphSchemaAction_RigUnit>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
		Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction,
		&NewStructOps,
		"AnimNextGraphSchemaAction_RigUnit",
		nullptr,
		0,
		sizeof(FAnimNextGraphSchemaAction_RigUnit),
		alignof(FAnimNextGraphSchemaAction_RigUnit),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNextGraphSchemaAction_DispatchFactory>() == std::is_polymorphic<FAnimNextGraphSchemaAction>(), "USTRUCT FAnimNextGraphSchemaAction_DispatchFactory cannot be polymorphic unless super FAnimNextGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory;
class UScriptStruct* FAnimNextGraphSchemaAction_DispatchFactory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory, (UObject*)Z_Construct_UPackage__Script_AnimNextEditor(), TEXT("AnimNextGraphSchemaAction_DispatchFactory"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory.OuterSingleton;
}
template<> ANIMNEXTEDITOR_API UScriptStruct* StaticStruct<FAnimNextGraphSchemaAction_DispatchFactory>()
{
	return FAnimNextGraphSchemaAction_DispatchFactory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Graph/GraphEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraphSchemaAction_DispatchFactory>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
		Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction,
		&NewStructOps,
		"AnimNextGraphSchemaAction_DispatchFactory",
		nullptr,
		0,
		sizeof(FAnimNextGraphSchemaAction_DispatchFactory),
		alignof(FAnimNextGraphSchemaAction_DispatchFactory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Graph_GraphEditorSchemaActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Graph_GraphEditorSchemaActions_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextGraphSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_Statics::NewStructOps, TEXT("AnimNextGraphSchemaAction"), &Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraphSchemaAction), 2997280799U) },
		{ FAnimNextGraphSchemaAction_RigUnit::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_RigUnit_Statics::NewStructOps, TEXT("AnimNextGraphSchemaAction_RigUnit"), &Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_RigUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraphSchemaAction_RigUnit), 1138441983U) },
		{ FAnimNextGraphSchemaAction_DispatchFactory::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraphSchemaAction_DispatchFactory_Statics::NewStructOps, TEXT("AnimNextGraphSchemaAction_DispatchFactory"), &Z_Registration_Info_UScriptStruct_AnimNextGraphSchemaAction_DispatchFactory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraphSchemaAction_DispatchFactory), 3260882718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Graph_GraphEditorSchemaActions_h_920042479(TEXT("/Script/AnimNextEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Graph_GraphEditorSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Graph_GraphEditorSchemaActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

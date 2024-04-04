// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Param/ParametersEditorSchemaActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametersEditorSchemaActions() {}
// Cross Module References
	ANIMNEXTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction();
	ANIMNEXTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextParameterSchemaAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAnimNextParameterSchemaAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction;
class UScriptStruct* FAnimNextParameterSchemaAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction, (UObject*)Z_Construct_UPackage__Script_AnimNextEditor(), TEXT("AnimNextParameterSchemaAction"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction.OuterSingleton;
}
template<> ANIMNEXTEDITOR_API UScriptStruct* StaticStruct<FAnimNextParameterSchemaAction>()
{
	return FAnimNextParameterSchemaAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Param/ParametersEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParameterSchemaAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"AnimNextParameterSchemaAction",
		nullptr,
		0,
		sizeof(FAnimNextParameterSchemaAction),
		alignof(FAnimNextParameterSchemaAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNextParameterSchemaAction_RigUnit>() == std::is_polymorphic<FAnimNextParameterSchemaAction>(), "USTRUCT FAnimNextParameterSchemaAction_RigUnit cannot be polymorphic unless super FAnimNextParameterSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit;
class UScriptStruct* FAnimNextParameterSchemaAction_RigUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit, (UObject*)Z_Construct_UPackage__Script_AnimNextEditor(), TEXT("AnimNextParameterSchemaAction_RigUnit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit.OuterSingleton;
}
template<> ANIMNEXTEDITOR_API UScriptStruct* StaticStruct<FAnimNextParameterSchemaAction_RigUnit>()
{
	return FAnimNextParameterSchemaAction_RigUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Param/ParametersEditorSchemaActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParameterSchemaAction_RigUnit>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
		Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction,
		&NewStructOps,
		"AnimNextParameterSchemaAction_RigUnit",
		nullptr,
		0,
		sizeof(FAnimNextParameterSchemaAction_RigUnit),
		alignof(FAnimNextParameterSchemaAction_RigUnit),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParametersEditorSchemaActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParametersEditorSchemaActions_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextParameterSchemaAction::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_Statics::NewStructOps, TEXT("AnimNextParameterSchemaAction"), &Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParameterSchemaAction), 2811482955U) },
		{ FAnimNextParameterSchemaAction_RigUnit::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParameterSchemaAction_RigUnit_Statics::NewStructOps, TEXT("AnimNextParameterSchemaAction_RigUnit"), &Z_Registration_Info_UScriptStruct_AnimNextParameterSchemaAction_RigUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParameterSchemaAction_RigUnit), 3246945299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParametersEditorSchemaActions_h_3202564189(TEXT("/Script/AnimNextEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParametersEditorSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParametersEditorSchemaActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

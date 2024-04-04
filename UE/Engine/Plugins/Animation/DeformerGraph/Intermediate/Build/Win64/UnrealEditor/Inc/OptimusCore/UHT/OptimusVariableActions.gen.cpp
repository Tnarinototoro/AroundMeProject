// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Actions/OptimusVariableActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusVariableActions() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

static_assert(std::is_polymorphic<FOptimusVariableAction_AddVariable>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusVariableAction_AddVariable cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable;
class UScriptStruct* FOptimusVariableAction_AddVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusVariableAction_AddVariable"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusVariableAction_AddVariable>()
{
	return FOptimusVariableAction_AddVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusVariableActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusVariableAction_AddVariable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusVariableAction_AddVariable",
		nullptr,
		0,
		sizeof(FOptimusVariableAction_AddVariable),
		alignof(FOptimusVariableAction_AddVariable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable.InnerSingleton, Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusVariableAction_RemoveVariable>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusVariableAction_RemoveVariable cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable;
class UScriptStruct* FOptimusVariableAction_RemoveVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusVariableAction_RemoveVariable"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusVariableAction_RemoveVariable>()
{
	return FOptimusVariableAction_RemoveVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusVariableActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusVariableAction_RemoveVariable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusVariableAction_RemoveVariable",
		nullptr,
		0,
		sizeof(FOptimusVariableAction_RemoveVariable),
		alignof(FOptimusVariableAction_RemoveVariable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable.InnerSingleton, Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusVariableAction_RenameVariable>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusVariableAction_RenameVariable cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable;
class UScriptStruct* FOptimusVariableAction_RenameVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusVariableAction_RenameVariable"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusVariableAction_RenameVariable>()
{
	return FOptimusVariableAction_RenameVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusVariableActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusVariableAction_RenameVariable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusVariableAction_RenameVariable",
		nullptr,
		0,
		sizeof(FOptimusVariableAction_RenameVariable),
		alignof(FOptimusVariableAction_RenameVariable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable.InnerSingleton, Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusVariableAction_SetDataType>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusVariableAction_SetDataType cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType;
class UScriptStruct* FOptimusVariableAction_SetDataType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusVariableAction_SetDataType"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusVariableAction_SetDataType>()
{
	return FOptimusVariableAction_SetDataType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusVariableActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusVariableAction_SetDataType>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusVariableAction_SetDataType",
		nullptr,
		0,
		sizeof(FOptimusVariableAction_SetDataType),
		alignof(FOptimusVariableAction_SetDataType),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType.InnerSingleton, Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusVariableActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusVariableActions_h_Statics::ScriptStructInfo[] = {
		{ FOptimusVariableAction_AddVariable::StaticStruct, Z_Construct_UScriptStruct_FOptimusVariableAction_AddVariable_Statics::NewStructOps, TEXT("OptimusVariableAction_AddVariable"), &Z_Registration_Info_UScriptStruct_OptimusVariableAction_AddVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusVariableAction_AddVariable), 3335606765U) },
		{ FOptimusVariableAction_RemoveVariable::StaticStruct, Z_Construct_UScriptStruct_FOptimusVariableAction_RemoveVariable_Statics::NewStructOps, TEXT("OptimusVariableAction_RemoveVariable"), &Z_Registration_Info_UScriptStruct_OptimusVariableAction_RemoveVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusVariableAction_RemoveVariable), 3922444273U) },
		{ FOptimusVariableAction_RenameVariable::StaticStruct, Z_Construct_UScriptStruct_FOptimusVariableAction_RenameVariable_Statics::NewStructOps, TEXT("OptimusVariableAction_RenameVariable"), &Z_Registration_Info_UScriptStruct_OptimusVariableAction_RenameVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusVariableAction_RenameVariable), 4097722882U) },
		{ FOptimusVariableAction_SetDataType::StaticStruct, Z_Construct_UScriptStruct_FOptimusVariableAction_SetDataType_Statics::NewStructOps, TEXT("OptimusVariableAction_SetDataType"), &Z_Registration_Info_UScriptStruct_OptimusVariableAction_SetDataType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusVariableAction_SetDataType), 2874804997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusVariableActions_h_2403754059(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusVariableActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusVariableActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

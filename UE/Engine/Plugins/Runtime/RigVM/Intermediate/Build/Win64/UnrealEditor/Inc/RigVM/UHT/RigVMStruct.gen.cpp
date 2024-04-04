// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMStruct.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMStruct() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMStruct;
class UScriptStruct* FRigVMStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStruct, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMStruct>()
{
	return FRigVMStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all RigVM enabled structs.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "ToolTip", "The base class for all RigVM enabled structs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMStruct",
		nullptr,
		0,
		sizeof(FRigVMStruct),
		alignof(FRigVMStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton, Z_Construct_UScriptStruct_FRigVMStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMStructMutable>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMStructMutable cannot be polymorphic unless super FRigVMStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMStructMutable;
class UScriptStruct* FRigVMStructMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStructMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMStructMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStructMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMStructMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMStructMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMStructMutable>()
{
	return FRigVMStructMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMStructMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base mutable class for all RigVM enabled structs.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "ToolTip", "The base mutable class for all RigVM enabled structs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMStructMutable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * This property is used to chain multiple mutable nodes together\n\x09 */" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "Output", "" },
		{ "ToolTip", "* This property is used to chain multiple mutable nodes together" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMStructMutable, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext_MetaData), Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext_MetaData) }; // 2528636812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStruct,
		&NewStructOps,
		"RigVMStructMutable",
		Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers),
		sizeof(FRigVMStructMutable),
		alignof(FRigVMStructMutable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMStructMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMStructMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMStructMutable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo[] = {
		{ FRigVMStruct::StaticStruct, Z_Construct_UScriptStruct_FRigVMStruct_Statics::NewStructOps, TEXT("RigVMStruct"), &Z_Registration_Info_UScriptStruct_RigVMStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMStruct), 3617881612U) },
		{ FRigVMStructMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMStructMutable_Statics::NewStructOps, TEXT("RigVMStructMutable"), &Z_Registration_Info_UScriptStruct_RigVMStructMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMStructMutable), 1785762783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_3754310186(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

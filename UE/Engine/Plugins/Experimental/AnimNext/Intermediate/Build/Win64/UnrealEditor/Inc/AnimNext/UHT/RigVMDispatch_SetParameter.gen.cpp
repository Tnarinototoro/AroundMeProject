// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/RigVMDispatch_SetParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_SetParameter() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMDispatch_SetParameter>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigVMDispatch_SetParameter cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter;
class UScriptStruct* FRigVMDispatch_SetParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigVMDispatch_SetParameter"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigVMDispatch_SetParameter>()
{
	return FRigVMDispatch_SetParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Sets a parameter's value\n */" },
		{ "DisplayName", "Set Parameter" },
		{ "ModuleRelativePath", "Internal/Param/RigVMDispatch_SetParameter.h" },
		{ "NodeColor", "0.8, 0, 0.2, 1" },
		{ "ToolTip", "* Sets a parameter's value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_SetParameter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigVMDispatchFactory,
		&NewStructOps,
		"RigVMDispatch_SetParameter",
		nullptr,
		0,
		sizeof(FRigVMDispatch_SetParameter),
		alignof(FRigVMDispatch_SetParameter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigVMDispatch_SetParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigVMDispatch_SetParameter_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDispatch_SetParameter::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_SetParameter_Statics::NewStructOps, TEXT("RigVMDispatch_SetParameter"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_SetParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_SetParameter), 2211752653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigVMDispatch_SetParameter_h_674146744(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigVMDispatch_SetParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigVMDispatch_SetParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

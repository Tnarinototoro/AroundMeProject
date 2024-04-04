// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDecorator() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDecorator();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMDecorator>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMDecorator cannot be polymorphic unless super FRigVMStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDecorator;
class UScriptStruct* FRigVMDecorator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDecorator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDecorator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDecorator, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDecorator"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDecorator.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDecorator>()
{
	return FRigVMDecorator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDecorator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDecorator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all RigVM decorators.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDecorator.h" },
		{ "ToolTip", "The base class for all RigVM decorators." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDecorator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDecorator>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDecorator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStruct,
		&NewStructOps,
		"RigVMDecorator",
		nullptr,
		0,
		sizeof(FRigVMDecorator),
		alignof(FRigVMDecorator),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDecorator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDecorator_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDecorator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDecorator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDecorator.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDecorator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDecorator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDecorator::StaticStruct, Z_Construct_UScriptStruct_FRigVMDecorator_Statics::NewStructOps, TEXT("RigVMDecorator"), &Z_Registration_Info_UScriptStruct_RigVMDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDecorator), 719384073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_3574706641(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMDecorator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

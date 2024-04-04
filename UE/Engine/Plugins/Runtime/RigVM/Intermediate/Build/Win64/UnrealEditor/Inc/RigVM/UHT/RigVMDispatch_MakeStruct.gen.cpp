// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/RigVMDispatch_MakeStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_MakeStruct() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMDispatch_MakeStruct>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_MakeStruct cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct;
class UScriptStruct* FRigVMDispatch_MakeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_MakeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_MakeStruct>()
{
	return FRigVMDispatch_MakeStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Core" },
		{ "DisplayName", "Make" },
		{ "Keywords", "Compose,Composition,Create,Constant" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_MakeStruct.h" },
		{ "NodeColor", "1,1,1,1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_MakeStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
		&NewStructOps,
		"RigVMDispatch_MakeStruct",
		nullptr,
		0,
		sizeof(FRigVMDispatch_MakeStruct),
		alignof(FRigVMDispatch_MakeStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMDispatch_BreakStruct>() == std::is_polymorphic<FRigVMDispatch_MakeStruct>(), "USTRUCT FRigVMDispatch_BreakStruct cannot be polymorphic unless super FRigVMDispatch_MakeStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct;
class UScriptStruct* FRigVMDispatch_BreakStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_BreakStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_BreakStruct>()
{
	return FRigVMDispatch_BreakStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Break" },
		{ "Keywords", "Decompose,Decomposition" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_MakeStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_BreakStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct,
		&NewStructOps,
		"RigVMDispatch_BreakStruct",
		nullptr,
		0,
		sizeof(FRigVMDispatch_BreakStruct),
		alignof(FRigVMDispatch_BreakStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_MakeStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_MakeStruct_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDispatch_MakeStruct::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_MakeStruct_Statics::NewStructOps, TEXT("RigVMDispatch_MakeStruct"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_MakeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_MakeStruct), 2285606675U) },
		{ FRigVMDispatch_BreakStruct::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_BreakStruct_Statics::NewStructOps, TEXT("RigVMDispatch_BreakStruct"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_BreakStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_BreakStruct), 3475572774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_MakeStruct_h_3182796816(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_MakeStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMDispatch_MakeStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

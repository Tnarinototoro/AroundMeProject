// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGStaticMeshSpawnerContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGStaticMeshSpawnerContext() {}
// Cross Module References
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGContext();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References

static_assert(std::is_polymorphic<FPCGStaticMeshSpawnerContext>() == std::is_polymorphic<FPCGContext>(), "USTRUCT FPCGStaticMeshSpawnerContext cannot be polymorphic unless super FPCGContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext;
class UScriptStruct* FPCGStaticMeshSpawnerContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGStaticMeshSpawnerContext"));
	}
	return Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGStaticMeshSpawnerContext>()
{
	return FPCGStaticMeshSpawnerContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGStaticMeshSpawnerContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGStaticMeshSpawnerContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FPCGContext,
		&NewStructOps,
		"PCGStaticMeshSpawnerContext",
		nullptr,
		0,
		sizeof(FPCGStaticMeshSpawnerContext),
		alignof(FPCGStaticMeshSpawnerContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext.InnerSingleton, Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h_Statics::ScriptStructInfo[] = {
		{ FPCGStaticMeshSpawnerContext::StaticStruct, Z_Construct_UScriptStruct_FPCGStaticMeshSpawnerContext_Statics::NewStructOps, TEXT("PCGStaticMeshSpawnerContext"), &Z_Registration_Info_UScriptStruct_PCGStaticMeshSpawnerContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGStaticMeshSpawnerContext), 284404814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h_1566252461(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawnerContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

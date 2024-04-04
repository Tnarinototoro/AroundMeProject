// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterRandomize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterRandomize() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterRandomizeBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserRandomizationContext();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserRandomizationContext;
class UScriptStruct* FChooserRandomizationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserRandomizationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserRandomizationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserRandomizationContext, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserRandomizationContext"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserRandomizationContext.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserRandomizationContext>()
{
	return FChooserRandomizationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IChooserParameterRandomize.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserRandomizationContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserRandomizationContext",
		nullptr,
		0,
		sizeof(FChooserRandomizationContext),
		alignof(FChooserRandomizationContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserRandomizationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserRandomizationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserRandomizationContext.InnerSingleton, Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserRandomizationContext.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChooserParameterRandomizeBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterRandomizeBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase;
class UScriptStruct* FChooserParameterRandomizeBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterRandomizeBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterRandomizeBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterRandomizeBase>()
{
	return FChooserParameterRandomizeBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterRandomize.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterRandomizeBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterRandomizeBase",
		nullptr,
		0,
		sizeof(FChooserParameterRandomizeBase),
		alignof(FChooserParameterRandomizeBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterRandomizeBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterRandomize_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterRandomize_h_Statics::ScriptStructInfo[] = {
		{ FChooserRandomizationContext::StaticStruct, Z_Construct_UScriptStruct_FChooserRandomizationContext_Statics::NewStructOps, TEXT("ChooserRandomizationContext"), &Z_Registration_Info_UScriptStruct_ChooserRandomizationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserRandomizationContext), 2817982277U) },
		{ FChooserParameterRandomizeBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterRandomizeBase_Statics::NewStructOps, TEXT("ChooserParameterRandomizeBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterRandomizeBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterRandomizeBase), 660225730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterRandomize_h_765666890(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterRandomize_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterRandomize_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

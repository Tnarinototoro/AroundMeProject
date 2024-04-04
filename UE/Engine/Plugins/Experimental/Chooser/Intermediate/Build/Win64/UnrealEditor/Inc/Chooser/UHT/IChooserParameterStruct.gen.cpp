// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterStruct() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterStructBase();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FChooserParameterStructBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterStructBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterStructBase;
class UScriptStruct* FChooserParameterStructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterStructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterStructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterStructBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterStructBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterStructBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterStructBase>()
{
	return FChooserParameterStructBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterStructBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterStructBase",
		nullptr,
		0,
		sizeof(FChooserParameterStructBase),
		alignof(FChooserParameterStructBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterStructBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterStructBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterStructBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterStructBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterStruct_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterStructBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterStructBase_Statics::NewStructOps, TEXT("ChooserParameterStructBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterStructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterStructBase), 1586736288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterStruct_h_1302697143(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

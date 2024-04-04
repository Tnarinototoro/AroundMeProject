// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterObject() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterObjectBase();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FChooserParameterObjectBase>() == std::is_polymorphic<FChooserParameterBase>(), "USTRUCT FChooserParameterObjectBase cannot be polymorphic unless super FChooserParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase;
class UScriptStruct* FChooserParameterObjectBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterObjectBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterObjectBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterObjectBase>()
{
	return FChooserParameterObjectBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterObjectBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBase,
		&NewStructOps,
		"ChooserParameterObjectBase",
		nullptr,
		0,
		sizeof(FChooserParameterObjectBase),
		alignof(FChooserParameterObjectBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterObjectBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterObject_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterObjectBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterObjectBase_Statics::NewStructOps, TEXT("ChooserParameterObjectBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterObjectBase), 3334795328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterObject_h_3465611992(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

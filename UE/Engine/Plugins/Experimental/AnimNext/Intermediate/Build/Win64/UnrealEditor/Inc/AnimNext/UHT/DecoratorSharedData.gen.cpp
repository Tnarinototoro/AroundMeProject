// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DecoratorBase/DecoratorSharedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorSharedData() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData;
class UScriptStruct* FAnimNextDecoratorSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextDecoratorSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextDecoratorSharedData>()
{
	return FAnimNextDecoratorSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FAnimNextDecoratorSharedData\n * Decorator shared data represents a unique instance in the authored static graph.\n * Each instance of a graph will share instances of the read-only shared data.\n * Shared data typically contains hardcoded properties, RigVM latent pin information,\n * or pooled properties shared between multiple decorators.\n * \n * @see FNodeDescription\n *\n * A FAnimNextDecoratorSharedData is the base type that decorator shared data derives from.\n */" },
		{ "ModuleRelativePath", "Public/DecoratorBase/DecoratorSharedData.h" },
		{ "ToolTip", "FAnimNextDecoratorSharedData\nDecorator shared data represents a unique instance in the authored static graph.\nEach instance of a graph will share instances of the read-only shared data.\nShared data typically contains hardcoded properties, RigVM latent pin information,\nor pooled properties shared between multiple decorators.\n\n@see FNodeDescription\n\nA FAnimNextDecoratorSharedData is the base type that decorator shared data derives from." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextDecoratorSharedData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextDecoratorSharedData",
		nullptr,
		0,
		sizeof(FAnimNextDecoratorSharedData),
		alignof(FAnimNextDecoratorSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorSharedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorSharedData_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextDecoratorSharedData::StaticStruct, Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData_Statics::NewStructOps, TEXT("AnimNextDecoratorSharedData"), &Z_Registration_Info_UScriptStruct_AnimNextDecoratorSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextDecoratorSharedData), 3096275956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorSharedData_h_3095195467(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorSharedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorSharedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

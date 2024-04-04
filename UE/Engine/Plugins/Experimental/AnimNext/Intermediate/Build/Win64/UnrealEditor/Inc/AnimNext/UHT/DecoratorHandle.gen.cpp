// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DecoratorBase/DecoratorHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoratorHandle() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorHandle();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle;
class UScriptStruct* FAnimNextDecoratorHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextDecoratorHandle, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextDecoratorHandle"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextDecoratorHandle>()
{
	return FAnimNextDecoratorHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedDecoratorIndexAndNodeSharedOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedDecoratorIndexAndNodeSharedOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Decorator Handle\n * A decorator handle represents a reference to a specific decorator instance in the shared/read-only portion\n * of a sub-graph. It points to a FNodeDescription when resolved.\n * @see FNodeDescription\n */" },
		{ "ModuleRelativePath", "Public/DecoratorBase/DecoratorHandle.h" },
		{ "ToolTip", "Decorator Handle\nA decorator handle represents a reference to a specific decorator instance in the shared/read-only portion\nof a sub-graph. It points to a FNodeDescription when resolved.\n@see FNodeDescription" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextDecoratorHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewProp_PackedDecoratorIndexAndNodeSharedOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecoratorBase/DecoratorHandle.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewProp_PackedDecoratorIndexAndNodeSharedOffset = { "PackedDecoratorIndexAndNodeSharedOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextDecoratorHandle, PackedDecoratorIndexAndNodeSharedOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewProp_PackedDecoratorIndexAndNodeSharedOffset_MetaData), Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewProp_PackedDecoratorIndexAndNodeSharedOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewProp_PackedDecoratorIndexAndNodeSharedOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextDecoratorHandle",
		Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::PropPointers),
		sizeof(FAnimNextDecoratorHandle),
		alignof(FAnimNextDecoratorHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorHandle_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextDecoratorHandle::StaticStruct, Z_Construct_UScriptStruct_FAnimNextDecoratorHandle_Statics::NewStructOps, TEXT("AnimNextDecoratorHandle"), &Z_Registration_Info_UScriptStruct_AnimNextDecoratorHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextDecoratorHandle), 2136084323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorHandle_h_4018948589(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_DecoratorBase_DecoratorHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

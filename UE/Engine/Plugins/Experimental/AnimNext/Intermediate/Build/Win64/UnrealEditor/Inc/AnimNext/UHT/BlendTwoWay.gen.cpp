// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Decorators/BlendTwoWay.h"
#include "DecoratorBase/DecoratorHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendTwoWay() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorHandle();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextBlendTwoWayDecoratorSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FAnimNextBlendTwoWayDecoratorSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData;
class UScriptStruct* FAnimNextBlendTwoWayDecoratorSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextBlendTwoWayDecoratorSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextBlendTwoWayDecoratorSharedData>()
{
	return FAnimNextBlendTwoWayDecoratorSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Decorators/BlendTwoWay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextBlendTwoWayDecoratorSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Private/Decorators/BlendTwoWay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Children, FAnimNextBlendTwoWayDecoratorSharedData), STRUCT_OFFSET(FAnimNextBlendTwoWayDecoratorSharedData, Children), Z_Construct_UScriptStruct_FAnimNextDecoratorHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_Children_MetaData), Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_Children_MetaData) }; // 2136084323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Private/Decorators/BlendTwoWay.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextBlendTwoWayDecoratorSharedData, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_BlendWeight_MetaData), Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_BlendWeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewProp_BlendWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"AnimNextBlendTwoWayDecoratorSharedData",
		Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::PropPointers),
		sizeof(FAnimNextBlendTwoWayDecoratorSharedData),
		alignof(FAnimNextBlendTwoWayDecoratorSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_BlendTwoWay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_BlendTwoWay_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextBlendTwoWayDecoratorSharedData::StaticStruct, Z_Construct_UScriptStruct_FAnimNextBlendTwoWayDecoratorSharedData_Statics::NewStructOps, TEXT("AnimNextBlendTwoWayDecoratorSharedData"), &Z_Registration_Info_UScriptStruct_AnimNextBlendTwoWayDecoratorSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextBlendTwoWayDecoratorSharedData), 3788988975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_BlendTwoWay_h_3981975609(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_BlendTwoWay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_BlendTwoWay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

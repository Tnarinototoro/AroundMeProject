// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Decorators/SequencePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencePlayer() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextSequencePlayerDecoratorSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FAnimNextSequencePlayerDecoratorSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData;
class UScriptStruct* FAnimNextSequencePlayerDecoratorSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextSequencePlayerDecoratorSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextSequencePlayerDecoratorSharedData>()
{
	return FAnimNextSequencePlayerDecoratorSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSeq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Decorators/SequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextSequencePlayerDecoratorSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_AnimSeq_MetaData[] = {
		{ "ModuleRelativePath", "Private/Decorators/SequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_AnimSeq = { "AnimSeq", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextSequencePlayerDecoratorSharedData, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_AnimSeq_MetaData), Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_AnimSeq_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Decorators/SequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNextSequencePlayerDecoratorSharedData, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_PlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_AnimSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewProp_PlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"AnimNextSequencePlayerDecoratorSharedData",
		Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::PropPointers),
		sizeof(FAnimNextSequencePlayerDecoratorSharedData),
		alignof(FAnimNextSequencePlayerDecoratorSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_SequencePlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_SequencePlayer_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextSequencePlayerDecoratorSharedData::StaticStruct, Z_Construct_UScriptStruct_FAnimNextSequencePlayerDecoratorSharedData_Statics::NewStructOps, TEXT("AnimNextSequencePlayerDecoratorSharedData"), &Z_Registration_Info_UScriptStruct_AnimNextSequencePlayerDecoratorSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextSequencePlayerDecoratorSharedData), 3962660450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_SequencePlayer_h_3688501139(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_SequencePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Private_Decorators_SequencePlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

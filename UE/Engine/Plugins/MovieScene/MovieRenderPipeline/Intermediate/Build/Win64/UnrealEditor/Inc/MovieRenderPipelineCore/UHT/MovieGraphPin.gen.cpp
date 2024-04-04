// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphPin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEdge_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPin();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPin_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphPinProperties();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieGraphPinProperties;
class UScriptStruct* FMovieGraphPinProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieGraphPinProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieGraphPinProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPinProperties, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MovieGraphPinProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MovieGraphPinProperties.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMovieGraphPinProperties>()
{
	return FMovieGraphPinProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleConnections_MetaData[];
#endif
		static void NewProp_bAllowMultipleConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBranch_MetaData[];
#endif
		static void NewProp_bIsBranch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBranch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieGraphPinProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The name assigned to the pin. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ToolTip", "The name assigned to the pin." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphPinProperties, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Label_MetaData), Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The type of the pin. If the pin represents a branch, this type is ignored. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ToolTip", "The type of the pin. If the pin represents a branch, this type is ignored." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieGraphPinProperties, Type), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type_MetaData) }; // 101554368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether this pin can accept multiple connections. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ToolTip", "Whether this pin can accept multiple connections." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit(void* Obj)
	{
		((FMovieGraphPinProperties*)Obj)->bAllowMultipleConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections = { "bAllowMultipleConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphPinProperties), &Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData), Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether this pin represents a branch. If it does not represent a branch, then it is a value-providing pin. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ToolTip", "Whether this pin represents a branch. If it does not represent a branch, then it is a value-providing pin." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch_SetBit(void* Obj)
	{
		((FMovieGraphPinProperties*)Obj)->bIsBranch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch = { "bIsBranch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieGraphPinProperties), &Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch_MetaData), Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bAllowMultipleConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewProp_bIsBranch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MovieGraphPinProperties",
		Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::PropPointers),
		sizeof(FMovieGraphPinProperties),
		alignof(FMovieGraphPinProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphPinProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieGraphPinProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieGraphPinProperties.InnerSingleton, Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieGraphPinProperties.InnerSingleton;
	}
	void UMovieGraphPin::StaticRegisterNativesUMovieGraphPin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphPin);
	UClass* Z_Construct_UClass_UMovieGraphPin_NoRegister()
	{
		return UMovieGraphPin::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieGraphPin.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// The node that this pin belongs to.\n" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ToolTip", "The node that this pin belongs to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPin, Node), Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Node_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPin, Properties), Z_Construct_UScriptStruct_FMovieGraphPinProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Properties_MetaData) }; // 2968389556
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** \n\x09* A list of edges between pins. This is marked as TextExportTransient so that when we copy/paste nodes,\n\x09* we don't copy the edges, as they are rebuilt after paste based on the editor graph connections.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphPin.h" },
		{ "ToolTip", "A list of edges between pins. This is marked as TextExportTransient so that when we copy/paste nodes,\nwe don't copy the edges, as they are rebuilt after paste based on the editor graph connections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0014400000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphPin, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges_MetaData), Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphPin_Statics::NewProp_Edges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphPin_Statics::ClassParams = {
		&UMovieGraphPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphPin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphPin_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphPin_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphPin()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphPin.OuterSingleton, Z_Construct_UClass_UMovieGraphPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphPin.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphPin>()
	{
		return UMovieGraphPin::StaticClass();
	}
	UMovieGraphPin::UMovieGraphPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphPin);
	UMovieGraphPin::~UMovieGraphPin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics::ScriptStructInfo[] = {
		{ FMovieGraphPinProperties::StaticStruct, Z_Construct_UScriptStruct_FMovieGraphPinProperties_Statics::NewStructOps, TEXT("MovieGraphPinProperties"), &Z_Registration_Info_UScriptStruct_MovieGraphPinProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieGraphPinProperties), 2968389556U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphPin, UMovieGraphPin::StaticClass, TEXT("UMovieGraphPin"), &Z_Registration_Info_UClass_UMovieGraphPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphPin), 825370142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_395922964(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphPin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

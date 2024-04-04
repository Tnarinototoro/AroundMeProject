// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/TransformUVsNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformUVsNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetTransformUVsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetTransformUVsNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode;
class UScriptStruct* FChaosClothAssetTransformUVsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetTransformUVsNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetTransformUVsNode>()
{
	return FChaosClothAssetTransformUVsNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Pattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetTransformUVsNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransformUVsNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Transform UVs" },
		{ "Comment", "/** Transform scale. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
		{ "ToolTip", "Transform scale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransformUVsNode, Scale), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform UVs" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Transform rotation angle in degrees. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
		{ "ToolTip", "Transform rotation angle in degrees." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransformUVsNode, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Transform UVs" },
		{ "Comment", "/** Transform translation. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
		{ "ToolTip", "Transform translation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransformUVsNode, Translation), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Translation_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Translation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "Transform UVs" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Pattern to transform. All patterns will be used when set to -1. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
		{ "ToolTip", "Pattern to transform. All patterns will be used when set to -1." },
		{ "UIMax", "10" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransformUVsNode, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Pattern_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Pattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "Transform UVs" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** UV channel to transform. All UV channels will be used when set to -1. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransformUVsNode.h" },
		{ "ToolTip", "UV channel to transform. All UV channels will be used when set to -1." },
		{ "UIMax", "5" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransformUVsNode, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_UVChannel_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_UVChannel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_Pattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewProp_UVChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetTransformUVsNode",
		Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::PropPointers),
		sizeof(FChaosClothAssetTransformUVsNode),
		alignof(FChaosClothAssetTransformUVsNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransformUVsNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransformUVsNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetTransformUVsNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetTransformUVsNode_Statics::NewStructOps, TEXT("ChaosClothAssetTransformUVsNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetTransformUVsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetTransformUVsNode), 3112523040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransformUVsNode_h_389984723(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransformUVsNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransformUVsNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

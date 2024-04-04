// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/DatasmithImportNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithImportNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetDatasmithImportNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetDatasmithImportNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode;
class UScriptStruct* FChaosClothAssetDatasmithImportNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetDatasmithImportNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetDatasmithImportNode>()
{
	return FChaosClothAssetDatasmithImportNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Import a file from a third party garment construction package compatible with the Datasmith scene format. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DatasmithImportNode.h" },
		{ "ToolTip", "Import a file from a third party garment construction package compatible with the Datasmith scene format." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetDatasmithImportNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DatasmithImportNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetDatasmithImportNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_ImportFile_MetaData[] = {
		{ "Category", "Datasmith Import" },
		{ "Comment", "/** Path of the file to import using any available Datasmith cloth translator. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DatasmithImportNode.h" },
		{ "ToolTip", "Path of the file to import using any available Datasmith cloth translator." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_ImportFile = { "ImportFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetDatasmithImportNode, ImportFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_ImportFile_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_ImportFile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewProp_ImportFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetDatasmithImportNode",
		Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::PropPointers),
		sizeof(FChaosClothAssetDatasmithImportNode),
		alignof(FChaosClothAssetDatasmithImportNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DatasmithImportNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DatasmithImportNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetDatasmithImportNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetDatasmithImportNode_Statics::NewStructOps, TEXT("ChaosClothAssetDatasmithImportNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetDatasmithImportNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetDatasmithImportNode), 3595124502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DatasmithImportNode_h_2621945338(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DatasmithImportNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DatasmithImportNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

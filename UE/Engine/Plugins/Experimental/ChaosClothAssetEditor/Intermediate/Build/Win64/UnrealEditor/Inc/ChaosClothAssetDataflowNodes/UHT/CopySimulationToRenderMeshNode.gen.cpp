// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/CopySimulationToRenderMeshNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopySimulationToRenderMeshNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetCopySimulationToRenderMeshNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetCopySimulationToRenderMeshNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode;
class UScriptStruct* FChaosClothAssetCopySimulationToRenderMeshNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetCopySimulationToRenderMeshNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetCopySimulationToRenderMeshNode>()
{
	return FChaosClothAssetCopySimulationToRenderMeshNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSingleRenderPattern_MetaData[];
#endif
		static void NewProp_bGenerateSingleRenderPattern_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSingleRenderPattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Copy the simulation mesh to the render mesh to be able to render the simulation mesh, or when not using a different mesh for rendering. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/CopySimulationToRenderMeshNode.h" },
		{ "ToolTip", "Copy the simulation mesh to the render mesh to be able to render the simulation mesh, or when not using a different mesh for rendering." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetCopySimulationToRenderMeshNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/CopySimulationToRenderMeshNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetCopySimulationToRenderMeshNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Copy Simulation To Render Mesh" },
		{ "Comment", "/** New material for the render mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/CopySimulationToRenderMeshNode.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "New material for the render mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetCopySimulationToRenderMeshNode, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Material_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Material_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern_MetaData[] = {
		{ "Category", "Copy Simulation To Render Mesh" },
		{ "Comment", "/** Generate a single render pattern rather than a render pattern per sim pattern. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/CopySimulationToRenderMeshNode.h" },
		{ "ToolTip", "Generate a single render pattern rather than a render pattern per sim pattern." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern_SetBit(void* Obj)
	{
		((FChaosClothAssetCopySimulationToRenderMeshNode*)Obj)->bGenerateSingleRenderPattern = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern = { "bGenerateSingleRenderPattern", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetCopySimulationToRenderMeshNode), &Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewProp_bGenerateSingleRenderPattern,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetCopySimulationToRenderMeshNode",
		Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::PropPointers),
		sizeof(FChaosClothAssetCopySimulationToRenderMeshNode),
		alignof(FChaosClothAssetCopySimulationToRenderMeshNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_CopySimulationToRenderMeshNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_CopySimulationToRenderMeshNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetCopySimulationToRenderMeshNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetCopySimulationToRenderMeshNode_Statics::NewStructOps, TEXT("ChaosClothAssetCopySimulationToRenderMeshNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetCopySimulationToRenderMeshNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetCopySimulationToRenderMeshNode), 1774235037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_CopySimulationToRenderMeshNode_h_3813223928(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_CopySimulationToRenderMeshNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_CopySimulationToRenderMeshNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/BindToRootBoneNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBindToRootBoneNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetBindToRootBoneNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetBindToRootBoneNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode;
class UScriptStruct* FChaosClothAssetBindToRootBoneNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetBindToRootBoneNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetBindToRootBoneNode>()
{
	return FChaosClothAssetBindToRootBoneNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBindSimMesh_MetaData[];
#endif
		static void NewProp_bBindSimMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindSimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBindRenderMesh_MetaData[];
#endif
		static void NewProp_bBindRenderMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindRenderMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Bind an entire mesh to the single root bone of the current skeleton set on the cloth collection. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/BindToRootBoneNode.h" },
		{ "ToolTip", "Bind an entire mesh to the single root bone of the current skeleton set on the cloth collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetBindToRootBoneNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/BindToRootBoneNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetBindToRootBoneNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh_MetaData[] = {
		{ "Category", "Bind To Root Bone" },
		{ "Comment", "/** Whether to bind the simulation mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/BindToRootBoneNode.h" },
		{ "ToolTip", "Whether to bind the simulation mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh_SetBit(void* Obj)
	{
		((FChaosClothAssetBindToRootBoneNode*)Obj)->bBindSimMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh = { "bBindSimMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetBindToRootBoneNode), &Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh_MetaData[] = {
		{ "Category", "Bind To Root Bone" },
		{ "Comment", "/** Whether to bind the render mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/BindToRootBoneNode.h" },
		{ "ToolTip", "Whether to bind the render mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh_SetBit(void* Obj)
	{
		((FChaosClothAssetBindToRootBoneNode*)Obj)->bBindRenderMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh = { "bBindRenderMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetBindToRootBoneNode), &Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindSimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewProp_bBindRenderMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetBindToRootBoneNode",
		Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::PropPointers),
		sizeof(FChaosClothAssetBindToRootBoneNode),
		alignof(FChaosClothAssetBindToRootBoneNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_BindToRootBoneNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_BindToRootBoneNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetBindToRootBoneNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetBindToRootBoneNode_Statics::NewStructOps, TEXT("ChaosClothAssetBindToRootBoneNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetBindToRootBoneNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetBindToRootBoneNode), 4238418185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_BindToRootBoneNode_h_4135557822(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_BindToRootBoneNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_BindToRootBoneNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SelectionNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosClothAssetSelectionType;
	static UEnum* EChaosClothAssetSelectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetSelectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosClothAssetSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("EChaosClothAssetSelectionType"));
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetSelectionType.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetSelectionType>()
	{
		return EChaosClothAssetSelectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::Enumerators[] = {
		{ "EChaosClothAssetSelectionType::SimVertex2D", (int64)EChaosClothAssetSelectionType::SimVertex2D },
		{ "EChaosClothAssetSelectionType::SimVertex3D", (int64)EChaosClothAssetSelectionType::SimVertex3D },
		{ "EChaosClothAssetSelectionType::RenderVertex", (int64)EChaosClothAssetSelectionType::RenderVertex },
		{ "EChaosClothAssetSelectionType::SimFace", (int64)EChaosClothAssetSelectionType::SimFace },
		{ "EChaosClothAssetSelectionType::RenderFace", (int64)EChaosClothAssetSelectionType::RenderFace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** What type of element is selected in the Selection */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SelectionNode.h" },
		{ "RenderFace.Comment", "/** Render faces */" },
		{ "RenderFace.Name", "EChaosClothAssetSelectionType::RenderFace" },
		{ "RenderFace.ToolTip", "Render faces" },
		{ "RenderVertex.Comment", "/** Render vertices */" },
		{ "RenderVertex.Name", "EChaosClothAssetSelectionType::RenderVertex" },
		{ "RenderVertex.ToolTip", "Render vertices" },
		{ "SimFace.Comment", "/** Simulation faces (2D/3D are the same) */" },
		{ "SimFace.Name", "EChaosClothAssetSelectionType::SimFace" },
		{ "SimFace.ToolTip", "Simulation faces (2D/3D are the same)" },
		{ "SimVertex2D.Comment", "/** 2D simulation vertices */" },
		{ "SimVertex2D.Name", "EChaosClothAssetSelectionType::SimVertex2D" },
		{ "SimVertex2D.ToolTip", "2D simulation vertices" },
		{ "SimVertex3D.Comment", "/** 3D simulation vertices */" },
		{ "SimVertex3D.Name", "EChaosClothAssetSelectionType::SimVertex3D" },
		{ "SimVertex3D.ToolTip", "3D simulation vertices" },
		{ "ToolTip", "What type of element is selected in the Selection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		"EChaosClothAssetSelectionType",
		"EChaosClothAssetSelectionType",
		Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetSelectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosClothAssetSelectionType.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetSelectionType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChaosClothAssetSelectionNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetSelectionNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode;
class UScriptStruct* FChaosClothAssetSelectionNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSelectionNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSelectionNode>()
{
	return FChaosClothAssetSelectionNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Integer index set selection node */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SelectionNode.h" },
		{ "ToolTip", "Integer index set selection node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSelectionNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SelectionNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSelectionNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** The name to give the selection attribute */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SelectionNode.h" },
		{ "ToolTip", "The name to give the selection attribute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSelectionNode, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** The type of element the selection refers to */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SelectionNode.h" },
		{ "ToolTip", "The type of element the selection refers to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSelectionNode, Type), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type_MetaData) }; // 3796598530
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices_ElementProp = { "Indices", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Selected element indices */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SelectionNode.h" },
		{ "ToolTip", "Selected element indices" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSelectionNode, Indices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewProp_Indices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetSelectionNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSelectionNode),
		alignof(FChaosClothAssetSelectionNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics::EnumInfo[] = {
		{ EChaosClothAssetSelectionType_StaticEnum, TEXT("EChaosClothAssetSelectionType"), &Z_Registration_Info_UEnum_EChaosClothAssetSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3796598530U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSelectionNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSelectionNode_Statics::NewStructOps, TEXT("ChaosClothAssetSelectionNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSelectionNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSelectionNode), 4046852985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_3164039695(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SelectionNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/DeleteElementNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteElementNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosClothAssetElementType;
	static UEnum* EChaosClothAssetElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosClothAssetElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("EChaosClothAssetElementType"));
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetElementType.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetElementType>()
	{
		return EChaosClothAssetElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::Enumerators[] = {
		{ "EChaosClothAssetElementType::None", (int64)EChaosClothAssetElementType::None },
		{ "EChaosClothAssetElementType::SimMesh", (int64)EChaosClothAssetElementType::SimMesh },
		{ "EChaosClothAssetElementType::RenderMesh", (int64)EChaosClothAssetElementType::RenderMesh },
		{ "EChaosClothAssetElementType::SimPattern", (int64)EChaosClothAssetElementType::SimPattern },
		{ "EChaosClothAssetElementType::RenderPattern", (int64)EChaosClothAssetElementType::RenderPattern },
		{ "EChaosClothAssetElementType::SimVertex2D", (int64)EChaosClothAssetElementType::SimVertex2D },
		{ "EChaosClothAssetElementType::SimVertex3D", (int64)EChaosClothAssetElementType::SimVertex3D },
		{ "EChaosClothAssetElementType::RenderVertex", (int64)EChaosClothAssetElementType::RenderVertex },
		{ "EChaosClothAssetElementType::SimFace", (int64)EChaosClothAssetElementType::SimFace },
		{ "EChaosClothAssetElementType::RenderFace", (int64)EChaosClothAssetElementType::RenderFace },
		{ "EChaosClothAssetElementType::Seam", (int64)EChaosClothAssetElementType::Seam },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DeleteElementNode.h" },
		{ "None.Name", "EChaosClothAssetElementType::None" },
		{ "RenderFace.Name", "EChaosClothAssetElementType::RenderFace" },
		{ "RenderMesh.Name", "EChaosClothAssetElementType::RenderMesh" },
		{ "RenderPattern.Name", "EChaosClothAssetElementType::RenderPattern" },
		{ "RenderVertex.Name", "EChaosClothAssetElementType::RenderVertex" },
		{ "Seam.Name", "EChaosClothAssetElementType::Seam" },
		{ "SimFace.Name", "EChaosClothAssetElementType::SimFace" },
		{ "SimMesh.Name", "EChaosClothAssetElementType::SimMesh" },
		{ "SimPattern.Name", "EChaosClothAssetElementType::SimPattern" },
		{ "SimVertex2D.Name", "EChaosClothAssetElementType::SimVertex2D" },
		{ "SimVertex3D.Name", "EChaosClothAssetElementType::SimVertex3D" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		"EChaosClothAssetElementType",
		"EChaosClothAssetElementType",
		Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosClothAssetElementType.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetElementType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChaosClothAssetDeleteElementNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetDeleteElementNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode;
class UScriptStruct* FChaosClothAssetDeleteElementNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetDeleteElementNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetDeleteElementNode>()
{
	return FChaosClothAssetDeleteElementNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DeleteElementNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetDeleteElementNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DeleteElementNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetDeleteElementNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Delete Element" },
		{ "Comment", "/** Element type to delete.*/" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DeleteElementNode.h" },
		{ "ToolTip", "Element type to delete." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetDeleteElementNode, ElementType), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetElementType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType_MetaData) }; // 647822992
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements_MetaData[] = {
		{ "Category", "Delete Element" },
		{ "Comment", "/** List of Elements to apply the operation on. All Elements will be used if left empty. */" },
		{ "EditCondition", "ElementType != EChaosClothAssetElementType::SimMesh && ElementType != EChaosClothAssetElementType::RenderMesh" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/DeleteElementNode.h" },
		{ "ToolTip", "List of Elements to apply the operation on. All Elements will be used if left empty." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetDeleteElementNode, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewProp_Elements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetDeleteElementNode",
		Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::PropPointers),
		sizeof(FChaosClothAssetDeleteElementNode),
		alignof(FChaosClothAssetDeleteElementNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics::EnumInfo[] = {
		{ EChaosClothAssetElementType_StaticEnum, TEXT("EChaosClothAssetElementType"), &Z_Registration_Info_UEnum_EChaosClothAssetElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 647822992U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetDeleteElementNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetDeleteElementNode_Statics::NewStructOps, TEXT("ChaosClothAssetDeleteElementNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetDeleteElementNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetDeleteElementNode), 680688296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_2219460759(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_DeleteElementNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

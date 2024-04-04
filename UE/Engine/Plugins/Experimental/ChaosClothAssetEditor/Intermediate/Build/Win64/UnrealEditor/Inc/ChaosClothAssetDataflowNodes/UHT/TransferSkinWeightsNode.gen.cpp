// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/TransferSkinWeightsNode.h"
#include "ChaosClothAsset/WeightedValue.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransferSkinWeightsNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod;
	static UEnum* EChaosClothAssetTransferSkinWeightsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("EChaosClothAssetTransferSkinWeightsMethod"));
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetTransferSkinWeightsMethod>()
	{
		return EChaosClothAssetTransferSkinWeightsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::Enumerators[] = {
		{ "EChaosClothAssetTransferSkinWeightsMethod::ClosestPointOnSurface", (int64)EChaosClothAssetTransferSkinWeightsMethod::ClosestPointOnSurface },
		{ "EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights", (int64)EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClosestPointOnSurface.Comment", "/** For every vertex on the target mesh, find the closest point on the surface of the source mesh and copy its weights. */" },
		{ "ClosestPointOnSurface.Name", "EChaosClothAssetTransferSkinWeightsMethod::ClosestPointOnSurface" },
		{ "ClosestPointOnSurface.ToolTip", "For every vertex on the target mesh, find the closest point on the surface of the source mesh and copy its weights." },
		{ "InpaintWeights.Comment", "/**\n\x09 * For every vertex on the target mesh, find the closest point on the surface of the source mesh.\n\x09 * If that point position is within the search radius, and their normals differ by less than the specified normal threshold,\n\x09 * then the vertex weights are directly copied from the source point to the target mesh vertex.\n\x09 * For all other vertices whose weights didn't get transferred, smoothed weight values are automatically computed.\n\x09 */" },
		{ "InpaintWeights.Name", "EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "InpaintWeights.ToolTip", "For every vertex on the target mesh, find the closest point on the surface of the source mesh.\nIf that point position is within the search radius, and their normals differ by less than the specified normal threshold,\nthen the vertex weights are directly copied from the source point to the target mesh vertex.\nFor all other vertices whose weights didn't get transferred, smoothed weight values are automatically computed." },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		"EChaosClothAssetTransferSkinWeightsMethod",
		"EChaosClothAssetTransferSkinWeightsMethod",
		Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChaosClothAssetTransferSkinWeightsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetTransferSkinWeightsNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode;
class UScriptStruct* FChaosClothAssetTransferSkinWeightsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetTransferSkinWeightsNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetTransferSkinWeightsNode>()
{
	return FChaosClothAssetTransferSkinWeightsNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransferMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransferMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransferMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NormalThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayeredMeshSupport_MetaData[];
#endif
		static void NewProp_LayeredMeshSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LayeredMeshSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSmoothingIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSmoothingIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InpaintMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InpaintMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransferWeightsCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransferWeightsCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transfer the skinning weights set on a skeletal mesh to the simulation and/or render mesh stored in the cloth collection. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "Transfer the skinning weights set on a skeletal mesh to the simulation and/or render mesh stored in the cloth collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetTransferSkinWeightsNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Source Mesh" },
		{ "Comment", "/** The skeletal mesh to transfer the skin weights from. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "The skeletal mesh to transfer the skin weights from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LodIndex_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Source Mesh" },
		{ "Comment", "/** The skeletal mesh LOD to transfer the skin weights from. */" },
		{ "DisplayName", "LOD Index" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "The skeletal mesh LOD to transfer the skin weights from." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, LodIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LodIndex_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LodIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Source Mesh" },
		{ "Comment", "/** The relative transform between the skeletal mesh and the cloth asset. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "The relative transform between the skeletal mesh and the cloth asset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "Comment", "/** Algorithm used for the transfer method. Use the simple ClosestPointOnSurface method or the more complex InpaintWeights method for better results. */" },
		{ "DisplayName", "Algorithm" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "Algorithm used for the transfer method. Use the simple ClosestPointOnSurface method or the more complex InpaintWeights method for better results." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod = { "TransferMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, TransferMethod), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetTransferSkinWeightsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod_MetaData) }; // 595517719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_RadiusPercentage_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "ClampMax", "2" },
		{ "ClampMin", "-1" },
		{ "Comment", "/**\n\x09 * Percentage of the bounding box diagonal of the simulation mesh to use as search radius for the InpaintWeights method.\n\x09 * All points outside of the search radius will be ignored. \n\x09 * When set to a negative value (e.g. -1), all points will be considered.\n\x09 */" },
		{ "EditCondition", "TransferMethod==EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "Percentage of the bounding box diagonal of the simulation mesh to use as search radius for the InpaintWeights method.\nAll points outside of the search radius will be ignored.\nWhen set to a negative value (e.g. -1), all points will be considered." },
		{ "UIMax", "2" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_RadiusPercentage = { "RadiusPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, RadiusPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_RadiusPercentage_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_RadiusPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NormalThreshold_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-1" },
		{ "Comment", "/**\n\x09 * Maximum angle difference (in degrees) between the target and source point normals to be considered a match for the InpaintWeights method.\n\x09 * If set to a negative value (e.g. -1), normals will be ignored.\n\x09 */" },
		{ "EditCondition", "TransferMethod==EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "Maximum angle difference (in degrees) between the target and source point normals to be considered a match for the InpaintWeights method.\nIf set to a negative value (e.g. -1), normals will be ignored." },
		{ "UIMax", "180" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NormalThreshold = { "NormalThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, NormalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NormalThreshold_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NormalThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "Comment", "/** \n\x09 * If true, when the closest point doesn't pass the normal threshold test, will try again with a flipped normal. \n\x09 * This helps with layered meshes where the \"inner\" and \"outer\" layers are close to each other but whose normals \n\x09 * are pointing in the opposite directions.\n\x09 */" },
		{ "DisplayName", "Layered Mesh Support" },
		{ "EditCondition", "TransferMethod==EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "If true, when the closest point doesn't pass the normal threshold test, will try again with a flipped normal.\nThis helps with layered meshes where the \"inner\" and \"outer\" layers are close to each other but whose normals\nare pointing in the opposite directions." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport_SetBit(void* Obj)
	{
		((FChaosClothAssetTransferSkinWeightsNode*)Obj)->LayeredMeshSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport = { "LayeredMeshSupport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetTransferSkinWeightsNode), &Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NumSmoothingIterations_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of smoothing iterations applied to the vertices whose weights were automatically computed. */" },
		{ "DisplayName", "Smoothing Iterations" },
		{ "EditCondition", "TransferMethod==EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "The number of smoothing iterations applied to the vertices whose weights were automatically computed." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NumSmoothingIterations = { "NumSmoothingIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, NumSmoothingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NumSmoothingIterations_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NumSmoothingIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The smoothing strength of each smoothing iteration. */" },
		{ "DisplayName", "Smoothing Strength" },
		{ "EditCondition", "TransferMethod==EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "The smoothing strength of each smoothing iteration." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, SmoothingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SmoothingStrength_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SmoothingStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_InpaintMask_MetaData[] = {
		{ "Category", "Transfer Skin Weights|Transfer Method" },
		{ "Comment", "/** Optional mask where a non-zero value indicates that we want the skinning weights for the vertex to be computed automatically instead of it being copied over from the source mesh. */" },
		{ "DisplayName", "Inpaint Mask" },
		{ "EditCondition", "TransferMethod==EChaosClothAssetTransferSkinWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "Optional mask where a non-zero value indicates that we want the skinning weights for the vertex to be computed automatically instead of it being copied over from the source mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_InpaintMask = { "InpaintMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, InpaintMask), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatableNoLowHighRange, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_InpaintMask_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_InpaintMask_MetaData) }; // 886386078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferWeightsCollection_MetaData[] = {
		{ "Comment", "/** Optional mesh that will be used for transferring weights to the render mesh instead of the simulation mesh. */" },
		{ "Dataflowinput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TransferSkinWeightsNode.h" },
		{ "ToolTip", "Optional mesh that will be used for transferring weights to the render mesh instead of the simulation mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferWeightsCollection = { "TransferWeightsCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTransferSkinWeightsNode, TransferWeightsCollection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferWeightsCollection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferWeightsCollection_MetaData) }; // 1642525875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_RadiusPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NormalThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_LayeredMeshSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_NumSmoothingIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_SmoothingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_InpaintMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewProp_TransferWeightsCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetTransferSkinWeightsNode",
		Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::PropPointers),
		sizeof(FChaosClothAssetTransferSkinWeightsNode),
		alignof(FChaosClothAssetTransferSkinWeightsNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics::EnumInfo[] = {
		{ EChaosClothAssetTransferSkinWeightsMethod_StaticEnum, TEXT("EChaosClothAssetTransferSkinWeightsMethod"), &Z_Registration_Info_UEnum_EChaosClothAssetTransferSkinWeightsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 595517719U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetTransferSkinWeightsNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetTransferSkinWeightsNode_Statics::NewStructOps, TEXT("ChaosClothAssetTransferSkinWeightsNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetTransferSkinWeightsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetTransferSkinWeightsNode), 2359645148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_1306199507(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TransferSkinWeightsNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

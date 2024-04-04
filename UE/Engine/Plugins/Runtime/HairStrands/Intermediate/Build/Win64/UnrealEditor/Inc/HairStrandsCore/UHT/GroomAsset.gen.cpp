// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAsset.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "GroomAssetCards.h"
#include "GroomAssetInterpolation.h"
#include "GroomAssetMeshes.h"
#include "GroomAssetPhysics.h"
#include "GroomAssetRendering.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfo();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupLODInfo();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsLOD();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMaterial();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsPhysics();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsRendering();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupLODInfo;
class UScriptStruct* FHairGroupLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupLODInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupLODInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupLODInfo>()
{
	return FHairGroupLODInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupLODInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumPoints_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Point Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupLODInfo, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumPoints_MetaData), Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumCurves_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumCurves = { "NumCurves", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupLODInfo, NumCurves), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumCurves_MetaData), Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumCurves_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewProp_NumCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupLODInfo",
		Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::PropPointers),
		sizeof(FHairGroupLODInfo),
		alignof(FHairGroupLODInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupLODInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupLODInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupLODInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupInfo;
class UScriptStruct* FHairGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupInfo>()
{
	return FHairGroupInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGuides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGuides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCurveVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCurveVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGuideVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGuideVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurveLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurveLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupCardsID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupCardsID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Flags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, GroupID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves = { "NumCurves", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, NumCurves), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides = { "NumGuides", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, NumGuides), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Vertex Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices = { "NumCurveVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, NumCurveVertices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide Vertex Count" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices = { "NumGuideVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, NumGuideVertices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Length of the longest hair strands" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength = { "MaxCurveLength", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, MaxCurveLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Card Group ID for split hair card generation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID = { "GroupCardsID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, GroupCardsID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_Flags_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_Flags_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos_Inner = { "LODInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupLODInfo, METADATA_PARAMS(0, nullptr) }; // 40208149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos = { "LODInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupInfo, LODInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos_MetaData), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos_MetaData) }; // 40208149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumCurveVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_NumGuideVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_MaxCurveLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_GroupCardsID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewProp_LODInfos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupInfo",
		Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers),
		sizeof(FHairGroupInfo),
		alignof(FHairGroupInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsMaterial;
class UScriptStruct* FHairGroupsMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsMaterial, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsMaterial.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsMaterial>()
{
	return FHairGroupsMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material_MetaData), Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHairGroupsMaterial, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName_MetaData), Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewProp_SlotName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsMaterial",
		Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers),
		sizeof(FHairGroupsMaterial),
		alignof(FHairGroupsMaterial),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsMaterial.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsMaterial.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHairGroupInfoWithVisibility>() == std::is_polymorphic<FHairGroupInfo>(), "USTRUCT FHairGroupInfoWithVisibility cannot be polymorphic unless super FHairGroupInfo is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility;
class UScriptStruct* FHairGroupInfoWithVisibility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupInfoWithVisibility"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupInfoWithVisibility>()
{
	return FHairGroupInfoWithVisibility::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupInfoWithVisibility>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Toggle hair group visibility. This visibility flag is not persistent to the asset, and exists only as a preview/helper mechanism */" },
		{ "DisplayName", "Visible" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Toggle hair group visibility. This visibility flag is not persistent to the asset, and exists only as a preview/helper mechanism" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FHairGroupInfoWithVisibility*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHairGroupInfoWithVisibility), &Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_MetaData), Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewProp_bIsVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		Z_Construct_UScriptStruct_FHairGroupInfo,
		&NewStructOps,
		"HairGroupInfoWithVisibility",
		Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers),
		sizeof(FHairGroupInfoWithVisibility),
		alignof(FHairGroupInfoWithVisibility),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHairAtlasTextureType;
	static UEnum* EHairAtlasTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHairAtlasTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHairAtlasTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EHairAtlasTextureType"));
		}
		return Z_Registration_Info_UEnum_EHairAtlasTextureType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairAtlasTextureType>()
	{
		return EHairAtlasTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enumerators[] = {
		{ "EHairAtlasTextureType::Depth", (int64)EHairAtlasTextureType::Depth },
		{ "EHairAtlasTextureType::Tangent", (int64)EHairAtlasTextureType::Tangent },
		{ "EHairAtlasTextureType::Attribute", (int64)EHairAtlasTextureType::Attribute },
		{ "EHairAtlasTextureType::Coverage", (int64)EHairAtlasTextureType::Coverage },
		{ "EHairAtlasTextureType::AuxilaryData", (int64)EHairAtlasTextureType::AuxilaryData },
		{ "EHairAtlasTextureType::Material", (int64)EHairAtlasTextureType::Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enum_MetaDataParams[] = {
		{ "Attribute.Name", "EHairAtlasTextureType::Attribute" },
		{ "AuxilaryData.Name", "EHairAtlasTextureType::AuxilaryData" },
		{ "BlueprintType", "true" },
		{ "Coverage.Name", "EHairAtlasTextureType::Coverage" },
		{ "Depth.Name", "EHairAtlasTextureType::Depth" },
		{ "Material.Name", "EHairAtlasTextureType::Material" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "Tangent.Name", "EHairAtlasTextureType::Tangent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EHairAtlasTextureType",
		"EHairAtlasTextureType",
		Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType()
	{
		if (!Z_Registration_Info_UEnum_EHairAtlasTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHairAtlasTextureType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EHairAtlasTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHairAtlasTextureType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetDeformedGroupSections)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeformedGroupSections(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetDeformedGroupSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetDeformedGroupSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetRiggedSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRiggedSkeletalMesh(Z_Param_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetRiggedSkeletalMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetRiggedSkeletalMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairInterpolationType)
	{
		P_GET_ENUM(EGroomInterpolationType,Z_Param_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairInterpolationType(EGroomInterpolationType(Z_Param_In));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairInterpolationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGroomInterpolationType*)Z_Param__Result=P_THIS->GetHairInterpolationType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetEnableSimulationCache)
	{
		P_GET_UBOOL(Z_Param_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSimulationCache(Z_Param_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetEnableSimulationCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableSimulationCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetEnableGlobalInterpolation)
	{
		P_GET_UBOOL(Z_Param_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableGlobalInterpolation(Z_Param_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetEnableGlobalInterpolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnableGlobalInterpolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsMaterials)
	{
		P_GET_TARRAY_REF(FHairGroupsMaterial,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsMaterials(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsMaterial>*)Z_Param__Result=P_THIS->GetHairGroupsMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsMeshes)
	{
		P_GET_TARRAY_REF(FHairGroupsMeshesSourceDescription,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsMeshes(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsMeshesSourceDescription>*)Z_Param__Result=P_THIS->GetHairGroupsMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsCards)
	{
		P_GET_TARRAY_REF(FHairGroupsCardsSourceDescription,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsCards(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsCards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsCardsSourceDescription>*)Z_Param__Result=P_THIS->GetHairGroupsCards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsLOD)
	{
		P_GET_TARRAY_REF(FHairGroupsLOD,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsLOD(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsLOD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsLOD>*)Z_Param__Result=P_THIS->GetHairGroupsLOD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsInterpolation)
	{
		P_GET_TARRAY_REF(FHairGroupsInterpolation,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsInterpolation(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsInterpolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsInterpolation>*)Z_Param__Result=P_THIS->GetHairGroupsInterpolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsPhysics)
	{
		P_GET_TARRAY_REF(FHairGroupsPhysics,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsPhysics(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsPhysics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsPhysics>*)Z_Param__Result=P_THIS->GetHairGroupsPhysics();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execSetHairGroupsRendering)
	{
		P_GET_TARRAY_REF(FHairGroupsRendering,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairGroupsRendering(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomAsset::execGetHairGroupsRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHairGroupsRendering>*)Z_Param__Result=P_THIS->GetHairGroupsRendering();
		P_NATIVE_END;
	}
	void UGroomAsset::StaticRegisterNativesUGroomAsset()
	{
		UClass* Class = UGroomAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeformedGroupSections", &UGroomAsset::execGetDeformedGroupSections },
			{ "GetEnableGlobalInterpolation", &UGroomAsset::execGetEnableGlobalInterpolation },
			{ "GetEnableSimulationCache", &UGroomAsset::execGetEnableSimulationCache },
			{ "GetHairGroupsCards", &UGroomAsset::execGetHairGroupsCards },
			{ "GetHairGroupsInterpolation", &UGroomAsset::execGetHairGroupsInterpolation },
			{ "GetHairGroupsLOD", &UGroomAsset::execGetHairGroupsLOD },
			{ "GetHairGroupsMaterials", &UGroomAsset::execGetHairGroupsMaterials },
			{ "GetHairGroupsMeshes", &UGroomAsset::execGetHairGroupsMeshes },
			{ "GetHairGroupsPhysics", &UGroomAsset::execGetHairGroupsPhysics },
			{ "GetHairGroupsRendering", &UGroomAsset::execGetHairGroupsRendering },
			{ "GetHairInterpolationType", &UGroomAsset::execGetHairInterpolationType },
			{ "GetRiggedSkeletalMesh", &UGroomAsset::execGetRiggedSkeletalMesh },
			{ "SetDeformedGroupSections", &UGroomAsset::execSetDeformedGroupSections },
			{ "SetEnableGlobalInterpolation", &UGroomAsset::execSetEnableGlobalInterpolation },
			{ "SetEnableSimulationCache", &UGroomAsset::execSetEnableSimulationCache },
			{ "SetHairGroupsCards", &UGroomAsset::execSetHairGroupsCards },
			{ "SetHairGroupsInterpolation", &UGroomAsset::execSetHairGroupsInterpolation },
			{ "SetHairGroupsLOD", &UGroomAsset::execSetHairGroupsLOD },
			{ "SetHairGroupsMaterials", &UGroomAsset::execSetHairGroupsMaterials },
			{ "SetHairGroupsMeshes", &UGroomAsset::execSetHairGroupsMeshes },
			{ "SetHairGroupsPhysics", &UGroomAsset::execSetHairGroupsPhysics },
			{ "SetHairGroupsRendering", &UGroomAsset::execSetHairGroupsRendering },
			{ "SetHairInterpolationType", &UGroomAsset::execSetHairInterpolationType },
			{ "SetRiggedSkeletalMesh", &UGroomAsset::execSetRiggedSkeletalMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics
	{
		struct GroomAsset_eventGetDeformedGroupSections_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetDeformedGroupSections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetDeformedGroupSections", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::GroomAsset_eventGetDeformedGroupSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::GroomAsset_eventGetDeformedGroupSections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics
	{
		struct GroomAsset_eventGetEnableGlobalInterpolation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GroomAsset_eventGetEnableGlobalInterpolation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomAsset_eventGetEnableGlobalInterpolation_Parms), &Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetEnableGlobalInterpolation", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::GroomAsset_eventGetEnableGlobalInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::GroomAsset_eventGetEnableGlobalInterpolation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics
	{
		struct GroomAsset_eventGetEnableSimulationCache_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GroomAsset_eventGetEnableSimulationCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomAsset_eventGetEnableSimulationCache_Parms), &Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetEnableSimulationCache", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::GroomAsset_eventGetEnableSimulationCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::GroomAsset_eventGetEnableSimulationCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics
	{
		struct GroomAsset_eventGetHairGroupsCards_Parms
		{
			TArray<FHairGroupsCardsSourceDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, METADATA_PARAMS(0, nullptr) }; // 1173003402
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsCards_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1173003402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsCards", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::GroomAsset_eventGetHairGroupsCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::GroomAsset_eventGetHairGroupsCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics
	{
		struct GroomAsset_eventGetHairGroupsInterpolation_Parms
		{
			TArray<FHairGroupsInterpolation> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(0, nullptr) }; // 226160302
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsInterpolation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 226160302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsInterpolation", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::GroomAsset_eventGetHairGroupsInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::GroomAsset_eventGetHairGroupsInterpolation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics
	{
		struct GroomAsset_eventGetHairGroupsLOD_Parms
		{
			TArray<FHairGroupsLOD> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsLOD, METADATA_PARAMS(0, nullptr) }; // 3249138390
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsLOD_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3249138390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsLOD", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::GroomAsset_eventGetHairGroupsLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::GroomAsset_eventGetHairGroupsLOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics
	{
		struct GroomAsset_eventGetHairGroupsMaterials_Parms
		{
			TArray<FHairGroupsMaterial> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsMaterial, METADATA_PARAMS(0, nullptr) }; // 1868217822
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1868217822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsMaterials", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::GroomAsset_eventGetHairGroupsMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::GroomAsset_eventGetHairGroupsMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics
	{
		struct GroomAsset_eventGetHairGroupsMeshes_Parms
		{
			TArray<FHairGroupsMeshesSourceDescription> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription, METADATA_PARAMS(0, nullptr) }; // 2157140126
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2157140126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsMeshes", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::GroomAsset_eventGetHairGroupsMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::GroomAsset_eventGetHairGroupsMeshes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics
	{
		struct GroomAsset_eventGetHairGroupsPhysics_Parms
		{
			TArray<FHairGroupsPhysics> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsPhysics, METADATA_PARAMS(0, nullptr) }; // 3968193190
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsPhysics_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3968193190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsPhysics", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::GroomAsset_eventGetHairGroupsPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::GroomAsset_eventGetHairGroupsPhysics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics
	{
		struct GroomAsset_eventGetHairGroupsRendering_Parms
		{
			TArray<FHairGroupsRendering> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsRendering, METADATA_PARAMS(0, nullptr) }; // 4200389659
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairGroupsRendering_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4200389659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairGroupsRendering", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::GroomAsset_eventGetHairGroupsRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::GroomAsset_eventGetHairGroupsRendering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics
	{
		struct GroomAsset_eventGetHairInterpolationType_Parms
		{
			EGroomInterpolationType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetHairInterpolationType_Parms, ReturnValue), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, METADATA_PARAMS(0, nullptr) }; // 850683939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetHairInterpolationType", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::GroomAsset_eventGetHairInterpolationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::GroomAsset_eventGetHairInterpolationType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics
	{
		struct GroomAsset_eventGetRiggedSkeletalMesh_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventGetRiggedSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "GetRiggedSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::GroomAsset_eventGetRiggedSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::GroomAsset_eventGetRiggedSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics
	{
		struct GroomAsset_eventSetDeformedGroupSections_Parms
		{
			TArray<int32> In;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetDeformedGroupSections_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetDeformedGroupSections", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::GroomAsset_eventSetDeformedGroupSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::GroomAsset_eventSetDeformedGroupSections_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics
	{
		struct GroomAsset_eventSetEnableGlobalInterpolation_Parms
		{
			bool In;
		};
		static void NewProp_In_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::NewProp_In_SetBit(void* Obj)
	{
		((GroomAsset_eventSetEnableGlobalInterpolation_Parms*)Obj)->In = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomAsset_eventSetEnableGlobalInterpolation_Parms), &Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::NewProp_In_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetEnableGlobalInterpolation", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::GroomAsset_eventSetEnableGlobalInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::GroomAsset_eventSetEnableGlobalInterpolation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics
	{
		struct GroomAsset_eventSetEnableSimulationCache_Parms
		{
			bool In;
		};
		static void NewProp_In_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::NewProp_In_SetBit(void* Obj)
	{
		((GroomAsset_eventSetEnableSimulationCache_Parms*)Obj)->In = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroomAsset_eventSetEnableSimulationCache_Parms), &Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::NewProp_In_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetEnableSimulationCache", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::GroomAsset_eventSetEnableSimulationCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::GroomAsset_eventSetEnableSimulationCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics
	{
		struct GroomAsset_eventSetHairGroupsCards_Parms
		{
			TArray<FHairGroupsCardsSourceDescription> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, METADATA_PARAMS(0, nullptr) }; // 1173003402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsCards_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In_MetaData) }; // 1173003402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsCards", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::GroomAsset_eventSetHairGroupsCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::GroomAsset_eventSetHairGroupsCards_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics
	{
		struct GroomAsset_eventSetHairGroupsInterpolation_Parms
		{
			TArray<FHairGroupsInterpolation> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(0, nullptr) }; // 226160302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsInterpolation_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In_MetaData) }; // 226160302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsInterpolation", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::GroomAsset_eventSetHairGroupsInterpolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::GroomAsset_eventSetHairGroupsInterpolation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics
	{
		struct GroomAsset_eventSetHairGroupsLOD_Parms
		{
			TArray<FHairGroupsLOD> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsLOD, METADATA_PARAMS(0, nullptr) }; // 3249138390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsLOD_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In_MetaData) }; // 3249138390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsLOD", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::GroomAsset_eventSetHairGroupsLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::GroomAsset_eventSetHairGroupsLOD_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics
	{
		struct GroomAsset_eventSetHairGroupsMaterials_Parms
		{
			TArray<FHairGroupsMaterial> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsMaterial, METADATA_PARAMS(0, nullptr) }; // 1868217822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsMaterials_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In_MetaData) }; // 1868217822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsMaterials", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::GroomAsset_eventSetHairGroupsMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::GroomAsset_eventSetHairGroupsMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics
	{
		struct GroomAsset_eventSetHairGroupsMeshes_Parms
		{
			TArray<FHairGroupsMeshesSourceDescription> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription, METADATA_PARAMS(0, nullptr) }; // 2157140126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsMeshes_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In_MetaData) }; // 2157140126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsMeshes", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::GroomAsset_eventSetHairGroupsMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::GroomAsset_eventSetHairGroupsMeshes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics
	{
		struct GroomAsset_eventSetHairGroupsPhysics_Parms
		{
			TArray<FHairGroupsPhysics> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsPhysics, METADATA_PARAMS(0, nullptr) }; // 3968193190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsPhysics_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In_MetaData) }; // 3968193190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsPhysics", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::GroomAsset_eventSetHairGroupsPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::GroomAsset_eventSetHairGroupsPhysics_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics
	{
		struct GroomAsset_eventSetHairGroupsRendering_Parms
		{
			TArray<FHairGroupsRendering> In;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In_Inner = { "In", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsRendering, METADATA_PARAMS(0, nullptr) }; // 4200389659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairGroupsRendering_Parms, In), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In_MetaData), Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In_MetaData) }; // 4200389659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairGroupsRendering", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::GroomAsset_eventSetHairGroupsRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::GroomAsset_eventSetHairGroupsRendering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics
	{
		struct GroomAsset_eventSetHairInterpolationType_Parms
		{
			EGroomInterpolationType In;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::NewProp_In_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetHairInterpolationType_Parms, In), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, METADATA_PARAMS(0, nullptr) }; // 850683939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::NewProp_In_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetHairInterpolationType", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::GroomAsset_eventSetHairInterpolationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::GroomAsset_eventSetHairInterpolationType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics
	{
		struct GroomAsset_eventSetRiggedSkeletalMesh_Parms
		{
			USkeletalMesh* In;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomAsset_eventSetRiggedSkeletalMesh_Parms, In), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomAsset, nullptr, "SetRiggedSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::GroomAsset_eventSetRiggedSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::GroomAsset_eventSetRiggedSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomAsset);
	UClass* Z_Construct_UClass_UGroomAsset_NoRegister()
	{
		return UGroomAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGroomAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsRendering_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsRendering_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsRendering;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsPhysics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsPhysics;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsInterpolation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsInterpolation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsLOD_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsLOD_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsCards_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsCards_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsCards;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HairGroupsMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairGroupsMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HairGroupsMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGlobalInterpolation_MetaData[];
#endif
		static void NewProp_EnableGlobalInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGlobalInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableSimulationCache_MetaData[];
#endif
		static void NewProp_EnableSimulationCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSimulationCache;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HairInterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairInterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HairInterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiggedSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RiggedSkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeformedGroupSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformedGroupSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeformedGroupSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveLODBias_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveLODBias_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectiveLODBias;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroomAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroomAsset_GetDeformedGroupSections, "GetDeformedGroupSections" }, // 359833700
		{ &Z_Construct_UFunction_UGroomAsset_GetEnableGlobalInterpolation, "GetEnableGlobalInterpolation" }, // 2069575840
		{ &Z_Construct_UFunction_UGroomAsset_GetEnableSimulationCache, "GetEnableSimulationCache" }, // 3677337401
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsCards, "GetHairGroupsCards" }, // 3473131500
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsInterpolation, "GetHairGroupsInterpolation" }, // 3768593142
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsLOD, "GetHairGroupsLOD" }, // 3368100400
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsMaterials, "GetHairGroupsMaterials" }, // 3087235784
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsMeshes, "GetHairGroupsMeshes" }, // 2566535859
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsPhysics, "GetHairGroupsPhysics" }, // 3454685819
		{ &Z_Construct_UFunction_UGroomAsset_GetHairGroupsRendering, "GetHairGroupsRendering" }, // 653892751
		{ &Z_Construct_UFunction_UGroomAsset_GetHairInterpolationType, "GetHairInterpolationType" }, // 1032233711
		{ &Z_Construct_UFunction_UGroomAsset_GetRiggedSkeletalMesh, "GetRiggedSkeletalMesh" }, // 565085228
		{ &Z_Construct_UFunction_UGroomAsset_SetDeformedGroupSections, "SetDeformedGroupSections" }, // 2778187580
		{ &Z_Construct_UFunction_UGroomAsset_SetEnableGlobalInterpolation, "SetEnableGlobalInterpolation" }, // 113383418
		{ &Z_Construct_UFunction_UGroomAsset_SetEnableSimulationCache, "SetEnableSimulationCache" }, // 1218316421
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsCards, "SetHairGroupsCards" }, // 1437743544
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsInterpolation, "SetHairGroupsInterpolation" }, // 1548669802
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsLOD, "SetHairGroupsLOD" }, // 511250916
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsMaterials, "SetHairGroupsMaterials" }, // 3816056570
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsMeshes, "SetHairGroupsMeshes" }, // 3864758929
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsPhysics, "SetHairGroupsPhysics" }, // 2768636512
		{ &Z_Construct_UFunction_UGroomAsset_SetHairGroupsRendering, "SetHairGroupsRendering" }, // 1193419420
		{ &Z_Construct_UFunction_UGroomAsset_SetHairInterpolationType, "SetHairInterpolationType" }, // 705033652
		{ &Z_Construct_UFunction_UGroomAsset_SetRiggedSkeletalMesh, "SetRiggedSkeletalMesh" }, // 2332373831
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "HairRendering HairPhysics HairInterpolation" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that can be used to store hair strands\n */" },
		{ "HideCategories", "Object Hidden" },
		{ "IncludePath", "GroomAsset.h" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Implements an asset that can be used to store hair strands" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_Inner = { "HairGroupsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility, METADATA_PARAMS(0, nullptr) }; // 3835715311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_MetaData[] = {
		{ "Category", "HairInfo" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo = { "HairGroupsInfo", nullptr, (EPropertyFlags)0x0010000000002041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_MetaData) }; // 3835715311
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_Inner = { "HairGroupsRendering", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsRendering, METADATA_PARAMS(0, nullptr) }; // 4200389659
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsRendering" },
		{ "BlueprintSetter", "SetHairGroupsRendering" },
		{ "Category", "HairRendering" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering = { "HairGroupsRendering", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsRendering), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_MetaData) }; // 4200389659
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_Inner = { "HairGroupsPhysics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsPhysics, METADATA_PARAMS(0, nullptr) }; // 3968193190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsPhysics" },
		{ "BlueprintSetter", "SetHairGroupsPhysics" },
		{ "Category", "HairPhysics" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics = { "HairGroupsPhysics", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsPhysics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_MetaData) }; // 3968193190
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_Inner = { "HairGroupsInterpolation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(0, nullptr) }; // 226160302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsInterpolation" },
		{ "BlueprintSetter", "SetHairGroupsInterpolation" },
		{ "Category", "HairInterpolation" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation = { "HairGroupsInterpolation", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsInterpolation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_MetaData) }; // 226160302
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_Inner = { "HairGroupsLOD", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsLOD, METADATA_PARAMS(0, nullptr) }; // 3249138390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsLOD" },
		{ "BlueprintSetter", "SetHairGroupsLOD" },
		{ "Category", "HairLOD" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD = { "HairGroupsLOD", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsLOD), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_MetaData) }; // 3249138390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_Inner = { "HairGroupsCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsCardsSourceDescription, METADATA_PARAMS(0, nullptr) }; // 1173003402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsCards" },
		{ "BlueprintSetter", "SetHairGroupsCards" },
		{ "Category", "HairCards" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards = { "HairGroupsCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_MetaData) }; // 1173003402
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_Inner = { "HairGroupsMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsMeshesSourceDescription, METADATA_PARAMS(0, nullptr) }; // 2157140126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsMeshes" },
		{ "BlueprintSetter", "SetHairGroupsMeshes" },
		{ "Category", "HairMeshes" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes = { "HairGroupsMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_MetaData) }; // 2157140126
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_Inner = { "HairGroupsMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHairGroupsMaterial, METADATA_PARAMS(0, nullptr) }; // 1868217822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_MetaData[] = {
		{ "BlueprintGetter", "GetHairGroupsMaterials" },
		{ "BlueprintSetter", "SetHairGroupsMaterials" },
		{ "Category", "HairMaterials" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials = { "HairGroupsMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairGroupsMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_MetaData) }; // 1868217822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_MetaData[] = {
		{ "BlueprintGetter", "GetEnableGlobalInterpolation" },
		{ "BlueprintSetter", "SetEnableGlobalInterpolation" },
		{ "Category", "HairInterpolation" },
		{ "DisplayName", "RBF Interpolation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Enable radial basis function interpolation to be used instead of the local skin rigid transform (WIP)" },
	};
#endif
	void Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_SetBit(void* Obj)
	{
		((UGroomAsset*)Obj)->EnableGlobalInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation = { "EnableGlobalInterpolation", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroomAsset), &Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache_MetaData[] = {
		{ "BlueprintGetter", "GetEnableSimulationCache" },
		{ "BlueprintSetter", "SetEnableSimulationCache" },
		{ "Category", "HairInterpolation" },
		{ "DisplayName", "Enable Guide-Cache Support" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Enable guide-cache support. This allows to attach a simulation-cache dynamically at runtime" },
	};
#endif
	void Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache_SetBit(void* Obj)
	{
		((UGroomAsset*)Obj)->EnableSimulationCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache = { "EnableSimulationCache", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroomAsset), &Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_MetaData[] = {
		{ "BlueprintGetter", "GetHairInterpolationType" },
		{ "BlueprintSetter", "SetHairInterpolationType" },
		{ "Category", "HairInterpolation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Type of interpolation used (WIP)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType = { "HairInterpolationType", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, HairInterpolationType), Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_MetaData) }; // 850683939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh_MetaData[] = {
		{ "BlueprintGetter", "GetRiggedSkeletalMesh" },
		{ "BlueprintSetter", "SetRiggedSkeletalMesh" },
		{ "Category", "HairInterpolation" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh = { "RiggedSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, RiggedSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_Inner = { "DeformedGroupSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections = { "DeformedGroupSections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, DeformedGroupSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, MinLOD), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD_MetaData) }; // 3274094615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping_MetaData) }; // 3834211121
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_Inner = { "EffectiveLODBias", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias = { "EffectiveLODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, EffectiveLODBias), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Asset data to be used when re-importing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Asset data to be used when re-importing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0014048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomAsset, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_MetaData), Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairGroupsMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableGlobalInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EnableSimulationCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_HairInterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_RiggedSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_DeformedGroupSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_MinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_DisableBelowMinLodStripping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_EffectiveLODBias,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomAsset_Statics::NewProp_AssetUserData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGroomAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UGroomAsset, IInterface_AssetUserData), false },  // 1872046249
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomAsset_Statics::ClassParams = {
		&UGroomAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroomAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGroomAsset()
	{
		if (!Z_Registration_Info_UClass_UGroomAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomAsset.OuterSingleton, Z_Construct_UClass_UGroomAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomAsset.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomAsset>()
	{
		return UGroomAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomAsset);
	UGroomAsset::~UGroomAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::EnumInfo[] = {
		{ EHairAtlasTextureType_StaticEnum, TEXT("EHairAtlasTextureType"), &Z_Registration_Info_UEnum_EHairAtlasTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3169006742U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ScriptStructInfo[] = {
		{ FHairGroupLODInfo::StaticStruct, Z_Construct_UScriptStruct_FHairGroupLODInfo_Statics::NewStructOps, TEXT("HairGroupLODInfo"), &Z_Registration_Info_UScriptStruct_HairGroupLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupLODInfo), 40208149U) },
		{ FHairGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FHairGroupInfo_Statics::NewStructOps, TEXT("HairGroupInfo"), &Z_Registration_Info_UScriptStruct_HairGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupInfo), 3685314684U) },
		{ FHairGroupsMaterial::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsMaterial_Statics::NewStructOps, TEXT("HairGroupsMaterial"), &Z_Registration_Info_UScriptStruct_HairGroupsMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsMaterial), 1868217822U) },
		{ FHairGroupInfoWithVisibility::StaticStruct, Z_Construct_UScriptStruct_FHairGroupInfoWithVisibility_Statics::NewStructOps, TEXT("HairGroupInfoWithVisibility"), &Z_Registration_Info_UScriptStruct_HairGroupInfoWithVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupInfoWithVisibility), 3835715311U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomAsset, UGroomAsset::StaticClass, TEXT("UGroomAsset"), &Z_Registration_Info_UClass_UGroomAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomAsset), 828734674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_146821640(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

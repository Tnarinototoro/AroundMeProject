// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshBoneWeightFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBoneWeightFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneInfo();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeight();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight;
class UScriptStruct* FGeometryScriptBoneWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBoneWeight"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBoneWeight>()
{
	return FGeometryScriptBoneWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bone Weights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBoneWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Category", "BoneWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneWeight, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "BoneWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneWeight, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBoneWeight",
		Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers),
		sizeof(FGeometryScriptBoneWeight),
		alignof(FGeometryScriptBoneWeight),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile;
class UScriptStruct* FGeometryScriptBoneWeightProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBoneWeightProfile"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBoneWeightProfile>()
{
	return FGeometryScriptBoneWeightProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bone Weights Profile" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBoneWeightProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "BoneWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneWeightProfile, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewProp_ProfileName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBoneWeightProfile",
		Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers),
		sizeof(FGeometryScriptBoneWeightProfile),
		alignof(FGeometryScriptBoneWeightProfile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType;
	static UEnum* EGeometryScriptSmoothBoneWeightsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSmoothBoneWeightsType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSmoothBoneWeightsType>()
	{
		return EGeometryScriptSmoothBoneWeightsType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enumerators[] = {
		{ "EGeometryScriptSmoothBoneWeightsType::DirectDistance", (int64)EGeometryScriptSmoothBoneWeightsType::DirectDistance },
		{ "EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel", (int64)EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DirectDistance.Name", "EGeometryScriptSmoothBoneWeightsType::DirectDistance" },
		{ "GeodesicVoxel.Comment", "/** Compute weighting by using Euclidean distance from bone to vertex */" },
		{ "GeodesicVoxel.Name", "EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel" },
		{ "GeodesicVoxel.ToolTip", "Compute weighting by using Euclidean distance from bone to vertex" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSmoothBoneWeightsType",
		"EGeometryScriptSmoothBoneWeightsType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions;
class UScriptStruct* FGeometryScriptSmoothBoneWeightsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSmoothBoneWeightsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSmoothBoneWeightsOptions>()
{
	return FGeometryScriptSmoothBoneWeightsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceWeighingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceWeighingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceWeighingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInfluences_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSmoothBoneWeightsOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The type of algorithm to use for computing the bone weight for each vertex */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The type of algorithm to use for computing the bone weight for each vertex" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType = { "DistanceWeighingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, DistanceWeighingType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSmoothBoneWeightsType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_MetaData), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_MetaData) }; // 937352291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** How rigid the binding should be. Higher values result in a more rigid binding (greater influence by bones\n\x09 *  closer to the vertex than those further away).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "How rigid the binding should be. Higher values result in a more rigid binding (greater influence by bones\ncloser to the vertex than those further away)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness_MetaData), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Maximum number of bones that contribute to each weight. Set to 1 for a completely rigid binding. Higher values\n\x09 *  to have more distant bones make additional contributions to the deformation at each vertex. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Maximum number of bones that contribute to each weight. Set to 1 for a completely rigid binding. Higher values\nto have more distant bones make additional contributions to the deformation at each vertex." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences = { "MaxInfluences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, MaxInfluences), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences_MetaData), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The resolution to build the voxelized representation of the mesh, for computing geodesic distance. Higher values\n\x09 *  result in greater fidelity and less chance of disconnected parts contributing, but slower rate of computation and\n\x09 *  more memory usage.\n\x09 */" },
		{ "EditCondition", "DistanceWeighingType==EGeometryScriptSmoothBoneWeightsType::GeodesicVoxel" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The resolution to build the voxelized representation of the mesh, for computing geodesic distance. Higher values\nresult in greater fidelity and less chance of disconnected parts contributing, but slower rate of computation and\nmore memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution = { "VoxelResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptSmoothBoneWeightsOptions, VoxelResolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution_MetaData), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_DistanceWeighingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_MaxInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewProp_VoxelResolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSmoothBoneWeightsOptions",
		Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers),
		sizeof(FGeometryScriptSmoothBoneWeightsOptions),
		alignof(FGeometryScriptSmoothBoneWeightsOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransferBoneWeightsMethod;
	static UEnum* ETransferBoneWeightsMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransferBoneWeightsMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransferBoneWeightsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("ETransferBoneWeightsMethod"));
		}
		return Z_Registration_Info_UEnum_ETransferBoneWeightsMethod.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<ETransferBoneWeightsMethod>()
	{
		return ETransferBoneWeightsMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::Enumerators[] = {
		{ "ETransferBoneWeightsMethod::ClosestPointOnSurface", (int64)ETransferBoneWeightsMethod::ClosestPointOnSurface },
		{ "ETransferBoneWeightsMethod::InpaintWeights", (int64)ETransferBoneWeightsMethod::InpaintWeights },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClosestPointOnSurface.Comment", "/** For every vertex on the TargetMesh, find the closest point on the surface of the SourceMesh and transfer \n\x09 * bone weights from it. This is usually a point on the SourceMesh triangle where the bone weights are computed via \n\x09 * interpolation of the bone weights at the vertices of the triangle via barycentric coordinates.\n\x09 */" },
		{ "ClosestPointOnSurface.Name", "ETransferBoneWeightsMethod::ClosestPointOnSurface" },
		{ "ClosestPointOnSurface.ToolTip", "For every vertex on the TargetMesh, find the closest point on the surface of the SourceMesh and transfer\nbone weights from it. This is usually a point on the SourceMesh triangle where the bone weights are computed via\ninterpolation of the bone weights at the vertices of the triangle via barycentric coordinates." },
		{ "InpaintWeights.Comment", "/** For every vertex on the target mesh, find the closest point on the surface of the source mesh. If that point \n\x09 * is within the search radius (controlled via SearchPercentage), and their normals differ by less than the \n\x09 * NormalThreshold, then we directly copy the weights from the source point to the target mesh vertex \n\x09 * (same as the ClosestPointOnSurface method). For all the vertices we didn't copy the weights directly, \n\x09 * automatically compute the smooth weights. \n\x09 */" },
		{ "InpaintWeights.Name", "ETransferBoneWeightsMethod::InpaintWeights" },
		{ "InpaintWeights.ToolTip", "For every vertex on the target mesh, find the closest point on the surface of the source mesh. If that point\nis within the search radius (controlled via SearchPercentage), and their normals differ by less than the\nNormalThreshold, then we directly copy the weights from the source point to the target mesh vertex\n(same as the ClosestPointOnSurface method). For all the vertices we didn't copy the weights directly,\nautomatically compute the smooth weights." },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"ETransferBoneWeightsMethod",
		"ETransferBoneWeightsMethod",
		Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod()
	{
		if (!Z_Registration_Info_UEnum_ETransferBoneWeightsMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransferBoneWeightsMethod.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransferBoneWeightsMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputTargetMeshBones;
	static UEnum* EOutputTargetMeshBones_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutputTargetMeshBones.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutputTargetMeshBones.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EOutputTargetMeshBones"));
		}
		return Z_Registration_Info_UEnum_EOutputTargetMeshBones.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EOutputTargetMeshBones>()
	{
		return EOutputTargetMeshBones_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::Enumerators[] = {
		{ "EOutputTargetMeshBones::SourceBones", (int64)EOutputTargetMeshBones::SourceBones },
		{ "EOutputTargetMeshBones::TargetBones", (int64)EOutputTargetMeshBones::TargetBones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "SourceBones.Comment", "/** When transferring weights, the SourceMesh bone attriubtes will be copied over to the TargetMesh, replacing any \n\x09 * existing one, and transferred weights will be indexing the copied bone attributes.\n\x09 */" },
		{ "SourceBones.Name", "EOutputTargetMeshBones::SourceBones" },
		{ "SourceBones.ToolTip", "When transferring weights, the SourceMesh bone attriubtes will be copied over to the TargetMesh, replacing any\nexisting one, and transferred weights will be indexing the copied bone attributes." },
		{ "TargetBones.Comment", "/** When transferring weights, if the TargetMesh has bone attributes, then the transferred SourceMesh weights will be \n     * reindexed with respect to the TargetMesh bones. In cases where a transferred SourceMesh weight refers to a bone \n     * not present in the TargetMesh bone attributes, then that weight is simply skipped, and an error message with \n     * information about the bone will be printed to the Output Log. For best results, the TargetMesh bone attributes \n     * should be a superset of all the bones that are indexed by the transferred weights.\n     */" },
		{ "TargetBones.Name", "EOutputTargetMeshBones::TargetBones" },
		{ "TargetBones.ToolTip", "When transferring weights, if the TargetMesh has bone attributes, then the transferred SourceMesh weights will be\nreindexed with respect to the TargetMesh bones. In cases where a transferred SourceMesh weight refers to a bone\nnot present in the TargetMesh bone attributes, then that weight is simply skipped, and an error message with\ninformation about the bone will be printed to the Output Log. For best results, the TargetMesh bone attributes\nshould be a superset of all the bones that are indexed by the transferred weights." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EOutputTargetMeshBones",
		"EOutputTargetMeshBones",
		Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones()
	{
		if (!Z_Registration_Info_UEnum_EOutputTargetMeshBones.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputTargetMeshBones.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutputTargetMeshBones.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions;
class UScriptStruct* FGeometryScriptTransferBoneWeightsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptTransferBoneWeightsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptTransferBoneWeightsOptions>()
{
	return FGeometryScriptTransferBoneWeightsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransferMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransferMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransferMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputTargetMeshBones_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTargetMeshBones_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputTargetMeshBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetProfile;
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
		static const UECodeGen_Private::FNamePropertyParams NewProp_InpaintMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptTransferBoneWeightsOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The type of algorithm to use for transferring the bone weights. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The type of algorithm to use for transferring the bone weights." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod = { "TransferMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, TransferMethod), Z_Construct_UEnum_GeometryScriptingCore_ETransferBoneWeightsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod_MetaData) }; // 2934560491
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Chooses which bone attributes to use for transferring weights to the TargetMesh. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Chooses which bone attributes to use for transferring weights to the TargetMesh." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones = { "OutputTargetMeshBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, OutputTargetMeshBones), Z_Construct_UEnum_GeometryScriptingCore_EOutputTargetMeshBones, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones_MetaData) }; // 1660229178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SourceProfile_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The identifier for the source bone/skin weight profile used to transfer the weights from. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The identifier for the source bone/skin weight profile used to transfer the weights from." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SourceProfile = { "SourceProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, SourceProfile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SourceProfile_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SourceProfile_MetaData) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TargetProfile_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The identifier for the source bone/skin weight profile used to transfer the weights to. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The identifier for the source bone/skin weight profile used to transfer the weights to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TargetProfile = { "TargetProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, TargetProfile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TargetProfile_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TargetProfile_MetaData) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_RadiusPercentage_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "2" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Defines the search radius as the RadiusPercentage * (input mesh bounding box diagonal). All points not within the search\n\x09  * radius will be ignored. If negative, all points are considered. Only used in the InpaintWeights algorithm.*/" },
		{ "EditCondition", "TransferMethod == ETransferBoneWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Defines the search radius as the RadiusPercentage * (input mesh bounding box diagonal). All points not within the search\nradius will be ignored. If negative, all points are considered. Only used in the InpaintWeights algorithm." },
		{ "UIMax", "2" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_RadiusPercentage = { "RadiusPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, RadiusPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_RadiusPercentage_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_RadiusPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NormalThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Maximum angle (in degrees) difference between the target and the source point normals to be considred a match. \n\x09 * If negative, normals are ignored. Only used in the InpaintWeights algorithm.*/" },
		{ "EditCondition", "TransferMethod == ETransferBoneWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Maximum angle (in degrees) difference between the target and the source point normals to be considred a match.\nIf negative, normals are ignored. Only used in the InpaintWeights algorithm." },
		{ "UIMax", "180" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NormalThreshold = { "NormalThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, NormalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NormalThreshold_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NormalThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, when the closest point doesn't pass the normal threshold test, will try again with a flipped normal. \n\x09 * This helps with layered meshes where the \"inner\" and \"outer\" layers are close to each other but whose normals \n\x09 * are pointing in the opposite directions. */" },
		{ "EditCondition", "TransferMethod == ETransferBoneWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "If true, when the closest point doesn't pass the normal threshold test, will try again with a flipped normal.\nThis helps with layered meshes where the \"inner\" and \"outer\" layers are close to each other but whose normals\nare pointing in the opposite directions." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport_SetBit(void* Obj)
	{
		((FGeometryScriptTransferBoneWeightsOptions*)Obj)->LayeredMeshSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport = { "LayeredMeshSupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeometryScriptTransferBoneWeightsOptions), &Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NumSmoothingIterations_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of optional post-processing smoothing iterations applied to the vertices without the match. */" },
		{ "EditCondition", "TransferMethod == ETransferBoneWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The number of optional post-processing smoothing iterations applied to the vertices without the match." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NumSmoothingIterations = { "NumSmoothingIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, NumSmoothingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NumSmoothingIterations_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NumSmoothingIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The strength of each post-processing smoothing iteration. */" },
		{ "EditCondition", "TransferMethod == ETransferBoneWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "The strength of each post-processing smoothing iteration." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, SmoothingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SmoothingStrength_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SmoothingStrength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_InpaintMask_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Optional weight attribute name where a non-zero value indicates that we want the skinning weights for the vertex to be computed automatically instead of it being copied over from the source mesh. */" },
		{ "EditCondition", "TransferMethod == ETransferBoneWeightsMethod::InpaintWeights" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Optional weight attribute name where a non-zero value indicates that we want the skinning weights for the vertex to be computed automatically instead of it being copied over from the source mesh." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_InpaintMask = { "InpaintMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptTransferBoneWeightsOptions, InpaintMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_InpaintMask_MetaData), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_InpaintMask_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TransferMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_OutputTargetMeshBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SourceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_TargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_RadiusPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NormalThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_LayeredMeshSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_NumSmoothingIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_SmoothingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewProp_InpaintMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptTransferBoneWeightsOptions",
		Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::PropPointers),
		sizeof(FGeometryScriptTransferBoneWeightsOptions),
		alignof(FGeometryScriptTransferBoneWeightsOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo;
class UScriptStruct* FGeometryScriptBoneInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptBoneInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptBoneInfo>()
{
	return FGeometryScriptBoneInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bone Info" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptBoneInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** Index of the bone in the skeletal hierarchy. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Index of the bone in the skeletal hierarchy." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneInfo, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** Bone name. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Bone name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** Parent bone index. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Parent bone index." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneInfo, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_ParentIndex_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_ParentIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** Local/bone space reference transform. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Local/bone space reference transform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneInfo, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_LocalTransform_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_LocalTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** Global/world space reference transform. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Global/world space reference transform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneInfo, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_WorldTransform_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_WorldTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Bone" },
		{ "Comment", "/** Bone color. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ToolTip", "Bone color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryScriptBoneInfo, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_ParentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptBoneInfo",
		Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::PropPointers),
		sizeof(FGeometryScriptBoneInfo),
		alignof(FGeometryScriptBoneInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptBoneInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetAllBonesInfo)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY_REF(FGeometryScriptBoneInfo,Z_Param_Out_BonesInfo);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo(Z_Param_TargetMesh,Z_Param_Out_BonesInfo,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneInfo)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidBoneName);
		P_GET_STRUCT_REF(FGeometryScriptBoneInfo,Z_Param_Out_BoneInfo);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo(Z_Param_TargetMesh,Z_Param_BoneName,Z_Param_Out_bIsValidBoneName,Z_Param_Out_BoneInfo,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneChildren)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bRecursive);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidBoneName);
		P_GET_TARRAY_REF(FGeometryScriptBoneInfo,Z_Param_Out_ChildrenInfo);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren(Z_Param_TargetMesh,Z_Param_BoneName,Z_Param_bRecursive,Z_Param_Out_bIsValidBoneName,Z_Param_Out_ChildrenInfo,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetRootBoneName)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName(Z_Param_TargetMesh,Z_Param_Out_BoneName,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneIndex)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidBoneName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BoneIndex);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex(Z_Param_TargetMesh,Z_Param_BoneName,Z_Param_Out_bIsValidBoneName,Z_Param_Out_BoneIndex,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execDiscardBonesFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::DiscardBonesFromMesh(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execCopyBonesFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_SourceMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromMesh(Z_Param_SourceMesh,Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execTransferBoneWeightsFromMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_SourceMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptTransferBoneWeightsOptions,Z_Param_Options);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh(Z_Param_SourceMesh,Z_Param_TargetMesh,Z_Param_Options,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execComputeSmoothBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_STRUCT(FGeometryScriptSmoothBoneWeightsOptions,Z_Param_Options);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(Z_Param_TargetMesh,Z_Param_Skeleton,Z_Param_Options,Z_Param_Profile,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetAllVertexBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(Z_Param_TargetMesh,Z_Param_Out_BoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetVertexBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_TARRAY_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeights);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidVertexID);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_BoneWeights,Z_Param_Out_bIsValidVertexID,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetLargestVertexBoneWeight)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_STRUCT_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeight);
		P_GET_UBOOL_REF(Z_Param_Out_bHasValidBoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_BoneWeight,Z_Param_Out_bHasValidBoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetVertexBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexID);
		P_GET_TARRAY_REF(FGeometryScriptBoneWeight,Z_Param_Out_BoneWeights);
		P_GET_UBOOL_REF(Z_Param_Out_bHasValidBoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(Z_Param_TargetMesh,Z_Param_VertexID,Z_Param_Out_BoneWeights,Z_Param_Out_bHasValidBoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetMaxBoneWeightIndex)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bHasBoneWeights);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxBoneIndex);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(Z_Param_TargetMesh,Z_Param_Out_bHasBoneWeights,Z_Param_Out_MaxBoneIndex,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshCreateBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bProfileExisted);
		P_GET_UBOOL(Z_Param_bReplaceExistingProfile);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(Z_Param_TargetMesh,Z_Param_Out_bProfileExisted,Z_Param_bReplaceExistingProfile,Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshHasBoneWeights)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bHasBoneWeights);
		P_GET_STRUCT(FGeometryScriptBoneWeightProfile,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(Z_Param_TargetMesh,Z_Param_Out_bHasBoneWeights,Z_Param_Profile);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshBoneWeightFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeSmoothBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execComputeSmoothBoneWeights },
			{ "CopyBonesFromMesh", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execCopyBonesFromMesh },
			{ "DiscardBonesFromMesh", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execDiscardBonesFromMesh },
			{ "GetAllBonesInfo", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetAllBonesInfo },
			{ "GetBoneChildren", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneChildren },
			{ "GetBoneIndex", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneIndex },
			{ "GetBoneInfo", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetBoneInfo },
			{ "GetLargestVertexBoneWeight", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetLargestVertexBoneWeight },
			{ "GetMaxBoneWeightIndex", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetMaxBoneWeightIndex },
			{ "GetRootBoneName", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetRootBoneName },
			{ "GetVertexBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execGetVertexBoneWeights },
			{ "MeshCreateBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshCreateBoneWeights },
			{ "MeshHasBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execMeshHasBoneWeights },
			{ "SetAllVertexBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetAllVertexBoneWeights },
			{ "SetVertexBoneWeights", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execSetVertexBoneWeights },
			{ "TransferBoneWeightsFromMesh", &UGeometryScriptLibrary_MeshBoneWeightFunctions::execTransferBoneWeightsFromMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			USkeleton* Skeleton;
			FGeometryScriptSmoothBoneWeightsOptions Options;
			FGeometryScriptBoneWeightProfile Profile;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions, METADATA_PARAMS(0, nullptr) }; // 1061731346
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/** \n\x09 *  Computes a smooth skin binding for the given mesh to the skeleton provided.\n\x09 *  @param Skeleton The skeleton to compute binding for the skin weights.\n\x09 *  @param Options The options to set for the binding algorithm.\n\x09 *  @param Profile The skin weight profile to update with the smooth binding.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Computes a smooth skin binding for the given mesh to the skeleton provided.\n@param Skeleton The skeleton to compute binding for the skin weights.\n@param Options The options to set for the binding algorithm.\n@param Profile The skin weight profile to update with the smooth binding." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "ComputeSmoothBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventComputeSmoothBoneWeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms
		{
			UDynamicMesh* SourceMesh;
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms, SourceMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Copy the bone attributes (skeleton) from the SourceMesh to the TargetMesh.\n\x09 * @param SourceMesh Mesh we are copying the bone attributes from.\n\x09 * @param TargetMesh Mesh we are copying the bone attributes to.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Copy the bone attributes (skeleton) from the SourceMesh to the TargetMesh.\n@param SourceMesh Mesh we are copying the bone attributes from.\n@param TargetMesh Mesh we are copying the bone attributes to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "CopyBonesFromMesh", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventCopyBonesFromMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventDiscardBonesFromMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventDiscardBonesFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventDiscardBonesFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventDiscardBonesFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Discard the bone attributes (skeleton) from the TargetMesh.\n\x09 * @param TargetMesh Mesh we are discarding bone attributes from.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Discard the bone attributes (skeleton) from the TargetMesh.\n@param TargetMesh Mesh we are discarding bone attributes from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "DiscardBonesFromMesh", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventDiscardBonesFromMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventDiscardBonesFromMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<FGeometryScriptBoneInfo> BonesInfo;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonesInfo_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_BonesInfo_Inner = { "BonesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneInfo, METADATA_PARAMS(0, nullptr) }; // 3344613028
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_BonesInfo = { "BonesInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms, BonesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3344613028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_BonesInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_BonesInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Get an array of bones representing the skeleton. Each entry contains information about the bone.\n\x09 * \n\x09 * @param TargetMesh Mesh containing the bone attributes.\n\x09 * @param BonesInfo Skeleton information.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get an array of bones representing the skeleton. Each entry contains information about the bone.\n\n@param TargetMesh Mesh containing the bone attributes.\n@param BonesInfo Skeleton information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetAllBonesInfo", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetAllBonesInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms
		{
			UDynamicMesh* TargetMesh;
			FName BoneName;
			bool bRecursive;
			bool bIsValidBoneName;
			TArray<FGeometryScriptBoneInfo> ChildrenInfo;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
		static void NewProp_bIsValidBoneName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildrenInfo_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bIsValidBoneName_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms*)Obj)->bIsValidBoneName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bIsValidBoneName = { "bIsValidBoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bIsValidBoneName_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ChildrenInfo_Inner = { "ChildrenInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneInfo, METADATA_PARAMS(0, nullptr) }; // 3344613028
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ChildrenInfo = { "ChildrenInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms, ChildrenInfo), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3344613028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_bIsValidBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ChildrenInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ChildrenInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Get the information about the children of the bone.\n\x09 * \n\x09 * @param TargetMesh Mesh containing the bone attributes.\n\x09 * @param BoneName The name of bone.\n\x09 * @param bRecursive If set to true, grandchildren will also be added recursively\n\x09 * @param bIsValidBoneName Set to true if the TargetMesh contains a bone with the given name, false otherwise.\n\x09 * @param ChildrenInfo The informattion of the children.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the information about the children of the bone.\n\n@param TargetMesh Mesh containing the bone attributes.\n@param BoneName The name of bone.\n@param bRecursive If set to true, grandchildren will also be added recursively\n@param bIsValidBoneName Set to true if the TargetMesh contains a bone with the given name, false otherwise.\n@param ChildrenInfo The informattion of the children." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetBoneChildren", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneChildren_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms
		{
			UDynamicMesh* TargetMesh;
			FName BoneName;
			bool bIsValidBoneName;
			int32 BoneIndex;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bIsValidBoneName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidBoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_bIsValidBoneName_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms*)Obj)->bIsValidBoneName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_bIsValidBoneName = { "bIsValidBoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_bIsValidBoneName_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms, BoneIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_bIsValidBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetBoneIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms
		{
			UDynamicMesh* TargetMesh;
			FName BoneName;
			bool bIsValidBoneName;
			FGeometryScriptBoneInfo BoneInfo;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bIsValidBoneName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_bIsValidBoneName_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms*)Obj)->bIsValidBoneName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_bIsValidBoneName = { "bIsValidBoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_bIsValidBoneName_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_BoneInfo = { "BoneInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms, BoneInfo), Z_Construct_UScriptStruct_FGeometryScriptBoneInfo, METADATA_PARAMS(0, nullptr) }; // 3344613028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_bIsValidBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_BoneInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Get the bone information.\n\x09 * \n\x09 * @param TargetMesh Mesh containing the bone attributes.\n\x09 * @param BoneName The name of bone.\n\x09 * @param bIsValidBoneName Set to true if the TargetMesh contains a bone with the given name, false otherwise.\n\x09 * @param BoneInfo The information about the bone.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the bone information.\n\n@param TargetMesh Mesh containing the bone attributes.\n@param BoneName The name of bone.\n@param bIsValidBoneName Set to true if the TargetMesh contains a bone with the given name, false otherwise.\n@param BoneInfo The information about the bone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetBoneInfo", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetBoneInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			FGeometryScriptBoneWeight BoneWeight;
			bool bHasValidBoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeight;
		static void NewProp_bHasValidBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidBoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, VertexID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_BoneWeight = { "BoneWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, BoneWeight), Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(0, nullptr) }; // 1401534764
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms*)Obj)->bHasValidBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights = { "bHasValidBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_BoneWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_bHasValidBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Return the Bone/Skin Weight with the maximum weight at a given vertex of TargetMesh\n\x09 * @param VertexID requested vertex\n\x09 * @param BoneWeight the bone index and weight that was found to have the maximum weight\n\x09 * @param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile and a largest weight was found\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Return the Bone/Skin Weight with the maximum weight at a given vertex of TargetMesh\n@param VertexID requested vertex\n@param BoneWeight the bone index and weight that was found to have the maximum weight\n@param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile and a largest weight was found\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetLargestVertexBoneWeight", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetLargestVertexBoneWeight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bHasBoneWeights;
			int32 MaxBoneIndex;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bHasBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBoneWeights;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBoneIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms*)Obj)->bHasBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights = { "bHasBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_MaxBoneIndex = { "MaxBoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, MaxBoneIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_bHasBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_MaxBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Determine the largest bone weight index that exists on the Mesh\n\x09 * @param bHasBoneWeights will be returned true if the requested bone weight profile exists\n\x09 * @param MaxBoneIndex maximum bone index will be returned here, or -1 if no bone indices exist\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Determine the largest bone weight index that exists on the Mesh\n@param bHasBoneWeights will be returned true if the requested bone weight profile exists\n@param MaxBoneIndex maximum bone index will be returned here, or -1 if no bone indices exist\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetMaxBoneWeightIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetMaxBoneWeightIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms
		{
			UDynamicMesh* TargetMesh;
			FName BoneName;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Get the name of the root bone.\n\x09 * \n\x09 * @param TargetMesh Mesh containing the bone attributes.\n\x09 * @param BoneName The name of the root bone.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the name of the root bone.\n\n@param TargetMesh Mesh containing the bone attributes.\n@param BoneName The name of the root bone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetRootBoneName", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetRootBoneName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			TArray<FGeometryScriptBoneWeight> BoneWeights;
			bool bHasValidBoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeights_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneWeights;
		static void NewProp_bHasValidBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidBoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, VertexID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner = { "BoneWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(0, nullptr) }; // 1401534764
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, BoneWeights), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1401534764
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms*)Obj)->bHasValidBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights = { "bHasValidBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_BoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_bHasValidBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Return an array of Bone/Skin Weights at a given vertex of TargetMesh\n\x09 * @param VertexID requested vertex\n\x09 * @param BoneWeights output array of bone index/weight pairs for the given Vertex\n\x09 * @param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile, ie BoneWeights is valid\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Return an array of Bone/Skin Weights at a given vertex of TargetMesh\n@param VertexID requested vertex\n@param BoneWeights output array of bone index/weight pairs for the given Vertex\n@param bHasValidBoneWeights will be returned as true if the vertex has bone weights in the given profile, ie BoneWeights is valid\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "GetVertexBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventGetVertexBoneWeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bProfileExisted;
			bool bReplaceExistingProfile;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bProfileExisted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProfileExisted;
		static void NewProp_bReplaceExistingProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms*)Obj)->bProfileExisted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted = { "bProfileExisted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms*)Obj)->bReplaceExistingProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile = { "bReplaceExistingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bProfileExisted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_bReplaceExistingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Create a new BoneWeights attribute on the TargetMesh, if it does not already exist. If it does exist, \n\x09 * and bReplaceExistingProfile is passed as true, the attribute will be removed and re-added, to reset it. \n\x09 * @param bProfileExisted will be returned true if the requested bone weight profile already existed\n\x09 * @param bReplaceExistingProfile if true, if the Profile already exists, it is reset\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_bReplaceExistingProfile", "false" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new BoneWeights attribute on the TargetMesh, if it does not already exist. If it does exist,\nand bReplaceExistingProfile is passed as true, the attribute will be removed and re-added, to reset it.\n@param bProfileExisted will be returned true if the requested bone weight profile already existed\n@param bReplaceExistingProfile if true, if the Profile already exists, it is reset\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "MeshCreateBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshCreateBoneWeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bHasBoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bHasBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms*)Obj)->bHasBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights = { "bHasBoneWeights", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_bHasBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Check whether the TargetMesh has a per-vertex Bone/Skin Weight Attribute set\n\x09 * @param bHasBoneWeights will be returned true if the requested bone weight profile exists\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check whether the TargetMesh has a per-vertex Bone/Skin Weight Attribute set\n@param bHasBoneWeights will be returned true if the requested bone weight profile exists\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "MeshHasBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventMeshHasBoneWeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<FGeometryScriptBoneWeight> BoneWeights;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_Inner = { "BoneWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(0, nullptr) }; // 1401534764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, BoneWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData) }; // 1401534764
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_BoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Set all vertices of the TargetMesh to the given Bone/Skin Weights\n\x09 * @param BoneWeights input array of bone index/weight pairs for the Vertex\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set all vertices of the TargetMesh to the given Bone/Skin Weights\n@param BoneWeights input array of bone index/weight pairs for the Vertex\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "SetAllVertexBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetAllVertexBoneWeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 VertexID;
			TArray<FGeometryScriptBoneWeight> BoneWeights;
			bool bIsValidVertexID;
			FGeometryScriptBoneWeightProfile Profile;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneWeights;
		static void NewProp_bIsValidVertexID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidVertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, VertexID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner = { "BoneWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight, METADATA_PARAMS(0, nullptr) }; // 1401534764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights = { "BoneWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, BoneWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_MetaData) }; // 1401534764
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms*)Obj)->bIsValidVertexID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID = { "bIsValidVertexID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, Profile), Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile, METADATA_PARAMS(0, nullptr) }; // 2502846630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_VertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_BoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_bIsValidVertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/**\n\x09 * Set the Bone/Skin Weights at a given vertex of TargetMesh\n\x09 * @param VertexID vertex to update\n\x09 * @param BoneWeights input array of bone index/weight pairs for the Vertex\n\x09 * @param bIsValidVertexID will be returned as true if the vertex ID is valid\n\x09 * @param Profile identifier for the bone/skin weight profile\n\x09 */" },
		{ "CPP_Default_Profile", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the Bone/Skin Weights at a given vertex of TargetMesh\n@param VertexID vertex to update\n@param BoneWeights input array of bone index/weight pairs for the Vertex\n@param bIsValidVertexID will be returned as true if the vertex ID is valid\n@param Profile identifier for the bone/skin weight profile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "SetVertexBoneWeights", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventSetVertexBoneWeights_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics
	{
		struct GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms
		{
			UDynamicMesh* SourceMesh;
			UDynamicMesh* TargetMesh;
			FGeometryScriptTransferBoneWeightsOptions Options;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms, SourceMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions, METADATA_PARAMS(0, nullptr) }; // 1072393251
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries|BoneWeights" },
		{ "Comment", "/** \n\x09 * Transfer the bone weights from the SourceMesh to the TargetMesh. Assumes that the meshes are aligned. Otherwise, \n\x09 * use the TransformMesh geometry script function to align them.\n\x09 * \n\x09 * @param SourceMesh The mesh we are transferring the weights from.\n\x09 * @param TargetMesh The mesh we are transferring the weights to.\n\x09 * @param Options The options to set for the transfer weight algorithm.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Transfer the bone weights from the SourceMesh to the TargetMesh. Assumes that the meshes are aligned. Otherwise,\nuse the TransformMesh geometry script function to align them.\n\n@param SourceMesh The mesh we are transferring the weights from.\n@param TargetMesh The mesh we are transferring the weights to.\n@param Options The options to set for the transfer weight algorithm." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, nullptr, "TransferBoneWeightsFromMesh", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::GeometryScriptLibrary_MeshBoneWeightFunctions_eventTransferBoneWeightsFromMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshBoneWeightFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights, "ComputeSmoothBoneWeights" }, // 3117062178
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_CopyBonesFromMesh, "CopyBonesFromMesh" }, // 560686627
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_DiscardBonesFromMesh, "DiscardBonesFromMesh" }, // 3206113363
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetAllBonesInfo, "GetAllBonesInfo" }, // 846306235
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneChildren, "GetBoneChildren" }, // 2027528226
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneIndex, "GetBoneIndex" }, // 1160351492
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetBoneInfo, "GetBoneInfo" }, // 2532610222
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight, "GetLargestVertexBoneWeight" }, // 692082020
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex, "GetMaxBoneWeightIndex" }, // 3553471764
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetRootBoneName, "GetRootBoneName" }, // 1740034770
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights, "GetVertexBoneWeights" }, // 3060647558
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights, "MeshCreateBoneWeights" }, // 1816520074
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights, "MeshHasBoneWeights" }, // 1769117348
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights, "SetAllVertexBoneWeights" }, // 957611257
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights, "SetVertexBoneWeights" }, // 2714036957
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshBoneWeightFunctions_TransferBoneWeightsFromMesh, "TransferBoneWeightsFromMesh" }, // 784982298
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshBoneWeightFunctions.h" },
		{ "ScriptName", "GeometryScript_BoneWeights" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshBoneWeightFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshBoneWeightFunctions>()
	{
		return UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshBoneWeightFunctions::UGeometryScriptLibrary_MeshBoneWeightFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshBoneWeightFunctions);
	UGeometryScriptLibrary_MeshBoneWeightFunctions::~UGeometryScriptLibrary_MeshBoneWeightFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptSmoothBoneWeightsType_StaticEnum, TEXT("EGeometryScriptSmoothBoneWeightsType"), &Z_Registration_Info_UEnum_EGeometryScriptSmoothBoneWeightsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 937352291U) },
		{ ETransferBoneWeightsMethod_StaticEnum, TEXT("ETransferBoneWeightsMethod"), &Z_Registration_Info_UEnum_ETransferBoneWeightsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2934560491U) },
		{ EOutputTargetMeshBones_StaticEnum, TEXT("EOutputTargetMeshBones"), &Z_Registration_Info_UEnum_EOutputTargetMeshBones, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1660229178U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptBoneWeight::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBoneWeight_Statics::NewStructOps, TEXT("GeometryScriptBoneWeight"), &Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBoneWeight), 1401534764U) },
		{ FGeometryScriptBoneWeightProfile::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBoneWeightProfile_Statics::NewStructOps, TEXT("GeometryScriptBoneWeightProfile"), &Z_Registration_Info_UScriptStruct_GeometryScriptBoneWeightProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBoneWeightProfile), 2502846630U) },
		{ FGeometryScriptSmoothBoneWeightsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSmoothBoneWeightsOptions_Statics::NewStructOps, TEXT("GeometryScriptSmoothBoneWeightsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSmoothBoneWeightsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSmoothBoneWeightsOptions), 1061731346U) },
		{ FGeometryScriptTransferBoneWeightsOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptTransferBoneWeightsOptions_Statics::NewStructOps, TEXT("GeometryScriptTransferBoneWeightsOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptTransferBoneWeightsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptTransferBoneWeightsOptions), 1072393251U) },
		{ FGeometryScriptBoneInfo::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptBoneInfo_Statics::NewStructOps, TEXT("GeometryScriptBoneInfo"), &Z_Registration_Info_UScriptStruct_GeometryScriptBoneInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptBoneInfo), 3344613028U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshBoneWeightFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBoneWeightFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshBoneWeightFunctions), 3083426963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_1459647822(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBoneWeightFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

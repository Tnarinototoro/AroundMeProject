// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomBindingAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomBindingAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAssetList();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAssetList_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGoomBindingGroupInfo();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo;
class UScriptStruct* FGoomBindingGroupInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoomBindingGroupInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GoomBindingGroupInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGoomBindingGroupInfo>()
{
	return FGoomBindingGroupInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenRootCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenRootCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenLODCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenLODCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimRootCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimRootCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimLODCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimLODCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoomBindingGroupInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve Count" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount = { "RenRootCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGoomBindingGroupInfo, RenRootCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount_MetaData), Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Curve LOD" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount = { "RenLODCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGoomBindingGroupInfo, RenLODCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount_MetaData), Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide Count" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount = { "SimRootCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGoomBindingGroupInfo, SimRootCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount_MetaData), Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Guide LOD" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount = { "SimLODCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGoomBindingGroupInfo, SimLODCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount_MetaData), Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenRootCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_RenLODCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimRootCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewProp_SimLODCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GoomBindingGroupInfo",
		Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers),
		sizeof(FGoomBindingGroupInfo),
		alignof(FGoomBindingGroupInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGoomBindingGroupInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.InnerSingleton, Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomBindingMeshType;
	static UEnum* EGroomBindingMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomBindingMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomBindingMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomBindingMeshType"));
		}
		return Z_Registration_Info_UEnum_EGroomBindingMeshType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingMeshType>()
	{
		return EGroomBindingMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enumerators[] = {
		{ "EGroomBindingMeshType::SkeletalMesh", (int64)EGroomBindingMeshType::SkeletalMesh },
		{ "EGroomBindingMeshType::GeometryCache", (int64)EGroomBindingMeshType::GeometryCache },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum that describes the type of mesh to bind to */" },
		{ "GeometryCache.Name", "EGroomBindingMeshType::GeometryCache" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "SkeletalMesh.Name", "EGroomBindingMeshType::SkeletalMesh" },
		{ "ToolTip", "Enum that describes the type of mesh to bind to" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomBindingMeshType",
		"EGroomBindingMeshType",
		Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType()
	{
		if (!Z_Registration_Info_UEnum_EGroomBindingMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomBindingMeshType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomBindingMeshType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetGroupInfos)
	{
		P_GET_TARRAY_REF(FGoomBindingGroupInfo,Z_Param_Out_InGroupInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupInfos(Z_Param_Out_InGroupInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetGroupInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGoomBindingGroupInfo>*)Z_Param__Result=P_THIS->GetGroupInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetMatchingSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMatchingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchingSection(Z_Param_InMatchingSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetMatchingSection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchingSection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetNumInterpolationPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumInterpolationPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumInterpolationPoints(Z_Param_InNumInterpolationPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetNumInterpolationPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumInterpolationPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetTargetGeometryCache)
	{
		P_GET_OBJECT(UGeometryCache,Z_Param_InGeometryCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetGeometryCache(Z_Param_InGeometryCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetTargetGeometryCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGeometryCache**)Z_Param__Result=P_THIS->GetTargetGeometryCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetSourceGeometryCache)
	{
		P_GET_OBJECT(UGeometryCache,Z_Param_InGeometryCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceGeometryCache(Z_Param_InGeometryCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetSourceGeometryCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGeometryCache**)Z_Param__Result=P_THIS->GetSourceGeometryCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetTargetSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetSkeletalMesh(Z_Param_InSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetTargetSkeletalMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetTargetSkeletalMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetSourceSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceSkeletalMesh(Z_Param_InSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetSourceSkeletalMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSourceSkeletalMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetGroom)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_InGroom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroom(Z_Param_InGroom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetGroom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroomAsset**)Z_Param__Result=P_THIS->GetGroom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execSetGroomBindingType)
	{
		P_GET_ENUM(EGroomBindingMeshType,Z_Param_InGroomBindingType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroomBindingType(EGroomBindingMeshType(Z_Param_InGroomBindingType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBindingAsset::execGetGroomBindingType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGroomBindingMeshType*)Z_Param__Result=P_THIS->GetGroomBindingType();
		P_NATIVE_END;
	}
	void UGroomBindingAsset::StaticRegisterNativesUGroomBindingAsset()
	{
		UClass* Class = UGroomBindingAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroom", &UGroomBindingAsset::execGetGroom },
			{ "GetGroomBindingType", &UGroomBindingAsset::execGetGroomBindingType },
			{ "GetGroupInfos", &UGroomBindingAsset::execGetGroupInfos },
			{ "GetMatchingSection", &UGroomBindingAsset::execGetMatchingSection },
			{ "GetNumInterpolationPoints", &UGroomBindingAsset::execGetNumInterpolationPoints },
			{ "GetSourceGeometryCache", &UGroomBindingAsset::execGetSourceGeometryCache },
			{ "GetSourceSkeletalMesh", &UGroomBindingAsset::execGetSourceSkeletalMesh },
			{ "GetTargetGeometryCache", &UGroomBindingAsset::execGetTargetGeometryCache },
			{ "GetTargetSkeletalMesh", &UGroomBindingAsset::execGetTargetSkeletalMesh },
			{ "SetGroom", &UGroomBindingAsset::execSetGroom },
			{ "SetGroomBindingType", &UGroomBindingAsset::execSetGroomBindingType },
			{ "SetGroupInfos", &UGroomBindingAsset::execSetGroupInfos },
			{ "SetMatchingSection", &UGroomBindingAsset::execSetMatchingSection },
			{ "SetNumInterpolationPoints", &UGroomBindingAsset::execSetNumInterpolationPoints },
			{ "SetSourceGeometryCache", &UGroomBindingAsset::execSetSourceGeometryCache },
			{ "SetSourceSkeletalMesh", &UGroomBindingAsset::execSetSourceSkeletalMesh },
			{ "SetTargetGeometryCache", &UGroomBindingAsset::execSetTargetGeometryCache },
			{ "SetTargetSkeletalMesh", &UGroomBindingAsset::execSetTargetSkeletalMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics
	{
		struct GroomBindingAsset_eventGetGroom_Parms
		{
			UGroomAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetGroom_Parms, ReturnValue), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetGroom", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::GroomBindingAsset_eventGetGroom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::GroomBindingAsset_eventGetGroom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetGroom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetGroom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics
	{
		struct GroomBindingAsset_eventGetGroomBindingType_Parms
		{
			EGroomBindingMeshType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetGroomBindingType_Parms, ReturnValue), Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, METADATA_PARAMS(0, nullptr) }; // 1811698506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetGroomBindingType", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::GroomBindingAsset_eventGetGroomBindingType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::GroomBindingAsset_eventGetGroomBindingType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics
	{
		struct GroomBindingAsset_eventGetGroupInfos_Parms
		{
			TArray<FGoomBindingGroupInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGoomBindingGroupInfo, METADATA_PARAMS(0, nullptr) }; // 1770071865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetGroupInfos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue_MetaData) }; // 1770071865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetGroupInfos", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::GroomBindingAsset_eventGetGroupInfos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::GroomBindingAsset_eventGetGroupInfos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics
	{
		struct GroomBindingAsset_eventGetMatchingSection_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetMatchingSection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetMatchingSection", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::GroomBindingAsset_eventGetMatchingSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::GroomBindingAsset_eventGetMatchingSection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics
	{
		struct GroomBindingAsset_eventGetNumInterpolationPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetNumInterpolationPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetNumInterpolationPoints", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::GroomBindingAsset_eventGetNumInterpolationPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::GroomBindingAsset_eventGetNumInterpolationPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics
	{
		struct GroomBindingAsset_eventGetSourceGeometryCache_Parms
		{
			UGeometryCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetSourceGeometryCache_Parms, ReturnValue), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetSourceGeometryCache", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::GroomBindingAsset_eventGetSourceGeometryCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::GroomBindingAsset_eventGetSourceGeometryCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics
	{
		struct GroomBindingAsset_eventGetSourceSkeletalMesh_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetSourceSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetSourceSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::GroomBindingAsset_eventGetSourceSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::GroomBindingAsset_eventGetSourceSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics
	{
		struct GroomBindingAsset_eventGetTargetGeometryCache_Parms
		{
			UGeometryCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetTargetGeometryCache_Parms, ReturnValue), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetTargetGeometryCache", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::GroomBindingAsset_eventGetTargetGeometryCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::GroomBindingAsset_eventGetTargetGeometryCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics
	{
		struct GroomBindingAsset_eventGetTargetSkeletalMesh_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventGetTargetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "GetTargetSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::GroomBindingAsset_eventGetTargetSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::GroomBindingAsset_eventGetTargetSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics
	{
		struct GroomBindingAsset_eventSetGroom_Parms
		{
			UGroomAsset* InGroom;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGroom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::NewProp_InGroom = { "InGroom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetGroom_Parms, InGroom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::NewProp_InGroom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetGroom", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::GroomBindingAsset_eventSetGroom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::GroomBindingAsset_eventSetGroom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetGroom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetGroom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics
	{
		struct GroomBindingAsset_eventSetGroomBindingType_Parms
		{
			EGroomBindingMeshType InGroomBindingType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGroomBindingType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InGroomBindingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::NewProp_InGroomBindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::NewProp_InGroomBindingType = { "InGroomBindingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetGroomBindingType_Parms, InGroomBindingType), Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, METADATA_PARAMS(0, nullptr) }; // 1811698506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::NewProp_InGroomBindingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::NewProp_InGroomBindingType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetGroomBindingType", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::GroomBindingAsset_eventSetGroomBindingType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::GroomBindingAsset_eventSetGroomBindingType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics
	{
		struct GroomBindingAsset_eventSetGroupInfos_Parms
		{
			TArray<FGoomBindingGroupInfo> InGroupInfos;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGroupInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGroupInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InGroupInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos_Inner = { "InGroupInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGoomBindingGroupInfo, METADATA_PARAMS(0, nullptr) }; // 1770071865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos = { "InGroupInfos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetGroupInfos_Parms, InGroupInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos_MetaData), Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos_MetaData) }; // 1770071865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::NewProp_InGroupInfos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetGroupInfos", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::GroomBindingAsset_eventSetGroupInfos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::GroomBindingAsset_eventSetGroupInfos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics
	{
		struct GroomBindingAsset_eventSetMatchingSection_Parms
		{
			int32 InMatchingSection;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMatchingSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::NewProp_InMatchingSection = { "InMatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetMatchingSection_Parms, InMatchingSection), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::NewProp_InMatchingSection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetMatchingSection", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::GroomBindingAsset_eventSetMatchingSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::GroomBindingAsset_eventSetMatchingSection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics
	{
		struct GroomBindingAsset_eventSetNumInterpolationPoints_Parms
		{
			int32 InNumInterpolationPoints;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInterpolationPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::NewProp_InNumInterpolationPoints = { "InNumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetNumInterpolationPoints_Parms, InNumInterpolationPoints), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::NewProp_InNumInterpolationPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetNumInterpolationPoints", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::GroomBindingAsset_eventSetNumInterpolationPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::GroomBindingAsset_eventSetNumInterpolationPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics
	{
		struct GroomBindingAsset_eventSetSourceGeometryCache_Parms
		{
			UGeometryCache* InGeometryCache;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGeometryCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::NewProp_InGeometryCache = { "InGeometryCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetSourceGeometryCache_Parms, InGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::NewProp_InGeometryCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetSourceGeometryCache", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::GroomBindingAsset_eventSetSourceGeometryCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::GroomBindingAsset_eventSetSourceGeometryCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics
	{
		struct GroomBindingAsset_eventSetSourceSkeletalMesh_Parms
		{
			USkeletalMesh* InSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetSourceSkeletalMesh_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::NewProp_InSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetSourceSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::GroomBindingAsset_eventSetSourceSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::GroomBindingAsset_eventSetSourceSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics
	{
		struct GroomBindingAsset_eventSetTargetGeometryCache_Parms
		{
			UGeometryCache* InGeometryCache;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGeometryCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::NewProp_InGeometryCache = { "InGeometryCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetTargetGeometryCache_Parms, InGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::NewProp_InGeometryCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetTargetGeometryCache", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::GroomBindingAsset_eventSetTargetGeometryCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::GroomBindingAsset_eventSetTargetGeometryCache_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics
	{
		struct GroomBindingAsset_eventSetTargetSkeletalMesh_Parms
		{
			USkeletalMesh* InSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroomBindingAsset_eventSetTargetSkeletalMesh_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::NewProp_InSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBindingAsset, nullptr, "SetTargetSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::GroomBindingAsset_eventSetTargetSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::GroomBindingAsset_eventSetTargetSkeletalMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBindingAsset);
	UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister()
	{
		return UGroomBindingAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGroomBindingAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroomBindingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomBindingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroomBindingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Groom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceGeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceGeometryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetGeometryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInterpolationPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchingSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomBindingAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroomBindingAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetGroom, "GetGroom" }, // 1731579636
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetGroomBindingType, "GetGroomBindingType" }, // 2228281321
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetGroupInfos, "GetGroupInfos" }, // 2811771364
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetMatchingSection, "GetMatchingSection" }, // 2357455316
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetNumInterpolationPoints, "GetNumInterpolationPoints" }, // 2198606168
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetSourceGeometryCache, "GetSourceGeometryCache" }, // 2028352501
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetSourceSkeletalMesh, "GetSourceSkeletalMesh" }, // 3216602324
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetTargetGeometryCache, "GetTargetGeometryCache" }, // 3289763112
		{ &Z_Construct_UFunction_UGroomBindingAsset_GetTargetSkeletalMesh, "GetTargetSkeletalMesh" }, // 3146919031
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetGroom, "SetGroom" }, // 1665065640
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetGroomBindingType, "SetGroomBindingType" }, // 1086639021
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetGroupInfos, "SetGroupInfos" }, // 1913455255
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetMatchingSection, "SetMatchingSection" }, // 2287732479
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetNumInterpolationPoints, "SetNumInterpolationPoints" }, // 1399876637
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetSourceGeometryCache, "SetSourceGeometryCache" }, // 1352512418
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetSourceSkeletalMesh, "SetSourceSkeletalMesh" }, // 3368503775
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetTargetGeometryCache, "SetTargetGeometryCache" }, // 1913095290
		{ &Z_Construct_UFunction_UGroomBindingAsset_SetTargetSkeletalMesh, "SetTargetSkeletalMesh" }, // 3727518936
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that can be used to store binding information between a groom and a skeletal mesh\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GroomBindingAsset.h" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
		{ "ToolTip", "Implements an asset that can be used to store binding information between a groom and a skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_MetaData[] = {
		{ "BlueprintGetter", "GetGroomBindingType" },
		{ "BlueprintSetter", "SetGroomBindingType" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType = { "GroomBindingType", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, GroomBindingType), Z_Construct_UEnum_HairStrandsCore_EGroomBindingMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_MetaData) }; // 1811698506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom_MetaData[] = {
		{ "BlueprintGetter", "GetGroom" },
		{ "BlueprintSetter", "SetGroom" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x0044010000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, Groom), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh_MetaData[] = {
		{ "BlueprintGetter", "GetSourceSkeletalMesh" },
		{ "BlueprintSetter", "SetSourceSkeletalMesh" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh = { "SourceSkeletalMesh", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, SourceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "BlueprintGetter", "GetTargetSkeletalMesh" },
		{ "BlueprintSetter", "SetTargetSkeletalMesh" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache_MetaData[] = {
		{ "BlueprintGetter", "GetSourceGeometryCache" },
		{ "BlueprintSetter", "SetSourceGeometryCache" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache = { "SourceGeometryCache", nullptr, (EPropertyFlags)0x0044000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, SourceGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache_MetaData[] = {
		{ "BlueprintGetter", "GetTargetGeometryCache" },
		{ "BlueprintSetter", "SetTargetGeometryCache" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache = { "TargetGeometryCache", nullptr, (EPropertyFlags)0x0044000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, TargetGeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints_MetaData[] = {
		{ "BlueprintGetter", "GetNumInterpolationPoints" },
		{ "BlueprintSetter", "SetNumInterpolationPoints" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, NumInterpolationPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection_MetaData[] = {
		{ "BlueprintGetter", "GetMatchingSection" },
		{ "BlueprintSetter", "SetMatchingSection" },
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0040000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, MatchingSection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_Inner = { "GroupInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGoomBindingGroupInfo, METADATA_PARAMS(0, nullptr) }; // 1770071865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_MetaData[] = {
		{ "BlueprintGetter", "GetGroupInfos" },
		{ "BlueprintSetter", "SetGroupInfos" },
		{ "Category", "HairGroups" },
		{ "DisplayName", "Group" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos = { "GroupInfos", nullptr, (EPropertyFlags)0x0040000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAsset, GroupInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_MetaData), Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_MetaData) }; // 1770071865
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroomBindingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_Groom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_SourceGeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_TargetGeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_NumInterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_MatchingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAsset_Statics::NewProp_GroupInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomBindingAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBindingAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBindingAsset_Statics::ClassParams = {
		&UGroomBindingAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomBindingAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGroomBindingAsset()
	{
		if (!Z_Registration_Info_UClass_UGroomBindingAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBindingAsset.OuterSingleton, Z_Construct_UClass_UGroomBindingAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomBindingAsset.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomBindingAsset>()
	{
		return UGroomBindingAsset::StaticClass();
	}
	UGroomBindingAsset::UGroomBindingAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBindingAsset);
	UGroomBindingAsset::~UGroomBindingAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGroomBindingAsset)
	void UGroomBindingAssetList::StaticRegisterNativesUGroomBindingAssetList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBindingAssetList);
	UClass* Z_Construct_UClass_UGroomBindingAssetList_NoRegister()
	{
		return UGroomBindingAssetList::StaticClass();
	}
	struct Z_Construct_UClass_UGroomBindingAssetList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomBindingAssetList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAssetList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GroomBindingAsset.h" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/GroomBindingAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0014000000002041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroomBindingAssetList, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_MetaData), Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomBindingAssetList_Statics::NewProp_Bindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomBindingAssetList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBindingAssetList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBindingAssetList_Statics::ClassParams = {
		&UGroomBindingAssetList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroomBindingAssetList_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingAssetList_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGroomBindingAssetList()
	{
		if (!Z_Registration_Info_UClass_UGroomBindingAssetList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBindingAssetList.OuterSingleton, Z_Construct_UClass_UGroomBindingAssetList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomBindingAssetList.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomBindingAssetList>()
	{
		return UGroomBindingAssetList::StaticClass();
	}
	UGroomBindingAssetList::UGroomBindingAssetList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBindingAssetList);
	UGroomBindingAssetList::~UGroomBindingAssetList() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::EnumInfo[] = {
		{ EGroomBindingMeshType_StaticEnum, TEXT("EGroomBindingMeshType"), &Z_Registration_Info_UEnum_EGroomBindingMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1811698506U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ScriptStructInfo[] = {
		{ FGoomBindingGroupInfo::StaticStruct, Z_Construct_UScriptStruct_FGoomBindingGroupInfo_Statics::NewStructOps, TEXT("GoomBindingGroupInfo"), &Z_Registration_Info_UScriptStruct_GoomBindingGroupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoomBindingGroupInfo), 1770071865U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomBindingAsset, UGroomBindingAsset::StaticClass, TEXT("UGroomBindingAsset"), &Z_Registration_Info_UClass_UGroomBindingAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBindingAsset), 1797518882U) },
		{ Z_Construct_UClass_UGroomBindingAssetList, UGroomBindingAssetList::StaticClass, TEXT("UGroomBindingAssetList"), &Z_Registration_Info_UClass_UGroomBindingAssetList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBindingAssetList), 1403908186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_2618516418(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBindingAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/CustomizableObjectClothingTypes.h"
#include "ClothLODData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectClothingTypes() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData;
class UScriptStruct* FCustomizableObjectClothConfigData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectClothConfigData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectClothConfigData>()
{
	return FCustomizableObjectClothConfigData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConfigBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfigBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectClothConfigData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothConfigData, ClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ClassPath_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ClassPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothConfigData, ConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigName_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes_Inner = { "ConfigBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes = { "ConfigBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothConfigData, ConfigBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewProp_ConfigBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectClothConfigData",
		Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::PropPointers),
		sizeof(FCustomizableObjectClothConfigData),
		alignof(FCustomizableObjectClothConfigData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData;
class UScriptStruct* FCustomizableObjectClothingAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectClothingAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectClothingAssetData>()
{
	return FCustomizableObjectClothingAssetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LodData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LodData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LodMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UsedBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedBoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UsedBoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedBoneIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferenceBoneIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfigsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PhysicsAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalAssetGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalAssetGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectClothingAssetData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData_Inner = { "LodData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothLODDataCommon, METADATA_PARAMS(0, nullptr) }; // 3427457926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData = { "LodData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, LodData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData_MetaData) }; // 3427457926
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap_Inner = { "LodMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap = { "LodMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, LodMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames_Inner = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, UsedBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices_Inner = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, UsedBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ReferenceBoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ReferenceBoneIndex = { "ReferenceBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, ReferenceBoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ReferenceBoneIndex_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ReferenceBoneIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData_Inner = { "ConfigsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData, METADATA_PARAMS(0, nullptr) }; // 1948687966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData = { "ConfigsData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, ConfigsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData_MetaData) }; // 1948687966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_PhysicsAssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_PhysicsAssetPath = { "PhysicsAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, PhysicsAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_PhysicsAssetPath_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_PhysicsAssetPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_OriginalAssetGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectClothingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_OriginalAssetGuid = { "OriginalAssetGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectClothingAssetData, OriginalAssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_OriginalAssetGuid_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_OriginalAssetGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_LodMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_UsedBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ReferenceBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_ConfigsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_PhysicsAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewProp_OriginalAssetGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectClothingAssetData",
		Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::PropPointers),
		sizeof(FCustomizableObjectClothingAssetData),
		alignof(FCustomizableObjectClothingAssetData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectClothingTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectClothingTypes_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectClothConfigData::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData_Statics::NewStructOps, TEXT("CustomizableObjectClothConfigData"), &Z_Registration_Info_UScriptStruct_CustomizableObjectClothConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectClothConfigData), 1948687966U) },
		{ FCustomizableObjectClothingAssetData::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData_Statics::NewStructOps, TEXT("CustomizableObjectClothingAssetData"), &Z_Registration_Info_UScriptStruct_CustomizableObjectClothingAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectClothingAssetData), 1026924611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectClothingTypes_h_3440382431(TEXT("/Script/CustomizableObject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectClothingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectClothingTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

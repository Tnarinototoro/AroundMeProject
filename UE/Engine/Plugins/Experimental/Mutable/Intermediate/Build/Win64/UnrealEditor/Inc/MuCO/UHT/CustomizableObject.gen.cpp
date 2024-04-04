// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableObject.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "../Public/MuCO/CustomizableObjectClothingTypes.h"
#include "../Public/MuCO/CustomizableObjectParameterTypeDefinitions.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
#include "MuCO/CustomizableObjectExtensionData.h"
#include "MuCO/CustomizableObjectIdentifier.h"
#include "MuCO/CustomizableObjectStreamedExtensionData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectBulk();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectBulk_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UMutableMaskOutCache();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UMutableMaskOutCache_NoRegister();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_EMutableParameterType();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCompilationOptions();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectExtensionData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIdPair();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFParameterOptionsTags();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMaskOutTexture();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetInfo();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetVertexData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableLODSettings();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableModelImageProperties();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableModelParameterProperties();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableModelParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefAssetUserData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefLODData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefLODInfo();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefLODRenderData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableRefSocket();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableStreamableBlock();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FParameterTags();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FParameterUIData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FProfileParameterDat();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FParameterOptionsTags;
class UScriptStruct* FFParameterOptionsTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FParameterOptionsTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FParameterOptionsTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFParameterOptionsTags, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("FParameterOptionsTags"));
	}
	return Z_Registration_Info_UScriptStruct_FParameterOptionsTags.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FFParameterOptionsTags>()
{
	return FFParameterOptionsTags::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFParameterOptionsTags>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "CustomizablePopulation" },
		{ "Comment", "/** List of tags of a Parameter Options */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "List of tags of a Parameter Options" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFParameterOptionsTags, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"FParameterOptionsTags",
		Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::PropPointers),
		sizeof(FFParameterOptionsTags),
		alignof(FFParameterOptionsTags),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFParameterOptionsTags()
	{
		if (!Z_Registration_Info_UScriptStruct_FParameterOptionsTags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FParameterOptionsTags.InnerSingleton, Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FParameterOptionsTags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterTags;
class UScriptStruct* FParameterTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterTags, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ParameterTags"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterTags.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FParameterTags>()
{
	return FParameterTags::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterTags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterOptions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterTags_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterTags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterTags>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "CustomizablePopulation" },
		{ "Comment", "/** List of tags of a parameter */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "List of tags of a parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterTags, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_ValueProp = { "ParameterOptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFParameterOptionsTags, METADATA_PARAMS(0, nullptr) }; // 3169849301
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_Key_KeyProp = { "ParameterOptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_MetaData[] = {
		{ "Category", "CustomizablePopulation" },
		{ "Comment", "/** Map of options available for a parameter can have and their tags */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Map of options available for a parameter can have and their tags" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions = { "ParameterOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterTags, ParameterOptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_MetaData), Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_MetaData) }; // 3169849301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterTags_Statics::NewProp_ParameterOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterTags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ParameterTags",
		Z_Construct_UScriptStruct_FParameterTags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterTags_Statics::PropPointers),
		sizeof(FParameterTags),
		alignof(FParameterTags),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameterTags_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterTags_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FParameterTags()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterTags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterTags.InnerSingleton, Z_Construct_UScriptStruct_FParameterTags_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterTags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectRelevancy;
	static UEnum* ECustomizableObjectRelevancy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectRelevancy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectRelevancy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ECustomizableObjectRelevancy"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectRelevancy.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectRelevancy>()
	{
		return ECustomizableObjectRelevancy_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::Enumerators[] = {
		{ "ECustomizableObjectRelevancy::All", (int64)ECustomizableObjectRelevancy::All },
		{ "ECustomizableObjectRelevancy::ClientOnly", (int64)ECustomizableObjectRelevancy::ClientOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// \n" },
		{ "All.DisplayName", "Relevant for client and server" },
		{ "All.Name", "ECustomizableObjectRelevancy::All" },
		{ "ClientOnly.Comment", "// \n// \n" },
		{ "ClientOnly.DisplayName", "Only necessary on clients" },
		{ "ClientOnly.Name", "ECustomizableObjectRelevancy::ClientOnly" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"ECustomizableObjectRelevancy",
		"ECustomizableObjectRelevancy",
		Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectRelevancy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectRelevancy.InnerSingleton, Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectRelevancy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfileParameterDat;
class UScriptStruct* FProfileParameterDat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfileParameterDat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfileParameterDat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileParameterDat, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ProfileParameterDat"));
	}
	return Z_Registration_Info_UScriptStruct_ProfileParameterDat.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FProfileParameterDat>()
{
	return FProfileParameterDat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfileParameterDat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProfileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectorParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileParameterDat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProfileName_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProfileName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters_Inner = { "BoolParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue, METADATA_PARAMS(0, nullptr) }; // 2086316864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters = { "BoolParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, BoolParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters_MetaData) }; // 2086316864
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters_Inner = { "IntParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue, METADATA_PARAMS(0, nullptr) }; // 312084094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters_MetaData[] = {
		{ "Comment", "////\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters = { "IntParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, IntParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters_MetaData) }; // 312084094
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters_Inner = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue, METADATA_PARAMS(0, nullptr) }; // 3602653721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters_MetaData[] = {
		{ "Comment", "////\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, FloatParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters_MetaData) }; // 3602653721
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters_Inner = { "TextureParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 790653561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters_MetaData[] = {
		{ "Comment", "////\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters = { "TextureParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, TextureParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters_MetaData) }; // 790653561
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue, METADATA_PARAMS(0, nullptr) }; // 324529278
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "Comment", "////\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters_MetaData) }; // 324529278
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters_Inner = { "ProjectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue, METADATA_PARAMS(0, nullptr) }; // 1256549646
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters_MetaData[] = {
		{ "Comment", "////\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters = { "ProjectorParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfileParameterDat, ProjectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters_MetaData), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters_MetaData) }; // 1256549646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileParameterDat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_BoolParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_IntParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_FloatParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_TextureParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_VectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewProp_ProjectorParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileParameterDat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ProfileParameterDat",
		Z_Construct_UScriptStruct_FProfileParameterDat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::PropPointers),
		sizeof(FProfileParameterDat),
		alignof(FProfileParameterDat),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfileParameterDat_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileParameterDat_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FProfileParameterDat()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfileParameterDat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfileParameterDat.InnerSingleton, Z_Construct_UScriptStruct_FProfileParameterDat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfileParameterDat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences;
	static UEnum* ECustomizableObjectNumBoneInfluences_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ECustomizableObjectNumBoneInfluences"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectNumBoneInfluences>()
	{
		return ECustomizableObjectNumBoneInfluences_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::Enumerators[] = {
		{ "ECustomizableObjectNumBoneInfluences::Four", (int64)ECustomizableObjectNumBoneInfluences::Four },
		{ "ECustomizableObjectNumBoneInfluences::Eight", (int64)ECustomizableObjectNumBoneInfluences::Eight },
		{ "ECustomizableObjectNumBoneInfluences::Twelve", (int64)ECustomizableObjectNumBoneInfluences::Twelve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::Enum_MetaDataParams[] = {
		{ "Eight.Comment", "// \n" },
		{ "Eight.Name", "ECustomizableObjectNumBoneInfluences::Eight" },
		{ "Four.Comment", "// The enum values can be used as the real numeric value of number of bone influences\n" },
		{ "Four.Name", "ECustomizableObjectNumBoneInfluences::Four" },
		{ "Four.ToolTip", "The enum values can be used as the real numeric value of number of bone influences" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "Twelve.Comment", "// \n//\n" },
		{ "Twelve.Name", "ECustomizableObjectNumBoneInfluences::Twelve" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"ECustomizableObjectNumBoneInfluences",
		"ECustomizableObjectNumBoneInfluences",
		Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences.InnerSingleton, Z_Construct_UEnum_CustomizableObject_ECustomizableObjectNumBoneInfluences_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompilationOptions;
class UScriptStruct* FCompilationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompilationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompilationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompilationOptions, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CompilationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CompilationOptions.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCompilationOptions>()
{
	return FCompilationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompilationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTextureCompression_MetaData[];
#endif
		static void NewProp_bTextureCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextureCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimizationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptimizationLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDiskCompilation_MetaData[];
#endif
		static void NewProp_bUseDiskCompilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDiskCompilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilationOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompilationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression_MetaData[] = {
		{ "Comment", "// Flag to know if texture compression should be enabled\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Flag to know if texture compression should be enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression_SetBit(void* Obj)
	{
		((FCompilationOptions*)Obj)->bTextureCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression = { "bTextureCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCompilationOptions), &Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression_MetaData), Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_OptimizationLevel_MetaData[] = {
		{ "Comment", "// From 0 to 3\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "From 0 to 3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_OptimizationLevel = { "OptimizationLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompilationOptions, OptimizationLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_OptimizationLevel_MetaData), Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_OptimizationLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation_MetaData[] = {
		{ "Comment", "// Use the disk to store intermediate compilation data. This slows down the object compilation\n// but it may be necessary for huge objects.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Use the disk to store intermediate compilation data. This slows down the object compilation\nbut it may be necessary for huge objects." },
	};
#endif
	void Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation_SetBit(void* Obj)
	{
		((FCompilationOptions*)Obj)->bUseDiskCompilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation = { "bUseDiskCompilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCompilationOptions), &Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation_MetaData), Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompilationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bTextureCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_OptimizationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewProp_bUseDiskCompilation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompilationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CompilationOptions",
		Z_Construct_UScriptStruct_FCompilationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilationOptions_Statics::PropPointers),
		sizeof(FCompilationOptions),
		alignof(FCompilationOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompilationOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompilationOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCompilationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_CompilationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompilationOptions.InnerSingleton, Z_Construct_UScriptStruct_FCompilationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompilationOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectCompilationState;
	static UEnum* ECustomizableObjectCompilationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectCompilationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectCompilationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ECustomizableObjectCompilationState"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectCompilationState.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectCompilationState>()
	{
		return ECustomizableObjectCompilationState_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::Enumerators[] = {
		{ "ECustomizableObjectCompilationState::None", (int64)ECustomizableObjectCompilationState::None },
		{ "ECustomizableObjectCompilationState::InProgress", (int64)ECustomizableObjectCompilationState::InProgress },
		{ "ECustomizableObjectCompilationState::Completed", (int64)ECustomizableObjectCompilationState::Completed },
		{ "ECustomizableObjectCompilationState::Failed", (int64)ECustomizableObjectCompilationState::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::Enum_MetaDataParams[] = {
		{ "Completed.Comment", "//\n// \n//\n" },
		{ "Completed.Name", "ECustomizableObjectCompilationState::Completed" },
		{ "Failed.Comment", "//\n// \n//\n//\n" },
		{ "Failed.Name", "ECustomizableObjectCompilationState::Failed" },
		{ "InProgress.Comment", "//\n// \n" },
		{ "InProgress.Name", "ECustomizableObjectCompilationState::InProgress" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "None.Comment", "//\n" },
		{ "None.Name", "ECustomizableObjectCompilationState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		"ECustomizableObjectCompilationState",
		"ECustomizableObjectCompilationState",
		Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectCompilationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectCompilationState.InnerSingleton, Z_Construct_UEnum_CustomizableObject_ECustomizableObjectCompilationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectCompilationState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableModelImageProperties;
class UScriptStruct* FMutableModelImageProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableModelImageProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableModelImageProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableModelImageProperties, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableModelImageProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MutableModelImageProperties.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableModelImageProperties>()
{
	return FMutableModelImageProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[];
#endif
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipGreenChannel_MetaData[];
#endif
		static void NewProp_FlipGreenChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableModelImageProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "Comment", "// Name in the material.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Name in the material." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelImageProperties, TextureParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_TextureParameterName_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_TextureParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_Filter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelImageProperties, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_Filter_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_Filter_MetaData) }; // 2612248343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((FMutableModelImageProperties*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMutableModelImageProperties), &Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel_SetBit(void* Obj)
	{
		((FMutableModelImageProperties*)Obj)->FlipGreenChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel = { "FlipGreenChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMutableModelImageProperties), &Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelImageProperties, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODBias_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODGroup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelImageProperties, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODGroup_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODGroup_MetaData) }; // 3826192530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelImageProperties, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressX_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressX_MetaData) }; // 2845966638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelImageProperties, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressY_MetaData), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressY_MetaData) }; // 2845966638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_TextureParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_SRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_FlipGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewProp_AddressY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableModelImageProperties",
		Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::PropPointers),
		sizeof(FMutableModelImageProperties),
		alignof(FMutableModelImageProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableModelImageProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableModelImageProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableModelImageProperties.InnerSingleton, Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableModelImageProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableModelParameterValue;
class UScriptStruct* FMutableModelParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableModelParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableModelParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableModelParameterValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableModelParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_MutableModelParameterValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableModelParameterValue>()
{
	return FMutableModelParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableModelParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelParameterValue, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelParameterValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableModelParameterValue",
		Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::PropPointers),
		sizeof(FMutableModelParameterValue),
		alignof(FMutableModelParameterValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableModelParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableModelParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableModelParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableModelParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableModelParameterProperties;
class UScriptStruct* FMutableModelParameterProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableModelParameterProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableModelParameterProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableModelParameterProperties, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableModelParameterProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MutableModelParameterProperties.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableModelParameterProperties>()
{
	return FMutableModelParameterProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PossibleValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossibleValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PossibleValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableModelParameterProperties>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelParameterProperties, Type), Z_Construct_UEnum_CustomizableObject_EMutableParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type_MetaData) }; // 2273737945
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues_Inner = { "PossibleValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableModelParameterValue, METADATA_PARAMS(0, nullptr) }; // 3171161041
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues = { "PossibleValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableModelParameterProperties, PossibleValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues_MetaData), Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues_MetaData) }; // 3171161041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewProp_PossibleValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableModelParameterProperties",
		Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::PropPointers),
		sizeof(FMutableModelParameterProperties),
		alignof(FMutableModelParameterProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableModelParameterProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableModelParameterProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableModelParameterProperties.InnerSingleton, Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableModelParameterProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaskOutTexture;
class UScriptStruct* FMaskOutTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaskOutTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaskOutTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaskOutTexture, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MaskOutTexture"));
	}
	return Z_Registration_Info_UScriptStruct_MaskOutTexture.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMaskOutTexture>()
{
	return FMaskOutTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaskOutTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskOutTexture_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Represents a texture used for masking-out areas of an object from projectors\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Represents a texture used for masking-out areas of an object from projectors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaskOutTexture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaskOutTexture, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeX_MetaData), Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaskOutTexture, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeY_MetaData), Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeY_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaskOutTexture, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaskOutTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaskOutTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MaskOutTexture",
		Z_Construct_UScriptStruct_FMaskOutTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskOutTexture_Statics::PropPointers),
		sizeof(FMaskOutTexture),
		alignof(FMaskOutTexture),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskOutTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaskOutTexture_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaskOutTexture_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMaskOutTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_MaskOutTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaskOutTexture.InnerSingleton, Z_Construct_UScriptStruct_FMaskOutTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaskOutTexture.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo;
class UScriptStruct* FAnimBpOverridePhysicsAssetsInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("AnimBpOverridePhysicsAssetsInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FAnimBpOverridePhysicsAssetsInfo>()
{
	return FAnimBpOverridePhysicsAssetsInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimInstanceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBpOverridePhysicsAssetsInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_AnimInstanceClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_AnimInstanceClass = { "AnimInstanceClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBpOverridePhysicsAssetsInfo, AnimInstanceClass), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_AnimInstanceClass_MetaData), Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_AnimInstanceClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBpOverridePhysicsAssetsInfo, SourceAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_SourceAsset_MetaData), Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_SourceAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_PropertyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_PropertyIndex = { "PropertyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBpOverridePhysicsAssetsInfo, PropertyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_PropertyIndex_MetaData), Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_PropertyIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_AnimInstanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewProp_PropertyIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"AnimBpOverridePhysicsAssetsInfo",
		Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::PropPointers),
		sizeof(FAnimBpOverridePhysicsAssetsInfo),
		alignof(FAnimBpOverridePhysicsAssetsInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo.InnerSingleton, Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MorphTargetInfo;
class UScriptStruct* FMorphTargetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MorphTargetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MorphTargetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMorphTargetInfo, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MorphTargetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MorphTargetInfo.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMorphTargetInfo>()
{
	return FMorphTargetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMorphTargetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMorphTargetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMorphTargetInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_LodNum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_LodNum = { "LodNum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMorphTargetInfo, LodNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_LodNum_MetaData), Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_LodNum_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewProp_LodNum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MorphTargetInfo",
		Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::PropPointers),
		sizeof(FMorphTargetInfo),
		alignof(FMorphTargetInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MorphTargetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MorphTargetInfo.InnerSingleton, Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MorphTargetInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MorphTargetVertexData;
class UScriptStruct* FMorphTargetVertexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MorphTargetVertexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MorphTargetVertexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMorphTargetVertexData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MorphTargetVertexData"));
	}
	return Z_Registration_Info_UScriptStruct_MorphTargetVertexData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMorphTargetVertexData>()
{
	return FMorphTargetVertexData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentZDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentZDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMorphTargetVertexData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_PositionDelta_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_PositionDelta = { "PositionDelta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMorphTargetVertexData, PositionDelta), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_PositionDelta_MetaData), Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_PositionDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_TangentZDelta_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_TangentZDelta = { "TangentZDelta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMorphTargetVertexData, TangentZDelta), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_TangentZDelta_MetaData), Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_TangentZDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_MorphIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_MorphIndex = { "MorphIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMorphTargetVertexData, MorphIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_MorphIndex_MetaData), Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_MorphIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_PositionDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_TangentZDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewProp_MorphIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MorphTargetVertexData",
		Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::PropPointers),
		sizeof(FMorphTargetVertexData),
		alignof(FMorphTargetVertexData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMorphTargetVertexData()
	{
		if (!Z_Registration_Info_UScriptStruct_MorphTargetVertexData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MorphTargetVertexData.InnerSingleton, Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MorphTargetVertexData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData;
class UScriptStruct* FCustomizableObjectMeshToMeshVertData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectMeshToMeshVertData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectMeshToMeshVertData>()
{
	return FCustomizableObjectMeshToMeshVertData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBaryCoordsAndDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionBaryCoordsAndDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBaryCoordsAndDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalBaryCoordsAndDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentBaryCoordsAndDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentBaryCoordsAndDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshVertIndices_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_SourceMeshVertIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SourceAssetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAssetLodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_SourceAssetLodIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A USTRUCT version of FMeshToMeshVertData in SkeletalMeshTypes.h\n// We are taking advantage of the padding data to store from which asset this data comes from\n// maintaining the same memory footprint than the original.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "A USTRUCT version of FMeshToMeshVertData in SkeletalMeshTypes.h\nWe are taking advantage of the padding data to store from which asset this data comes from\nmaintaining the same memory footprint than the original." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectMeshToMeshVertData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_PositionBaryCoordsAndDist_MetaData[] = {
		{ "Comment", "// Barycentric coords and distance along normal for the position of the final vert\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Barycentric coords and distance along normal for the position of the final vert" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_PositionBaryCoordsAndDist = { "PositionBaryCoordsAndDist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(PositionBaryCoordsAndDist, FCustomizableObjectMeshToMeshVertData), STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, PositionBaryCoordsAndDist), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_PositionBaryCoordsAndDist_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_PositionBaryCoordsAndDist_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_NormalBaryCoordsAndDist_MetaData[] = {
		{ "Comment", "// Barycentric coords and distance along normal for the location of the unit normal endpoint\n// Actual normal = ResolvedNormalPosition - ResolvedPosition\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Barycentric coords and distance along normal for the location of the unit normal endpoint\nActual normal = ResolvedNormalPosition - ResolvedPosition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_NormalBaryCoordsAndDist = { "NormalBaryCoordsAndDist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NormalBaryCoordsAndDist, FCustomizableObjectMeshToMeshVertData), STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, NormalBaryCoordsAndDist), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_NormalBaryCoordsAndDist_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_NormalBaryCoordsAndDist_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_TangentBaryCoordsAndDist_MetaData[] = {
		{ "Comment", "// Barycentric coords and distance along normal for the location of the unit Tangent endpoint\n// Actual normal = ResolvedNormalPosition - ResolvedPosition\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Barycentric coords and distance along normal for the location of the unit Tangent endpoint\nActual normal = ResolvedNormalPosition - ResolvedPosition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_TangentBaryCoordsAndDist = { "TangentBaryCoordsAndDist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(TangentBaryCoordsAndDist, FCustomizableObjectMeshToMeshVertData), STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, TangentBaryCoordsAndDist), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_TangentBaryCoordsAndDist_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_TangentBaryCoordsAndDist_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceMeshVertIndices_MetaData[] = {
		{ "Comment", "// Contains the 3 indices for verts in the source mesh forming a triangle, the last element\n// is a flag to decide how the skinning works, 0xffff uses no simulation, and just normal\n// skinning, anything else uses the source mesh and the above skin data to get the final position\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Contains the 3 indices for verts in the source mesh forming a triangle, the last element\nis a flag to decide how the skinning works, 0xffff uses no simulation, and just normal\nskinning, anything else uses the source mesh and the above skin data to get the final position" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceMeshVertIndices = { "SourceMeshVertIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(SourceMeshVertIndices, FCustomizableObjectMeshToMeshVertData), STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, SourceMeshVertIndices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceMeshVertIndices_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceMeshVertIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetIndex_MetaData[] = {
		{ "Comment", "// Dummy for alignment (8 bytes). Originally not used.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Dummy for alignment (8 bytes). Originally not used." },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetIndex = { "SourceAssetIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, SourceAssetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetIndex_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetLodIndex_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetLodIndex = { "SourceAssetLodIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectMeshToMeshVertData, SourceAssetLodIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetLodIndex_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetLodIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_PositionBaryCoordsAndDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_NormalBaryCoordsAndDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_TangentBaryCoordsAndDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceMeshVertIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewProp_SourceAssetLodIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectMeshToMeshVertData",
		Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::PropPointers),
		sizeof(FCustomizableObjectMeshToMeshVertData),
		alignof(FCustomizableObjectMeshToMeshVertData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo;
class UScriptStruct* FMutableSkinWeightProfileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableSkinWeightProfileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableSkinWeightProfileInfo>()
{
	return FMutableSkinWeightProfileInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfile_MetaData[];
#endif
		static void NewProp_DefaultProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfileFromLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DefaultProfileFromLODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableSkinWeightProfileInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableSkinWeightProfileInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_SetBit(void* Obj)
	{
		((FMutableSkinWeightProfileInfo*)Obj)->DefaultProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile = { "DefaultProfile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableSkinWeightProfileInfo), &Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData), Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData[] = {
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex = { "DefaultProfileFromLODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableSkinWeightProfileInfo, DefaultProfileFromLODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData), Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableSkinWeightProfileInfo",
		Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::PropPointers),
		sizeof(FMutableSkinWeightProfileInfo),
		alignof(FMutableSkinWeightProfileInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo.InnerSingleton, Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo.InnerSingleton;
	}
	void UMutableMaskOutCache::StaticRegisterNativesUMutableMaskOutCache()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMutableMaskOutCache);
	UClass* Z_Construct_UClass_UMutableMaskOutCache_NoRegister()
	{
		return UMutableMaskOutCache::StaticClass();
	}
	struct Z_Construct_UClass_UMutableMaskOutCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Materials_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Materials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMutableMaskOutCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableMaskOutCache_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableMaskOutCache_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCO/CustomizableObject.h" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMutableMaskOutCache, Materials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_MetaData), Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMaskOutTexture, METADATA_PARAMS(0, nullptr) }; // 3783284758
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_MetaData[] = {
		{ "Comment", "// Maps a UMaterial's asset path to a UTexture's asset path\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Maps a UMaterial's asset path to a UTexture's asset path" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMutableMaskOutCache, Textures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_MetaData), Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_MetaData) }; // 3783284758
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMutableMaskOutCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableMaskOutCache_Statics::NewProp_Textures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMutableMaskOutCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMutableMaskOutCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMutableMaskOutCache_Statics::ClassParams = {
		&UMutableMaskOutCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMutableMaskOutCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMutableMaskOutCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableMaskOutCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UMutableMaskOutCache_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMutableMaskOutCache_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMutableMaskOutCache()
	{
		if (!Z_Registration_Info_UClass_UMutableMaskOutCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMutableMaskOutCache.OuterSingleton, Z_Construct_UClass_UMutableMaskOutCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMutableMaskOutCache.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UMutableMaskOutCache>()
	{
		return UMutableMaskOutCache::StaticClass();
	}
	UMutableMaskOutCache::UMutableMaskOutCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMutableMaskOutCache);
	UMutableMaskOutCache::~UMutableMaskOutCache() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableStreamableBlock;
class UScriptStruct* FMutableStreamableBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableStreamableBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableStreamableBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableStreamableBlock, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableStreamableBlock"));
	}
	return Z_Registration_Info_UScriptStruct_MutableStreamableBlock.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableStreamableBlock>()
{
	return FMutableStreamableBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_FileIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableStreamableBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_FileIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_FileIndex = { "FileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableStreamableBlock, FileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_FileIndex_MetaData), Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_FileIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableStreamableBlock, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableStreamableBlock, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Size_MetaData), Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_FileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableStreamableBlock",
		Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::PropPointers),
		sizeof(FMutableStreamableBlock),
		alignof(FMutableStreamableBlock),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableStreamableBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableStreamableBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableStreamableBlock.InnerSingleton, Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableStreamableBlock.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefLODInfo;
class UScriptStruct* FMutableRefLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefLODInfo, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefLODInfo.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefLODInfo>()
{
	return FMutableRefLODInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[];
#endif
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefLODInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefLODInfo, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_ScreenSize_MetaData), Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_ScreenSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_LODHysteresis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_LODHysteresis = { "LODHysteresis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefLODInfo, LODHysteresis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_LODHysteresis_MetaData), Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_LODHysteresis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((FMutableRefLODInfo*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableRefLODInfo), &Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData), Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((FMutableRefLODInfo*)Obj)->bAllowCPUAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableRefLODInfo), &Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess_MetaData), Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_LODHysteresis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewProp_bAllowCPUAccess,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefLODInfo",
		Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::PropPointers),
		sizeof(FMutableRefLODInfo),
		alignof(FMutableRefLODInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefLODInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefLODInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefLODInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefLODRenderData;
class UScriptStruct* FMutableRefLODRenderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefLODRenderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefLODRenderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefLODRenderData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefLODRenderData"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefLODRenderData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefLODRenderData>()
{
	return FMutableRefLODRenderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLODOptional_MetaData[];
#endif
		static void NewProp_bIsLODOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLODOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreamedDataInlined_MetaData[];
#endif
		static void NewProp_bStreamedDataInlined_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamedDataInlined;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefLODRenderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional_SetBit(void* Obj)
	{
		((FMutableRefLODRenderData*)Obj)->bIsLODOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional = { "bIsLODOptional", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableRefLODRenderData), &Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional_MetaData), Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined_SetBit(void* Obj)
	{
		((FMutableRefLODRenderData*)Obj)->bStreamedDataInlined = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined = { "bStreamedDataInlined", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableRefLODRenderData), &Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined_MetaData), Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bIsLODOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewProp_bStreamedDataInlined,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefLODRenderData",
		Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::PropPointers),
		sizeof(FMutableRefLODRenderData),
		alignof(FMutableRefLODRenderData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefLODRenderData()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefLODRenderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefLODRenderData.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefLODRenderData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefLODData;
class UScriptStruct* FMutableRefLODData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefLODData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefLODData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefLODData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefLODData"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefLODData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefLODData>()
{
	return FMutableRefLODData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefLODData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefLODData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_LODInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefLODData, LODInfo), Z_Construct_UScriptStruct_FMutableRefLODInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_LODInfo_MetaData), Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_LODInfo_MetaData) }; // 1789657125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_RenderData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_RenderData = { "RenderData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefLODData, RenderData), Z_Construct_UScriptStruct_FMutableRefLODRenderData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_RenderData_MetaData), Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_RenderData_MetaData) }; // 1457834192
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefLODData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_LODInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewProp_RenderData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefLODData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefLODData",
		Z_Construct_UScriptStruct_FMutableRefLODData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODData_Statics::PropPointers),
		sizeof(FMutableRefLODData),
		alignof(FMutableRefLODData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefLODData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefLODData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefLODData()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefLODData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefLODData.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefLODData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefLODData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefSocket;
class UScriptStruct* FMutableRefSocket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefSocket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefSocket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefSocket, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefSocket"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefSocket.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefSocket>()
{
	return FMutableRefSocket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceAlwaysAnimated_MetaData[];
#endif
		static void NewProp_bForceAlwaysAnimated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAlwaysAnimated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefSocket>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSocket, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_SocketName_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_SocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSocket, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeLocation_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeRotation_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeScale_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit(void* Obj)
	{
		((FMutableRefSocket*)Obj)->bForceAlwaysAnimated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated = { "bForceAlwaysAnimated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableRefSocket), &Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "// When two sockets have the same name, the one with higher priority will be picked and the other discarded\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "When two sockets have the same name, the one with higher priority will be picked and the other discarded" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSocket, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_Priority_MetaData), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_Priority_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_RelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_bForceAlwaysAnimated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefSocket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefSocket",
		Z_Construct_UScriptStruct_FMutableRefSocket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::PropPointers),
		sizeof(FMutableRefSocket),
		alignof(FMutableRefSocket),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefSocket_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSocket_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefSocket()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefSocket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefSocket.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefSocket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefSocket.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings;
class UScriptStruct* FMutableRefSkeletalMeshSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefSkeletalMeshSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefSkeletalMeshSettings>()
{
	return FMutableRefSkeletalMeshSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerPolyCollision_MetaData[];
#endif
		static void NewProp_bEnablePerPolyCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerPolyCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUVChannelDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultUVChannelDensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefSkeletalMeshSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision_SetBit(void* Obj)
	{
		((FMutableRefSkeletalMeshSettings*)Obj)->bEnablePerPolyCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision = { "bEnablePerPolyCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableRefSkeletalMeshSettings), &Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_DefaultUVChannelDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_DefaultUVChannelDensity = { "DefaultUVChannelDensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshSettings, DefaultUVChannelDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_DefaultUVChannelDensity_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_DefaultUVChannelDensity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_bEnablePerPolyCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewProp_DefaultUVChannelDensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefSkeletalMeshSettings",
		Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::PropPointers),
		sizeof(FMutableRefSkeletalMeshSettings),
		alignof(FMutableRefSkeletalMeshSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefAssetUserData;
class UScriptStruct* FMutableRefAssetUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefAssetUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefAssetUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefAssetUserData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefAssetUserData"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefAssetUserData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefAssetUserData>()
{
	return FMutableRefAssetUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefAssetUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefAssetUserData, AssetUserData), Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewProp_AssetUserData_MetaData), Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewProp_AssetUserData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewProp_AssetUserData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefAssetUserData",
		Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::PropPointers),
		sizeof(FMutableRefAssetUserData),
		alignof(FMutableRefAssetUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefAssetUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefAssetUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefAssetUserData.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefAssetUserData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData;
class UScriptStruct* FMutableRefSkeletalMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableRefSkeletalMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableRefSkeletalMeshData>()
{
	return FMutableRefSkeletalMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshAssetPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimInst_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PostProcessAnimInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShadowPhysicsAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableRefSkeletalMeshData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Comment", "// Reference Skeletal Mesh\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Reference Skeletal Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMeshAssetPath_MetaData[] = {
		{ "Comment", "// Path to load the ReferenceSkeletalMesh\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Path to load the ReferenceSkeletalMesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMeshAssetPath = { "SkeletalMeshAssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, SkeletalMeshAssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMeshAssetPath_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMeshAssetPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData_Inner = { "LODData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableRefLODData, METADATA_PARAMS(0, nullptr) }; // 3251141503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData_MetaData[] = {
		{ "Comment", "// LOD info\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "LOD info" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData = { "LODData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, LODData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData_MetaData) }; // 3251141503
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableRefSocket, METADATA_PARAMS(0, nullptr) }; // 4159778651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets_MetaData[] = {
		{ "Comment", "// Sockets\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Sockets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets_MetaData) }; // 4159778651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "// Bounding Box\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Bounding Box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Bounds_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Bounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "// Settings\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, Settings), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Settings_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Settings_MetaData) }; // 3421480411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Comment", "// Skeleton, must be stored in the ReferencedSkeletons too\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Skeleton, must be stored in the ReferencedSkeletons too" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Skeleton_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Comment", "// PhysicsAsset, must be stored in the PhysicsAssetMap too\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "PhysicsAsset, must be stored in the PhysicsAssetMap too" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PhysicsAsset_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PhysicsAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PostProcessAnimInst_MetaData[] = {
		{ "Comment", "// Post Processing AnimBP, must be stored in the AnimBPAssetsMap too\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Post Processing AnimBP, must be stored in the AnimBPAssetsMap too" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PostProcessAnimInst = { "PostProcessAnimInst", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, PostProcessAnimInst), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PostProcessAnimInst_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PostProcessAnimInst_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "Comment", "// Shadow PhysicsAsset, must be stored in the PhysicsAssetMap too\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Shadow PhysicsAsset, must be stored in the PhysicsAssetMap too" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_ShadowPhysicsAsset_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_ShadowPhysicsAsset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableRefAssetUserData, METADATA_PARAMS(0, nullptr) }; // 2777551657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Comment", "// Asset user data\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Asset user data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableRefSkeletalMeshData, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData_MetaData), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData_MetaData) }; // 2777551657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_SkeletalMeshAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_LODData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Sockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_PostProcessAnimInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_ShadowPhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewProp_AssetUserData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableRefSkeletalMeshData",
		Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::PropPointers),
		sizeof(FMutableRefSkeletalMeshData),
		alignof(FMutableRefSkeletalMeshData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData.InnerSingleton, Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableLODSettings;
class UScriptStruct* FMutableLODSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableLODSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableLODSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableLODSettings, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableLODSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MutableLODSettings.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableLODSettings>()
{
	return FMutableLODSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableLODSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityLevelLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinQualityLevelLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODStreamingSettings_MetaData[];
#endif
		static void NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODStreamingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLODStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bEnableLODStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMaxStreamedLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumMaxStreamedLODs;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODsInRoot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODsInRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLODAvailable_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstLODAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLODStreamingEnabled_MetaData[];
#endif
		static void NewProp_bLODStreamingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLODStreamingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODsToStream_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumLODsToStream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableLODSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinLOD_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Minimum LOD to render per Platform. */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Minimum LOD to render per Platform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, MinLOD), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinLOD_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinLOD_MetaData) }; // 3274094615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinQualityLevelLOD_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Minimum LOD to render per Quality level.*/" },
		{ "DisplayName", "Quality Level Minimum LOD" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Minimum LOD to render per Quality level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinQualityLevelLOD = { "MinQualityLevelLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, MinQualityLevelLOD), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinQualityLevelLOD_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinQualityLevelLOD_MetaData) }; // 1413620443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Override the LOD Streaming settings from the reference skeletal meshes.*/" },
		{ "DisplayName", "Override LOD Streaming Settings" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Override the LOD Streaming settings from the reference skeletal meshes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj)
	{
		((FMutableLODSettings*)Obj)->bOverrideLODStreamingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings = { "bOverrideLODStreamingSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableLODSettings), &Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bEnableLODStreaming_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Enabled: streaming LODs will trigger automatic updates to generate and discard LODs. Streaming may decrease the amount of memory used, but will stress the CPU and Streaming of resources.\n\x09  *\x09Keep in mind that, even though updates may be faster depending on the amount of LODs to generate, there may be more updates to process.\n\x09  * \n\x09  * Disabled: all LODs will be generated at once. It may increase the amount of memory used by the meshes and the generation may take longer, but less updates will be required. */" },
		{ "DisplayName", "Enable LOD Streaming" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Enabled: streaming LODs will trigger automatic updates to generate and discard LODs. Streaming may decrease the amount of memory used, but will stress the CPU and Streaming of resources.\n   Keep in mind that, even though updates may be faster depending on the amount of LODs to generate, there may be more updates to process.\n\nDisabled: all LODs will be generated at once. It may increase the amount of memory used by the meshes and the generation may take longer, but less updates will be required." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bEnableLODStreaming = { "bEnableLODStreaming", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, bEnableLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bEnableLODStreaming_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bEnableLODStreaming_MetaData) }; // 3834211121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumMaxStreamedLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Limit the number of LODs to stream. A value of 0 is the same as disabling streaming of LODs.*/" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Limit the number of LODs to stream. A value of 0 is the same as disabling streaming of LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumMaxStreamedLODs = { "NumMaxStreamedLODs", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, NumMaxStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumMaxStreamedLODs_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumMaxStreamedLODs_MetaData) }; // 3274094615
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsInRoot_MetaData[] = {
		{ "Comment", "/** Number of LODs that the object root has, which can be higher than the reference mesh LOD count. It's set at the end of the compilation process */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Number of LODs that the object root has, which can be higher than the reference mesh LOD count. It's set at the end of the compilation process" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsInRoot = { "NumLODsInRoot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, NumLODsInRoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsInRoot_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsInRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_FirstLODAvailable_MetaData[] = {
		{ "Comment", "/** Frist LOD available, some platforms may remove lower LODs when cooking, this MinLOD represents the first LOD we can generate */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Frist LOD available, some platforms may remove lower LODs when cooking, this MinLOD represents the first LOD we can generate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_FirstLODAvailable = { "FirstLODAvailable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, FirstLODAvailable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_FirstLODAvailable_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_FirstLODAvailable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled_MetaData[] = {
		{ "Comment", "/** Whether we should stream LODs for on the running platform */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Whether we should stream LODs for on the running platform" },
	};
#endif
	void Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled_SetBit(void* Obj)
	{
		((FMutableLODSettings*)Obj)->bLODStreamingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled = { "bLODStreamingEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutableLODSettings), &Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsToStream_MetaData[] = {
		{ "Comment", "/** If bEnableLODStreaming is true, maximum number of LODs to stream */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "If bEnableLODStreaming is true, maximum number of LODs to stream" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsToStream = { "NumLODsToStream", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutableLODSettings, NumLODsToStream), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsToStream_MetaData), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsToStream_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableLODSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_MinQualityLevelLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bOverrideLODStreamingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bEnableLODStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumMaxStreamedLODs,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsInRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_FirstLODAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_bLODStreamingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewProp_NumLODsToStream,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableLODSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableLODSettings",
		Z_Construct_UScriptStruct_FMutableLODSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::PropPointers),
		sizeof(FMutableLODSettings),
		alignof(FMutableLODSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutableLODSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableLODSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMutableLODSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableLODSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableLODSettings.InnerSingleton, Z_Construct_UScriptStruct_FMutableLODSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableLODSettings.InnerSingleton;
	}
	void UCustomizableObjectBulk::StaticRegisterNativesUCustomizableObjectBulk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectBulk);
	UClass* Z_Construct_UClass_UCustomizableObjectBulk_NoRegister()
	{
		return UCustomizableObjectBulk::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectBulk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BulkDataFileNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulkDataFileNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BulkDataFileNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectBulk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectBulk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectBulk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCO/CustomizableObject.h" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames_Inner = { "BulkDataFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames_MetaData[] = {
		{ "Comment", "/** BulkData file paths */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "BulkData file paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames = { "BulkDataFileNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectBulk, BulkDataFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames_MetaData), Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectBulk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectBulk_Statics::NewProp_BulkDataFileNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectBulk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectBulk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectBulk_Statics::ClassParams = {
		&UCustomizableObjectBulk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectBulk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectBulk_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectBulk_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectBulk_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectBulk_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectBulk()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectBulk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectBulk.OuterSingleton, Z_Construct_UClass_UCustomizableObjectBulk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectBulk.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableObjectBulk>()
	{
		return UCustomizableObjectBulk::StaticClass();
	}
	UCustomizableObjectBulk::UCustomizableObjectBulk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectBulk);
	UCustomizableObjectBulk::~UCustomizableObjectBulk() {}
	DEFINE_FUNCTION(UCustomizableObject::execIsCompiled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompiled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execCreateInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomizableObjectInstance**)Z_Param__Result=P_THIS->CreateInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterUIMetadataFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParamIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FParameterUIData*)Z_Param__Result=P_THIS->GetParameterUIMetadataFromIndex(Z_Param_ParamIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterUIMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FParameterUIData*)Z_Param__Result=P_THIS->GetParameterUIMetadata(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetStateUIMetadataFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FParameterUIData*)Z_Param__Result=P_THIS->GetStateUIMetadataFromIndex(Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetStateUIMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FParameterUIData*)Z_Param__Result=P_THIS->GetStateUIMetadata(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetStateParameterName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ParameterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStateParameterName(Z_Param_StateName,Z_Param_ParameterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetStateParameterCount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStateParameterCount(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetStateName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStateName(Z_Param_StateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetStateCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStateCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execIsParameterMultidimensional)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParameterMultidimensional(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetProjectorParameterDefaultValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InParameterName);
		P_GET_STRUCT_REF(FVector3f,Z_Param_Out_OutPos);
		P_GET_STRUCT_REF(FVector3f,Z_Param_Out_OutDirection);
		P_GET_STRUCT_REF(FVector3f,Z_Param_Out_OutUp);
		P_GET_STRUCT_REF(FVector3f,Z_Param_Out_OutScale);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngle);
		P_GET_ENUM_REF(ECustomizableObjectProjectorType,Z_Param_Out_OutType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProjectorParameterDefaultValue(Z_Param_InParameterName,Z_Param_Out_OutPos,Z_Param_Out_OutDirection,Z_Param_Out_OutUp,Z_Param_Out_OutScale,Z_Param_Out_OutAngle,(ECustomizableObjectProjectorType&)(Z_Param_Out_OutType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetColorParameterDefaultValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorParameterDefaultValue(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetBoolParameterDefaultValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolParameterDefaultValue(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetIntParameterDefaultValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntParameterDefaultValue(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetFloatParameterDefaultValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatParameterDefaultValue(Z_Param_InParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execUnloadReferenceSkeletalMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadReferenceSkeletalMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execLoadReferenceSkeletalMeshesAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadReferenceSkeletalMeshesAsync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execUnloadMaskOutCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadMaskOutCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execLoadMaskOutCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMaskOutCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetIntParameterAvailableOption)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParamIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_K);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIntParameterAvailableOption(Z_Param_ParamIndex,Z_Param_K);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetIntParameterNumOptions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParamIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntParameterNumOptions(Z_Param_ParamIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterDescriptionCount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParameterDescriptionCount(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParamIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetParameterName(Z_Param_ParamIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterTypeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMutableParameterType*)Z_Param__Result=P_THIS->GetParameterTypeByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ParamIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMutableParameterType*)Z_Param__Result=P_THIS->GetParameterType(Z_Param_ParamIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execFindParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindParameter(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetParameterCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParameterCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObject::execGetComponentCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetComponentCount();
		P_NATIVE_END;
	}
	void UCustomizableObject::StaticRegisterNativesUCustomizableObject()
	{
		UClass* Class = UCustomizableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInstance", &UCustomizableObject::execCreateInstance },
			{ "FindParameter", &UCustomizableObject::execFindParameter },
			{ "GetBoolParameterDefaultValue", &UCustomizableObject::execGetBoolParameterDefaultValue },
			{ "GetColorParameterDefaultValue", &UCustomizableObject::execGetColorParameterDefaultValue },
			{ "GetComponentCount", &UCustomizableObject::execGetComponentCount },
			{ "GetFloatParameterDefaultValue", &UCustomizableObject::execGetFloatParameterDefaultValue },
			{ "GetIntParameterAvailableOption", &UCustomizableObject::execGetIntParameterAvailableOption },
			{ "GetIntParameterDefaultValue", &UCustomizableObject::execGetIntParameterDefaultValue },
			{ "GetIntParameterNumOptions", &UCustomizableObject::execGetIntParameterNumOptions },
			{ "GetParameterCount", &UCustomizableObject::execGetParameterCount },
			{ "GetParameterDescriptionCount", &UCustomizableObject::execGetParameterDescriptionCount },
			{ "GetParameterName", &UCustomizableObject::execGetParameterName },
			{ "GetParameterType", &UCustomizableObject::execGetParameterType },
			{ "GetParameterTypeByName", &UCustomizableObject::execGetParameterTypeByName },
			{ "GetParameterUIMetadata", &UCustomizableObject::execGetParameterUIMetadata },
			{ "GetParameterUIMetadataFromIndex", &UCustomizableObject::execGetParameterUIMetadataFromIndex },
			{ "GetProjectorParameterDefaultValue", &UCustomizableObject::execGetProjectorParameterDefaultValue },
			{ "GetStateCount", &UCustomizableObject::execGetStateCount },
			{ "GetStateName", &UCustomizableObject::execGetStateName },
			{ "GetStateParameterCount", &UCustomizableObject::execGetStateParameterCount },
			{ "GetStateParameterName", &UCustomizableObject::execGetStateParameterName },
			{ "GetStateUIMetadata", &UCustomizableObject::execGetStateUIMetadata },
			{ "GetStateUIMetadataFromIndex", &UCustomizableObject::execGetStateUIMetadataFromIndex },
			{ "IsCompiled", &UCustomizableObject::execIsCompiled },
			{ "IsParameterMultidimensional", &UCustomizableObject::execIsParameterMultidimensional },
			{ "LoadMaskOutCache", &UCustomizableObject::execLoadMaskOutCache },
			{ "LoadReferenceSkeletalMeshesAsync", &UCustomizableObject::execLoadReferenceSkeletalMeshesAsync },
			{ "UnloadMaskOutCache", &UCustomizableObject::execUnloadMaskOutCache },
			{ "UnloadReferenceSkeletalMeshes", &UCustomizableObject::execUnloadReferenceSkeletalMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics
	{
		struct CustomizableObject_eventCreateInstance_Parms
		{
			UCustomizableObjectInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventCreateInstance_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "CreateInstance", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::CustomizableObject_eventCreateInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::CustomizableObject_eventCreateInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_CreateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_CreateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics
	{
		struct CustomizableObject_eventFindParameter_Parms
		{
			FString Name;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventFindParameter_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventFindParameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Get the index of a parameter\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the index of a parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "FindParameter", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::CustomizableObject_eventFindParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::CustomizableObject_eventFindParameter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_FindParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_FindParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics
	{
		struct CustomizableObject_eventGetBoolParameterDefaultValue_Parms
		{
			FString InParameterName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_InParameterName_MetaData[] = {
		{ "DisplayName", "Parameter Name" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetBoolParameterDefaultValue_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_InParameterName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_InParameterName_MetaData) };
	void Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObject_eventGetBoolParameterDefaultValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomizableObject_eventGetBoolParameterDefaultValue_Parms), &Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Get the default value of a parameter of type Bool.\n\x09 * @param InParameterName The name of the Bool parameter to get the default value of.\n\x09 * @return The default value of the provided parameter name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the default value of a parameter of type Bool.\n@param InParameterName The name of the Bool parameter to get the default value of.\n@return The default value of the provided parameter name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetBoolParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::CustomizableObject_eventGetBoolParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::CustomizableObject_eventGetBoolParameterDefaultValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics
	{
		struct CustomizableObject_eventGetColorParameterDefaultValue_Parms
		{
			FString InParameterName;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_InParameterName_MetaData[] = {
		{ "DisplayName", "Parameter Name" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetColorParameterDefaultValue_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_InParameterName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_InParameterName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetColorParameterDefaultValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Get the default value of a parameter of type Color.\n\x09 * @param InParameterName The name of the Color parameter to get the default value of.\n\x09 * @return The default value of the provided parameter name.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the default value of a parameter of type Color.\n@param InParameterName The name of the Color parameter to get the default value of.\n@return The default value of the provided parameter name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetColorParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::CustomizableObject_eventGetColorParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::CustomizableObject_eventGetColorParameterDefaultValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics
	{
		struct CustomizableObject_eventGetComponentCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetComponentCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Method to query the amount of components this Customizable Object has.\n\x09 * @warning It must be invoked from a COInstance to ensure that the CO has been compiled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Method to query the amount of components this Customizable Object has.\n@warning It must be invoked from a COInstance to ensure that the CO has been compiled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetComponentCount", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::CustomizableObject_eventGetComponentCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::CustomizableObject_eventGetComponentCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetComponentCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetComponentCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics
	{
		struct CustomizableObject_eventGetFloatParameterDefaultValue_Parms
		{
			FString InParameterName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_InParameterName_MetaData[] = {
		{ "DisplayName", "Parameter Name" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetFloatParameterDefaultValue_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_InParameterName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_InParameterName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetFloatParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Get the default value of a parameter of type Float.\n\x09 * @param InParameterName The name of the Float parameter to get the default value of.\n\x09 * @return The default value of the provided parameter name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the default value of a parameter of type Float.\n@param InParameterName The name of the Float parameter to get the default value of.\n@return The default value of the provided parameter name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetFloatParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::CustomizableObject_eventGetFloatParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::CustomizableObject_eventGetFloatParameterDefaultValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics
	{
		struct CustomizableObject_eventGetIntParameterAvailableOption_Parms
		{
			int32 ParamIndex;
			int32 K;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParamIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_K;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ParamIndex = { "ParamIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterAvailableOption_Parms, ParamIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterAvailableOption_Parms, K), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterAvailableOption_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ParamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_K,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Gets the Name of the option at position K in the list of available options for the int parameter.\n// Useful to enumerate the int parameter's possible options (Ex: \"Hat1\", \"Hat2\", \"Cap\", \"Nothing\")\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Gets the Name of the option at position K in the list of available options for the int parameter.\nUseful to enumerate the int parameter's possible options (Ex: \"Hat1\", \"Hat2\", \"Cap\", \"Nothing\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetIntParameterAvailableOption", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::CustomizableObject_eventGetIntParameterAvailableOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::CustomizableObject_eventGetIntParameterAvailableOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics
	{
		struct CustomizableObject_eventGetIntParameterDefaultValue_Parms
		{
			FString InParameterName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParameterName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_InParameterName_MetaData[] = {
		{ "DisplayName", "Parameter Name" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterDefaultValue_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_InParameterName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_InParameterName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterDefaultValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Get the default value of a parameter of type Int. \n\x09 * @param InParameterName The name of the Int parameter to get the default value of.\n\x09 * @return The default value of the provided parameter name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the default value of a parameter of type Int.\n@param InParameterName The name of the Int parameter to get the default value of.\n@return The default value of the provided parameter name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetIntParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::CustomizableObject_eventGetIntParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::CustomizableObject_eventGetIntParameterDefaultValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics
	{
		struct CustomizableObject_eventGetIntParameterNumOptions_Parms
		{
			int32 ParamIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParamIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::NewProp_ParamIndex = { "ParamIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterNumOptions_Parms, ParamIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetIntParameterNumOptions_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::NewProp_ParamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Returns how many possible options an int parameter has\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Returns how many possible options an int parameter has" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetIntParameterNumOptions", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::CustomizableObject_eventGetIntParameterNumOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::CustomizableObject_eventGetIntParameterNumOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics
	{
		struct CustomizableObject_eventGetParameterCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Get the number of parameters available in any instance.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the number of parameters available in any instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterCount", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::CustomizableObject_eventGetParameterCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::CustomizableObject_eventGetParameterCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics
	{
		struct CustomizableObject_eventGetParameterDescriptionCount_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterDescriptionCount_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ParamName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterDescriptionCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Get the number of description images available for a parameter\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Parameter decorations have been removed. This method will be removed in future versions." },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the number of description images available for a parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterDescriptionCount", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::CustomizableObject_eventGetParameterDescriptionCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::CustomizableObject_eventGetParameterDescriptionCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics
	{
		struct CustomizableObject_eventGetParameterName_Parms
		{
			int32 ParamIndex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ParamIndex = { "ParamIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterName_Parms, ParamIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ParamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Get the name of a parameter\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the name of a parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterName", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::CustomizableObject_eventGetParameterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::CustomizableObject_eventGetParameterName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics
	{
		struct CustomizableObject_eventGetParameterType_Parms
		{
			int32 ParamIndex;
			EMutableParameterType ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParamIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::NewProp_ParamIndex = { "ParamIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterType_Parms, ParamIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterType_Parms, ReturnValue), Z_Construct_UEnum_CustomizableObject_EMutableParameterType, METADATA_PARAMS(0, nullptr) }; // 2273737945
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::NewProp_ParamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Get the type of a parameter\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the type of a parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterType", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::CustomizableObject_eventGetParameterType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::CustomizableObject_eventGetParameterType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics
	{
		struct CustomizableObject_eventGetParameterTypeByName_Parms
		{
			FString Name;
			EMutableParameterType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterTypeByName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterTypeByName_Parms, ReturnValue), Z_Construct_UEnum_CustomizableObject_EMutableParameterType, METADATA_PARAMS(0, nullptr) }; // 2273737945
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterTypeByName", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::CustomizableObject_eventGetParameterTypeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::CustomizableObject_eventGetParameterTypeByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics
	{
		struct CustomizableObject_eventGetParameterUIMetadata_Parms
		{
			FString ParamName;
			FParameterUIData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterUIMetadata_Parms, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ParamName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ParamName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterUIMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FParameterUIData, METADATA_PARAMS(0, nullptr) }; // 863874789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterUIMetadata", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::CustomizableObject_eventGetParameterUIMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::CustomizableObject_eventGetParameterUIMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics
	{
		struct CustomizableObject_eventGetParameterUIMetadataFromIndex_Parms
		{
			int32 ParamIndex;
			FParameterUIData ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParamIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::NewProp_ParamIndex = { "ParamIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterUIMetadataFromIndex_Parms, ParamIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetParameterUIMetadataFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FParameterUIData, METADATA_PARAMS(0, nullptr) }; // 863874789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::NewProp_ParamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetParameterUIMetadataFromIndex", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::CustomizableObject_eventGetParameterUIMetadataFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::CustomizableObject_eventGetParameterUIMetadataFromIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics
	{
		struct CustomizableObject_eventGetProjectorParameterDefaultValue_Parms
		{
			FString InParameterName;
			FVector3f OutPos;
			FVector3f OutDirection;
			FVector3f OutUp;
			FVector3f OutScale;
			float OutAngle;
			ECustomizableObjectProjectorType OutType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_InParameterName_MetaData[] = {
		{ "DisplayName", "Parameter Name" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_InParameterName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_InParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutPos_MetaData[] = {
		{ "DisplayName", "Possition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutPos = { "OutPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, OutPos), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutPos_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutDirection_MetaData[] = {
		{ "DisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, OutDirection), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutDirection_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutUp_MetaData[] = {
		{ "DisplayName", "Up" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutUp = { "OutUp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, OutUp), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutUp_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutScale_MetaData[] = {
		{ "DisplayName", "Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutScale = { "OutScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, OutScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutScale_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutAngle_MetaData[] = {
		{ "DisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, OutAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutAngle_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutAngle_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType_MetaData[] = {
		{ "DisplayName", "Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType = { "OutType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetProjectorParameterDefaultValue_Parms, OutType), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType_MetaData), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType_MetaData) }; // 2669366200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::NewProp_OutType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Get the default value of a parameter of type Projector.\n\x09 * @param InParameterName The name of the Projector parameter to get the default value of.\n\x09 * @param OutPos The default position of the Projector.\n\x09 * @param OutDirection The default projection direction of the Projector.\n\x09 * @param OutUp The default up vector of the Projector.\n\x09 * @param OutScale The default scale of the Projector.\n\x09 * @param OutAngle The default angle of the Projector.\n\x09 * @param OutType The default type of the Projector.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Get the default value of a parameter of type Projector.\n@param InParameterName The name of the Projector parameter to get the default value of.\n@param OutPos The default position of the Projector.\n@param OutDirection The default projection direction of the Projector.\n@param OutUp The default up vector of the Projector.\n@param OutScale The default scale of the Projector.\n@param OutAngle The default angle of the Projector.\n@param OutType The default type of the Projector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetProjectorParameterDefaultValue", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::CustomizableObject_eventGetProjectorParameterDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::CustomizableObject_eventGetProjectorParameterDefaultValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics
	{
		struct CustomizableObject_eventGetStateCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetStateCount", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::CustomizableObject_eventGetStateCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::CustomizableObject_eventGetStateCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetStateCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetStateCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics
	{
		struct CustomizableObject_eventGetStateName_Parms
		{
			int32 StateIndex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateName_Parms, StateIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetStateName", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::CustomizableObject_eventGetStateName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::CustomizableObject_eventGetStateName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetStateName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetStateName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics
	{
		struct CustomizableObject_eventGetStateParameterCount_Parms
		{
			FString StateName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateParameterCount_Parms, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_StateName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_StateName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateParameterCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetStateParameterCount", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::CustomizableObject_eventGetStateParameterCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::CustomizableObject_eventGetStateParameterCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics
	{
		struct CustomizableObject_eventGetStateParameterName_Parms
		{
			FString StateName;
			int32 ParameterIndex;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateParameterName_Parms, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_StateName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_StateName_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_ParameterIndex = { "ParameterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateParameterName_Parms, ParameterIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateParameterName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_ParameterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetStateParameterName", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::CustomizableObject_eventGetStateParameterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::CustomizableObject_eventGetStateParameterName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetStateParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetStateParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics
	{
		struct CustomizableObject_eventGetStateUIMetadata_Parms
		{
			FString StateName;
			FParameterUIData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateUIMetadata_Parms, StateName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_StateName_MetaData), Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_StateName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateUIMetadata_Parms, ReturnValue), Z_Construct_UScriptStruct_FParameterUIData, METADATA_PARAMS(0, nullptr) }; // 863874789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetStateUIMetadata", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::CustomizableObject_eventGetStateUIMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::CustomizableObject_eventGetStateUIMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics
	{
		struct CustomizableObject_eventGetStateUIMetadataFromIndex_Parms
		{
			int32 StateIndex;
			FParameterUIData ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateUIMetadataFromIndex_Parms, StateIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventGetStateUIMetadataFromIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FParameterUIData, METADATA_PARAMS(0, nullptr) }; // 863874789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "GetStateUIMetadataFromIndex", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::CustomizableObject_eventGetStateUIMetadataFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::CustomizableObject_eventGetStateUIMetadataFromIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics
	{
		struct CustomizableObject_eventIsCompiled_Parms
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
	void Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObject_eventIsCompiled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomizableObject_eventIsCompiled_Parms), &Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// This will always return true in a packaged game\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "This will always return true in a packaged game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "IsCompiled", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::CustomizableObject_eventIsCompiled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::CustomizableObject_eventIsCompiled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_IsCompiled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_IsCompiled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics
	{
		struct CustomizableObject_eventIsParameterMultidimensional_Parms
		{
			FString InParameterName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_InParameterName_MetaData[] = {
		{ "DisplayName", "Parameter Name" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_InParameterName = { "InParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObject_eventIsParameterMultidimensional_Parms, InParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_InParameterName_MetaData), Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_InParameterName_MetaData) };
	void Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObject_eventIsParameterMultidimensional_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CustomizableObject_eventIsParameterMultidimensional_Parms), &Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_InParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Return true or false depending if the parameter at the index provided is multidimensional or not.\n\x09 * @param InParameterName The name of the parameter to check.\n\x09 * @return True if the parameter is multidimensional and false if it is not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Return true or false depending if the parameter at the index provided is multidimensional or not.\n@param InParameterName The name of the parameter to check.\n@return True if the parameter is multidimensional and false if it is not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "IsParameterMultidimensional", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::CustomizableObject_eventIsParameterMultidimensional_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::CustomizableObject_eventIsParameterMultidimensional_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Call before using Mutable's Projector testing with mask out features. It should only be loaded when needed because it can spend quite a lot of memory\n// Can cause a loading hitch\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Call before using Mutable's Projector testing with mask out features. It should only be loaded when needed because it can spend quite a lot of memory\nCan cause a loading hitch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "LoadMaskOutCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Called to load the reference SkeletalMesh if it needs to be used as a placeholder and it's not loaded.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Called to load the reference SkeletalMesh if it needs to be used as a placeholder and it's not loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "LoadReferenceSkeletalMeshesAsync", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Call after having used Mutable's Projector testing with mask out features. It should be unloaded because it can spend quite a lot of memory\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Call after having used Mutable's Projector testing with mask out features. It should be unloaded because it can spend quite a lot of memory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "UnloadMaskOutCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObject, nullptr, "UnloadReferenceSkeletalMeshes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObject);
	UClass* Z_Construct_UClass_UCustomizableObject_NoRegister()
	{
		return UCustomizableObject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceSkeletalMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceSkeletalMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSkeletalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferenceSkeletalMeshes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceSkeletalMeshesData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSkeletalMeshesData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferenceSkeletalMeshesData;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReferencedMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedMaterials;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferencedMaterialSlotNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedMaterialSlotNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedMaterialSlotNames;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReferencedSkeletons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedSkeletons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedSkeletons;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReferencedPassThroughTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedPassThroughTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedPassThroughTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContributingMorphTargetsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContributingMorphTargetsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContributingMorphTargetsInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MorphTargetReconstructionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetReconstructionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetReconstructionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothSharedConfigsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothSharedConfigsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothSharedConfigsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContributingClothingAssetsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContributingClothingAssetsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContributingClothingAssetsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothMeshToMeshVertData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothMeshToMeshVertData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothMeshToMeshVertData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkinWeightProfilesInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeightProfilesInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinWeightProfilesInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlwaysLoadedExtensionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysLoadedExtensionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlwaysLoadedExtensionData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamedExtensionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamedExtensionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamedExtensionData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_MetaData[];
#endif
		static void NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUseRefSkeletalMeshAsPlaceholder;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Relevancy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Relevancy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Relevancy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompileOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRealTimeMorphTargets_MetaData[];
#endif
		static void NewProp_bEnableRealTimeMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRealTimeMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClothing_MetaData[];
#endif
		static void NewProp_bEnableClothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable16BitBoneWeights_MetaData[];
#endif
		static void NewProp_bEnable16BitBoneWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable16BitBoneWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAltSkinWeightProfiles_MetaData[];
#endif
		static void NewProp_bEnableAltSkinWeightProfiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAltSkinWeightProfiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsAssetMerge_MetaData[];
#endif
		static void NewProp_bEnablePhysicsAssetMerge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsAssetMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnimBpPhysicsAssetsManipualtion_MetaData[];
#endif
		static void NewProp_bEnableAnimBpPhysicsAssetsManipualtion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnimBpPhysicsAssetsManipualtion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshCompileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshCompileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshCompileType;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorkingSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorkingSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizableObjectGuidsInCompilation_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectGuidsInCompilation_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomizableObjectGuidsInCompilation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectPathMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectPathMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectPathMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomizableObjectPathMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupNodeMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupNodeMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupNodeMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GroupNodeMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancePropertiesProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancePropertiesProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancePropertiesProfiles;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMeshComponentsInRoot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMeshComponentsInRoot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterUIDataMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterUIDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterUIDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterUIDataMap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LowPriorityTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPriorityTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LowPriorityTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateUIDataMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateUIDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateUIDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StateUIDataMap;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAssetsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PhysicsAssetsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PhysicsAssetsMap;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimBPAssetsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimBPAssetsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBPAssetsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AnimBPAssetsMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimBpOverridePhysiscAssetsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBpOverridePhysiscAssetsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimBpOverridePhysiscAssetsInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskOutCache_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaskOutCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HashToStreamableBlock_ValueProp;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_HashToStreamableBlock_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashToStreamableBlock_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HashToStreamableBlock;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectClassTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectClassTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomizableObjectClassTags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PopulationClassTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PopulationClassTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PopulationClassTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizableObjectParametersTags_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomizableObjectParametersTags_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectParametersTags_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomizableObjectParametersTags;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChildObject_MetaData[];
#endif
		static void NewProp_bIsChildObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChildObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskOutCache_HardRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskOutCache_HardRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilationGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompilationGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulkData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BulkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableObject_CreateInstance, "CreateInstance" }, // 2095611498
		{ &Z_Construct_UFunction_UCustomizableObject_FindParameter, "FindParameter" }, // 3061329470
		{ &Z_Construct_UFunction_UCustomizableObject_GetBoolParameterDefaultValue, "GetBoolParameterDefaultValue" }, // 2503861268
		{ &Z_Construct_UFunction_UCustomizableObject_GetColorParameterDefaultValue, "GetColorParameterDefaultValue" }, // 2468295729
		{ &Z_Construct_UFunction_UCustomizableObject_GetComponentCount, "GetComponentCount" }, // 2664502316
		{ &Z_Construct_UFunction_UCustomizableObject_GetFloatParameterDefaultValue, "GetFloatParameterDefaultValue" }, // 2653972586
		{ &Z_Construct_UFunction_UCustomizableObject_GetIntParameterAvailableOption, "GetIntParameterAvailableOption" }, // 3626401627
		{ &Z_Construct_UFunction_UCustomizableObject_GetIntParameterDefaultValue, "GetIntParameterDefaultValue" }, // 2610362304
		{ &Z_Construct_UFunction_UCustomizableObject_GetIntParameterNumOptions, "GetIntParameterNumOptions" }, // 3965059389
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterCount, "GetParameterCount" }, // 1568550917
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterDescriptionCount, "GetParameterDescriptionCount" }, // 762364455
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterName, "GetParameterName" }, // 626218204
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterType, "GetParameterType" }, // 1410212991
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterTypeByName, "GetParameterTypeByName" }, // 858502256
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadata, "GetParameterUIMetadata" }, // 2331206114
		{ &Z_Construct_UFunction_UCustomizableObject_GetParameterUIMetadataFromIndex, "GetParameterUIMetadataFromIndex" }, // 1995903169
		{ &Z_Construct_UFunction_UCustomizableObject_GetProjectorParameterDefaultValue, "GetProjectorParameterDefaultValue" }, // 1850526059
		{ &Z_Construct_UFunction_UCustomizableObject_GetStateCount, "GetStateCount" }, // 2750033477
		{ &Z_Construct_UFunction_UCustomizableObject_GetStateName, "GetStateName" }, // 1088691412
		{ &Z_Construct_UFunction_UCustomizableObject_GetStateParameterCount, "GetStateParameterCount" }, // 3381867128
		{ &Z_Construct_UFunction_UCustomizableObject_GetStateParameterName, "GetStateParameterName" }, // 2605253918
		{ &Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadata, "GetStateUIMetadata" }, // 2846422901
		{ &Z_Construct_UFunction_UCustomizableObject_GetStateUIMetadataFromIndex, "GetStateUIMetadataFromIndex" }, // 2379256360
		{ &Z_Construct_UFunction_UCustomizableObject_IsCompiled, "IsCompiled" }, // 3254034901
		{ &Z_Construct_UFunction_UCustomizableObject_IsParameterMultidimensional, "IsParameterMultidimensional" }, // 1886344370
		{ &Z_Construct_UFunction_UCustomizableObject_LoadMaskOutCache, "LoadMaskOutCache" }, // 1350276316
		{ &Z_Construct_UFunction_UCustomizableObject_LoadReferenceSkeletalMeshesAsync, "LoadReferenceSkeletalMeshesAsync" }, // 2796943763
		{ &Z_Construct_UFunction_UCustomizableObject_UnloadMaskOutCache, "UnloadMaskOutCache" }, // 3269490482
		{ &Z_Construct_UFunction_UCustomizableObject_UnloadReferenceSkeletalMeshes, "UnloadReferenceSkeletalMeshes" }, // 1520886255
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MuCO/CustomizableObject.h" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMesh_MetaData[] = {
		{ "Comment", "/** All the SkeletalMeshes generated for this CustomizableObject instances will use the Reference Skeletal Mesh \n\x09* properties for everything that Mutable doesn't create or modify. This includes data like LOD distances, Physics\n\x09* properties, Bounding Volumes, Skeleton, etc.\n\x09*\n\x09* While a CustomizableObject instance is being created for the first time, and in some situation with lots of \n\x09* objects this may require some seconds, the Reference Skeletal Mesh is used for the actor. This works as a better\n\x09* solution than the alternative of not showing anything, although this can be disabled with the function\n\x09* \"SetReplaceDiscardedWithReferenceMeshEnabled\" (See the c++ section).\n\x09* \n\x09* For more information on this topic read the Basic Concepts at work.anticto.com.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "All the SkeletalMeshes generated for this CustomizableObject instances will use the Reference Skeletal Mesh\nproperties for everything that Mutable doesn't create or modify. This includes data like LOD distances, Physics\nproperties, Bounding Volumes, Skeleton, etc.\n\nWhile a CustomizableObject instance is being created for the first time, and in some situation with lots of\nobjects this may require some seconds, the Reference Skeletal Mesh is used for the actor. This works as a better\nsolution than the alternative of not showing anything, although this can be disabled with the function\n\"SetReplaceDiscardedWithReferenceMeshEnabled\" (See the c++ section).\n\nFor more information on this topic read the Basic Concepts at work.anticto.com." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMesh = { "ReferenceSkeletalMesh", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferenceSkeletalMesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMesh_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMesh_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes_Inner = { "ReferenceSkeletalMeshes", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** All the SkeletalMeshes generated for this CustomizableObject instances will use the Reference Skeletal Mesh\n\x09* properties for everything that Mutable doesn't create or modify. This includes data like LOD distances, Physics\n\x09* properties, Bounding Volumes, Skeleton, etc.\n\x09*\n\x09* While a CustomizableObject instance is being created for the first time, and in some situation with lots of\n\x09* objects this may require some seconds, the Reference Skeletal Mesh is used for the actor. This works as a better\n\x09* solution than the alternative of not showing anything, although this can be disabled with the function\n\x09* \"SetReplaceDiscardedWithReferenceMeshEnabled\" (See the c++ section).\n\x09*\n\x09* For more information on this topic read the Basic Concepts at work.anticto.com.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "All the SkeletalMeshes generated for this CustomizableObject instances will use the Reference Skeletal Mesh\nproperties for everything that Mutable doesn't create or modify. This includes data like LOD distances, Physics\nproperties, Bounding Volumes, Skeleton, etc.\n\nWhile a CustomizableObject instance is being created for the first time, and in some situation with lots of\nobjects this may require some seconds, the Reference Skeletal Mesh is used for the actor. This works as a better\nsolution than the alternative of not showing anything, although this can be disabled with the function\n\"SetReplaceDiscardedWithReferenceMeshEnabled\" (See the c++ section).\n\nFor more information on this topic read the Basic Concepts at work.anticto.com." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes = { "ReferenceSkeletalMeshes", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferenceSkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData_Inner = { "ReferenceSkeletalMeshesData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData, METADATA_PARAMS(0, nullptr) }; // 1925054826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData_MetaData[] = {
		{ "Comment", "/** All the SkeletalMeshes generated for this CustomizableObject instances will use the Reference Skeletal Mesh\n\x09 * properties for everything that Mutable doesn't create or modify. This struct stores the information used from\n\x09 * the Reference Skeletal Meshes to avoid having them loaded at all times. This includes data like LOD distances,\n\x09 * LOD render data settings, Mesh sockets, Bounding volumes, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "All the SkeletalMeshes generated for this CustomizableObject instances will use the Reference Skeletal Mesh\nproperties for everything that Mutable doesn't create or modify. This struct stores the information used from\nthe Reference Skeletal Meshes to avoid having them loaded at all times. This includes data like LOD distances,\nLOD render data settings, Mesh sockets, Bounding volumes, etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData = { "ReferenceSkeletalMeshesData", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferenceSkeletalMeshesData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData_MetaData) }; // 1925054826
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials_Inner = { "ReferencedMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials_MetaData[] = {
		{ "Comment", "/** List of Materials referenced by this or any child customizable object. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "List of Materials referenced by this or any child customizable object." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials = { "ReferencedMaterials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferencedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames_Inner = { "ReferencedMaterialSlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames_MetaData[] = {
		{ "Comment", "/** List of Material slot names for the materials referenced by this or any child customizable object. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "List of Material slot names for the materials referenced by this or any child customizable object." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames = { "ReferencedMaterialSlotNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferencedMaterialSlotNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons_Inner = { "ReferencedSkeletons", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons_MetaData[] = {
		{ "Comment", "/** List of skeletons referenced by any of the parts of this customizable object. \n\x09 * The position in this array is used as skeleton ID passed to Mutable bones.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "List of skeletons referenced by any of the parts of this customizable object.\nThe position in this array is used as skeleton ID passed to Mutable bones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons = { "ReferencedSkeletons", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferencedSkeletons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures_Inner = { "ReferencedPassThroughTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures = { "ReferencedPassThroughTextures", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ReferencedPassThroughTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LODSettings_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "DisplayName", "LOD Settings" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, LODSettings), Z_Construct_UScriptStruct_FMutableLODSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LODSettings_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LODSettings_MetaData) }; // 152042201
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties_Inner = { "ImageProperties", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableModelImageProperties, METADATA_PARAMS(0, nullptr) }; // 2057203774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties = { "ImageProperties", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ImageProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties_MetaData) }; // 2057203774
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo_Inner = { "ContributingMorphTargetsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMorphTargetInfo, METADATA_PARAMS(0, nullptr) }; // 870595375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo = { "ContributingMorphTargetsInfo", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ContributingMorphTargetsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo_MetaData) }; // 870595375
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData_Inner = { "MorphTargetReconstructionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMorphTargetVertexData, METADATA_PARAMS(0, nullptr) }; // 644445227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData = { "MorphTargetReconstructionData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, MorphTargetReconstructionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData_MetaData) }; // 644445227
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData_Inner = { "ClothSharedConfigsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectClothConfigData, METADATA_PARAMS(0, nullptr) }; // 1948687966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData = { "ClothSharedConfigsData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ClothSharedConfigsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData_MetaData) }; // 1948687966
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData_Inner = { "ContributingClothingAssetsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData, METADATA_PARAMS(0, nullptr) }; // 1026924611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData = { "ContributingClothingAssetsData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ContributingClothingAssetsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData_MetaData) }; // 1026924611
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData_Inner = { "ClothMeshToMeshVertData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData, METADATA_PARAMS(0, nullptr) }; // 532907051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData = { "ClothMeshToMeshVertData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ClothMeshToMeshVertData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData_MetaData) }; // 532907051
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo_Inner = { "SkinWeightProfilesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo, METADATA_PARAMS(0, nullptr) }; // 1274094468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo = { "SkinWeightProfilesInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, SkinWeightProfilesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo_MetaData) }; // 1274094468
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData_Inner = { "AlwaysLoadedExtensionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectExtensionData, METADATA_PARAMS(0, nullptr) }; // 2589010811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData_MetaData[] = {
		{ "Comment", "// mu::ExtensionData::Index is an index into this array when mu::ExtensionData::Origin is ConstantAlwaysLoaded\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "mu::ExtensionData::Index is an index into this array when mu::ExtensionData::Origin is ConstantAlwaysLoaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData = { "AlwaysLoadedExtensionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, AlwaysLoadedExtensionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData_MetaData) }; // 2589010811
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData_Inner = { "StreamedExtensionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectStreamedExtensionData, METADATA_PARAMS(0, nullptr) }; // 3856977773
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData_MetaData[] = {
		{ "Comment", "// mu::ExtensionData::Index is an index into this array when mu::ExtensionData::Origin is ConstantStreamed\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "mu::ExtensionData::Index is an index into this array when mu::ExtensionData::Origin is ConstantStreamed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData = { "StreamedExtensionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, StreamedExtensionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData_MetaData) }; // 3856977773
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Use the SkeletalMesh of reference as a placeholder until the custom mesh is ready to use.\n\x09  * \n\x09  * Note: If disabled, a null mesh will be used to replace the discarded mesh due to 'ReplaceDiscardedWithReferenceMesh' being enabled.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Use the SkeletalMesh of reference as a placeholder until the custom mesh is ready to use.\n\nNote: If disabled, a null mesh will be used to replace the discarded mesh due to 'ReplaceDiscardedWithReferenceMesh' being enabled." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnableUseRefSkeletalMeshAsPlaceholder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder = { "bEnableUseRefSkeletalMeshAsPlaceholder", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy_MetaData[] = {
		{ "Comment", "// Hide this property because it is not used yet.\n//UPROPERTY(EditAnywhere, Category = CustomizableObject)\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Hide this property because it is not used yet.\nUPROPERTY(EditAnywhere, Category = CustomizableObject)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy = { "Relevancy", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, Relevancy), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectRelevancy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy_MetaData) }; // 2469599719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompileOptions_MetaData[] = {
		{ "Comment", "// Compilation options to use in editor and for packaging for this object.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Compilation options to use in editor and for packaging for this object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompileOptions = { "CompileOptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, CompileOptions), Z_Construct_UScriptStruct_FCompilationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompileOptions_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompileOptions_MetaData) }; // 3760308496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnableRealTimeMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets = { "bEnableRealTimeMorphTargets", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnableClothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing = { "bEnableClothing", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "// TODO: Enable 16 bit weights \n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "TODO: Enable 16 bit weights" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnable16BitBoneWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights = { "bEnable16BitBoneWeights", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnableAltSkinWeightProfiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles = { "bEnableAltSkinWeightProfiles", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnablePhysicsAssetMerge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge = { "bEnablePhysicsAssetMerge", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bEnableAnimBpPhysicsAssetsManipualtion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion = { "bEnableAnimBpPhysicsAssetsManipualtion", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "// Options when compiling this customizable object (see EMutableCompileMeshType declaration for info)\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Options when compiling this customizable object (see EMutableCompileMeshType declaration for info)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType = { "MeshCompileType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, MeshCompileType), Z_Construct_UEnum_CustomizableObject_EMutableCompileMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType_MetaData) }; // 4186794071
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet_Inner = { "WorkingSet", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet_MetaData[] = {
		{ "Category", "CompileOptions" },
		{ "Comment", "// Array of elements to use with compile option CompileType = WorkingSet\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Array of elements to use with compile option CompileType = WorkingSet" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet = { "WorkingSet", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, WorkingSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "// Editor graph\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Editor graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, Source), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Source_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_VersionId_MetaData[] = {
		{ "Comment", "// Used to verify the derived data matches this version of the Customizable Object.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Used to verify the derived data matches this version of the Customizable Object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_VersionId = { "VersionId", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, VersionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_VersionId_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_VersionId_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation_ElementProp = { "CustomizableObjectGuidsInCompilation", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation_MetaData[] = {
		{ "Comment", "// Set of all the guids of all the CustomizableObjects in the compilation\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Set of all the guids of all the CustomizableObjects in the compilation" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation = { "CustomizableObjectGuidsInCompilation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, CustomizableObjectGuidsInCompilation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_ValueProp = { "CustomizableObjectPathMap", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_Key_KeyProp = { "CustomizableObjectPathMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_MetaData[] = {
		{ "Comment", "/* Map to identify what CustomizableObject owns a parameter. Used to display a tooltip when hovering a parameter\n\x09   in the Prev. instance panel */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Map to identify what CustomizableObject owns a parameter. Used to display a tooltip when hovering a parameter\n         in the Prev. instance panel" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap = { "CustomizableObjectPathMap", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, CustomizableObjectPathMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_ValueProp = { "GroupNodeMap", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCustomizableObjectIdPair, METADATA_PARAMS(0, nullptr) }; // 3508752581
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_Key_KeyProp = { "GroupNodeMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap = { "GroupNodeMap", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, GroupNodeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_MetaData) }; // 3508752581
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles_Inner = { "InstancePropertiesProfiles", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProfileParameterDat, METADATA_PARAMS(0, nullptr) }; // 866399969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles_MetaData[] = {
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles = { "InstancePropertiesProfiles", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, InstancePropertiesProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles_MetaData) }; // 866399969
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_NumMeshComponentsInRoot_MetaData[] = {
		{ "Comment", "/** Amount of components in this CO. Set at the end of the model compilation process. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Amount of components in this CO. Set at the end of the model compilation process." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_NumMeshComponentsInRoot = { "NumMeshComponentsInRoot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, NumMeshComponentsInRoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_NumMeshComponentsInRoot_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_NumMeshComponentsInRoot_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties_Inner = { "ParameterProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableModelParameterProperties, METADATA_PARAMS(0, nullptr) }; // 2532779101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties_MetaData[] = {
		{ "Comment", "// This is information about the parameters in the model that is generated at model compile time.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "This is information about the parameters in the model that is generated at model compile time." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties = { "ParameterProperties", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ParameterProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties_MetaData) }; // 2532779101
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_ValueProp = { "ParameterUIDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FParameterUIData, METADATA_PARAMS(0, nullptr) }; // 863874789
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_Key_KeyProp = { "ParameterUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_MetaData[] = {
		{ "Comment", "/** Stores all the parameter UI metadata information for all the dependencies of this Customizable Object */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores all the parameter UI metadata information for all the dependencies of this Customizable Object" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap = { "ParameterUIDataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, ParameterUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_MetaData) }; // 863874789
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures_Inner = { "LowPriorityTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Textures marked as low priority will generate defaulted resident mips (if texture streaming is enabled).\n\x09  * Generating defaulted resident mips greatly reduce initial generation times. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Textures marked as low priority will generate defaulted resident mips (if texture streaming is enabled).\nGenerating defaulted resident mips greatly reduce initial generation times." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures = { "LowPriorityTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, LowPriorityTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_ValueProp = { "StateUIDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FParameterUIData, METADATA_PARAMS(0, nullptr) }; // 863874789
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_Key_KeyProp = { "StateUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_MetaData[] = {
		{ "Comment", "/** Stores all the state UI metadata information for all the dependencies of this Customizable Object */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores all the state UI metadata information for all the dependencies of this Customizable Object" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap = { "StateUIDataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, StateUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_MetaData) }; // 863874789
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_ValueProp = { "PhysicsAssetsMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_Key_KeyProp = { "PhysicsAssetsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_MetaData[] = {
		{ "Comment", "/** Stores the physics assets gathered from the SkeletalMesh nodes during compilation, to be used in mesh generation in-game */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores the physics assets gathered from the SkeletalMesh nodes during compilation, to be used in mesh generation in-game" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap = { "PhysicsAssetsMap", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, PhysicsAssetsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_ValueProp = { "AnimBPAssetsMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_Key_KeyProp = { "AnimBPAssetsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_MetaData[] = {
		{ "Comment", "/** Stores the UAnimBlueprint assets gathered from the SkeletalMesh nodes during compilation, to be used in mesh generation in-game */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores the UAnimBlueprint assets gathered from the SkeletalMesh nodes during compilation, to be used in mesh generation in-game" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap = { "AnimBPAssetsMap", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, AnimBPAssetsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo_Inner = { "AnimBpOverridePhysiscAssetsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo, METADATA_PARAMS(0, nullptr) }; // 1918223617
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo = { "AnimBpOverridePhysiscAssetsInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, AnimBpOverridePhysiscAssetsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo_MetaData) }; // 1918223617
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray_Inner = { "SocketArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMutableRefSocket, METADATA_PARAMS(0, nullptr) }; // 4159778651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray_MetaData[] = {
		{ "Comment", "/** Stores the sockets provided by the part skeletal meshes, to be merged in the generated meshes */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores the sockets provided by the part skeletal meshes, to be merged in the generated meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray = { "SocketArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, SocketArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray_MetaData) }; // 4159778651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_MetaData[] = {
		{ "Comment", "/** Stores the textures that will be used to mask-out areas in projectors. The cache isn't used for rendering, but for coverage testing */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores the textures that will be used to mask-out areas in projectors. The cache isn't used for rendering, but for coverage testing" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache = { "MaskOutCache", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, MaskOutCache), Z_Construct_UClass_UMutableMaskOutCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_ValueProp = { "HashToStreamableBlock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMutableStreamableBlock, METADATA_PARAMS(0, nullptr) }; // 3679513557
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_Key_KeyProp = { "HashToStreamableBlock_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_MetaData[] = {
		{ "Comment", "/** Map of Hash to Streaming blocks, used to stream a block of data representing a resource from the BulkData */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Map of Hash to Streaming blocks, used to stream a block of data representing a resource from the BulkData" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock = { "HashToStreamableBlock", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, HashToStreamableBlock), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_MetaData) }; // 3679513557
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags_Inner = { "CustomizableObjectClassTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags_MetaData[] = {
		{ "Comment", "/** Array to store the selected Population Class tags for this Customizable Object */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Array to store the selected Population Class tags for this Customizable Object" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags = { "CustomizableObjectClassTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, CustomizableObjectClassTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags_Inner = { "PopulationClassTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags_MetaData[] = {
		{ "Comment", "/** Array to strore all the Population Class tags */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Array to strore all the Population Class tags" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags = { "PopulationClassTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, PopulationClassTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_ValueProp = { "CustomizableObjectParametersTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FParameterTags, METADATA_PARAMS(0, nullptr) }; // 1218734758
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_Key_KeyProp = { "CustomizableObjectParametersTags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_MetaData[] = {
		{ "Comment", "/** Map of parameters available for the Customizable Object and their tags */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Map of parameters available for the Customizable Object and their tags" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags = { "CustomizableObjectParametersTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, CustomizableObjectParametersTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_MetaData) }; // 1218734758
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject_MetaData[] = {
		{ "Comment", "/** True if this object references a parent object. This is used basically to exclude this object\n\x09  * from cooking. This is actually derived from the source graph object node pointing to another\n\x09  * object or not, but it needs to be cached here because the source graph is not always available.\n\x09  * For old objects this may be false even if they are child objects until they are resaved, but \n\x09  * that is the conservative case and shouldn't cause a problem. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "True if this object references a parent object. This is used basically to exclude this object\nfrom cooking. This is actually derived from the source graph object node pointing to another\nobject or not, but it needs to be cached here because the source graph is not always available.\nFor old objects this may be false even if they are child objects until they are resaved, but\nthat is the conservative case and shouldn't cause a problem." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject_SetBit(void* Obj)
	{
		((UCustomizableObject*)Obj)->bIsChildObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject = { "bIsChildObject", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObject), &Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Identifier_MetaData[] = {
		{ "Comment", "/** Unique Identifier - used to locate Model and Streamable data on disk. Should not be modified. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Unique Identifier - used to locate Model and Streamable data on disk. Should not be modified." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Identifier_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Identifier_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Comment", "/** Stores the bone names of all the bones that can possibly use the generated meshes */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Stores the bone names of all the bones that can possibly use the generated meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_HardRef_MetaData[] = {
		{ "Comment", "/** Used to prevent GC of MaskOutCache and keep it in memory while it's needed */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Used to prevent GC of MaskOutCache and keep it in memory while it's needed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_HardRef = { "MaskOutCache_HardRef", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, MaskOutCache_HardRef), Z_Construct_UClass_UMutableMaskOutCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_HardRef_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_HardRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompilationGuid_MetaData[] = {
		{ "Comment", "/** Unique identifier. Regenerated each time the object is compiled. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "Unique identifier. Regenerated each time the object is compiled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompilationGuid = { "CompilationGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, CompilationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompilationGuid_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompilationGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BulkData_MetaData[] = {
		{ "Comment", "/** BulkData that stores all in-game resources used by Mutable when generating instances.\n\x09  * Only valid in packaged builds */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObject.h" },
		{ "ToolTip", "BulkData that stores all in-game resources used by Mutable when generating instances.\nOnly valid in packaged builds" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BulkData = { "BulkData", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObject, BulkData), Z_Construct_UClass_UCustomizableObjectBulk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BulkData_MetaData), Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BulkData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObject_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshes,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferenceSkeletalMeshesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedMaterialSlotNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedSkeletons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ReferencedPassThroughTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LODSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ImageProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingMorphTargetsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MorphTargetReconstructionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothSharedConfigsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ContributingClothingAssetsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ClothMeshToMeshVertData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SkinWeightProfilesInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AlwaysLoadedExtensionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StreamedExtensionData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableUseRefSkeletalMeshAsPlaceholder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Relevancy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompileOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableRealTimeMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableClothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnable16BitBoneWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAltSkinWeightProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnablePhysicsAssetMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bEnableAnimBpPhysicsAssetsManipualtion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MeshCompileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_WorkingSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_VersionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectGuidsInCompilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectPathMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_GroupNodeMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_InstancePropertiesProfiles,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_NumMeshComponentsInRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_ParameterUIDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_LowPriorityTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_StateUIDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PhysicsAssetsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBPAssetsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_AnimBpOverridePhysiscAssetsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_SocketArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_HashToStreamableBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectClassTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_PopulationClassTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CustomizableObjectParametersTags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_bIsChildObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_Identifier,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_MaskOutCache_HardRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_CompilationGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObject_Statics::NewProp_BulkData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObject_Statics::ClassParams = {
		&UCustomizableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObject()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObject.OuterSingleton, Z_Construct_UClass_UCustomizableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObject.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableObject>()
	{
		return UCustomizableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObject);
	UCustomizableObject::~UCustomizableObject() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObject)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectRelevancy_StaticEnum, TEXT("ECustomizableObjectRelevancy"), &Z_Registration_Info_UEnum_ECustomizableObjectRelevancy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2469599719U) },
		{ ECustomizableObjectNumBoneInfluences_StaticEnum, TEXT("ECustomizableObjectNumBoneInfluences"), &Z_Registration_Info_UEnum_ECustomizableObjectNumBoneInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3174646292U) },
		{ ECustomizableObjectCompilationState_StaticEnum, TEXT("ECustomizableObjectCompilationState"), &Z_Registration_Info_UEnum_ECustomizableObjectCompilationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1451505531U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::ScriptStructInfo[] = {
		{ FFParameterOptionsTags::StaticStruct, Z_Construct_UScriptStruct_FFParameterOptionsTags_Statics::NewStructOps, TEXT("FParameterOptionsTags"), &Z_Registration_Info_UScriptStruct_FParameterOptionsTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFParameterOptionsTags), 3169849301U) },
		{ FParameterTags::StaticStruct, Z_Construct_UScriptStruct_FParameterTags_Statics::NewStructOps, TEXT("ParameterTags"), &Z_Registration_Info_UScriptStruct_ParameterTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterTags), 1218734758U) },
		{ FProfileParameterDat::StaticStruct, Z_Construct_UScriptStruct_FProfileParameterDat_Statics::NewStructOps, TEXT("ProfileParameterDat"), &Z_Registration_Info_UScriptStruct_ProfileParameterDat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfileParameterDat), 866399969U) },
		{ FCompilationOptions::StaticStruct, Z_Construct_UScriptStruct_FCompilationOptions_Statics::NewStructOps, TEXT("CompilationOptions"), &Z_Registration_Info_UScriptStruct_CompilationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompilationOptions), 3760308496U) },
		{ FMutableModelImageProperties::StaticStruct, Z_Construct_UScriptStruct_FMutableModelImageProperties_Statics::NewStructOps, TEXT("MutableModelImageProperties"), &Z_Registration_Info_UScriptStruct_MutableModelImageProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableModelImageProperties), 2057203774U) },
		{ FMutableModelParameterValue::StaticStruct, Z_Construct_UScriptStruct_FMutableModelParameterValue_Statics::NewStructOps, TEXT("MutableModelParameterValue"), &Z_Registration_Info_UScriptStruct_MutableModelParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableModelParameterValue), 3171161041U) },
		{ FMutableModelParameterProperties::StaticStruct, Z_Construct_UScriptStruct_FMutableModelParameterProperties_Statics::NewStructOps, TEXT("MutableModelParameterProperties"), &Z_Registration_Info_UScriptStruct_MutableModelParameterProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableModelParameterProperties), 2532779101U) },
		{ FMaskOutTexture::StaticStruct, Z_Construct_UScriptStruct_FMaskOutTexture_Statics::NewStructOps, TEXT("MaskOutTexture"), &Z_Registration_Info_UScriptStruct_MaskOutTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaskOutTexture), 3783284758U) },
		{ FAnimBpOverridePhysicsAssetsInfo::StaticStruct, Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo_Statics::NewStructOps, TEXT("AnimBpOverridePhysicsAssetsInfo"), &Z_Registration_Info_UScriptStruct_AnimBpOverridePhysicsAssetsInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBpOverridePhysicsAssetsInfo), 1918223617U) },
		{ FMorphTargetInfo::StaticStruct, Z_Construct_UScriptStruct_FMorphTargetInfo_Statics::NewStructOps, TEXT("MorphTargetInfo"), &Z_Registration_Info_UScriptStruct_MorphTargetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMorphTargetInfo), 870595375U) },
		{ FMorphTargetVertexData::StaticStruct, Z_Construct_UScriptStruct_FMorphTargetVertexData_Statics::NewStructOps, TEXT("MorphTargetVertexData"), &Z_Registration_Info_UScriptStruct_MorphTargetVertexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMorphTargetVertexData), 644445227U) },
		{ FCustomizableObjectMeshToMeshVertData::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectMeshToMeshVertData_Statics::NewStructOps, TEXT("CustomizableObjectMeshToMeshVertData"), &Z_Registration_Info_UScriptStruct_CustomizableObjectMeshToMeshVertData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectMeshToMeshVertData), 532907051U) },
		{ FMutableSkinWeightProfileInfo::StaticStruct, Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo_Statics::NewStructOps, TEXT("MutableSkinWeightProfileInfo"), &Z_Registration_Info_UScriptStruct_MutableSkinWeightProfileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableSkinWeightProfileInfo), 1274094468U) },
		{ FMutableStreamableBlock::StaticStruct, Z_Construct_UScriptStruct_FMutableStreamableBlock_Statics::NewStructOps, TEXT("MutableStreamableBlock"), &Z_Registration_Info_UScriptStruct_MutableStreamableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableStreamableBlock), 3679513557U) },
		{ FMutableRefLODInfo::StaticStruct, Z_Construct_UScriptStruct_FMutableRefLODInfo_Statics::NewStructOps, TEXT("MutableRefLODInfo"), &Z_Registration_Info_UScriptStruct_MutableRefLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefLODInfo), 1789657125U) },
		{ FMutableRefLODRenderData::StaticStruct, Z_Construct_UScriptStruct_FMutableRefLODRenderData_Statics::NewStructOps, TEXT("MutableRefLODRenderData"), &Z_Registration_Info_UScriptStruct_MutableRefLODRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefLODRenderData), 1457834192U) },
		{ FMutableRefLODData::StaticStruct, Z_Construct_UScriptStruct_FMutableRefLODData_Statics::NewStructOps, TEXT("MutableRefLODData"), &Z_Registration_Info_UScriptStruct_MutableRefLODData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefLODData), 3251141503U) },
		{ FMutableRefSocket::StaticStruct, Z_Construct_UScriptStruct_FMutableRefSocket_Statics::NewStructOps, TEXT("MutableRefSocket"), &Z_Registration_Info_UScriptStruct_MutableRefSocket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefSocket), 4159778651U) },
		{ FMutableRefSkeletalMeshSettings::StaticStruct, Z_Construct_UScriptStruct_FMutableRefSkeletalMeshSettings_Statics::NewStructOps, TEXT("MutableRefSkeletalMeshSettings"), &Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefSkeletalMeshSettings), 3421480411U) },
		{ FMutableRefAssetUserData::StaticStruct, Z_Construct_UScriptStruct_FMutableRefAssetUserData_Statics::NewStructOps, TEXT("MutableRefAssetUserData"), &Z_Registration_Info_UScriptStruct_MutableRefAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefAssetUserData), 2777551657U) },
		{ FMutableRefSkeletalMeshData::StaticStruct, Z_Construct_UScriptStruct_FMutableRefSkeletalMeshData_Statics::NewStructOps, TEXT("MutableRefSkeletalMeshData"), &Z_Registration_Info_UScriptStruct_MutableRefSkeletalMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableRefSkeletalMeshData), 1925054826U) },
		{ FMutableLODSettings::StaticStruct, Z_Construct_UScriptStruct_FMutableLODSettings_Statics::NewStructOps, TEXT("MutableLODSettings"), &Z_Registration_Info_UScriptStruct_MutableLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableLODSettings), 152042201U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMutableMaskOutCache, UMutableMaskOutCache::StaticClass, TEXT("UMutableMaskOutCache"), &Z_Registration_Info_UClass_UMutableMaskOutCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMutableMaskOutCache), 443023085U) },
		{ Z_Construct_UClass_UCustomizableObjectBulk, UCustomizableObjectBulk::StaticClass, TEXT("UCustomizableObjectBulk"), &Z_Registration_Info_UClass_UCustomizableObjectBulk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectBulk), 4070107101U) },
		{ Z_Construct_UClass_UCustomizableObject, UCustomizableObject::StaticClass, TEXT("UCustomizableObject"), &Z_Registration_Info_UClass_UCustomizableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObject), 1882431290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_1072833718(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

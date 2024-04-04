// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCO/CustomizableInstancePrivateData.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableInstancePrivateData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstancePrivateData();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstancePrivateData_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableInstanceComponentData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedMaterial();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGeneratedTexture();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FReferencedPhysicsAssets();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FReferencedSkeletons();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneratedTexture;
class UScriptStruct* FGeneratedTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneratedTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedTexture, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("GeneratedTexture"));
	}
	return Z_Registration_Info_UScriptStruct_GeneratedTexture.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FGeneratedTexture>()
{
	return FGeneratedTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeneratedTexture_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedTexture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneratedTexture, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneratedTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture_MetaData), Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"GeneratedTexture",
		Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers),
		sizeof(FGeneratedTexture),
		alignof(FGeneratedTexture),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeneratedTexture_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedTexture_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_GeneratedTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneratedTexture.InnerSingleton, Z_Construct_UScriptStruct_FGeneratedTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeneratedTexture.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeneratedMaterial;
class UScriptStruct* FGeneratedMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeneratedMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeneratedMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedMaterial, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("GeneratedMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_GeneratedMaterial.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FGeneratedMaterial>()
{
	return FGeneratedMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeneratedMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneratedMaterial>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeneratedTexture, METADATA_PARAMS(0, nullptr) }; // 4040037456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "CustomizedMaterial" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeneratedMaterial, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_MetaData), Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_MetaData) }; // 4040037456
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewProp_Textures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"GeneratedMaterial",
		Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers),
		sizeof(FGeneratedMaterial),
		alignof(FGeneratedMaterial),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeneratedMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_GeneratedMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeneratedMaterial.InnerSingleton, Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeneratedMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets;
class UScriptStruct* FReferencedPhysicsAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencedPhysicsAssets, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ReferencedPhysicsAssets"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FReferencedPhysicsAssets>()
{
	return FReferencedPhysicsAssets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAssetsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsAssetsToMerge;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalPhysicsAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPhysicsAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencedPhysicsAssets>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_Inner = { "PhysicsAssetsToMerge", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge = { "PhysicsAssetsToMerge", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencedPhysicsAssets, PhysicsAssetsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_MetaData), Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets_Inner = { "AdditionalPhysicsAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets = { "AdditionalPhysicsAssets", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencedPhysicsAssets, AdditionalPhysicsAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets_MetaData), Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_PhysicsAssetsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewProp_AdditionalPhysicsAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ReferencedPhysicsAssets",
		Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers),
		sizeof(FReferencedPhysicsAssets),
		alignof(FReferencedPhysicsAssets),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FReferencedPhysicsAssets()
	{
		if (!Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.InnerSingleton, Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencedSkeletons;
class UScriptStruct* FReferencedSkeletons::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencedSkeletons.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencedSkeletons.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencedSkeletons, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ReferencedSkeletons"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencedSkeletons.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FReferencedSkeletons>()
{
	return FReferencedSkeletons::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReferencedSkeletons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_SkeletonIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonIds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletonsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonsToMerge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencedSkeletons>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Comment", "// Merged skeleton if found in the cache\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "Merged skeleton if found in the cache" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencedSkeletons, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_Skeleton_MetaData), Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_Skeleton_MetaData) };
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds_Inner = { "SkeletonIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds = { "SkeletonIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencedSkeletons, SkeletonIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds_MetaData), Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_Inner = { "SkeletonsToMerge", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge = { "SkeletonsToMerge", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencedSkeletons, SkeletonsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_MetaData), Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewProp_SkeletonsToMerge,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ReferencedSkeletons",
		Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers),
		sizeof(FReferencedSkeletons),
		alignof(FReferencedSkeletons),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FReferencedSkeletons()
	{
		if (!Z_Registration_Info_UScriptStruct_ReferencedSkeletons.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencedSkeletons.InnerSingleton, Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReferencedSkeletons.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData;
class UScriptStruct* FCustomizableInstanceComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableInstanceComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableInstanceComponentData>()
{
	return FCustomizableInstanceComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimSlotToBP_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimSlotToBP_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlotToBP_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AnimSlotToBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeletons_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Skeletons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableInstanceComponentData>();
	}
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_ValueProp = { "AnimSlotToBP", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_Key_KeyProp = { "AnimSlotToBP_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// AnimBP data gathered for a component from its constituent meshes\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "AnimBP data gathered for a component from its constituent meshes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP = { "AnimSlotToBP", nullptr, (EPropertyFlags)0x0014000000022041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableInstanceComponentData, AnimSlotToBP), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_MetaData), Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons_MetaData[] = {
		{ "Comment", "/** Skeletons required by the current generated instance. Skeletons to be loaded and merged.*/" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "Skeletons required by the current generated instance. Skeletons to be loaded and merged." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons = { "Skeletons", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableInstanceComponentData, Skeletons), Z_Construct_UScriptStruct_FReferencedSkeletons, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons_MetaData), Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons_MetaData) }; // 1506977953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets_MetaData[] = {
		{ "Comment", "/** PhysicsAssets required by the current generated instance. PhysicsAssets to be loaded and merged.*/" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "PhysicsAssets required by the current generated instance. PhysicsAssets to be loaded and merged." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets = { "PhysicsAssets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableInstanceComponentData, PhysicsAssets), Z_Construct_UScriptStruct_FReferencedPhysicsAssets, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets_MetaData), Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets_MetaData) }; // 141099612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_AnimSlotToBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_Skeletons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewProp_PhysicsAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableInstanceComponentData",
		Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers),
		sizeof(FCustomizableInstanceComponentData),
		alignof(FCustomizableInstanceComponentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableInstanceComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset;
class UScriptStruct* FAnimInstanceOverridePhysicsAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("AnimInstanceOverridePhysicsAsset"));
	}
	return Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FAnimInstanceOverridePhysicsAsset>()
{
	return FAnimInstanceOverridePhysicsAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceOverridePhysicsAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PropertyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PropertyIndex = { "PropertyIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimInstanceOverridePhysicsAsset, PropertyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PropertyIndex_MetaData), Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PropertyIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimInstanceOverridePhysicsAsset, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PhysicsAsset_MetaData), Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PhysicsAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PropertyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewProp_PhysicsAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"AnimInstanceOverridePhysicsAsset",
		Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::PropPointers),
		sizeof(FAnimInstanceOverridePhysicsAsset),
		alignof(FAnimInstanceOverridePhysicsAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset.InnerSingleton, Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets;
class UScriptStruct* FAnimBpGeneratedPhysicsAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("AnimBpGeneratedPhysicsAssets"));
	}
	return Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FAnimBpGeneratedPhysicsAssets>()
{
	return FAnimBpGeneratedPhysicsAssets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimInstancePropertyIndexAndPhysicsAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstancePropertyIndexAndPhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimInstancePropertyIndexAndPhysicsAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBpGeneratedPhysicsAssets>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets_Inner = { "AnimInstancePropertyIndexAndPhysicsAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset, METADATA_PARAMS(0, nullptr) }; // 1175420027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets = { "AnimInstancePropertyIndexAndPhysicsAssets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimBpGeneratedPhysicsAssets, AnimInstancePropertyIndexAndPhysicsAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets_MetaData), Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets_MetaData) }; // 1175420027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewProp_AnimInstancePropertyIndexAndPhysicsAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"AnimBpGeneratedPhysicsAssets",
		Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::PropPointers),
		sizeof(FAnimBpGeneratedPhysicsAssets),
		alignof(FAnimBpGeneratedPhysicsAssets),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets.InnerSingleton, Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets.InnerSingleton;
	}
	void UCustomizableInstancePrivateData::StaticRegisterNativesUCustomizableInstancePrivateData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableInstancePrivateData);
	UClass* Z_Construct_UClass_UCustomizableInstancePrivateData_NoRegister()
	{
		return UCustomizableInstancePrivateData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableInstancePrivateData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTextures;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TextureReuseCache_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureReuseCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureReuseCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TextureReuseCache;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothingPhysicsAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingPhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothingPhysicsAssets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GatheredAnimBPs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GatheredAnimBPs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GatheredAnimBPs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBPGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimBPGameplayTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimBpPhysicsAssets_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimBpPhysicsAssets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBpPhysicsAssets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AnimBpPhysicsAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCO/CustomizableInstancePrivateData.h" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_Inner = { "GeneratedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeneratedMaterial, METADATA_PARAMS(0, nullptr) }; // 4144949998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials = { "GeneratedMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, GeneratedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_MetaData) }; // 4144949998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_Inner = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeneratedTexture, METADATA_PARAMS(0, nullptr) }; // 4040037456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, GeneratedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_MetaData) }; // 4040037456
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_ValueProp = { "TextureReuseCache", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_Key_KeyProp = { "TextureReuseCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_MetaData[] = {
		{ "Comment", "// If Texture reuse is enabled, stores which texture is being used in a particular <LODIndex, ComponentIndex, MeshSurfaceIndex, image>\n// \\TODO: Create a key based on a struct instead of generating strings dynamically.\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "If Texture reuse is enabled, stores which texture is being used in a particular <LODIndex, ComponentIndex, MeshSurfaceIndex, image>\n\\TODO: Create a key based on a struct instead of generating strings dynamically." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache = { "TextureReuseCache", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, TextureReuseCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_Inner = { "ComponentsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableInstanceComponentData, METADATA_PARAMS(0, nullptr) }; // 3926082206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData = { "ComponentsData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, ComponentsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_MetaData) }; // 3926082206
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_Inner = { "ReferencedMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials = { "ReferencedMaterials", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, ReferencedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_Inner = { "ClothingPhysicsAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets = { "ClothingPhysicsAssets", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, ClothingPhysicsAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_Inner = { "GatheredAnimBPs", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// To keep loaded AnimBPs referenced and prevent GC\n" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
		{ "ToolTip", "To keep loaded AnimBPs referenced and prevent GC" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs = { "GatheredAnimBPs", nullptr, (EPropertyFlags)0x0014000000022041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, GatheredAnimBPs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags = { "AnimBPGameplayTags", nullptr, (EPropertyFlags)0x0010000000022041, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, AnimBPGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags_MetaData) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_ValueProp = { "AnimBpPhysicsAssets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets, METADATA_PARAMS(0, nullptr) }; // 2339842265
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_Key_KeyProp = { "AnimBpPhysicsAssets_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Private/MuCO/CustomizableInstancePrivateData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets = { "AnimBpPhysicsAssets", nullptr, (EPropertyFlags)0x0010000000022041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableInstancePrivateData, AnimBpPhysicsAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_MetaData), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_MetaData) }; // 2339842265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GeneratedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_TextureReuseCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ComponentsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ReferencedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_ClothingPhysicsAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_GatheredAnimBPs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBPGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::NewProp_AnimBpPhysicsAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableInstancePrivateData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::ClassParams = {
		&UCustomizableInstancePrivateData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableInstancePrivateData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableInstancePrivateData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableInstancePrivateData.OuterSingleton, Z_Construct_UClass_UCustomizableInstancePrivateData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableInstancePrivateData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableInstancePrivateData>()
	{
		return UCustomizableInstancePrivateData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableInstancePrivateData);
	UCustomizableInstancePrivateData::~UCustomizableInstancePrivateData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ScriptStructInfo[] = {
		{ FGeneratedTexture::StaticStruct, Z_Construct_UScriptStruct_FGeneratedTexture_Statics::NewStructOps, TEXT("GeneratedTexture"), &Z_Registration_Info_UScriptStruct_GeneratedTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneratedTexture), 4040037456U) },
		{ FGeneratedMaterial::StaticStruct, Z_Construct_UScriptStruct_FGeneratedMaterial_Statics::NewStructOps, TEXT("GeneratedMaterial"), &Z_Registration_Info_UScriptStruct_GeneratedMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeneratedMaterial), 4144949998U) },
		{ FReferencedPhysicsAssets::StaticStruct, Z_Construct_UScriptStruct_FReferencedPhysicsAssets_Statics::NewStructOps, TEXT("ReferencedPhysicsAssets"), &Z_Registration_Info_UScriptStruct_ReferencedPhysicsAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencedPhysicsAssets), 141099612U) },
		{ FReferencedSkeletons::StaticStruct, Z_Construct_UScriptStruct_FReferencedSkeletons_Statics::NewStructOps, TEXT("ReferencedSkeletons"), &Z_Registration_Info_UScriptStruct_ReferencedSkeletons, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencedSkeletons), 1506977953U) },
		{ FCustomizableInstanceComponentData::StaticStruct, Z_Construct_UScriptStruct_FCustomizableInstanceComponentData_Statics::NewStructOps, TEXT("CustomizableInstanceComponentData"), &Z_Registration_Info_UScriptStruct_CustomizableInstanceComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableInstanceComponentData), 3926082206U) },
		{ FAnimInstanceOverridePhysicsAsset::StaticStruct, Z_Construct_UScriptStruct_FAnimInstanceOverridePhysicsAsset_Statics::NewStructOps, TEXT("AnimInstanceOverridePhysicsAsset"), &Z_Registration_Info_UScriptStruct_AnimInstanceOverridePhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimInstanceOverridePhysicsAsset), 1175420027U) },
		{ FAnimBpGeneratedPhysicsAssets::StaticStruct, Z_Construct_UScriptStruct_FAnimBpGeneratedPhysicsAssets_Statics::NewStructOps, TEXT("AnimBpGeneratedPhysicsAssets"), &Z_Registration_Info_UScriptStruct_AnimBpGeneratedPhysicsAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimBpGeneratedPhysicsAssets), 2339842265U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableInstancePrivateData, UCustomizableInstancePrivateData::StaticClass, TEXT("UCustomizableInstancePrivateData"), &Z_Registration_Info_UClass_UCustomizableInstancePrivateData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableInstancePrivateData), 3587069785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_4164085481(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableInstancePrivateData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../Public/MuCOE/CustomizableObjectEditor_Deprecated.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeSkeletalMesh() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMesh();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::StaticRegisterNativesUCustomizableObjectNodeSkeletalMeshRemapPinsBySection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSkeletalMeshRemapPinsBySection);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_NoRegister()
	{
		return UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Remap pins by pin PinData. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "Remap pins by pin PinData." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSkeletalMeshRemapPinsBySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::ClassParams = {
		&UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSkeletalMeshRemapPinsBySection>()
	{
		return UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::StaticClass();
	}
	UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::UCustomizableObjectNodeSkeletalMeshRemapPinsBySection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSkeletalMeshRemapPinsBySection);
	UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::~UCustomizableObjectNodeSkeletalMeshRemapPinsBySection() {}
	void UCustomizableObjectNodeSkeletalMeshPinDataSection::StaticRegisterNativesUCustomizableObjectNodeSkeletalMeshPinDataSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSkeletalMeshPinDataSection);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_NoRegister()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataSection::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodePinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PinData of a pin that belongs to a Skeletal Mesh Section. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "PinData of a pin that belongs to a Skeletal Mesh Section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_LODIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMeshPinDataSection, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_LODIndex_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_LODIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMeshPinDataSection, SectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_SectionIndex_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_SectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::NewProp_SectionIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSkeletalMeshPinDataSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::ClassParams = {
		&UCustomizableObjectNodeSkeletalMeshPinDataSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSkeletalMeshPinDataSection>()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataSection::StaticClass();
	}
	UCustomizableObjectNodeSkeletalMeshPinDataSection::UCustomizableObjectNodeSkeletalMeshPinDataSection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSkeletalMeshPinDataSection);
	UCustomizableObjectNodeSkeletalMeshPinDataSection::~UCustomizableObjectNodeSkeletalMeshPinDataSection() {}
	void UCustomizableObjectNodeSkeletalMeshPinDataMesh::StaticRegisterNativesUCustomizableObjectNodeSkeletalMeshPinDataMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSkeletalMeshPinDataMesh);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_NoRegister()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataMesh::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PinData of a Mesh pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "PinData of a Mesh pin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSkeletalMeshPinDataMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::ClassParams = {
		&UCustomizableObjectNodeSkeletalMeshPinDataMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSkeletalMeshPinDataMesh>()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataMesh::StaticClass();
	}
	UCustomizableObjectNodeSkeletalMeshPinDataMesh::UCustomizableObjectNodeSkeletalMeshPinDataMesh() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSkeletalMeshPinDataMesh);
	UCustomizableObjectNodeSkeletalMeshPinDataMesh::~UCustomizableObjectNodeSkeletalMeshPinDataMesh() {}
	void UCustomizableObjectNodeSkeletalMeshPinDataImage::StaticRegisterNativesUCustomizableObjectNodeSkeletalMeshPinDataImage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSkeletalMeshPinDataImage);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_NoRegister()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataImage::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameterId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PinData of a Image pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "PinData of a Image pin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::NewProp_TextureParameterId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::NewProp_TextureParameterId = { "TextureParameterId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMeshPinDataImage, TextureParameterId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::NewProp_TextureParameterId_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::NewProp_TextureParameterId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::NewProp_TextureParameterId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSkeletalMeshPinDataImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::ClassParams = {
		&UCustomizableObjectNodeSkeletalMeshPinDataImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSkeletalMeshPinDataImage>()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataImage::StaticClass();
	}
	UCustomizableObjectNodeSkeletalMeshPinDataImage::UCustomizableObjectNodeSkeletalMeshPinDataImage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSkeletalMeshPinDataImage);
	UCustomizableObjectNodeSkeletalMeshPinDataImage::~UCustomizableObjectNodeSkeletalMeshPinDataImage() {}
	void UCustomizableObjectNodeSkeletalMeshPinDataLayout::StaticRegisterNativesUCustomizableObjectNodeSkeletalMeshPinDataLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSkeletalMeshPinDataLayout);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_NoRegister()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataLayout::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PinData of a Layout pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "PinData of a Layout pin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::NewProp_UVIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::NewProp_UVIndex = { "UVIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMeshPinDataLayout, UVIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::NewProp_UVIndex_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::NewProp_UVIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::NewProp_UVIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSkeletalMeshPinDataLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::ClassParams = {
		&UCustomizableObjectNodeSkeletalMeshPinDataLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSkeletalMeshPinDataLayout>()
	{
		return UCustomizableObjectNodeSkeletalMeshPinDataLayout::StaticClass();
	}
	UCustomizableObjectNodeSkeletalMeshPinDataLayout::UCustomizableObjectNodeSkeletalMeshPinDataLayout() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSkeletalMeshPinDataLayout);
	UCustomizableObjectNodeSkeletalMeshPinDataLayout::~UCustomizableObjectNodeSkeletalMeshPinDataLayout() {}
	void UCustomizableObjectNodeSkeletalMesh::StaticRegisterNativesUCustomizableObjectNodeSkeletalMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeSkeletalMesh);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_NoRegister()
	{
		return UCustomizableObjectNodeSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UsedRealTimeMorphTargetNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedRealTimeMorphTargetNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedRealTimeMorphTargetNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAllRealTimeMorphs_MetaData[];
#endif
		static void NewProp_bUseAllRealTimeMorphs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAllRealTimeMorphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimBlueprintSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimBlueprintSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationGameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationGameplayTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_DefaultPin_MetaData[] = {
		{ "Comment", "/** Default pin when there is no mesh. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "Default pin when there is no mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_DefaultPin = { "DefaultPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, DefaultPin), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_DefaultPin_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_DefaultPin_MetaData) }; // 3793911982
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames_Inner = { "UsedRealTimeMorphTargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Morphs */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "Morphs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames = { "UsedRealTimeMorphTargetNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, UsedRealTimeMorphTargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeSkeletalMesh*)Obj)->bUseAllRealTimeMorphs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs = { "bUseAllRealTimeMorphs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeSkeletalMesh), &Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** The anim instance that will be gathered by a Generated instance if it contains this skeletal mesh part, \n\x09\x09it will be grouped by component and AnimBlueprintSlot (the next UProperty). */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "The anim instance that will be gathered by a Generated instance if it contains this skeletal mesh part,\n              it will be grouped by component and AnimBlueprintSlot (the next UProperty)." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimInstance_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlot_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlot = { "AnimBlueprintSlot", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, AnimBlueprintSlot_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlot_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlotName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** The anim slot associated with the AnimInstance */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "The anim slot associated with the AnimInstance" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlotName = { "AnimBlueprintSlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, AnimBlueprintSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlotName_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimationGameplayTags_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Animation tags that will be gathered by a Generated instance if it contains this skeletal mesh part,\n\x09\x09it will not be grouped by component or AnimBlueprintSlot */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "Animation tags that will be gathered by a Generated instance if it contains this skeletal mesh part,\n              it will not be grouped by component or AnimBlueprintSlot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimationGameplayTags = { "AnimationGameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, AnimationGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimationGameplayTags_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimationGameplayTags_MetaData) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs_Inner = { "LODs", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD, METADATA_PARAMS(0, nullptr) }; // 450742877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs_MetaData[] = {
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeSkeletalMesh.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs = { "LODs", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeSkeletalMesh, LODs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs_MetaData), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs_MetaData) }; // 450742877
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_DefaultPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_UsedRealTimeMorphTargetNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_bUseAllRealTimeMorphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimBlueprintSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_AnimationGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::NewProp_LODs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeSkeletalMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::ClassParams = {
		&UCustomizableObjectNodeSkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMesh.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMesh.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeSkeletalMesh>()
	{
		return UCustomizableObjectNodeSkeletalMesh::StaticClass();
	}
	UCustomizableObjectNodeSkeletalMesh::UCustomizableObjectNodeSkeletalMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeSkeletalMesh);
	UCustomizableObjectNodeSkeletalMesh::~UCustomizableObjectNodeSkeletalMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSkeletalMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSkeletalMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection, UCustomizableObjectNodeSkeletalMeshRemapPinsBySection::StaticClass, TEXT("UCustomizableObjectNodeSkeletalMeshRemapPinsBySection"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshRemapPinsBySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSkeletalMeshRemapPinsBySection), 660136747U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection, UCustomizableObjectNodeSkeletalMeshPinDataSection::StaticClass, TEXT("UCustomizableObjectNodeSkeletalMeshPinDataSection"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSkeletalMeshPinDataSection), 1691308931U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh, UCustomizableObjectNodeSkeletalMeshPinDataMesh::StaticClass, TEXT("UCustomizableObjectNodeSkeletalMeshPinDataMesh"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSkeletalMeshPinDataMesh), 4280978914U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage, UCustomizableObjectNodeSkeletalMeshPinDataImage::StaticClass, TEXT("UCustomizableObjectNodeSkeletalMeshPinDataImage"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSkeletalMeshPinDataImage), 1460760352U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout, UCustomizableObjectNodeSkeletalMeshPinDataLayout::StaticClass, TEXT("UCustomizableObjectNodeSkeletalMeshPinDataLayout"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMeshPinDataLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSkeletalMeshPinDataLayout), 96771336U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeSkeletalMesh, UCustomizableObjectNodeSkeletalMesh::StaticClass, TEXT("UCustomizableObjectNodeSkeletalMesh"), &Z_Registration_Info_UClass_UCustomizableObjectNodeSkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeSkeletalMesh), 2628965298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSkeletalMesh_h_278888418(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeSkeletalMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

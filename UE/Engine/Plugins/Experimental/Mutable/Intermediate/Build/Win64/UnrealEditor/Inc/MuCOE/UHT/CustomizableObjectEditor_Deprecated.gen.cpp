// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCOE/CustomizableObjectEditor_Deprecated.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectEditor_Deprecated() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage;
class UScriptStruct* FCustomizableObjectNodeMaterialImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeMaterialImage"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeMaterialImage>()
{
	return FCustomizableObjectNodeMaterialImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeMaterial\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeMaterial\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeMaterialImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout = { "UVLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, UVLayout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialImage, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_UVLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeMaterialImage",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeMaterialImage),
		alignof(FCustomizableObjectNodeMaterialImage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector;
class UScriptStruct* FCustomizableObjectNodeMaterialVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeMaterialVector"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeMaterialVector>()
{
	return FCustomizableObjectNodeMaterialVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "Deprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeMaterialVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialVector, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialVector, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialVector, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeMaterialVector",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeMaterialVector),
		alignof(FCustomizableObjectNodeMaterialVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar;
class UScriptStruct* FCustomizableObjectNodeMaterialScalar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeMaterialScalar"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeMaterialScalar>()
{
	return FCustomizableObjectNodeMaterialScalar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "Deprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeMaterialScalar>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialScalar, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialScalar, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeMaterialScalar, PinName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_LayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeMaterialScalar",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeMaterialScalar),
		alignof(FCustomizableObjectNodeMaterialScalar),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage;
class UScriptStruct* FCustomizableObjectNodeEditMaterialImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeEditMaterialImage"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeEditMaterialImage>()
{
	return FCustomizableObjectNodeEditMaterialImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeEditMaterial\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeEditMaterial\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeEditMaterialImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeEditMaterialImage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeEditMaterialImage",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeEditMaterialImage),
		alignof(FCustomizableObjectNodeEditMaterialImage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage;
class UScriptStruct* FCustomizableObjectNodeExtendMaterialImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeExtendMaterialImage"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeExtendMaterialImage>()
{
	return FCustomizableObjectNodeExtendMaterialImage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeExtendMaterial\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeExtendMaterial\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeExtendMaterialImage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeExtendMaterialImage, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeExtendMaterialImage",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeExtendMaterialImage),
		alignof(FCustomizableObjectNodeExtendMaterialImage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial;
class UScriptStruct* FCustomizableObjectNodeSkeletalMeshMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeSkeletalMeshMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeSkeletalMeshMaterial>()
{
	return FCustomizableObjectNodeSkeletalMeshMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshPin;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayoutPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayoutPins;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImagePins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPinRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshPinRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutPinsRef_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutPinsRef_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayoutPinsRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePinsRef_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePinsRef_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePinsRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UCustomizableObjectNodeSkeletalMesh\n// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "UCustomizableObjectNodeSkeletalMesh\nDeprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeSkeletalMeshMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPin = { "MeshPin", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, MeshPin_DEPRECATED), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPin_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPin_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins_Inner = { "LayoutPins", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins = { "LayoutPins", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, LayoutPins_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins_Inner = { "ImagePins", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins = { "ImagePins", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, ImagePins_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPinRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPinRef = { "MeshPinRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, MeshPinRef), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPinRef_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPinRef_MetaData) }; // 3793911982
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef_Inner = { "LayoutPinsRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(0, nullptr) }; // 3793911982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef = { "LayoutPinsRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, LayoutPinsRef), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef_MetaData) }; // 3793911982
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef_Inner = { "ImagePinsRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(0, nullptr) }; // 3793911982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef = { "ImagePinsRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshMaterial, ImagePinsRef), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef_MetaData) }; // 3793911982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_MeshPinRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_LayoutPinsRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewProp_ImagePinsRef,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeSkeletalMeshMaterial",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeSkeletalMeshMaterial),
		alignof(FCustomizableObjectNodeSkeletalMeshMaterial),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD;
class UScriptStruct* FCustomizableObjectNodeSkeletalMeshLOD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeSkeletalMeshLOD"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeSkeletalMeshLOD>()
{
	return FCustomizableObjectNodeSkeletalMeshLOD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated, do not use!\n" },
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
		{ "ToolTip", "Deprecated, do not use!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeSkeletalMeshLOD>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial, METADATA_PARAMS(0, nullptr) }; // 1760800030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCOE/CustomizableObjectEditor_Deprecated.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectNodeSkeletalMeshLOD, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials_MetaData) }; // 1760800030
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeSkeletalMeshLOD",
		Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::PropPointers),
		sizeof(FCustomizableObjectNodeSkeletalMeshLOD),
		alignof(FCustomizableObjectNodeSkeletalMeshLOD),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectNodeMaterialImage::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage_Statics::NewStructOps, TEXT("CustomizableObjectNodeMaterialImage"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeMaterialImage), 2495546141U) },
		{ FCustomizableObjectNodeMaterialVector::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector_Statics::NewStructOps, TEXT("CustomizableObjectNodeMaterialVector"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeMaterialVector), 2688269134U) },
		{ FCustomizableObjectNodeMaterialScalar::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar_Statics::NewStructOps, TEXT("CustomizableObjectNodeMaterialScalar"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeMaterialScalar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeMaterialScalar), 827024678U) },
		{ FCustomizableObjectNodeEditMaterialImage::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeEditMaterialImage_Statics::NewStructOps, TEXT("CustomizableObjectNodeEditMaterialImage"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEditMaterialImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeEditMaterialImage), 1837415262U) },
		{ FCustomizableObjectNodeExtendMaterialImage::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeExtendMaterialImage_Statics::NewStructOps, TEXT("CustomizableObjectNodeExtendMaterialImage"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeExtendMaterialImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeExtendMaterialImage), 1412856970U) },
		{ FCustomizableObjectNodeSkeletalMeshMaterial::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshMaterial_Statics::NewStructOps, TEXT("CustomizableObjectNodeSkeletalMeshMaterial"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeSkeletalMeshMaterial), 1760800030U) },
		{ FCustomizableObjectNodeSkeletalMeshLOD::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeSkeletalMeshLOD_Statics::NewStructOps, TEXT("CustomizableObjectNodeSkeletalMeshLOD"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeSkeletalMeshLOD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeSkeletalMeshLOD), 450742877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_1916463087(TEXT("/Script/CustomizableObjectEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditor_Deprecated_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingFixtureGroupItemComponent.h"
#include "DMXAttribute.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingFixtureGroupItemComponent() {}
// Cross Module References
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingFixtureGroupItemComponent::StaticRegisterNativesUDMXPixelMappingFixtureGroupItemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingFixtureGroupItemComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_NoRegister()
	{
		return UDMXPixelMappingFixtureGroupItemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeRExpose_MetaData[];
#endif
		static void NewProp_AttributeRExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeRExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGExpose_MetaData[];
#endif
		static void NewProp_AttributeGExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeGExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBExpose_MetaData[];
#endif
		static void NewProp_AttributeBExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeBExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonochromeExpose_MetaData[];
#endif
		static void NewProp_bMonochromeExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonochromeExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeRInvert_MetaData[];
#endif
		static void NewProp_AttributeRInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeRInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGInvert_MetaData[];
#endif
		static void NewProp_AttributeGInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeGInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBInvert_MetaData[];
#endif
		static void NewProp_AttributeBInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeBInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonochromeInvert_MetaData[];
#endif
		static void NewProp_bMonochromeInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonochromeInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeR_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeG_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonochromeIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MonochromeIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Output Settings" },
		{ "Comment", "/** \n * A component that holds a single Fixture Patch in the Pixel Mapping, and actually sends DMX.\n */" },
		{ "IncludePath", "Components/DMXPixelMappingFixtureGroupItemComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
		{ "ToolTip", "A component that holds a single Fixture Patch in the Pixel Mapping, and actually sends DMX." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode = { "ColorMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupItemComponent, ColorMode_DEPRECATED), Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode_MetaData) }; // 2814557072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->AttributeRExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose = { "AttributeRExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->AttributeGExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose = { "AttributeGExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->AttributeBExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose = { "AttributeBExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->bMonochromeExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose = { "bMonochromeExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->AttributeRInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert = { "AttributeRInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->AttributeGInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert = { "AttributeGInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->AttributeBInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert = { "AttributeBInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingFixtureGroupItemComponent*)Obj)->bMonochromeInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert = { "bMonochromeInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDMXPixelMappingFixtureGroupItemComponent), &Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeR_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeR = { "AttributeR", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupItemComponent, AttributeR_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeR_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeR_MetaData) }; // 3990846017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeG_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeG = { "AttributeG", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupItemComponent, AttributeG_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeG_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeG_MetaData) }; // 3990846017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeB_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeB = { "AttributeB", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupItemComponent, AttributeB_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeB_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeB_MetaData) }; // 3990846017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_MonochromeIntensity_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingFixtureGroupItemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_MonochromeIntensity = { "MonochromeIntensity", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingFixtureGroupItemComponent, MonochromeIntensity_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_MonochromeIntensity_MetaData), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_MonochromeIntensity_MetaData) }; // 3990846017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_ColorMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeRInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeGInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeBInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_bMonochromeInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_AttributeB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::NewProp_MonochromeIntensity,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingFixtureGroupItemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::ClassParams = {
		&UDMXPixelMappingFixtureGroupItemComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupItemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupItemComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupItemComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingFixtureGroupItemComponent>()
	{
		return UDMXPixelMappingFixtureGroupItemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingFixtureGroupItemComponent);
	UDMXPixelMappingFixtureGroupItemComponent::~UDMXPixelMappingFixtureGroupItemComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXPixelMappingFixtureGroupItemComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupItemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupItemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingFixtureGroupItemComponent, UDMXPixelMappingFixtureGroupItemComponent::StaticClass, TEXT("UDMXPixelMappingFixtureGroupItemComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingFixtureGroupItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingFixtureGroupItemComponent), 1200290195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupItemComponent_h_4240792290(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupItemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingFixtureGroupItemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

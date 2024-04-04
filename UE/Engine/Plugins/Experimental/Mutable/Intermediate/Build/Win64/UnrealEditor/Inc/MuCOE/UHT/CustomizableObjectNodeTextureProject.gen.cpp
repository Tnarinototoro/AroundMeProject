// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTextureProject.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTextureProject() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureProjectSamplingMethod;
	static UEnum* ETextureProjectSamplingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureProjectSamplingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureProjectSamplingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ETextureProjectSamplingMethod"));
		}
		return Z_Registration_Info_UEnum_ETextureProjectSamplingMethod.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ETextureProjectSamplingMethod>()
	{
		return ETextureProjectSamplingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::Enumerators[] = {
		{ "ETextureProjectSamplingMethod::Point", (int64)ETextureProjectSamplingMethod::Point },
		{ "ETextureProjectSamplingMethod::BiLinear", (int64)ETextureProjectSamplingMethod::BiLinear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BiLinear.Name", "ETextureProjectSamplingMethod::BiLinear" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "Point.Name", "ETextureProjectSamplingMethod::Point" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ETextureProjectSamplingMethod",
		"ETextureProjectSamplingMethod",
		Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod()
	{
		if (!Z_Registration_Info_UEnum_ETextureProjectSamplingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureProjectSamplingMethod.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureProjectSamplingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod;
	static UEnum* ETextureProjectMinFilterMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ETextureProjectMinFilterMethod"));
		}
		return Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ETextureProjectMinFilterMethod>()
	{
		return ETextureProjectMinFilterMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::Enumerators[] = {
		{ "ETextureProjectMinFilterMethod::None", (int64)ETextureProjectMinFilterMethod::None },
		{ "ETextureProjectMinFilterMethod::TotalAreaHeuristic", (int64)ETextureProjectMinFilterMethod::TotalAreaHeuristic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "None.Name", "ETextureProjectMinFilterMethod::None" },
		{ "TotalAreaHeuristic.Name", "ETextureProjectMinFilterMethod::TotalAreaHeuristic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ETextureProjectMinFilterMethod",
		"ETextureProjectMinFilterMethod",
		Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod()
	{
		if (!Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod.InnerSingleton;
	}
	void UCustomizableObjectNodeTextureProject::StaticRegisterNativesUCustomizableObjectNodeTextureProject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTextureProject);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject_NoRegister()
	{
		return UCustomizableObjectNodeTextureProject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Layout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTextureSeamCorrection_MetaData[];
#endif
		static void NewProp_bEnableTextureSeamCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTextureSeamCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAngleFadeOutForRGB_MetaData[];
#endif
		static void NewProp_bEnableAngleFadeOutForRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAngleFadeOutForRGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAngleFadeOutForAlpha_MetaData[];
#endif
		static void NewProp_bEnableAngleFadeOutForAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAngleFadeOutForAlpha;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplingMethod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinFilterMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFilterMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MinFilterMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePinsReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePinsReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TexturePinsReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPinsReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinsReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPinsReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Layout to use for the generated images.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Layout to use for the generated images." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, Layout), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** When this is enable, additional operations will happen to correct projections that go over a texture UV seam to prevent interpolation artifacts. \n\x09* This is not necessary if the projection is guaranteed to not go over a seam.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "When this is enable, additional operations will happen to correct projections that go over a texture UV seam to prevent interpolation artifacts.\nThis is not necessary if the projection is guaranteed to not go over a seam." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTextureProject*)Obj)->bEnableTextureSeamCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection = { "bEnableTextureSeamCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTextureProject), &Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTextureProject*)Obj)->bEnableAngleFadeOutForRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB = { "bEnableAngleFadeOutForRGB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTextureProject), &Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTextureProject*)Obj)->bEnableAngleFadeOutForAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha = { "bEnableAngleFadeOutForAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomizableObjectNodeTextureProject), &Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod = { "SamplingMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, SamplingMethod), Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectSamplingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod_MetaData) }; // 3129591130
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod = { "MinFilterMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, MinFilterMethod), Z_Construct_UEnum_CustomizableObjectEditor_ETextureProjectMinFilterMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod_MetaData) }; // 3393247937
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Set the width of the Texture. If greater than zero, it overrides the Reference Texture width. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Set the width of the Texture. If greater than zero, it overrides the Reference Texture width." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX = { "TextureSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, TextureSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Set the height of the Texture. If greater than zero, it overrides the Reference Texture height. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Set the height of the Texture. If greater than zero, it overrides the Reference Texture height." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY = { "TextureSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, TextureSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, Textures), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Reference Texture used to decide the texture properties of the mutable-generated textures\n\x09* connected to this material (e.g. LODBias, Size X,...). If null, mutable default texture properties will be applied. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
		{ "ToolTip", "Reference Texture used to decide the texture properties of the mutable-generated textures\nconnected to this material (e.g. LODBias, Size X,...). If null, mutable default texture properties will be applied." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_Inner = { "TexturePinsReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(0, nullptr) }; // 3793911982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences = { "TexturePinsReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, TexturePinsReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_MetaData) }; // 3793911982
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_Inner = { "OutputPinsReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(0, nullptr) }; // 3793911982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureProject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences = { "OutputPinsReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectNodeTextureProject, OutputPinsReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_MetaData), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_MetaData) }; // 3793911982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Layout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableTextureSeamCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_bEnableAngleFadeOutForAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_SamplingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_MinFilterMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TextureSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_TexturePinsReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::NewProp_OutputPinsReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTextureProject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::ClassParams = {
		&UCustomizableObjectNodeTextureProject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureProject()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTextureProject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTextureProject>()
	{
		return UCustomizableObjectNodeTextureProject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTextureProject);
	UCustomizableObjectNodeTextureProject::~UCustomizableObjectNodeTextureProject() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureProject)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::EnumInfo[] = {
		{ ETextureProjectSamplingMethod_StaticEnum, TEXT("ETextureProjectSamplingMethod"), &Z_Registration_Info_UEnum_ETextureProjectSamplingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3129591130U) },
		{ ETextureProjectMinFilterMethod_StaticEnum, TEXT("ETextureProjectMinFilterMethod"), &Z_Registration_Info_UEnum_ETextureProjectMinFilterMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3393247937U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTextureProject, UCustomizableObjectNodeTextureProject::StaticClass, TEXT("UCustomizableObjectNodeTextureProject"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTextureProject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTextureProject), 582498277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_1565356843(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureProject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

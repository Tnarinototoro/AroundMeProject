// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFractal3D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UMaterialExpressionMaterialXFractal3D::StaticRegisterNativesUMaterialExpressionMaterialXFractal3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialXFractal3D);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_NoRegister()
	{
		return UMaterialExpressionMaterialXFractal3D::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Octaves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Octaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstOctaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstOctaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstLacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstLacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Diminish_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Diminish;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstDiminish_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDiminish;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurbulence_MetaData[];
#endif
		static void NewProp_bTurbulence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurbulence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Levels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Zero-centered 3D Fractal noise in 1, 2, 3 or 4 channels, created by summing several\n * octaves of 3D Perlin noise, increasing the frequency and decreasing the amplitude at each octave.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "Private", "" },
		{ "ToolTip", "Zero-centered 3D Fractal noise in 1, 2, 3 or 4 channels, created by summing several\noctaves of 3D Perlin noise, increasing the frequency and decreasing the amplitude at each octave." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** The name of a vector3-type node specifying the 3D position at which the noise is evaluated. By default the vector is in local space*/" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "ToolTip", "The name of a vector3-type node specifying the 3D position at which the noise is evaluated. By default the vector is in local space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Position_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Amplitude_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstAmplitude' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Amplitude), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Amplitude_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Amplitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstAmplitude_MetaData[] = {
		{ "Category", "MaterialExpressionFractal" },
		{ "Comment", "/** only used if Amplitude is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "OverridingInputProperty", "Amplitude" },
		{ "ToolTip", "only used if Amplitude is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstAmplitude = { "ConstAmplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, ConstAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstAmplitude_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstAmplitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Octaves_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstOctaves' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Octaves = { "Octaves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Octaves), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Octaves_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Octaves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstOctaves_MetaData[] = {
		{ "Category", "MaterialExpressionFractal" },
		{ "Comment", "/** only used if Octaves is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "OverridingInputProperty", "Octaves" },
		{ "ToolTip", "only used if Octaves is not hooked up" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstOctaves = { "ConstOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, ConstOctaves), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstOctaves_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstOctaves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Lacunarity_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstLacunarity' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Lacunarity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Lacunarity_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Lacunarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstLacunarity_MetaData[] = {
		{ "Category", "MaterialExpressionFractal" },
		{ "Comment", "/** only used if Lacunarity is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "OverridingInputProperty", "Lacunarity" },
		{ "ToolTip", "only used if Lacunarity is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstLacunarity = { "ConstLacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, ConstLacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstLacunarity_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstLacunarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Diminish_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDiminish' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Diminish = { "Diminish", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Diminish), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Diminish_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Diminish_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstDiminish_MetaData[] = {
		{ "Category", "MaterialExpressionFractal" },
		{ "Comment", "/** only used if Diminish is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "OverridingInputProperty", "Diminish" },
		{ "ToolTip", "only used if Diminish is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstDiminish = { "ConstDiminish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, ConstDiminish), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstDiminish_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstDiminish_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** can also be done with a multiply on the Position */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "ToolTip", "can also be done with a multiply on the Position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** How multiple frequencies are getting combined */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "ToolTip", "How multiple frequencies are getting combined" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence_SetBit(void* Obj)
	{
		((UMaterialExpressionMaterialXFractal3D*)Obj)->bTurbulence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence = { "bTurbulence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionMaterialXFractal3D), &Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Levels_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** 1 = fast but little detail, .. larger numbers cost more performance */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
		{ "ToolTip", "1 = fast but little detail, .. larger numbers cost more performance" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, Levels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Levels_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Levels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMin_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMin = { "OutputMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, OutputMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMin_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMax_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionFractal3D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMax = { "OutputMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXFractal3D, OutputMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMax_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMax_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Octaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstOctaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstLacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Diminish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_ConstDiminish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_bTurbulence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_Levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::NewProp_OutputMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialXFractal3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::ClassParams = {
		&UMaterialExpressionMaterialXFractal3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionMaterialXFractal3D>()
	{
		return UMaterialExpressionMaterialXFractal3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialXFractal3D);
	UMaterialExpressionMaterialXFractal3D::~UMaterialExpressionMaterialXFractal3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionFractal3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionFractal3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialXFractal3D, UMaterialExpressionMaterialXFractal3D::StaticClass, TEXT("UMaterialExpressionMaterialXFractal3D"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialXFractal3D), 2278682375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionFractal3D_h_3629966370(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionFractal3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionFractal3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

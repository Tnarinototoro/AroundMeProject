// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRemap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXRemap();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialXRemap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UMaterialExpressionMaterialXRemap::StaticRegisterNativesUMaterialExpressionMaterialXRemap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialXRemap);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialXRemap_NoRegister()
	{
		return UMaterialExpressionMaterialXRemap::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputLow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputHigh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHigh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetHigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputLowDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputLowDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputHighDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputHighDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLowDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLowDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetHighDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHighDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material expression that Remap a value from one range to another.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "Private", "" },
		{ "ToolTip", "A material expression that Remap a value from one range to another." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_Input_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_Input_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLow_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MinDefault1' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLow = { "InputLow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, InputLow), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLow_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHigh_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MaxDefault1' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHigh = { "InputHigh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, InputHigh), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHigh_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHigh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLow_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MinDefault2' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLow = { "TargetLow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, TargetLow), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLow_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHigh_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MaxDefault1' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHigh = { "TargetHigh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, TargetHigh), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHigh_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHigh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLowDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "OverridingInputProperty", "InputLow" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLowDefault = { "InputLowDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, InputLowDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLowDefault_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLowDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHighDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "OverridingInputProperty", "InputHigh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHighDefault = { "InputHighDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, InputHighDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHighDefault_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHighDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLowDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "OverridingInputProperty", "TargetLow" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLowDefault = { "TargetLowDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, TargetLowDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLowDefault_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLowDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHighDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressions/MaterialExpressionRemap.h" },
		{ "OverridingInputProperty", "TargetHigh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHighDefault = { "TargetHighDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionMaterialXRemap, TargetHighDefault), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHighDefault_MetaData), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHighDefault_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputLowDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_InputHighDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetLowDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::NewProp_TargetHighDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialXRemap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::ClassParams = {
		&UMaterialExpressionMaterialXRemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialXRemap()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialXRemap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionMaterialXRemap>()
	{
		return UMaterialExpressionMaterialXRemap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialXRemap);
	UMaterialExpressionMaterialXRemap::~UMaterialExpressionMaterialXRemap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionRemap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionRemap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialXRemap, UMaterialExpressionMaterialXRemap::StaticClass, TEXT("UMaterialExpressionMaterialXRemap"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialXRemap), 387200755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionRemap_h_3915283279(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionRemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionRemap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

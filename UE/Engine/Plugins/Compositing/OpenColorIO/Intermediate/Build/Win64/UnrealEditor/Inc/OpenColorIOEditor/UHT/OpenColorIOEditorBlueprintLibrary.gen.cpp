// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIOEditorBlueprintLibrary.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOEditorBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary();
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenColorIOEditor();
// End Cross Module References
	DEFINE_FUNCTION(UOpenColorIOEditorBlueprintLibrary::execApplyColorSpaceTransformToTextureCompressed)
	{
		P_GET_STRUCT_REF(FOpenColorIOColorConversionSettings,Z_Param_Out_ConversionSettings);
		P_GET_PROPERTY(FByteProperty,Z_Param_TargetCompression);
		P_GET_OBJECT(UTexture,Z_Param_InOutTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenColorIOEditorBlueprintLibrary::ApplyColorSpaceTransformToTextureCompressed(Z_Param_Out_ConversionSettings,TextureCompressionSettings(Z_Param_TargetCompression),Z_Param_InOutTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIOEditorBlueprintLibrary::execApplyColorSpaceTransformToTexture)
	{
		P_GET_STRUCT_REF(FOpenColorIOColorConversionSettings,Z_Param_Out_ConversionSettings);
		P_GET_OBJECT(UTexture,Z_Param_InOutTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenColorIOEditorBlueprintLibrary::ApplyColorSpaceTransformToTexture(Z_Param_Out_ConversionSettings,Z_Param_InOutTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenColorIOEditorBlueprintLibrary::execSetActiveViewportConfiguration)
	{
		P_GET_STRUCT_REF(FOpenColorIODisplayConfiguration,Z_Param_Out_InConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenColorIOEditorBlueprintLibrary::SetActiveViewportConfiguration(Z_Param_Out_InConfiguration);
		P_NATIVE_END;
	}
	void UOpenColorIOEditorBlueprintLibrary::StaticRegisterNativesUOpenColorIOEditorBlueprintLibrary()
	{
		UClass* Class = UOpenColorIOEditorBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyColorSpaceTransformToTexture", &UOpenColorIOEditorBlueprintLibrary::execApplyColorSpaceTransformToTexture },
			{ "ApplyColorSpaceTransformToTextureCompressed", &UOpenColorIOEditorBlueprintLibrary::execApplyColorSpaceTransformToTextureCompressed },
			{ "SetActiveViewportConfiguration", &UOpenColorIOEditorBlueprintLibrary::execSetActiveViewportConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics
	{
		struct OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms
		{
			FOpenColorIOColorConversionSettings ConversionSettings;
			UTexture* InOutTexture;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutTexture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms, ConversionSettings), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ConversionSettings_MetaData), Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ConversionSettings_MetaData) }; // 1425686863
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_InOutTexture = { "InOutTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms, InOutTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms), &Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ConversionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_InOutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "/**\n\x09 * Apply a color space transform to a texture asset.\n\x09 *\n\x09 * @param ConversionSettings Color transformation settings.\n\x09 * @param InOutTexture Texture object to transform.\n\x09 * @return true upon success.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenColorIOEditorBlueprintLibrary.h" },
		{ "ToolTip", "Apply a color space transform to a texture asset.\n\n@param ConversionSettings Color transformation settings.\n@param InOutTexture Texture object to transform.\n@return true upon success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary, nullptr, "ApplyColorSpaceTransformToTexture", nullptr, nullptr, Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics
	{
		struct OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms
		{
			FOpenColorIOColorConversionSettings ConversionSettings;
			TEnumAsByte<TextureCompressionSettings> TargetCompression;
			UTexture* InOutTexture;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetCompression;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutTexture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms, ConversionSettings), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ConversionSettings_MetaData), Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ConversionSettings_MetaData) }; // 1425686863
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_TargetCompression = { "TargetCompression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms, TargetCompression), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(0, nullptr) }; // 2375546358
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_InOutTexture = { "InOutTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms, InOutTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms), &Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ConversionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_TargetCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_InOutTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "/**\n\x09 * Apply a color space transform with a target compression setting to a texture asset.\n\x09 *\n\x09 * @param ConversionSettings Color transformation settings.\n\x09 * @param TargetCompression Target texture compression setting.\n\x09 * @param InOutTexture Texture object to transform.\n\x09 * @return true upon success.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenColorIOEditorBlueprintLibrary.h" },
		{ "ToolTip", "Apply a color space transform with a target compression setting to a texture asset.\n\n@param ConversionSettings Color transformation settings.\n@param TargetCompression Target texture compression setting.\n@param InOutTexture Texture object to transform.\n@return true upon success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary, nullptr, "ApplyColorSpaceTransformToTextureCompressed", nullptr, nullptr, Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::OpenColorIOEditorBlueprintLibrary_eventApplyColorSpaceTransformToTextureCompressed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics
	{
		struct OpenColorIOEditorBlueprintLibrary_eventSetActiveViewportConfiguration_Parms
		{
			FOpenColorIODisplayConfiguration InConfiguration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::NewProp_InConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::NewProp_InConfiguration = { "InConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenColorIOEditorBlueprintLibrary_eventSetActiveViewportConfiguration_Parms, InConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::NewProp_InConfiguration_MetaData), Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::NewProp_InConfiguration_MetaData) }; // 128667361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::NewProp_InConfiguration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenColorIO" },
		{ "Comment", "/**\n\x09 * Set the active editor viewport's display configuration color transform .\n\x09 *\n\x09 * @param InDisplayConfiguration Display configuration color transform\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenColorIOEditorBlueprintLibrary.h" },
		{ "ToolTip", "Set the active editor viewport's display configuration color transform .\n\n@param InDisplayConfiguration Display configuration color transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary, nullptr, "SetActiveViewportConfiguration", nullptr, nullptr, Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::OpenColorIOEditorBlueprintLibrary_eventSetActiveViewportConfiguration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::OpenColorIOEditorBlueprintLibrary_eventSetActiveViewportConfiguration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOEditorBlueprintLibrary);
	UClass* Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_NoRegister()
	{
		return UOpenColorIOEditorBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIOEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTexture, "ApplyColorSpaceTransformToTexture" }, // 3565839939
		{ &Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_ApplyColorSpaceTransformToTextureCompressed, "ApplyColorSpaceTransformToTextureCompressed" }, // 3003283848
		{ &Z_Construct_UFunction_UOpenColorIOEditorBlueprintLibrary_SetActiveViewportConfiguration, "SetActiveViewportConfiguration" }, // 282000510
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenColorIOEditorBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenColorIOEditorBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOEditorBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::ClassParams = {
		&UOpenColorIOEditorBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOEditorBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOEditorBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOEditorBlueprintLibrary.OuterSingleton;
	}
	template<> OPENCOLORIOEDITOR_API UClass* StaticClass<UOpenColorIOEditorBlueprintLibrary>()
	{
		return UOpenColorIOEditorBlueprintLibrary::StaticClass();
	}
	UOpenColorIOEditorBlueprintLibrary::UOpenColorIOEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOEditorBlueprintLibrary);
	UOpenColorIOEditorBlueprintLibrary::~UOpenColorIOEditorBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Public_OpenColorIOEditorBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Public_OpenColorIOEditorBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOEditorBlueprintLibrary, UOpenColorIOEditorBlueprintLibrary::StaticClass, TEXT("UOpenColorIOEditorBlueprintLibrary"), &Z_Registration_Info_UClass_UOpenColorIOEditorBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOEditorBlueprintLibrary), 2908213673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Public_OpenColorIOEditorBlueprintLibrary_h_2948561133(TEXT("/Script/OpenColorIOEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Public_OpenColorIOEditorBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Public_OpenColorIOEditorBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

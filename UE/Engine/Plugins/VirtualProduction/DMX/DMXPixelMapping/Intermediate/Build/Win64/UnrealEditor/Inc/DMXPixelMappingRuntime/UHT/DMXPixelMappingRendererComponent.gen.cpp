// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingRendererComponent.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingRendererComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType();
	DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_NoRegister();
	DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXPixelMappingRendererComponent::execGetPixelMappingComponentModulators)
	{
		P_GET_STRUCT(FDMXEntityFixturePatchRef,Z_Param_FixturePatchRef);
		P_GET_TARRAY_REF(UDMXModulator*,Z_Param_Out_DMXModulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPixelMappingComponentModulators(Z_Param_FixturePatchRef,Z_Param_Out_DMXModulators);
		P_NATIVE_END;
	}
	void UDMXPixelMappingRendererComponent::StaticRegisterNativesUDMXPixelMappingRendererComponent()
	{
		UClass* Class = UDMXPixelMappingRendererComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPixelMappingComponentModulators", &UDMXPixelMappingRendererComponent::execGetPixelMappingComponentModulators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics
	{
		struct DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms
		{
			FDMXEntityFixturePatchRef FixturePatchRef;
			TArray<UDMXModulator*> DMXModulators;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXModulators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DMXModulators;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_FixturePatchRef = { "FixturePatchRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms, FixturePatchRef), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(0, nullptr) }; // 1092920056
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_DMXModulators_Inner = { "DMXModulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXModulator_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_DMXModulators = { "DMXModulators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms, DMXModulators), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms), &Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_FixturePatchRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_DMXModulators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_DMXModulators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Returns the Modulators of the component corresponding to the patch specified.\n\x09 * Note, this node does a lookup on all fixture patches in use, hence may be slow and shouldn't be called on tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "Returns the Modulators of the component corresponding to the patch specified.\nNote, this node does a lookup on all fixture patches in use, hence may be slow and shouldn't be called on tick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingRendererComponent, nullptr, "GetPixelMappingComponentModulators", nullptr, nullptr, Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::DMXPixelMappingRendererComponent_eventGetPixelMappingComponentModulators_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingRendererComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister()
	{
		return UDMXPixelMappingRendererComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RendererType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RendererType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayoutScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreprocessRenderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreprocessRenderer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelMapRenderer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PixelMapRenderer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownsampleBufferTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DownsampleBufferTarget;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewRenderTarget;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMappingRendererComponent_GetPixelMappingComponentModulators, "GetPixelMappingComponentModulators" }, // 625959162
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Component for rendering input texture.  \n */" },
		{ "IncludePath", "Components/DMXPixelMappingRendererComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "Component for rendering input texture." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/** Type of rendering, Texture, Material, UMG, etc... */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "Type of rendering, Texture, Material, UMG, etc..." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType = { "RendererType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, RendererType), Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType_MetaData) }; // 4122915406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputTexture_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/** The texture used for pixel mapping */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "The texture used for pixel mapping" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputTexture = { "InputTexture", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, InputTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputTexture_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputMaterial_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/** The material used for pixel mapping */" },
		{ "DisplayName", "User Interface Material" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "The material used for pixel mapping" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputMaterial = { "InputMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, InputMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputMaterial_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputWidget_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/** The UMG widget used for pixel mapping */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "The UMG widget used for pixel mapping" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputWidget = { "InputWidget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, InputWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputWidget_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The brightness of the renderer */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "The brightness of the renderer" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_Brightness_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_Brightness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_LayoutScript_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Layout script for the children of this component (hidden in customizations and displayed in its own panel). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "Layout script for the children of this component (hidden in customizations and displayed in its own panel)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_LayoutScript = { "LayoutScript", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, LayoutScript), Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_LayoutScript_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_LayoutScript_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_UserWidget_MetaData[] = {
		{ "Comment", "/** The user widget instance currently in use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "The user widget instance currently in use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_UserWidget_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_UserWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreprocessRenderer_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Renderer responsible to preprocess the input texture / material / user widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "Renderer responsible to preprocess the input texture / material / user widget" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreprocessRenderer = { "PreprocessRenderer", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, PreprocessRenderer), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreprocessRenderer_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreprocessRenderer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PixelMapRenderer_MetaData[] = {
		{ "Comment", "/** Renderer responsible to pixel map */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
		{ "ToolTip", "Renderer responsible to pixel map" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PixelMapRenderer = { "PixelMapRenderer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, PixelMapRenderer), Z_Construct_UClass_UDMXPixelMappingPixelMapRenderer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PixelMapRenderer_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PixelMapRenderer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_DownsampleBufferTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_DownsampleBufferTarget = { "DownsampleBufferTarget", nullptr, (EPropertyFlags)0x0044000020202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, DownsampleBufferTarget_DEPRECATED), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_DownsampleBufferTarget_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_DownsampleBufferTarget_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreviewRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreviewRenderTarget = { "PreviewRenderTarget", nullptr, (EPropertyFlags)0x0044000820202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXPixelMappingRendererComponent, PreviewRenderTarget_DEPRECATED), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreviewRenderTarget_MetaData), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreviewRenderTarget_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_RendererType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_InputWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_LayoutScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_UserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreprocessRenderer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PixelMapRenderer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_DownsampleBufferTarget,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::NewProp_PreviewRenderTarget,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingRendererComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::ClassParams = {
		&UDMXPixelMappingRendererComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingRendererComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingRendererComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingRendererComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingRendererComponent>()
	{
		return UDMXPixelMappingRendererComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingRendererComponent);
	UDMXPixelMappingRendererComponent::~UDMXPixelMappingRendererComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingRendererComponent, UDMXPixelMappingRendererComponent::StaticClass, TEXT("UDMXPixelMappingRendererComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingRendererComponent), 3485311126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_3914441136(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

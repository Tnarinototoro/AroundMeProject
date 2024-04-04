// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPFullScreenUserWidget_PostProcessBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWindowVisibility();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase;
class UScriptStruct* FVPFullScreenUserWidget_PostProcessBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPFullScreenUserWidget_PostProcessBase"));
	}
	return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPFullScreenUserWidget_PostProcessBase>()
{
	return FVPFullScreenUserWidget_PostProcessBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessTintColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessTintColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessOpacityFromTexture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessOpacityFromTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWidgetDrawSize_MetaData[];
#endif
		static void NewProp_bUseWidgetDrawSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWidgetDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[];
#endif
		static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetBackgroundColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetBlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderTargetBlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements shared widget initialization logic.\n */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Implements shared widget initialization logic." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPFullScreenUserWidget_PostProcessBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessMaterial_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/**\n\x09 * Post process material used to display the widget.\n\x09 * SlateUI [Texture]\n\x09 * TintColorAndOpacity [Vector]\n\x09 * OpacityFromTexture [Scalar]\n\x09 */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Post process material used to display the widget.\nSlateUI [Texture]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, PostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessMaterial_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Tint color and opacity for this component. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Tint color and opacity for this component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessTintColorAndOpacity = { "PostProcessTintColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, PostProcessTintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessOpacityFromTexture_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0). */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessOpacityFromTexture = { "PostProcessOpacityFromTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, PostProcessOpacityFromTexture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessOpacityFromTexture_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessOpacityFromTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Whether to overwrite the size of the rendered widget. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Whether to overwrite the size of the rendered widget." },
	};
#endif
	void Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize_SetBit(void* Obj)
	{
		((FVPFullScreenUserWidget_PostProcessBase*)Obj)->bUseWidgetDrawSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize = { "bUseWidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVPFullScreenUserWidget_PostProcessBase), &Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The size of the rendered widget. */" },
		{ "EditCondition", "bWidgetDrawSize" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "The size of the rendered widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetDrawSize = { "WidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, WidgetDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetDrawSize_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetDrawSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Is the virtual window created to host the widget focusable? */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
	};
#endif
	void Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((FVPFullScreenUserWidget_PostProcessBase*)Obj)->bWindowFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVPFullScreenUserWidget_PostProcessBase), &Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The visibility of the virtual window created to host the widget. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "The visibility of the virtual window created to host the widget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility = { "WindowVisibility", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, WindowVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility_MetaData) }; // 1279498516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport." },
	};
#endif
	void Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
	{
		((FVPFullScreenUserWidget_PostProcessBase*)Obj)->bReceiveHardwareInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVPFullScreenUserWidget_PostProcessBase), &Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBackgroundColor_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The background color of the render target */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "The background color of the render target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBackgroundColor = { "RenderTargetBackgroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, RenderTargetBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBackgroundColor_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBackgroundColor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The blend mode for the widget. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "The blend mode for the widget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode = { "RenderTargetBlendMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, RenderTargetBlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode_MetaData) }; // 920142598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetRenderTarget_MetaData[] = {
		{ "Comment", "/** The target to which the user widget is rendered. */" },
		{ "ModuleRelativePath", "Public/Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessBase.h" },
		{ "ToolTip", "The target to which the user widget is rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetRenderTarget = { "WidgetRenderTarget", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcessBase, WidgetRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetRenderTarget_MetaData), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetRenderTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessTintColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_PostProcessOpacityFromTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bUseWidgetDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bWindowFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WindowVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_bReceiveHardwareInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_RenderTargetBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewProp_WidgetRenderTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		&NewStructOps,
		"VPFullScreenUserWidget_PostProcessBase",
		Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::PropPointers),
		sizeof(FVPFullScreenUserWidget_PostProcessBase),
		alignof(FVPFullScreenUserWidget_PostProcessBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase()
	{
		if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase.InnerSingleton, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessBase_h_Statics::ScriptStructInfo[] = {
		{ FVPFullScreenUserWidget_PostProcessBase::StaticStruct, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessBase_Statics::NewStructOps, TEXT("VPFullScreenUserWidget_PostProcessBase"), &Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcessBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPFullScreenUserWidget_PostProcessBase), 2913444677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessBase_h_634975926(TEXT("/Script/VPUtilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_Fullscreen_VPFullScreenUserWidget_PostProcessBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

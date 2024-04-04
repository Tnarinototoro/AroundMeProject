// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/VPFullScreenUserWidget.h"
#include "Widgets/Fullscreen/VPFullScreenUserWidget_PostProcess.h"
#include "Widgets/Fullscreen/VPFullScreenUserWidget_PostProcessWithSVE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPFullScreenUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister();
	VPUTILITIES_API UEnum* Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVPWidgetDisplayType;
	static UEnum* EVPWidgetDisplayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVPWidgetDisplayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVPWidgetDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("EVPWidgetDisplayType"));
		}
		return Z_Registration_Info_UEnum_EVPWidgetDisplayType.OuterSingleton;
	}
	template<> VPUTILITIES_API UEnum* StaticEnum<EVPWidgetDisplayType>()
	{
		return EVPWidgetDisplayType_StaticEnum();
	}
	struct Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enumerators[] = {
		{ "EVPWidgetDisplayType::Inactive", (int64)EVPWidgetDisplayType::Inactive },
		{ "EVPWidgetDisplayType::Viewport", (int64)EVPWidgetDisplayType::Viewport },
		{ "EVPWidgetDisplayType::PostProcessWithBlendMaterial", (int64)EVPWidgetDisplayType::PostProcessWithBlendMaterial },
		{ "EVPWidgetDisplayType::Composure", (int64)EVPWidgetDisplayType::Composure },
		{ "EVPWidgetDisplayType::PostProcessSceneViewExtension", (int64)EVPWidgetDisplayType::PostProcessSceneViewExtension },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Composure.Comment", "/** Render to a texture and send to composure. */" },
		{ "Composure.Name", "EVPWidgetDisplayType::Composure" },
		{ "Composure.ToolTip", "Render to a texture and send to composure." },
		{ "Inactive.Comment", "/** Do not display. */" },
		{ "Inactive.Name", "EVPWidgetDisplayType::Inactive" },
		{ "Inactive.ToolTip", "Do not display." },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "PostProcessSceneViewExtension.Comment", "/** Display by adding post process material via SceneViewExtensions. Widget added over entire viewport ignoring anamorphic squeeze.  */" },
		{ "PostProcessSceneViewExtension.Name", "EVPWidgetDisplayType::PostProcessSceneViewExtension" },
		{ "PostProcessSceneViewExtension.ToolTip", "Display by adding post process material via SceneViewExtensions. Widget added over entire viewport ignoring anamorphic squeeze." },
		{ "PostProcessWithBlendMaterial.Comment", "/** Display by adding post process material via post process volume settings. Widget added only over area rendered by anamorphic squeeze. */" },
		{ "PostProcessWithBlendMaterial.Name", "EVPWidgetDisplayType::PostProcessWithBlendMaterial" },
		{ "PostProcessWithBlendMaterial.ToolTip", "Display by adding post process material via post process volume settings. Widget added only over area rendered by anamorphic squeeze." },
		{ "Viewport.Comment", "/** Display on a game viewport. */" },
		{ "Viewport.Name", "EVPWidgetDisplayType::Viewport" },
		{ "Viewport.ToolTip", "Display on a game viewport." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		"EVPWidgetDisplayType",
		"EVPWidgetDisplayType",
		Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType()
	{
		if (!Z_Registration_Info_UEnum_EVPWidgetDisplayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVPWidgetDisplayType.InnerSingleton, Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVPWidgetDisplayType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport;
class UScriptStruct* FVPFullScreenUserWidget_Viewport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPFullScreenUserWidget_Viewport"));
	}
	return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPFullScreenUserWidget_Viewport>()
{
	return FVPFullScreenUserWidget_Viewport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPFullScreenUserWidget_Viewport>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		&NewStructOps,
		"VPFullScreenUserWidget_Viewport",
		nullptr,
		0,
		sizeof(FVPFullScreenUserWidget_Viewport),
		alignof(FVPFullScreenUserWidget_Viewport),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport()
	{
		if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.InnerSingleton, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.InnerSingleton;
	}
	void UVPFullScreenUserWidget::StaticRegisterNativesUVPFullScreenUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPFullScreenUserWidget);
	UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister()
	{
		return UVPFullScreenUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVPFullScreenUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditorDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PIEDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PIEDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessDisplayTypeWithBlendMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessDisplayTypeWithBlendMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessWithSceneViewExtensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessWithSceneViewExtensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDisplayType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPFullScreenUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
		{ "IncludePath", "Widgets/VPFullScreenUserWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The display type when the world is an editor world. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The display type when the world is an editor world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType = { "EditorDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, EditorDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData) }; // 3767392094
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The display type when the world is a game world. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The display type when the world is a game world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType = { "GameDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, GameDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData) }; // 3767392094
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The display type when the world is a PIE world. */" },
		{ "DisplayName", "PIE Display Type" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The display type when the world is a PIE world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType = { "PIEDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, PIEDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData) }; // 3767392094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Behavior when the widget should be display by the slate attached to the viewport. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Behavior when the widget should be display by the slate attached to the viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType = { "ViewportDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, ViewportDisplayType), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData) }; // 1857564477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayTypeWithBlendMaterial_MetaData[] = {
		{ "Category", "Post Process (Blend Material)" },
		{ "Comment", "/** Behavior when the widget is rendered via a post process material via post process volume settings; the widget is added only over area rendered by anamorphic squeeze. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Behavior when the widget is rendered via a post process material via post process volume settings; the widget is added only over area rendered by anamorphic squeeze." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayTypeWithBlendMaterial = { "PostProcessDisplayTypeWithBlendMaterial", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, PostProcessDisplayTypeWithBlendMaterial), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayTypeWithBlendMaterial_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayTypeWithBlendMaterial_MetaData) }; // 249099624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessWithSceneViewExtensions_MetaData[] = {
		{ "Category", "Post Process (Scene View Extensions)" },
		{ "Comment", "/** Behavior when the widget is rendered via a post process material via SceneViewExtensions; the widget is added over entire viewport, ignoring anamorphic squeeze. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Behavior when the widget is rendered via a post process material via SceneViewExtensions; the widget is added over entire viewport, ignoring anamorphic squeeze." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessWithSceneViewExtensions = { "PostProcessWithSceneViewExtensions", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, PostProcessWithSceneViewExtensions), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcessWithSVE, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessWithSceneViewExtensions_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessWithSceneViewExtensions_MetaData) }; // 3090235083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/** The world the widget is attached to. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The world the widget is attached to." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_World_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType_MetaData[] = {
		{ "Comment", "/** How we currently displaying the widget. */" },
		{ "ModuleRelativePath", "Public/Widgets/VPFullScreenUserWidget.h" },
		{ "ToolTip", "How we currently displaying the widget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType = { "CurrentDisplayType", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVPFullScreenUserWidget, CurrentDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType_MetaData), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType_MetaData) }; // 3767392094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayTypeWithBlendMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessWithSceneViewExtensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_CurrentDisplayType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPFullScreenUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPFullScreenUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::ClassParams = {
		&UVPFullScreenUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVPFullScreenUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVPFullScreenUserWidget()
	{
		if (!Z_Registration_Info_UClass_UVPFullScreenUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPFullScreenUserWidget.OuterSingleton, Z_Construct_UClass_UVPFullScreenUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPFullScreenUserWidget.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPFullScreenUserWidget>()
	{
		return UVPFullScreenUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPFullScreenUserWidget);
	UVPFullScreenUserWidget::~UVPFullScreenUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::EnumInfo[] = {
		{ EVPWidgetDisplayType_StaticEnum, TEXT("EVPWidgetDisplayType"), &Z_Registration_Info_UEnum_EVPWidgetDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3767392094U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::ScriptStructInfo[] = {
		{ FVPFullScreenUserWidget_Viewport::StaticStruct, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::NewStructOps, TEXT("VPFullScreenUserWidget_Viewport"), &Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPFullScreenUserWidget_Viewport), 1857564477U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPFullScreenUserWidget, UVPFullScreenUserWidget::StaticClass, TEXT("UVPFullScreenUserWidget"), &Z_Registration_Info_UClass_UVPFullScreenUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPFullScreenUserWidget), 2851127917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_2284430615(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Widgets_VPFullScreenUserWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

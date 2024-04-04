// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditorMode() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditorMode();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditorMode();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditorMode_NoRegister();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveToolsContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References
	void UChaosClothAssetEditorMode::StaticRegisterNativesUChaosClothAssetEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAssetEditorMode);
	UClass* Z_Construct_UClass_UChaosClothAssetEditorMode_NoRegister()
	{
		return UChaosClothAssetEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAssetEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeToTick_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WireframeToTick;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectsToTick_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectsToTick_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyObjectsToTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponentParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponentParentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveToolsContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterFXEditorMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The cloth editor mode is the mode used in the cloth asset editor. It holds most of the inter-tool state.\n * We put things in a mode instead of directly into the asset editor in case we want to someday use the mode\n * in multiple asset editors.\n */" },
		{ "IncludePath", "ChaosClothAsset/ClothEditorMode.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "The cloth editor mode is the mode used in the cloth asset editor. It holds most of the inter-tool state.\nWe put things in a mode instead of directly into the asset editor in case we want to someday use the mode\nin multiple asset editors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframeToTick_MetaData[] = {
		{ "Comment", "// Rest space wireframe. They have to get ticked to be able to respond to setting changes. \n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Rest space wireframe. They have to get ticked to be able to respond to setting changes." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframeToTick = { "WireframeToTick", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, WireframeToTick), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframeToTick_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframeToTick_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_Inner = { "PropertyObjectsToTick", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData[] = {
		{ "Comment", "// Mode-level property objects (visible or not) that get ticked.\n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Mode-level property objects (visible or not) that get ticked." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick = { "PropertyObjectsToTick", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, PropertyObjectsToTick), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "Comment", "// Rest space editable mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Rest space editable mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponent_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActor_MetaData[] = {
		{ "Comment", "// Actor required for hit testing DynamicMeshComponent\n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
		{ "ToolTip", "Actor required for hit testing DynamicMeshComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActor = { "DynamicMeshComponentParentActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, DynamicMeshComponentParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActor_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent = { "DataflowComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, DataflowComponent), Z_Construct_UClass_UDataflowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowGraph_MetaData[] = {
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowGraph = { "DataflowGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, DataflowGraph), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowGraph_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_ActiveToolsContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_ActiveToolsContext = { "ActiveToolsContext", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosClothAssetEditorMode, ActiveToolsContext), Z_Construct_UClass_UEditorInteractiveToolsContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_ActiveToolsContext_MetaData), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_ActiveToolsContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_WireframeToTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_PropertyObjectsToTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DynamicMeshComponentParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_DataflowGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::NewProp_ActiveToolsContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothAssetEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::ClassParams = {
		&UChaosClothAssetEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChaosClothAssetEditorMode()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAssetEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAssetEditorMode.OuterSingleton, Z_Construct_UClass_UChaosClothAssetEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAssetEditorMode.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITOR_API UClass* StaticClass<UChaosClothAssetEditorMode>()
	{
		return UChaosClothAssetEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothAssetEditorMode);
	UChaosClothAssetEditorMode::~UChaosClothAssetEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAssetEditorMode, UChaosClothAssetEditorMode::StaticClass, TEXT("UChaosClothAssetEditorMode"), &Z_Registration_Info_UClass_UChaosClothAssetEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAssetEditorMode), 2511411507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_2114785407(TEXT("/Script/ChaosClothAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

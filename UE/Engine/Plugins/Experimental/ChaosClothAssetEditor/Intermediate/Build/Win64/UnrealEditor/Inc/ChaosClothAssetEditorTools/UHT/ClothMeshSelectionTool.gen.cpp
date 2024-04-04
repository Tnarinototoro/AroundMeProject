// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothMeshSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothMeshSelectionTool() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothEditorContextObject_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionTool();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionTool_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolBuilder();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolBuilder_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolProperties();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothMeshSelectionToolProperties_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothMeshSelectionToolBuilder::StaticRegisterNativesUClothMeshSelectionToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothMeshSelectionToolBuilder);
	UClass* Z_Construct_UClass_UClothMeshSelectionToolBuilder_NoRegister()
	{
		return UClothMeshSelectionToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister, (int32)VTABLE_OFFSET(UClothMeshSelectionToolBuilder, IChaosClothAssetEditorToolBuilder), false },  // 1411693023
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothMeshSelectionToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::ClassParams = {
		&UClothMeshSelectionToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClothMeshSelectionToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UClothMeshSelectionToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothMeshSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UClothMeshSelectionToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothMeshSelectionToolBuilder.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothMeshSelectionToolBuilder>()
	{
		return UClothMeshSelectionToolBuilder::StaticClass();
	}
	UClothMeshSelectionToolBuilder::UClothMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothMeshSelectionToolBuilder);
	UClothMeshSelectionToolBuilder::~UClothMeshSelectionToolBuilder() {}
	void UClothMeshSelectionToolProperties::StaticRegisterNativesUClothMeshSelectionToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothMeshSelectionToolProperties);
	UClass* Z_Construct_UClass_UClothMeshSelectionToolProperties_NoRegister()
	{
		return UClothMeshSelectionToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertices_MetaData[];
#endif
		static void NewProp_bShowVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEdges_MetaData[];
#endif
		static void NewProp_bShowEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEdges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothMeshSelectionToolProperties, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DisplayName", "Show Vertices" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
	void Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices_SetBit(void* Obj)
	{
		((UClothMeshSelectionToolProperties*)Obj)->bShowVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices = { "bShowVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothMeshSelectionToolProperties), &Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices_MetaData), Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges_MetaData[] = {
		{ "Category", "Visualization" },
		{ "DisplayName", "Show Edges" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
	void Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges_SetBit(void* Obj)
	{
		((UClothMeshSelectionToolProperties*)Obj)->bShowEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges = { "bShowEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothMeshSelectionToolProperties), &Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges_MetaData), Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::NewProp_bShowEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothMeshSelectionToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::ClassParams = {
		&UClothMeshSelectionToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UClothMeshSelectionToolProperties()
	{
		if (!Z_Registration_Info_UClass_UClothMeshSelectionToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothMeshSelectionToolProperties.OuterSingleton, Z_Construct_UClass_UClothMeshSelectionToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothMeshSelectionToolProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothMeshSelectionToolProperties>()
	{
		return UClothMeshSelectionToolProperties::StaticClass();
	}
	UClothMeshSelectionToolProperties::UClothMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothMeshSelectionToolProperties);
	UClothMeshSelectionToolProperties::~UClothMeshSelectionToolProperties() {}
	void UClothMeshSelectionTool::StaticRegisterNativesUClothMeshSelectionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothMeshSelectionTool);
	UClass* Z_Construct_UClass_UClothMeshSelectionTool_NoRegister()
	{
		return UClothMeshSelectionTool::StaticClass();
	}
	struct Z_Construct_UClass_UClothMeshSelectionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothEditorContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothEditorContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothMeshSelectionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ToolProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ToolProperties = { "ToolProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothMeshSelectionTool, ToolProperties), Z_Construct_UClass_UClothMeshSelectionToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ToolProperties_MetaData), Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ToolProperties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothMeshSelectionTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_PreviewMesh_MetaData), Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_PreviewMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothMeshSelectionTool, SelectionMechanic), Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_SelectionMechanic_MetaData), Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_SelectionMechanic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ClothEditorContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ClothEditorContextObject = { "ClothEditorContextObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothMeshSelectionTool, ClothEditorContextObject), Z_Construct_UClass_UClothEditorContextObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ClothEditorContextObject_MetaData), Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ClothEditorContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothMeshSelectionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ToolProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_SelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothMeshSelectionTool_Statics::NewProp_ClothEditorContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothMeshSelectionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothMeshSelectionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothMeshSelectionTool_Statics::ClassParams = {
		&UClothMeshSelectionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothMeshSelectionTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothMeshSelectionTool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothMeshSelectionTool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UClothMeshSelectionTool()
	{
		if (!Z_Registration_Info_UClass_UClothMeshSelectionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothMeshSelectionTool.OuterSingleton, Z_Construct_UClass_UClothMeshSelectionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothMeshSelectionTool.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothMeshSelectionTool>()
	{
		return UClothMeshSelectionTool::StaticClass();
	}
	UClothMeshSelectionTool::UClothMeshSelectionTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothMeshSelectionTool);
	UClothMeshSelectionTool::~UClothMeshSelectionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothMeshSelectionTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothMeshSelectionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothMeshSelectionToolBuilder, UClothMeshSelectionToolBuilder::StaticClass, TEXT("UClothMeshSelectionToolBuilder"), &Z_Registration_Info_UClass_UClothMeshSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothMeshSelectionToolBuilder), 397801737U) },
		{ Z_Construct_UClass_UClothMeshSelectionToolProperties, UClothMeshSelectionToolProperties::StaticClass, TEXT("UClothMeshSelectionToolProperties"), &Z_Registration_Info_UClass_UClothMeshSelectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothMeshSelectionToolProperties), 3304502561U) },
		{ Z_Construct_UClass_UClothMeshSelectionTool, UClothMeshSelectionTool::StaticClass, TEXT("UClothMeshSelectionTool"), &Z_Registration_Info_UClass_UClothMeshSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothMeshSelectionTool), 1573534868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothMeshSelectionTool_h_2650151852(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothMeshSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothMeshSelectionTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

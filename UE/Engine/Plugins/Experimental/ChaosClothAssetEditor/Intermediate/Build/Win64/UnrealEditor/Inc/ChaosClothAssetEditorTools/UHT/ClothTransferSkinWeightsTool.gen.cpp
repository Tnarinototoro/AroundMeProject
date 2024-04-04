// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothTransferSkinWeightsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothTransferSkinWeightsTool() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothEditorContextObject_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothTransferSkinWeightsToolProperties::StaticRegisterNativesUClothTransferSkinWeightsToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsToolProperties);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_NoRegister()
	{
		return UClothTransferSkinWeightsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideSourceMesh_MetaData[];
#endif
		static void NewProp_bHideSourceMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSourceMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsToolProperties, SourceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshTranslation_MetaData[] = {
		{ "Category", "Transform" },
		{ "DisplayName", "Location" },
		{ "EditCondition", "SourceMesh != nullptr" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshTranslation = { "SourceMeshTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsToolProperties, SourceMeshTranslation), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshTranslation_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshTranslation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshRotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "DisplayName", "Rotation" },
		{ "EditCondition", "SourceMesh != nullptr" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshRotation = { "SourceMeshRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsToolProperties, SourceMeshRotation), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshRotation_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshScale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Transform" },
		{ "DisplayName", "Scale" },
		{ "EditCondition", "SourceMesh != nullptr" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshScale = { "SourceMeshScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsToolProperties, SourceMeshScale), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshScale_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	void Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh_SetBit(void* Obj)
	{
		((UClothTransferSkinWeightsToolProperties*)Obj)->bHideSourceMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh = { "bHideSourceMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothTransferSkinWeightsToolProperties), &Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_SourceMeshScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::NewProp_bHideSourceMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::ClassParams = {
		&UClothTransferSkinWeightsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsToolProperties>()
	{
		return UClothTransferSkinWeightsToolProperties::StaticClass();
	}
	UClothTransferSkinWeightsToolProperties::UClothTransferSkinWeightsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsToolProperties);
	UClothTransferSkinWeightsToolProperties::~UClothTransferSkinWeightsToolProperties() {}
	void UClothTransferSkinWeightsToolBuilder::StaticRegisterNativesUClothTransferSkinWeightsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsToolBuilder);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_NoRegister()
	{
		return UClothTransferSkinWeightsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChaosClothAssetEditorToolBuilder_NoRegister, (int32)VTABLE_OFFSET(UClothTransferSkinWeightsToolBuilder, IChaosClothAssetEditorToolBuilder), false },  // 1411693023
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::ClassParams = {
		&UClothTransferSkinWeightsToolBuilder::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsToolBuilder>()
	{
		return UClothTransferSkinWeightsToolBuilder::StaticClass();
	}
	UClothTransferSkinWeightsToolBuilder::UClothTransferSkinWeightsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsToolBuilder);
	UClothTransferSkinWeightsToolBuilder::~UClothTransferSkinWeightsToolBuilder() {}
	void UClothTransferSkinWeightsTool::StaticRegisterNativesUClothTransferSkinWeightsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothTransferSkinWeightsTool);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool_NoRegister()
	{
		return UClothTransferSkinWeightsTool::StaticClass();
	}
	struct Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothEditorContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothEditorContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetClothPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetClothPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMeshParentActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMeshTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMeshTransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties = { "ToolProperties", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, ToolProperties), Z_Construct_UClass_UClothTransferSkinWeightsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothEditorContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothEditorContextObject = { "ClothEditorContextObject", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, ClothEditorContextObject), Z_Construct_UClass_UClothEditorContextObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothEditorContextObject_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothEditorContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_TargetClothPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_TargetClothPreview = { "TargetClothPreview", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, TargetClothPreview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_TargetClothPreview_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_TargetClothPreview_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshParentActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshParentActor = { "SourceMeshParentActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, SourceMeshParentActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshParentActor_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshParentActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshComponent_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformProxy_MetaData[] = {
		{ "Comment", "// Source mesh transform gizmo support\n" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
		{ "ToolTip", "Source mesh transform gizmo support" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformProxy = { "SourceMeshTransformProxy", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, SourceMeshTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformProxy_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothTransferSkinWeightsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformGizmo = { "SourceMeshTransformGizmo", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothTransferSkinWeightsTool, SourceMeshTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformGizmo_MetaData), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformGizmo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ToolProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_ClothEditorContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_TargetClothPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::NewProp_SourceMeshTransformGizmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothTransferSkinWeightsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::ClassParams = {
		&UClothTransferSkinWeightsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UClothTransferSkinWeightsTool()
	{
		if (!Z_Registration_Info_UClass_UClothTransferSkinWeightsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothTransferSkinWeightsTool.OuterSingleton, Z_Construct_UClass_UClothTransferSkinWeightsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothTransferSkinWeightsTool.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothTransferSkinWeightsTool>()
	{
		return UClothTransferSkinWeightsTool::StaticClass();
	}
	UClothTransferSkinWeightsTool::UClothTransferSkinWeightsTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothTransferSkinWeightsTool);
	UClothTransferSkinWeightsTool::~UClothTransferSkinWeightsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothTransferSkinWeightsToolProperties, UClothTransferSkinWeightsToolProperties::StaticClass, TEXT("UClothTransferSkinWeightsToolProperties"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsToolProperties), 3438984330U) },
		{ Z_Construct_UClass_UClothTransferSkinWeightsToolBuilder, UClothTransferSkinWeightsToolBuilder::StaticClass, TEXT("UClothTransferSkinWeightsToolBuilder"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsToolBuilder), 331384845U) },
		{ Z_Construct_UClass_UClothTransferSkinWeightsTool, UClothTransferSkinWeightsTool::StaticClass, TEXT("UClothTransferSkinWeightsTool"), &Z_Registration_Info_UClass_UClothTransferSkinWeightsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothTransferSkinWeightsTool), 237210536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_71688166(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothTransferSkinWeightsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

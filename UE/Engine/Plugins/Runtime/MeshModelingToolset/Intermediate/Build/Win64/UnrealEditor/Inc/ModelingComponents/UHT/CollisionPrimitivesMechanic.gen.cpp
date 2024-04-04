// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/CollisionPrimitivesMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionPrimitivesMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UCollisionPrimitivesMechanic::StaticRegisterNativesUCollisionPrimitivesMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionPrimitivesMechanic);
	UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic_NoRegister()
	{
		return UCollisionPrimitivesMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnPrimitiveEdges_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnPrimitiveEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SphereTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FullTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentActiveProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SphereTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FullTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MarqueeMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry_MetaData[] = {
		{ "Comment", "/** Used for displaying Primitives/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ToolTip", "Used for displaying Primitives/segments" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges = { "DrawnPrimitiveEdges", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, DrawnPrimitiveEdges), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmos. Since the primitives aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ToolTip", "Support for gizmos. Since the primitives aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy = { "TranslateTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, TranslateTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy = { "SphereTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, SphereTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy = { "BoxTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, BoxTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy = { "CapsuleTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, CapsuleTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy = { "FullTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, FullTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy = { "CurrentActiveProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, CurrentActiveProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo = { "TranslateTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, TranslateTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo = { "SphereTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, SphereTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo = { "BoxTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, BoxTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo = { "CapsuleTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, CapsuleTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo = { "FullTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, FullTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic_MetaData[] = {
		{ "Comment", "// Support for selection\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CollisionPrimitivesMechanic.h" },
		{ "ToolTip", "Support for selection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic = { "MarqueeMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCollisionPrimitivesMechanic, MarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic_MetaData), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_PreviewGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_DrawnPrimitiveEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CurrentActiveProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_TranslateTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_SphereTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_BoxTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_CapsuleTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_FullTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::NewProp_MarqueeMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionPrimitivesMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::ClassParams = {
		&UCollisionPrimitivesMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCollisionPrimitivesMechanic()
	{
		if (!Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.OuterSingleton, Z_Construct_UClass_UCollisionPrimitivesMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UCollisionPrimitivesMechanic>()
	{
		return UCollisionPrimitivesMechanic::StaticClass();
	}
	UCollisionPrimitivesMechanic::UCollisionPrimitivesMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionPrimitivesMechanic);
	UCollisionPrimitivesMechanic::~UCollisionPrimitivesMechanic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionPrimitivesMechanic, UCollisionPrimitivesMechanic::StaticClass, TEXT("UCollisionPrimitivesMechanic"), &Z_Registration_Info_UClass_UCollisionPrimitivesMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionPrimitivesMechanic), 407935638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_353351072(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollisionPrimitivesMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

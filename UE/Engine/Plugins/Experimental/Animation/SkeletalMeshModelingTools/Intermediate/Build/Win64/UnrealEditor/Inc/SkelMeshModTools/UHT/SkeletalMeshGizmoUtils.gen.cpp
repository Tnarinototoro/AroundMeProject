// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshGizmoUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshGizmoUtils() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmo_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USkeletalMeshGizmoWrapperBase();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USkeletonTransformProxy_NoRegister();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshGizmoContextObject();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshGizmoContextObject_NoRegister();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshGizmoWrapper();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshGizmoWrapper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkeletalMeshModelingTools();
// End Cross Module References
	void USkeletalMeshGizmoWrapper::StaticRegisterNativesUSkeletalMeshGizmoWrapper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshGizmoWrapper);
	UClass* Z_Construct_UClass_USkeletalMeshGizmoWrapper_NoRegister()
	{
		return USkeletalMeshGizmoWrapper::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshGizmoWrapperBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USkeletalMeshGizmoWrapper is a wrapper class to handle a Transform Gizmo and it's Transform proxy so that it can\n * be used to update skeletal mesh infos using a Gizmo.\n */" },
		{ "IncludePath", "SkeletalMeshGizmoUtils.h" },
		{ "ModuleRelativePath", "Private/SkeletalMeshGizmoUtils.h" },
		{ "ToolTip", "USkeletalMeshGizmoWrapper is a wrapper class to handle a Transform Gizmo and it's Transform proxy so that it can\nbe used to update skeletal mesh infos using a Gizmo." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshGizmoUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshGizmoWrapper, TransformGizmo), Z_Construct_UClass_UTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformGizmo_MetaData), Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformGizmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshGizmoUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshGizmoWrapper, TransformProxy), Z_Construct_UClass_USkeletonTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformProxy_MetaData), Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformProxy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::NewProp_TransformProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshGizmoWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::ClassParams = {
		&USkeletalMeshGizmoWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkeletalMeshGizmoWrapper()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshGizmoWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshGizmoWrapper.OuterSingleton, Z_Construct_UClass_USkeletalMeshGizmoWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshGizmoWrapper.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UClass* StaticClass<USkeletalMeshGizmoWrapper>()
	{
		return USkeletalMeshGizmoWrapper::StaticClass();
	}
	USkeletalMeshGizmoWrapper::USkeletalMeshGizmoWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshGizmoWrapper);
	USkeletalMeshGizmoWrapper::~USkeletalMeshGizmoWrapper() {}
	void USkeletalMeshGizmoContextObject::StaticRegisterNativesUSkeletalMeshGizmoContextObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshGizmoContextObject);
	UClass* Z_Construct_UClass_USkeletalMeshGizmoContextObject_NoRegister()
	{
		return USkeletalMeshGizmoContextObject::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshGizmoContextObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USkeletalMeshGizmoContextObject is a utility object that registers a Gizmo Builder for UTransformGizmo.\n * (see UCombinedTransformGizmoContextObject for more details)\n */" },
		{ "IncludePath", "SkeletalMeshGizmoUtils.h" },
		{ "ModuleRelativePath", "Private/SkeletalMeshGizmoUtils.h" },
		{ "ToolTip", "USkeletalMeshGizmoContextObject is a utility object that registers a Gizmo Builder for UTransformGizmo.\n(see UCombinedTransformGizmoContextObject for more details)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshGizmoContextObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::ClassParams = {
		&USkeletalMeshGizmoContextObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USkeletalMeshGizmoContextObject()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshGizmoContextObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshGizmoContextObject.OuterSingleton, Z_Construct_UClass_USkeletalMeshGizmoContextObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshGizmoContextObject.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UClass* StaticClass<USkeletalMeshGizmoContextObject>()
	{
		return USkeletalMeshGizmoContextObject::StaticClass();
	}
	USkeletalMeshGizmoContextObject::USkeletalMeshGizmoContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshGizmoContextObject);
	USkeletalMeshGizmoContextObject::~USkeletalMeshGizmoContextObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshGizmoUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshGizmoUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshGizmoWrapper, USkeletalMeshGizmoWrapper::StaticClass, TEXT("USkeletalMeshGizmoWrapper"), &Z_Registration_Info_UClass_USkeletalMeshGizmoWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshGizmoWrapper), 2185294724U) },
		{ Z_Construct_UClass_USkeletalMeshGizmoContextObject, USkeletalMeshGizmoContextObject::StaticClass, TEXT("USkeletalMeshGizmoContextObject"), &Z_Registration_Info_UClass_USkeletalMeshGizmoContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshGizmoContextObject), 2821410323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshGizmoUtils_h_3299891390(TEXT("/Script/SkeletalMeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshGizmoUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshGizmoUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

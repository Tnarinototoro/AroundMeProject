// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshEditorUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorUtils() {}
// Cross Module References
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_USkeletalMeshEditorContextObjectBase();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshEditorContextObject();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshEditorContextObject_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode();
	UPackage* Z_Construct_UPackage__Script_SkeletalMeshModelingTools();
// End Cross Module References
	void USkeletalMeshEditorContextObject::StaticRegisterNativesUSkeletalMeshEditorContextObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshEditorContextObject);
	UClass* Z_Construct_UClass_USkeletalMeshEditorContextObject_NoRegister()
	{
		return USkeletalMeshEditorContextObject::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonDrawMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonDrawMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonDrawMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshEditorContextObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USkeletalMeshEditorContextObject\n */" },
		{ "IncludePath", "SkeletalMeshEditorUtils.h" },
		{ "ModuleRelativePath", "Private/SkeletalMeshEditorUtils.h" },
		{ "ToolTip", "USkeletalMeshEditorContextObject" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshEditorUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode = { "SkeletonDrawMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshEditorContextObject, SkeletonDrawMode), Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode_MetaData), Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode_MetaData) }; // 3036201903
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::NewProp_SkeletonDrawMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorContextObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::ClassParams = {
		&USkeletalMeshEditorContextObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USkeletalMeshEditorContextObject()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshEditorContextObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshEditorContextObject.OuterSingleton, Z_Construct_UClass_USkeletalMeshEditorContextObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshEditorContextObject.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UClass* StaticClass<USkeletalMeshEditorContextObject>()
	{
		return USkeletalMeshEditorContextObject::StaticClass();
	}
	USkeletalMeshEditorContextObject::USkeletalMeshEditorContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorContextObject);
	USkeletalMeshEditorContextObject::~USkeletalMeshEditorContextObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshEditorUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshEditorUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshEditorContextObject, USkeletalMeshEditorContextObject::StaticClass, TEXT("USkeletalMeshEditorContextObject"), &Z_Registration_Info_UClass_USkeletalMeshEditorContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshEditorContextObject), 942965856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshEditorUtils_h_1640933630(TEXT("/Script/SkeletalMeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshEditorUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshEditorUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

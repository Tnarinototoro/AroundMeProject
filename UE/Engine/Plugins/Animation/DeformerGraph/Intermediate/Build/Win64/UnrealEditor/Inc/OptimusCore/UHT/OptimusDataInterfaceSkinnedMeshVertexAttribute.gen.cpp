// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinnedMeshVertexAttribute() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusSkinnedMeshVertexAttributeDataInterface::StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshVertexAttributeDataInterface);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister()
	{
		return UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Vertex Attribute" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataInterface, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName_MetaData), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::NewProp_AttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshVertexAttributeDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::ClassParams = {
		&UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshVertexAttributeDataInterface>()
	{
		return UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass();
	}
	UOptimusSkinnedMeshVertexAttributeDataInterface::UOptimusSkinnedMeshVertexAttributeDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshVertexAttributeDataInterface);
	UOptimusSkinnedMeshVertexAttributeDataInterface::~UOptimusSkinnedMeshVertexAttributeDataInterface() {}
	void UOptimusSkinnedMeshVertexAttributeDataProvider::StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshVertexAttributeDataProvider);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister()
	{
		return UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkinnedMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataProvider, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent_MetaData), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "VertexAttribute" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusSkinnedMeshVertexAttributeDataProvider, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName_MetaData), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_SkinnedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::NewProp_AttributeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshVertexAttributeDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::ClassParams = {
		&UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshVertexAttributeDataProvider>()
	{
		return UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass();
	}
	UOptimusSkinnedMeshVertexAttributeDataProvider::UOptimusSkinnedMeshVertexAttributeDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshVertexAttributeDataProvider);
	UOptimusSkinnedMeshVertexAttributeDataProvider::~UOptimusSkinnedMeshVertexAttributeDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface, UOptimusSkinnedMeshVertexAttributeDataInterface::StaticClass, TEXT("UOptimusSkinnedMeshVertexAttributeDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshVertexAttributeDataInterface), 1438763242U) },
		{ Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider, UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass, TEXT("UOptimusSkinnedMeshVertexAttributeDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshVertexAttributeDataProvider), 255163944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_2085751865(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

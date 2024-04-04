// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceCustomComputeKernel() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusCustomComputeKernelDataInterface::StaticRegisterNativesUOptimusCustomComputeKernelDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusCustomComputeKernelDataInterface);
	UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_NoRegister()
	{
		return UOptimusCustomComputeKernelDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSourceBinding_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentSourceBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumThreadsExpression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NumThreadsExpression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_ComponentSourceBinding_MetaData[] = {
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_ComponentSourceBinding = { "ComponentSourceBinding", nullptr, (EPropertyFlags)0x0014000000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusCustomComputeKernelDataInterface, ComponentSourceBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_ComponentSourceBinding_MetaData), Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_ComponentSourceBinding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_NumThreadsExpression_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_NumThreadsExpression = { "NumThreadsExpression", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusCustomComputeKernelDataInterface, NumThreadsExpression), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_NumThreadsExpression_MetaData), Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_NumThreadsExpression_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_ComponentSourceBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::NewProp_NumThreadsExpression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusCustomComputeKernelDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::ClassParams = {
		&UOptimusCustomComputeKernelDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusCustomComputeKernelDataInterface>()
	{
		return UOptimusCustomComputeKernelDataInterface::StaticClass();
	}
	UOptimusCustomComputeKernelDataInterface::UOptimusCustomComputeKernelDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusCustomComputeKernelDataInterface);
	UOptimusCustomComputeKernelDataInterface::~UOptimusCustomComputeKernelDataInterface() {}
	void UOptimusCustomComputeKernelDataProvider::StaticRegisterNativesUOptimusCustomComputeKernelDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusCustomComputeKernelDataProvider);
	UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_NoRegister()
	{
		return UOptimusCustomComputeKernelDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Compute Framework Data Provider for each custom compute kernel. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h" },
		{ "ToolTip", "Compute Framework Data Provider for each custom compute kernel." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusCustomComputeKernelDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::ClassParams = {
		&UOptimusCustomComputeKernelDataProvider::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusCustomComputeKernelDataProvider>()
	{
		return UOptimusCustomComputeKernelDataProvider::StaticClass();
	}
	UOptimusCustomComputeKernelDataProvider::UOptimusCustomComputeKernelDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusCustomComputeKernelDataProvider);
	UOptimusCustomComputeKernelDataProvider::~UOptimusCustomComputeKernelDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface, UOptimusCustomComputeKernelDataInterface::StaticClass, TEXT("UOptimusCustomComputeKernelDataInterface"), &Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusCustomComputeKernelDataInterface), 3410242306U) },
		{ Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider, UOptimusCustomComputeKernelDataProvider::StaticClass, TEXT("UOptimusCustomComputeKernelDataProvider"), &Z_Registration_Info_UClass_UOptimusCustomComputeKernelDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusCustomComputeKernelDataProvider), 235692266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_1949416983(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Deformer/DeformerDataInterfaceGroomGuide.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroomGuide() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UOptimusGroomGuideDataInterface::StaticRegisterNativesUOptimusGroomGuideDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomGuideDataInterface);
	UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface_NoRegister()
	{
		return UOptimusGroomGuideDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading groom guides. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroomGuide.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomGuide.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading groom guides." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomGuideDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::ClassParams = {
		&UOptimusGroomGuideDataInterface::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOptimusGroomGuideDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomGuideDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomGuideDataInterface>()
	{
		return UOptimusGroomGuideDataInterface::StaticClass();
	}
	UOptimusGroomGuideDataInterface::UOptimusGroomGuideDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomGuideDataInterface);
	UOptimusGroomGuideDataInterface::~UOptimusGroomGuideDataInterface() {}
	void UOptimusGroomGuideDataProvider::StaticRegisterNativesUOptimusGroomGuideDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomGuideDataProvider);
	UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider_NoRegister()
	{
		return UOptimusGroomGuideDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Groom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading groom. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroomGuide.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomGuide.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading groom." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomGuide.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusGroomGuideDataProvider, Groom), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom_MetaData), Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::NewProp_Groom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomGuideDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::ClassParams = {
		&UOptimusGroomGuideDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptimusGroomGuideDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomGuideDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomGuideDataProvider>()
	{
		return UOptimusGroomGuideDataProvider::StaticClass();
	}
	UOptimusGroomGuideDataProvider::UOptimusGroomGuideDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomGuideDataProvider);
	UOptimusGroomGuideDataProvider::~UOptimusGroomGuideDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomGuide_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomGuide_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomGuideDataInterface, UOptimusGroomGuideDataInterface::StaticClass, TEXT("UOptimusGroomGuideDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomGuideDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomGuideDataInterface), 289386125U) },
		{ Z_Construct_UClass_UOptimusGroomGuideDataProvider, UOptimusGroomGuideDataProvider::StaticClass, TEXT("UOptimusGroomGuideDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomGuideDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomGuideDataProvider), 1910524925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomGuide_h_1230931600(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomGuide_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomGuide_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

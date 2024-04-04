// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DecoupledOutputProvider.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecoupledOutputProvider() {}
// Cross Module References
	DECOUPLEDOUTPUTPROVIDER_API UClass* Z_Construct_UClass_UDecoupledOutputProvider();
	DECOUPLEDOUTPUTPROVIDER_API UClass* Z_Construct_UClass_UDecoupledOutputProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DecoupledOutputProvider();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase();
// End Cross Module References
	void UDecoupledOutputProvider::StaticRegisterNativesUDecoupledOutputProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDecoupledOutputProvider);
	UClass* Z_Construct_UClass_UDecoupledOutputProvider_NoRegister()
	{
		return UDecoupledOutputProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDecoupledOutputProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecoupledOutputProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamOutputProviderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DecoupledOutputProvider,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDecoupledOutputProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecoupledOutputProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A decoupled output provider only contains data and forwards all important events to an IOutputProviderLogic, which\n * may or may not exist. This allows the data to be loaded on all platforms but perform no operations on unsupported platforms.\n * This decoupling is important to avoid failing LoadPackage warnings during cooking.\n * \n * Example: Pixel Streaming.\n */" },
		{ "IncludePath", "DecoupledOutputProvider.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DecoupledOutputProvider.h" },
		{ "ToolTip", "A decoupled output provider only contains data and forwards all important events to an IOutputProviderLogic, which\nmay or may not exist. This allows the data to be loaded on all platforms but perform no operations on unsupported platforms.\nThis decoupling is important to avoid failing LoadPackage warnings during cooking.\n\nExample: Pixel Streaming." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecoupledOutputProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecoupledOutputProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDecoupledOutputProvider_Statics::ClassParams = {
		&UDecoupledOutputProvider::StaticClass,
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
		0x009010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDecoupledOutputProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UDecoupledOutputProvider_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDecoupledOutputProvider()
	{
		if (!Z_Registration_Info_UClass_UDecoupledOutputProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDecoupledOutputProvider.OuterSingleton, Z_Construct_UClass_UDecoupledOutputProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDecoupledOutputProvider.OuterSingleton;
	}
	template<> DECOUPLEDOUTPUTPROVIDER_API UClass* StaticClass<UDecoupledOutputProvider>()
	{
		return UDecoupledOutputProvider::StaticClass();
	}
	UDecoupledOutputProvider::UDecoupledOutputProvider() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecoupledOutputProvider);
	UDecoupledOutputProvider::~UDecoupledOutputProvider() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDecoupledOutputProvider)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDecoupledOutputProvider, UDecoupledOutputProvider::StaticClass, TEXT("UDecoupledOutputProvider"), &Z_Registration_Info_UClass_UDecoupledOutputProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDecoupledOutputProvider), 2490938714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_1620597259(TEXT("/Script/DecoupledOutputProvider"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_DecoupledOutputProvider_Public_DecoupledOutputProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

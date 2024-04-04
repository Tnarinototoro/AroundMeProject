// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreAugmentedImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreAugmentedImage() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	void UGoogleARCoreAugmentedImage::StaticRegisterNativesUGoogleARCoreAugmentedImage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreAugmentedImage);
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister()
	{
		return UGoogleARCoreAugmentedImage::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedImage,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An object representing an augmented image currently in the scene.\n */" },
		{ "IncludePath", "GoogleARCoreAugmentedImage.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
		{ "ToolTip", "An object representing an augmented image currently in the scene." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex = { "ImageIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoogleARCoreAugmentedImage, ImageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex_MetaData), Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoogleARCoreAugmentedImage, ImageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName_MetaData), Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreAugmentedImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::ClassParams = {
		&UGoogleARCoreAugmentedImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage.OuterSingleton, Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreAugmentedImage>()
	{
		return UGoogleARCoreAugmentedImage::StaticClass();
	}
	UGoogleARCoreAugmentedImage::UGoogleARCoreAugmentedImage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreAugmentedImage);
	UGoogleARCoreAugmentedImage::~UGoogleARCoreAugmentedImage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreAugmentedImage, UGoogleARCoreAugmentedImage::StaticClass, TEXT("UGoogleARCoreAugmentedImage"), &Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreAugmentedImage), 534704854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_728809462(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

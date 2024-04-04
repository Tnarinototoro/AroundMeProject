// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/DefaultImageProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultImageProvider() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSystemImageProvider();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDefaultImageProvider();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDefaultImageProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void UDefaultImageProvider::StaticRegisterNativesUDefaultImageProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultImageProvider);
	UClass* Z_Construct_UClass_UDefaultImageProvider_NoRegister()
	{
		return UDefaultImageProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultImageProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Textures_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Textures_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultImageProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableSystemImageProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultImageProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Simple image provider that translates UTexture2D to Mutable IDs.\n *\n * Allows the reuse of UTexture2D. */" },
		{ "IncludePath", "MuCO/DefaultImageProvider.h" },
		{ "ModuleRelativePath", "Public/MuCO/DefaultImageProvider.h" },
		{ "ToolTip", "Simple image provider that translates UTexture2D to Mutable IDs.\n\nAllows the reuse of UTexture2D." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_MetaData[] = {
		{ "Comment", "// Always contains valid pointers\n" },
		{ "ModuleRelativePath", "Public/MuCO/DefaultImageProvider.h" },
		{ "ToolTip", "Always contains valid pointers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultImageProvider, Textures), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_MetaData), Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultImageProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultImageProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultImageProvider_Statics::ClassParams = {
		&UDefaultImageProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefaultImageProvider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDefaultImageProvider()
	{
		if (!Z_Registration_Info_UClass_UDefaultImageProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultImageProvider.OuterSingleton, Z_Construct_UClass_UDefaultImageProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultImageProvider.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UDefaultImageProvider>()
	{
		return UDefaultImageProvider::StaticClass();
	}
	UDefaultImageProvider::UDefaultImageProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultImageProvider);
	UDefaultImageProvider::~UDefaultImageProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultImageProvider, UDefaultImageProvider::StaticClass, TEXT("UDefaultImageProvider"), &Z_Registration_Info_UClass_UDefaultImageProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultImageProvider), 1712409246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_1062121800(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

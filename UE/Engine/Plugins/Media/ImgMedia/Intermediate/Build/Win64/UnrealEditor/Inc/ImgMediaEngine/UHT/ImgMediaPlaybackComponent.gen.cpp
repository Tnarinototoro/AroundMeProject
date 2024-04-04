// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal/ImgMediaPlaybackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaPlaybackComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent();
	IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImgMediaEngine();
// End Cross Module References
	void UDEPRECATED_ImgMediaPlaybackComponent::StaticRegisterNativesUDEPRECATED_ImgMediaPlaybackComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ImgMediaPlaybackComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_NoRegister()
	{
		return UDEPRECATED_ImgMediaPlaybackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Component to help with ImgMedia playback.\n * If desired, add this to an object that displays an ImgMedia sequence.\n * Not necessary to do this, but if you do then you can get additional functionality\n * such as selective mipmap loading.\n */" },
		{ "IncludePath", "Unreal/ImgMediaPlaybackComponent.h" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component to help with ImgMedia playback.\nIf desired, add this to an object that displays an ImgMedia sequence.\nNot necessary to do this, but if you do then you can get additional functionality\nsuch as selective mipmap loading." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "MipMaps" },
		{ "Comment", "/** This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3. */" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ToolTip", "This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_ImgMediaPlaybackComponent, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData), Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::NewProp_LODBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ImgMediaPlaybackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::ClassParams = {
		&UDEPRECATED_ImgMediaPlaybackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent.OuterSingleton;
	}
	template<> IMGMEDIAENGINE_API UClass* StaticClass<UDEPRECATED_ImgMediaPlaybackComponent>()
	{
		return UDEPRECATED_ImgMediaPlaybackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ImgMediaPlaybackComponent);
	UDEPRECATED_ImgMediaPlaybackComponent::~UDEPRECATED_ImgMediaPlaybackComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_ImgMediaPlaybackComponent, UDEPRECATED_ImgMediaPlaybackComponent::StaticClass, TEXT("UDEPRECATED_ImgMediaPlaybackComponent"), &Z_Registration_Info_UClass_UDEPRECATED_ImgMediaPlaybackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ImgMediaPlaybackComponent), 760237058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_2918616769(TEXT("/Script/ImgMediaEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

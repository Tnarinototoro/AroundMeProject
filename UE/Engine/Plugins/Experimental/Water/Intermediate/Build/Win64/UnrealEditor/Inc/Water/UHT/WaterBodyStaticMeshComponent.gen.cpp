// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterBodyStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyStaticMeshComponent() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyMeshComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyStaticMeshComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyStaticMeshComponent_NoRegister();
// End Cross Module References
	void UWaterBodyStaticMeshComponent::StaticRegisterNativesUWaterBodyStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyStaticMeshComponent);
	UClass* Z_Construct_UClass_UWaterBodyStaticMeshComponent_NoRegister()
	{
		return UWaterBodyStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* WaterBodyMeshComponent used to when rendering water statically without relying on the dynamic tessellation of the water zone/water mesh.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "WaterBodyStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Private/WaterBodyStaticMeshComponent.h" },
		{ "ToolTip", "WaterBodyMeshComponent used to when rendering water statically without relying on the dynamic tessellation of the water zone/water mesh." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::ClassParams = {
		&UWaterBodyStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A810A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWaterBodyStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyStaticMeshComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyStaticMeshComponent>()
	{
		return UWaterBodyStaticMeshComponent::StaticClass();
	}
	UWaterBodyStaticMeshComponent::UWaterBodyStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyStaticMeshComponent);
	UWaterBodyStaticMeshComponent::~UWaterBodyStaticMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyStaticMeshComponent, UWaterBodyStaticMeshComponent::StaticClass, TEXT("UWaterBodyStaticMeshComponent"), &Z_Registration_Info_UClass_UWaterBodyStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyStaticMeshComponent), 4236956041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_869686284(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyStaticMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

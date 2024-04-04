// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterBodyInfoMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyInfoMeshComponent() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyInfoMeshComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyInfoMeshComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyMeshComponent();
// End Cross Module References
	void UWaterBodyInfoMeshComponent::StaticRegisterNativesUWaterBodyInfoMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyInfoMeshComponent);
	UClass* Z_Construct_UClass_UWaterBodyInfoMeshComponent_NoRegister()
	{
		return UWaterBodyInfoMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WaterBodyMeshComponent used to render the water body into the water info texture.\n * Utilizes a custom scene proxy to allow hiding the mesh outside of all other passes besides the water info passes.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "WaterBodyInfoMeshComponent.h" },
		{ "ModuleRelativePath", "Private/WaterBodyInfoMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "WaterBodyMeshComponent used to render the water body into the water info texture.\nUtilizes a custom scene proxy to allow hiding the mesh outside of all other passes besides the water info passes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyInfoMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::ClassParams = {
		&UWaterBodyInfoMeshComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWaterBodyInfoMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyInfoMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyInfoMeshComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyInfoMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyInfoMeshComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyInfoMeshComponent>()
	{
		return UWaterBodyInfoMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyInfoMeshComponent);
	UWaterBodyInfoMeshComponent::~UWaterBodyInfoMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyInfoMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyInfoMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyInfoMeshComponent, UWaterBodyInfoMeshComponent::StaticClass, TEXT("UWaterBodyInfoMeshComponent"), &Z_Registration_Info_UClass_UWaterBodyInfoMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyInfoMeshComponent), 578593659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyInfoMeshComponent_h_2542467867(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyInfoMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Private_WaterBodyInfoMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

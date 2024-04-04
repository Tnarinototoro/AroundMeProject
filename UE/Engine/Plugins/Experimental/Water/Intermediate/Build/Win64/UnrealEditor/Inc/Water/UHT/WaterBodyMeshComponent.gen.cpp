// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyMeshComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyMeshComponent_NoRegister();
// End Cross Module References
	void UWaterBodyMeshComponent::StaticRegisterNativesUWaterBodyMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyMeshComponent);
	UClass* Z_Construct_UClass_UWaterBodyMeshComponent_NoRegister()
	{
		return UWaterBodyMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for meshes used to render water bodies without relying on the water zone/water mesh.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "WaterBodyMeshComponent.h" },
		{ "ModuleRelativePath", "Public/WaterBodyMeshComponent.h" },
		{ "ToolTip", "Base class for meshes used to render water bodies without relying on the water zone/water mesh." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyMeshComponent_Statics::ClassParams = {
		&UWaterBodyMeshComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterBodyMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWaterBodyMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyMeshComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyMeshComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyMeshComponent>()
	{
		return UWaterBodyMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyMeshComponent);
	UWaterBodyMeshComponent::~UWaterBodyMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyMeshComponent, UWaterBodyMeshComponent::StaticClass, TEXT("UWaterBodyMeshComponent"), &Z_Registration_Info_UClass_UWaterBodyMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyMeshComponent), 1496380212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_2722201457(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

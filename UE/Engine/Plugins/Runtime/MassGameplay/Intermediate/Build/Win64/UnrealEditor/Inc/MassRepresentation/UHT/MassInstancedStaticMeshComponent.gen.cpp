// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassInstancedStaticMeshComponent();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassInstancedStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassInstancedStaticMeshComponent::StaticRegisterNativesUMassInstancedStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassInstancedStaticMeshComponent);
	UClass* Z_Construct_UClass_UMassInstancedStaticMeshComponent_NoRegister()
	{
		return UMassInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MassInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MassInstancedStaticMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassInstancedStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::ClassParams = {
		&UMassInstancedStaticMeshComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassInstancedStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UMassInstancedStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UMassInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassInstancedStaticMeshComponent.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassInstancedStaticMeshComponent>()
	{
		return UMassInstancedStaticMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassInstancedStaticMeshComponent);
	UMassInstancedStaticMeshComponent::~UMassInstancedStaticMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassInstancedStaticMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassInstancedStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassInstancedStaticMeshComponent, UMassInstancedStaticMeshComponent::StaticClass, TEXT("UMassInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UMassInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassInstancedStaticMeshComponent), 3874177320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassInstancedStaticMeshComponent_h_986926927(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassInstancedStaticMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusDeprecatedExecutionDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusDeprecatedExecutionDataInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusDeprecatedExecutionDataInterface::StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeprecatedExecutionDataInterface);
	UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_NoRegister()
	{
		return UOptimusDeprecatedExecutionDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusDeprecatedExecutionDataInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusDeprecatedExecutionDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::ClassParams = {
		&UOptimusDeprecatedExecutionDataInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeprecatedExecutionDataInterface>()
	{
		return UOptimusDeprecatedExecutionDataInterface::StaticClass();
	}
	UOptimusDeprecatedExecutionDataInterface::UOptimusDeprecatedExecutionDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeprecatedExecutionDataInterface);
	UOptimusDeprecatedExecutionDataInterface::~UOptimusDeprecatedExecutionDataInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeprecatedExecutionDataInterface, UOptimusDeprecatedExecutionDataInterface::StaticClass, TEXT("UOptimusDeprecatedExecutionDataInterface"), &Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeprecatedExecutionDataInterface), 2509690767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_166890157(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusDeprecatedExecutionDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

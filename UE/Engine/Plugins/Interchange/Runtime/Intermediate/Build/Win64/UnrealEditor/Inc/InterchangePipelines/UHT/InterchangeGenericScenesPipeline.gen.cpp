// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericScenesPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericScenesPipeline() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	void UInterchangeGenericLevelPipeline::StaticRegisterNativesUInterchangeGenericLevelPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericLevelPipeline);
	UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline_NoRegister()
	{
		return UInterchangeGenericLevelPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReimportPropertyStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportPropertyStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReimportPropertyStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMissingActors_MetaData[];
#endif
		static void NewProp_bDeleteMissingActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMissingActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceReimportDeletedActors_MetaData[];
#endif
		static void NewProp_bForceReimportDeletedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReimportDeletedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceReimportDeletedAssets_MetaData[];
#endif
		static void NewProp_bForceReimportDeletedAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReimportDeletedAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMissingAssets_MetaData[];
#endif
		static void NewProp_bDeleteMissingAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMissingAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData[];
#endif
		static void NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericScenesPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_MetaData[] = {
		{ "AdjustPipelineAndRefreshDetailOnChange", "True" },
		{ "Category", "Level Reimport Policy" },
		{ "Comment", "/* Allow user to choose the re-import strategy when re-importing into level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Actors properties" },
		{ "ToolTip", "Allow user to choose the re-import strategy when re-importing into level." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy = { "ReimportPropertyStrategy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericLevelPipeline, ReimportPropertyStrategy), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_MetaData), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_MetaData) }; // 553537421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_MetaData[] = {
		{ "Category", "Level Reimport Policy" },
		{ "Comment", "/* Enables or not the deletion of actors which were not part of the translation when re-importing into level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Actors" },
		{ "ToolTip", "Enables or not the deletion of actors which were not part of the translation when re-importing into level." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_SetBit(void* Obj)
	{
		((UInterchangeGenericLevelPipeline*)Obj)->bDeleteMissingActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors = { "bDeleteMissingActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_MetaData), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_MetaData[] = {
		{ "Category", "Level Reimport Policy" },
		{ "Comment", "/* Enables or not spawning actors which were deleted in the editor prior to a reimport. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Actors" },
		{ "ToolTip", "Enables or not spawning actors which were deleted in the editor prior to a reimport." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_SetBit(void* Obj)
	{
		((UInterchangeGenericLevelPipeline*)Obj)->bForceReimportDeletedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors = { "bForceReimportDeletedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_MetaData), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_MetaData[] = {
		{ "Category", "Level Reimport Policy" },
		{ "Comment", "/* Enables or not re-creating assets which were deleted in the editor prior to a reimport into level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Assets" },
		{ "ToolTip", "Enables or not re-creating assets which were deleted in the editor prior to a reimport into level." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_SetBit(void* Obj)
	{
		((UInterchangeGenericLevelPipeline*)Obj)->bForceReimportDeletedAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets = { "bForceReimportDeletedAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_MetaData), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_MetaData[] = {
		{ "Category", "Level Reimport Policy" },
		{ "Comment", "/* Enables or not the deletion of assets which were not part of the translation when re-importing into level. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "SubCategory", "Reimport Assets" },
		{ "ToolTip", "Enables or not the deletion of assets which were not part of the translation when re-importing into level." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_SetBit(void* Obj)
	{
		((UInterchangeGenericLevelPipeline*)Obj)->bDeleteMissingAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets = { "bDeleteMissingAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_MetaData), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** Disable this option to not convert Standard(Perspective) to Physical Cameras*/" },
		{ "ModuleRelativePath", "Public/InterchangeGenericScenesPipeline.h" },
		{ "ToolTip", "Disable this option to not convert Standard(Perspective) to Physical Cameras" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit(void* Obj)
	{
		((UInterchangeGenericLevelPipeline*)Obj)->bUsePhysicalInsteadOfStandardPerspectiveCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera = { "bUsePhysicalInsteadOfStandardPerspectiveCamera", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericLevelPipeline), &Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_ReimportPropertyStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bForceReimportDeletedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bDeleteMissingAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::NewProp_bUsePhysicalInsteadOfStandardPerspectiveCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericLevelPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::ClassParams = {
		&UInterchangeGenericLevelPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInterchangeGenericLevelPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericLevelPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericLevelPipeline>()
	{
		return UInterchangeGenericLevelPipeline::StaticClass();
	}
	UInterchangeGenericLevelPipeline::UInterchangeGenericLevelPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericLevelPipeline);
	UInterchangeGenericLevelPipeline::~UInterchangeGenericLevelPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericLevelPipeline, UInterchangeGenericLevelPipeline::StaticClass, TEXT("UInterchangeGenericLevelPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericLevelPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericLevelPipeline), 2439819903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_3460858937(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericScenesPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

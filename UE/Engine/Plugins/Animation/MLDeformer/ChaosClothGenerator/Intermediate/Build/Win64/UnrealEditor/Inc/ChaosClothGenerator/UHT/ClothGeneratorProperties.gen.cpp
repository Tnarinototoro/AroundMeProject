// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothGeneratorProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothGeneratorProperties() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UChaosClothAsset_NoRegister();
	CHAOSCLOTHGENERATOR_API UClass* Z_Construct_UClass_UClothGeneratorProperties();
	CHAOSCLOTHGENERATOR_API UClass* Z_Construct_UClass_UClothGeneratorProperties_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothGenerator();
// End Cross Module References
	void UClothGeneratorProperties::StaticRegisterNativesUClothGeneratorProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothGeneratorProperties);
	UClass* Z_Construct_UClass_UClothGeneratorProperties_NoRegister()
	{
		return UClothGeneratorProperties::StaticClass();
	}
	struct Z_Construct_UClass_UClothGeneratorProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesToSimulate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FramesToSimulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulatedCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DebugFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothGeneratorProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothGenerator,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothGeneratorProperties.h" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* Skeletal mesh that will be used in MLDeformer */" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "Skeletal mesh that will be used in MLDeformer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, SkeletalMeshAsset), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SkeletalMeshAsset_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SkeletalMeshAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_ClothAsset_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* Chaos cloth asset used in simulation. This should be different from the skeletal mesh asset. */" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "Chaos cloth asset used in simulation. This should be different from the skeletal mesh asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_ClothAsset = { "ClothAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, ClothAsset), Z_Construct_UClass_UChaosClothAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_ClothAsset_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_ClothAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* Training poses. */" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "Training poses." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_AnimationSequence_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_AnimationSequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_FramesToSimulate_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/* e.g. \"0, 2, 5-10, 12-15\". If left empty, all frames will be used */" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "e.g. \"0, 2, 5-10, 12-15\". If left empty, all frames will be used" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_FramesToSimulate = { "FramesToSimulate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, FramesToSimulate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_FramesToSimulate_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_FramesToSimulate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SimulatedCache_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/* Output meshes */" },
		{ "EditCondition", "!bDebug" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "Output meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SimulatedCache = { "SimulatedCache", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, SimulatedCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SimulatedCache_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SimulatedCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Debug a single pose */" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "Debug a single pose" },
	};
#endif
	void Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UClothGeneratorProperties*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothGeneratorProperties), &Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugFrame_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* The frame to inspect */" },
		{ "EditCondition", "bDebug" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "The frame to inspect" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugFrame = { "DebugFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, DebugFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugFrame_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugCache_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* The output sequence */" },
		{ "EditCondition", "bDebug" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
		{ "ToolTip", "The output sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugCache = { "DebugCache", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, DebugCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugCache_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_TimeStep_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, TimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_TimeStep_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_TimeStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, NumSteps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumSteps_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumSteps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumThreads_MetaData[] = {
		{ "Category", "Simulation Settings" },
		{ "EditCondition", "!bDebug" },
		{ "Min", "1" },
		{ "ModuleRelativePath", "Private/ClothGeneratorProperties.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumThreads = { "NumThreads", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothGeneratorProperties, NumThreads), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumThreads_MetaData), Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumThreads_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothGeneratorProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SkeletalMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_ClothAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_FramesToSimulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_SimulatedCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_DebugCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_TimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothGeneratorProperties_Statics::NewProp_NumThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothGeneratorProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothGeneratorProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothGeneratorProperties_Statics::ClassParams = {
		&UClothGeneratorProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothGeneratorProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothGeneratorProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothGeneratorProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UClothGeneratorProperties()
	{
		if (!Z_Registration_Info_UClass_UClothGeneratorProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothGeneratorProperties.OuterSingleton, Z_Construct_UClass_UClothGeneratorProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothGeneratorProperties.OuterSingleton;
	}
	template<> CHAOSCLOTHGENERATOR_API UClass* StaticClass<UClothGeneratorProperties>()
	{
		return UClothGeneratorProperties::StaticClass();
	}
	UClothGeneratorProperties::UClothGeneratorProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothGeneratorProperties);
	UClothGeneratorProperties::~UClothGeneratorProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothGeneratorProperties, UClothGeneratorProperties::StaticClass, TEXT("UClothGeneratorProperties"), &Z_Registration_Info_UClass_UClothGeneratorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothGeneratorProperties), 1042410148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_3001203617(TEXT("/Script/ChaosClothGenerator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_ChaosClothGenerator_Source_ChaosClothGenerator_Private_ClothGeneratorProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

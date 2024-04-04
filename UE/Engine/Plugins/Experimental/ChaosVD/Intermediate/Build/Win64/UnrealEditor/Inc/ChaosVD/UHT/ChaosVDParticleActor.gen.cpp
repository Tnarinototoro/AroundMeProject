// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVDParticleActor.h"
#include "DataWrappers/ChaosVDParticleDataWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDParticleActor() {}
// Cross Module References
	CHAOSVD_API UClass* Z_Construct_UClass_AChaosVDParticleActor();
	CHAOSVD_API UClass* Z_Construct_UClass_AChaosVDParticleActor_NoRegister();
	CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDVisualizerContainerInterface_NoRegister();
	CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ChaosVD();
// End Cross Module References
	void AChaosVDParticleActor::StaticRegisterNativesAChaosVDParticleActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaosVDParticleActor);
	UClass* Z_Construct_UClass_AChaosVDParticleActor_NoRegister()
	{
		return AChaosVDParticleActor::StaticClass();
	}
	struct Z_Construct_UClass_AChaosVDParticleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalParticleDataVisualizationFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocalParticleDataVisualizationFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalCollisionDataVisualizationFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocalCollisionDataVisualizationFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugText_MetaData[];
#endif
		static void NewProp_bShowDebugText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDataViewer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDataViewer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaosVDParticleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosVDParticleActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor used to represent a Chaos Particle in the Visual Debugger's world */" },
		{ "IncludePath", "ChaosVDParticleActor.h" },
		{ "ModuleRelativePath", "Public/ChaosVDParticleActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor used to represent a Chaos Particle in the Visual Debugger's world" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalParticleDataVisualizationFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EChaosVDParticleDataVisualizationFlags" },
		{ "Category", "Viewport Visualization Flags" },
		{ "ModuleRelativePath", "Public/ChaosVDParticleActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalParticleDataVisualizationFlags = { "LocalParticleDataVisualizationFlags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosVDParticleActor, LocalParticleDataVisualizationFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalParticleDataVisualizationFlags_MetaData), Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalParticleDataVisualizationFlags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalCollisionDataVisualizationFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EChaosVDCollisionVisualizationFlags" },
		{ "Category", "Viewport Visualization Flags" },
		{ "ModuleRelativePath", "Public/ChaosVDParticleActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalCollisionDataVisualizationFlags = { "LocalCollisionDataVisualizationFlags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosVDParticleActor, LocalCollisionDataVisualizationFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalCollisionDataVisualizationFlags_MetaData), Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalCollisionDataVisualizationFlags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText_MetaData[] = {
		{ "Category", "Viewport Visualization Flags" },
		{ "ModuleRelativePath", "Public/ChaosVDParticleActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText_SetBit(void* Obj)
	{
		((AChaosVDParticleActor*)Obj)->bShowDebugText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText = { "bShowDebugText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChaosVDParticleActor), &Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText_MetaData), Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_ParticleDataViewer_MetaData[] = {
		{ "Category", "Particle Data" },
		{ "ModuleRelativePath", "Public/ChaosVDParticleActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_ParticleDataViewer = { "ParticleDataViewer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChaosVDParticleActor, ParticleDataViewer), Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_ParticleDataViewer_MetaData), Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_ParticleDataViewer_MetaData) }; // 1659660759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaosVDParticleActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalParticleDataVisualizationFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_LocalCollisionDataVisualizationFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_bShowDebugText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosVDParticleActor_Statics::NewProp_ParticleDataViewer,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChaosVDParticleActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChaosVDVisualizerContainerInterface_NoRegister, (int32)VTABLE_OFFSET(AChaosVDParticleActor, IChaosVDVisualizerContainerInterface), false },  // 1402228781
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaosVDParticleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosVDParticleActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaosVDParticleActor_Statics::ClassParams = {
		&AChaosVDParticleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChaosVDParticleActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AChaosVDParticleActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChaosVDParticleActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChaosVDParticleActor()
	{
		if (!Z_Registration_Info_UClass_AChaosVDParticleActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaosVDParticleActor.OuterSingleton, Z_Construct_UClass_AChaosVDParticleActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChaosVDParticleActor.OuterSingleton;
	}
	template<> CHAOSVD_API UClass* StaticClass<AChaosVDParticleActor>()
	{
		return AChaosVDParticleActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosVDParticleActor);
	AChaosVDParticleActor::~AChaosVDParticleActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDParticleActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDParticleActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChaosVDParticleActor, AChaosVDParticleActor::StaticClass, TEXT("AChaosVDParticleActor"), &Z_Registration_Info_UClass_AChaosVDParticleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaosVDParticleActor), 1360271688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDParticleActor_h_4286518300(TEXT("/Script/ChaosVD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDParticleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_ChaosVDParticleActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

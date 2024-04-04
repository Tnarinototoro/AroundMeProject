// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassVisualizationTrait.h"
#include "MassRepresentationFragments.h"
#include "MassRepresentationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassVisualizationTrait() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait_NoRegister();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationParameters();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationLODParameters();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassVisualizationTrait::StaticRegisterNativesUMassVisualizationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassVisualizationTrait);
	UClass* Z_Construct_UClass_UMassVisualizationTrait_NoRegister()
	{
		return UMassVisualizationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassVisualizationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighResTemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HighResTemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowResTemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LowResTemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationSubsystemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentationSubsystemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowServerSideVisualization_MetaData[];
#endif
		static void NewProp_bAllowServerSideVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowServerSideVisualization;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanModifyRepresentationSubsystemClass_MetaData[];
#endif
		static void NewProp_bCanModifyRepresentationSubsystemClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanModifyRepresentationSubsystemClass;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassVisualizationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This class has been soft-deprecated. Use MassStationaryVisualizationTrait or MassMovableVisualizationTrait */" },
		{ "DisplayName", "DEPRECATED Visualization" },
		{ "IncludePath", "MassVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "This class has been soft-deprecated. Use MassStationaryVisualizationTrait or MassMovableVisualizationTrait" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_StaticMeshInstanceDesc_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Instanced static mesh information for this agent */" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "Instanced static mesh information for this agent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_StaticMeshInstanceDesc = { "StaticMeshInstanceDesc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassVisualizationTrait, StaticMeshInstanceDesc), Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_StaticMeshInstanceDesc_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_StaticMeshInstanceDesc_MetaData) }; // 1368893848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_HighResTemplateActor_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Actor class of this agent when spawned in high resolution*/" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "Actor class of this agent when spawned in high resolution" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_HighResTemplateActor = { "HighResTemplateActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassVisualizationTrait, HighResTemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_HighResTemplateActor_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_HighResTemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LowResTemplateActor_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Actor class of this agent when spawned in low resolution*/" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "Actor class of this agent when spawned in low resolution" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LowResTemplateActor = { "LowResTemplateActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassVisualizationTrait, LowResTemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LowResTemplateActor_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LowResTemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Allow subclasses to override the representation subsystem to use */" },
		{ "EditCondition", "bCanModifyRepresentationSubsystemClass" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "Allow subclasses to override the representation subsystem to use" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass = { "RepresentationSubsystemClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassVisualizationTrait, RepresentationSubsystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Configuration parameters for the representation processor */" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "Configuration parameters for the representation processor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassVisualizationTrait, Params), Z_Construct_UScriptStruct_FMassRepresentationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_Params_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_Params_MetaData) }; // 1606144726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LODParams_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Configuration parameters for the visualization LOD processor */" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "Configuration parameters for the visualization LOD processor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LODParams = { "LODParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassVisualizationTrait, LODParams), Z_Construct_UScriptStruct_FMassVisualizationLODParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LODParams_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LODParams_MetaData) }; // 178664452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** If set to true will result in the visualization-related fragments being added to server-size entities as well.\n\x09 *  By default only the clients require visualization fragments */" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "If set to true will result in the visualization-related fragments being added to server-size entities as well.\nBy default only the clients require visualization fragments" },
	};
#endif
	void Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization_SetBit(void* Obj)
	{
		((UMassVisualizationTrait*)Obj)->bAllowServerSideVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization = { "bAllowServerSideVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassVisualizationTrait), &Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** the property is marked like this to ensure it won't show up in UI */" },
		{ "ModuleRelativePath", "Public/MassVisualizationTrait.h" },
		{ "ToolTip", "the property is marked like this to ensure it won't show up in UI" },
	};
#endif
	void Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass_SetBit(void* Obj)
	{
		((UMassVisualizationTrait*)Obj)->bCanModifyRepresentationSubsystemClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass = { "bCanModifyRepresentationSubsystemClass", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassVisualizationTrait), &Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass_MetaData), Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassVisualizationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_StaticMeshInstanceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_HighResTemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LowResTemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_RepresentationSubsystemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_LODParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bAllowServerSideVisualization,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationTrait_Statics::NewProp_bCanModifyRepresentationSubsystemClass,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassVisualizationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassVisualizationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassVisualizationTrait_Statics::ClassParams = {
		&UMassVisualizationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassVisualizationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassVisualizationTrait_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationTrait_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassVisualizationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassVisualizationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassVisualizationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassVisualizationTrait.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassVisualizationTrait>()
	{
		return UMassVisualizationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassVisualizationTrait);
	UMassVisualizationTrait::~UMassVisualizationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassVisualizationTrait, UMassVisualizationTrait::StaticClass, TEXT("UMassVisualizationTrait"), &Z_Registration_Info_UClass_UMassVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassVisualizationTrait), 4061874650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_2090901255(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

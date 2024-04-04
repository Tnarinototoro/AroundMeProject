// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformablePhysicsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformablePhysicsComponent() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableSolverActor_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformablePhysicsComponent();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformablePhysicsComponent_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableSolverComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeformableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	DEFINE_FUNCTION(UDeformablePhysicsComponent::execEnableSimulationFromActor)
	{
		P_GET_OBJECT(ADeformableSolverActor,Z_Param_DeformableSolverActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSimulationFromActor(Z_Param_DeformableSolverActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeformablePhysicsComponent::execEnableSimulation)
	{
		P_GET_OBJECT(UDeformableSolverComponent,Z_Param_DeformableSolverComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSimulation(Z_Param_DeformableSolverComponent);
		P_NATIVE_END;
	}
	void UDeformablePhysicsComponent::StaticRegisterNativesUDeformablePhysicsComponent()
	{
		UClass* Class = UDeformablePhysicsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableSimulation", &UDeformablePhysicsComponent::execEnableSimulation },
			{ "EnableSimulationFromActor", &UDeformablePhysicsComponent::execEnableSimulationFromActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics
	{
		struct DeformablePhysicsComponent_eventEnableSimulation_Parms
		{
			UDeformableSolverComponent* DeformableSolverComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformableSolverComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformableSolverComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::NewProp_DeformableSolverComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::NewProp_DeformableSolverComponent = { "DeformableSolverComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeformablePhysicsComponent_eventEnableSimulation_Parms, DeformableSolverComponent), Z_Construct_UClass_UDeformableSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::NewProp_DeformableSolverComponent_MetaData), Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::NewProp_DeformableSolverComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::NewProp_DeformableSolverComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformablePhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformablePhysicsComponent, nullptr, "EnableSimulation", nullptr, nullptr, Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::DeformablePhysicsComponent_eventEnableSimulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::DeformablePhysicsComponent_eventEnableSimulation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics
	{
		struct DeformablePhysicsComponent_eventEnableSimulationFromActor_Parms
		{
			ADeformableSolverActor* DeformableSolverActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformableSolverActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::NewProp_DeformableSolverActor = { "DeformableSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeformablePhysicsComponent_eventEnableSimulationFromActor_Parms, DeformableSolverActor), Z_Construct_UClass_ADeformableSolverActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::NewProp_DeformableSolverActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformablePhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformablePhysicsComponent, nullptr, "EnableSimulationFromActor", nullptr, nullptr, Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::DeformablePhysicsComponent_eventEnableSimulationFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::DeformablePhysicsComponent_eventEnableSimulationFromActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformablePhysicsComponent);
	UClass* Z_Construct_UClass_UDeformablePhysicsComponent_NoRegister()
	{
		return UDeformablePhysicsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDeformablePhysicsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySolverComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimarySolverComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeformablePhysicsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeformablePhysicsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulation, "EnableSimulation" }, // 1043661005
		{ &Z_Construct_UFunction_UDeformablePhysicsComponent_EnableSimulationFromActor, "EnableSimulationFromActor" }, // 3654143024
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformablePhysicsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09UDeformablePhysicsComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ChaosFlesh/ChaosDeformablePhysicsComponent.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformablePhysicsComponent.h" },
		{ "ToolTip", "UDeformablePhysicsComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformablePhysicsComponent_Statics::NewProp_PrimarySolverComponent_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayPriority", "2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformablePhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformablePhysicsComponent_Statics::NewProp_PrimarySolverComponent = { "PrimarySolverComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeformablePhysicsComponent, PrimarySolverComponent), Z_Construct_UClass_UDeformableSolverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::NewProp_PrimarySolverComponent_MetaData), Z_Construct_UClass_UDeformablePhysicsComponent_Statics::NewProp_PrimarySolverComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformablePhysicsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformablePhysicsComponent_Statics::NewProp_PrimarySolverComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDeformablePhysicsComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDeformableInterface_NoRegister, (int32)VTABLE_OFFSET(UDeformablePhysicsComponent, IDeformableInterface), false },  // 1874081072
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeformablePhysicsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformablePhysicsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformablePhysicsComponent_Statics::ClassParams = {
		&UDeformablePhysicsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeformablePhysicsComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeformablePhysicsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeformablePhysicsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDeformablePhysicsComponent()
	{
		if (!Z_Registration_Info_UClass_UDeformablePhysicsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformablePhysicsComponent.OuterSingleton, Z_Construct_UClass_UDeformablePhysicsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeformablePhysicsComponent.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UDeformablePhysicsComponent>()
	{
		return UDeformablePhysicsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformablePhysicsComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeformablePhysicsComponent, UDeformablePhysicsComponent::StaticClass, TEXT("UDeformablePhysicsComponent"), &Z_Registration_Info_UClass_UDeformablePhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformablePhysicsComponent), 2353856416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_3314617833(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformablePhysicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

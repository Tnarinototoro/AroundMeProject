// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NearestNeighborModelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborModelInstance() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelInstance();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelInstance_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	DEFINE_FUNCTION(UNearestNeighborModelInstance::execEval)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_InputData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->Eval(Z_Param_Out_InputData);
		P_NATIVE_END;
	}
	void UNearestNeighborModelInstance::StaticRegisterNativesUNearestNeighborModelInstance()
	{
		UClass* Class = UNearestNeighborModelInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Eval", &UNearestNeighborModelInstance::execEval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics
	{
		struct NearestNeighborModelInstance_eventEval_Parms
		{
			TArray<float> InputData;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData_Inner = { "InputData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NearestNeighborModelInstance_eventEval_Parms, InputData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData_MetaData), Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NearestNeighborModelInstance_eventEval_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_InputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Public/NearestNeighborModelInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborModelInstance, nullptr, "Eval", nullptr, nullptr, Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NearestNeighborModelInstance_eventEval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::NearestNeighborModelInstance_eventEval_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNearestNeighborModelInstance_Eval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborModelInstance_Eval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborModelInstance);
	UClass* Z_Construct_UClass_UNearestNeighborModelInstance_NoRegister()
	{
		return UNearestNeighborModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimizedNetworkInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptimizedNetworkInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearestNeighborModelInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearestNeighborModelInstance_Eval, "Eval" }, // 2134322506
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NearestNeighborModelInstance.h" },
		{ "ModuleRelativePath", "Public/NearestNeighborModelInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModelInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance = { "OptimizedNetworkInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNearestNeighborModelInstance, OptimizedNetworkInstance), Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance_MetaData), Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborModelInstance_Statics::ClassParams = {
		&UNearestNeighborModelInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNearestNeighborModelInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNearestNeighborModelInstance()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborModelInstance.OuterSingleton, Z_Construct_UClass_UNearestNeighborModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborModelInstance.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborModelInstance>()
	{
		return UNearestNeighborModelInstance::StaticClass();
	}
	UNearestNeighborModelInstance::UNearestNeighborModelInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborModelInstance);
	UNearestNeighborModelInstance::~UNearestNeighborModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborModelInstance, UNearestNeighborModelInstance::StaticClass, TEXT("UNearestNeighborModelInstance"), &Z_Registration_Info_UClass_UNearestNeighborModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborModelInstance), 2675516733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_2584527159(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

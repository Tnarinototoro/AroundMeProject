// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ICVFXTestControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICVFXTestControllerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerBase();
	ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ICVFXTesting();
// End Cross Module References
	DEFINE_FUNCTION(UICVFXTestControllerBase::execOnMemReportIntervalChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMemReportIntervalChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UICVFXTestControllerBase::execOnMemReportTimerExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMemReportTimerExpired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UICVFXTestControllerBase::execTryEarlyExec)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryEarlyExec(Z_Param_World);
		P_NATIVE_END;
	}
	void UICVFXTestControllerBase::StaticRegisterNativesUICVFXTestControllerBase()
	{
		UClass* Class = UICVFXTestControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMemReportIntervalChanged", &UICVFXTestControllerBase::execOnMemReportIntervalChanged },
			{ "OnMemReportTimerExpired", &UICVFXTestControllerBase::execOnMemReportTimerExpired },
			{ "TryEarlyExec", &UICVFXTestControllerBase::execTryEarlyExec },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ICVFXTestControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICVFXTestControllerBase, nullptr, "OnMemReportIntervalChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ICVFXTestControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICVFXTestControllerBase, nullptr, "OnMemReportTimerExpired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics
	{
		struct ICVFXTestControllerBase_eventTryEarlyExec_Parms
		{
			const UWorld* World;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICVFXTestControllerBase_eventTryEarlyExec_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::NewProp_World_MetaData), Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ICVFXTestControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICVFXTestControllerBase, nullptr, "TryEarlyExec", nullptr, nullptr, Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::ICVFXTestControllerBase_eventTryEarlyExec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::ICVFXTestControllerBase_eventTryEarlyExec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UICVFXTestControllerBase);
	UClass* Z_Construct_UClass_UICVFXTestControllerBase_NoRegister()
	{
		return UICVFXTestControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UICVFXTestControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UICVFXTestControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestController,
		(UObject* (*)())Z_Construct_UPackage__Script_ICVFXTesting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICVFXTestControllerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UICVFXTestControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportIntervalChanged, "OnMemReportIntervalChanged" }, // 1164484071
		{ &Z_Construct_UFunction_UICVFXTestControllerBase_OnMemReportTimerExpired, "OnMemReportTimerExpired" }, // 4068563802
		{ &Z_Construct_UFunction_UICVFXTestControllerBase_TryEarlyExec, "TryEarlyExec" }, // 3322878767
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICVFXTestControllerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UICVFXTestControllerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ICVFXTestControllerBase.h" },
		{ "ModuleRelativePath", "Public/ICVFXTestControllerBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UICVFXTestControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UICVFXTestControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UICVFXTestControllerBase_Statics::ClassParams = {
		&UICVFXTestControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UICVFXTestControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UICVFXTestControllerBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UICVFXTestControllerBase()
	{
		if (!Z_Registration_Info_UClass_UICVFXTestControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UICVFXTestControllerBase.OuterSingleton, Z_Construct_UClass_UICVFXTestControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UICVFXTestControllerBase.OuterSingleton;
	}
	template<> ICVFXTESTING_API UClass* StaticClass<UICVFXTestControllerBase>()
	{
		return UICVFXTestControllerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UICVFXTestControllerBase);
	UICVFXTestControllerBase::~UICVFXTestControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UICVFXTestControllerBase, UICVFXTestControllerBase::StaticClass, TEXT("UICVFXTestControllerBase"), &Z_Registration_Info_UClass_UICVFXTestControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UICVFXTestControllerBase), 150500914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_827718912(TEXT("/Script/ICVFXTesting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

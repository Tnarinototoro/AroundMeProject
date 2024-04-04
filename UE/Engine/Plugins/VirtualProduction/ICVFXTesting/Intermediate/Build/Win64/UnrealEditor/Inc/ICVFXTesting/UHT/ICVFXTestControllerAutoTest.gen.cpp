// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ICVFXTestControllerAutoTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICVFXTestControllerAutoTest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerAutoTest();
	ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerAutoTest_NoRegister();
	ICVFXTESTING_API UClass* Z_Construct_UClass_UICVFXTestControllerBase();
	ICVFXTESTING_API UEnum* Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState();
	UPackage* Z_Construct_UPackage__Script_ICVFXTesting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EICVFXAutoTestState;
	static UEnum* EICVFXAutoTestState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EICVFXAutoTestState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EICVFXAutoTestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState, (UObject*)Z_Construct_UPackage__Script_ICVFXTesting(), TEXT("EICVFXAutoTestState"));
		}
		return Z_Registration_Info_UEnum_EICVFXAutoTestState.OuterSingleton;
	}
	template<> ICVFXTESTING_API UEnum* StaticEnum<EICVFXAutoTestState>()
	{
		return EICVFXAutoTestState_StaticEnum();
	}
	struct Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::Enumerators[] = {
		{ "EICVFXAutoTestState::InitialLoad", (int64)EICVFXAutoTestState::InitialLoad },
		{ "EICVFXAutoTestState::Soak", (int64)EICVFXAutoTestState::Soak },
		{ "EICVFXAutoTestState::TraverseTestLocations", (int64)EICVFXAutoTestState::TraverseTestLocations },
		{ "EICVFXAutoTestState::Finished", (int64)EICVFXAutoTestState::Finished },
		{ "EICVFXAutoTestState::Shutdown", (int64)EICVFXAutoTestState::Shutdown },
		{ "EICVFXAutoTestState::MAX", (int64)EICVFXAutoTestState::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::Enum_MetaDataParams[] = {
		{ "Finished.Name", "EICVFXAutoTestState::Finished" },
		{ "InitialLoad.Name", "EICVFXAutoTestState::InitialLoad" },
		{ "MAX.Name", "EICVFXAutoTestState::MAX" },
		{ "ModuleRelativePath", "Public/ICVFXTestControllerAutoTest.h" },
		{ "Shutdown.Name", "EICVFXAutoTestState::Shutdown" },
		{ "Soak.Name", "EICVFXAutoTestState::Soak" },
		{ "TraverseTestLocations.Name", "EICVFXAutoTestState::TraverseTestLocations" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ICVFXTesting,
		nullptr,
		"EICVFXAutoTestState",
		"EICVFXAutoTestState",
		Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState()
	{
		if (!Z_Registration_Info_UEnum_EICVFXAutoTestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EICVFXAutoTestState.InnerSingleton, Z_Construct_UEnum_ICVFXTesting_EICVFXAutoTestState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EICVFXAutoTestState.InnerSingleton;
	}
	DEFINE_FUNCTION(UICVFXTestControllerAutoTest::execOnSoakTimeChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSoakTimeChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UICVFXTestControllerAutoTest::execOnGameStateSet)
	{
		P_GET_OBJECT(AGameStateBase,Z_Param_GameStateBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameStateSet(Z_Param_GameStateBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UICVFXTestControllerAutoTest::execOnWorldBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWorldBeginPlay();
		P_NATIVE_END;
	}
	void UICVFXTestControllerAutoTest::StaticRegisterNativesUICVFXTestControllerAutoTest()
	{
		UClass* Class = UICVFXTestControllerAutoTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameStateSet", &UICVFXTestControllerAutoTest::execOnGameStateSet },
			{ "OnSoakTimeChanged", &UICVFXTestControllerAutoTest::execOnSoakTimeChanged },
			{ "OnWorldBeginPlay", &UICVFXTestControllerAutoTest::execOnWorldBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics
	{
		struct ICVFXTestControllerAutoTest_eventOnGameStateSet_Parms
		{
			const AGameStateBase* GameStateBase;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameStateBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameStateBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase = { "GameStateBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ICVFXTestControllerAutoTest_eventOnGameStateSet_Parms, GameStateBase), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase_MetaData), Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::NewProp_GameStateBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ICVFXTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICVFXTestControllerAutoTest, nullptr, "OnGameStateSet", nullptr, nullptr, Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::ICVFXTestControllerAutoTest_eventOnGameStateSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::ICVFXTestControllerAutoTest_eventOnGameStateSet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ICVFXTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICVFXTestControllerAutoTest, nullptr, "OnSoakTimeChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ICVFXTestControllerAutoTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UICVFXTestControllerAutoTest, nullptr, "OnWorldBeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UICVFXTestControllerAutoTest);
	UClass* Z_Construct_UClass_UICVFXTestControllerAutoTest_NoRegister()
	{
		return UICVFXTestControllerAutoTest::StaticClass();
	}
	struct Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UICVFXTestControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ICVFXTesting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnGameStateSet, "OnGameStateSet" }, // 524329189
		{ &Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnSoakTimeChanged, "OnSoakTimeChanged" }, // 2455855741
		{ &Z_Construct_UFunction_UICVFXTestControllerAutoTest_OnWorldBeginPlay, "OnWorldBeginPlay" }, // 2813994895
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ICVFXTestControllerAutoTest.h" },
		{ "ModuleRelativePath", "Public/ICVFXTestControllerAutoTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UICVFXTestControllerAutoTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::ClassParams = {
		&UICVFXTestControllerAutoTest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UICVFXTestControllerAutoTest()
	{
		if (!Z_Registration_Info_UClass_UICVFXTestControllerAutoTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UICVFXTestControllerAutoTest.OuterSingleton, Z_Construct_UClass_UICVFXTestControllerAutoTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UICVFXTestControllerAutoTest.OuterSingleton;
	}
	template<> ICVFXTESTING_API UClass* StaticClass<UICVFXTestControllerAutoTest>()
	{
		return UICVFXTestControllerAutoTest::StaticClass();
	}
	UICVFXTestControllerAutoTest::UICVFXTestControllerAutoTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UICVFXTestControllerAutoTest);
	UICVFXTestControllerAutoTest::~UICVFXTestControllerAutoTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics::EnumInfo[] = {
		{ EICVFXAutoTestState_StaticEnum, TEXT("EICVFXAutoTestState"), &Z_Registration_Info_UEnum_EICVFXAutoTestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1576656353U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UICVFXTestControllerAutoTest, UICVFXTestControllerAutoTest::StaticClass, TEXT("UICVFXTestControllerAutoTest"), &Z_Registration_Info_UClass_UICVFXTestControllerAutoTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UICVFXTestControllerAutoTest), 973924912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_3315253013(TEXT("/Script/ICVFXTesting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestControllerAutoTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

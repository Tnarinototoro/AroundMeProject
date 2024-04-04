// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/MVVMFieldValueChangedTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMFieldValueChangedTest() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMFieldValueChangedTest();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMFieldValueChangedTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMFieldValueChangedTest::execFunctionFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FunctionFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMFieldValueChangedTest::execFunctionInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FunctionInt();
		P_NATIVE_END;
	}
	void UMVVMFieldValueChangedTest::StaticRegisterNativesUMVVMFieldValueChangedTest()
	{
		UClass* Class = UMVVMFieldValueChangedTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FunctionFloat", &UMVVMFieldValueChangedTest::execFunctionFloat },
			{ "FunctionInt", &UMVVMFieldValueChangedTest::execFunctionInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics
	{
		struct MVVMFieldValueChangedTest_eventFunctionFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMFieldValueChangedTest_eventFunctionFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldValueChangedTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMFieldValueChangedTest, nullptr, "FunctionFloat", nullptr, nullptr, Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::MVVMFieldValueChangedTest_eventFunctionFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::MVVMFieldValueChangedTest_eventFunctionFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics
	{
		struct MVVMFieldValueChangedTest_eventFunctionInt_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMFieldValueChangedTest_eventFunctionInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldValueChangedTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMFieldValueChangedTest, nullptr, "FunctionInt", nullptr, nullptr, Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::MVVMFieldValueChangedTest_eventFunctionInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::MVVMFieldValueChangedTest_eventFunctionInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMFieldValueChangedTest);
	UClass* Z_Construct_UClass_UMVVMFieldValueChangedTest_NoRegister()
	{
		return UMVVMFieldValueChangedTest::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropertyFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionFloat, "FunctionFloat" }, // 17838299
		{ &Z_Construct_UFunction_UMVVMFieldValueChangedTest_FunctionInt, "FunctionInt" }, // 4093618273
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MVVMFieldValueChangedTest.h" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldValueChangedTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyInt_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldValueChangedTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyInt = { "PropertyInt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMFieldValueChangedTest, PropertyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyInt_MetaData), Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyFloat_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldValueChangedTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyFloat = { "PropertyFloat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMFieldValueChangedTest, PropertyFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyFloat_MetaData), Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyFloat_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::NewProp_PropertyFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMFieldValueChangedTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::ClassParams = {
		&UMVVMFieldValueChangedTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::PropPointers),
		0,
		0x050800A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMFieldValueChangedTest()
	{
		if (!Z_Registration_Info_UClass_UMVVMFieldValueChangedTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMFieldValueChangedTest.OuterSingleton, Z_Construct_UClass_UMVVMFieldValueChangedTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMFieldValueChangedTest.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMFieldValueChangedTest>()
	{
		return UMVVMFieldValueChangedTest::StaticClass();
	}
	UMVVMFieldValueChangedTest::UMVVMFieldValueChangedTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMFieldValueChangedTest);
	UMVVMFieldValueChangedTest::~UMVVMFieldValueChangedTest() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMFieldValueChangedTest, PropertyInt)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMFieldValueChangedTest, PropertyFloat)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMFieldValueChangedTest, FunctionInt)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMFieldValueChangedTest, FunctionFloat)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UMVVMFieldValueChangedTest)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMFieldValueChangedTest, PropertyInt)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMFieldValueChangedTest, PropertyFloat)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMFieldValueChangedTest, FunctionInt)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMFieldValueChangedTest, FunctionFloat)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UMVVMFieldValueChangedTest);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldValueChangedTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldValueChangedTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMFieldValueChangedTest, UMVVMFieldValueChangedTest::StaticClass, TEXT("UMVVMFieldValueChangedTest"), &Z_Registration_Info_UClass_UMVVMFieldValueChangedTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMFieldValueChangedTest), 1783798372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldValueChangedTest_h_1556695210(TEXT("/Script/ModelViewViewModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldValueChangedTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldValueChangedTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

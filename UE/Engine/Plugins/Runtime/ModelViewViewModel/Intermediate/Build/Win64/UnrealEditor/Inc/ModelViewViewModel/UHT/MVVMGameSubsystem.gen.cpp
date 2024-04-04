// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMGameSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMGameSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMGameSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMGameSubsystem_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMGameSubsystem::execGetViewModelCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelCollectionObject**)Z_Param__Result=P_THIS->GetViewModelCollection();
		P_NATIVE_END;
	}
	void UMVVMGameSubsystem::StaticRegisterNativesUMVVMGameSubsystem()
	{
		UClass* Class = UMVVMGameSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetViewModelCollection", &UMVVMGameSubsystem::execGetViewModelCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics
	{
		struct MVVMGameSubsystem_eventGetViewModelCollection_Parms
		{
			UMVVMViewModelCollectionObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMGameSubsystem_eventGetViewModelCollection_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "//~ End UEngineSubsystem interface\n" },
		{ "ModuleRelativePath", "Public/MVVMGameSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMGameSubsystem, nullptr, "GetViewModelCollection", nullptr, nullptr, Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::MVVMGameSubsystem_eventGetViewModelCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::MVVMGameSubsystem_eventGetViewModelCollection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMGameSubsystem);
	UClass* Z_Construct_UClass_UMVVMGameSubsystem_NoRegister()
	{
		return UMVVMGameSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMGameSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewModelCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMGameSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMGameSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMGameSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMGameSubsystem_GetViewModelCollection, "GetViewModelCollection" }, // 1312423492
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMGameSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMGameSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "DisplayName", "Viewmodel Game Subsytem" },
		{ "IncludePath", "MVVMGameSubsystem.h" },
		{ "ModuleRelativePath", "Public/MVVMGameSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMGameSubsystem_Statics::NewProp_ViewModelCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMGameSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMGameSubsystem_Statics::NewProp_ViewModelCollection = { "ViewModelCollection", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMGameSubsystem, ViewModelCollection), Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMGameSubsystem_Statics::NewProp_ViewModelCollection_MetaData), Z_Construct_UClass_UMVVMGameSubsystem_Statics::NewProp_ViewModelCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMGameSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMGameSubsystem_Statics::NewProp_ViewModelCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMGameSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMGameSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMGameSubsystem_Statics::ClassParams = {
		&UMVVMGameSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMGameSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMGameSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMGameSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMGameSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMGameSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMGameSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMVVMGameSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMGameSubsystem.OuterSingleton, Z_Construct_UClass_UMVVMGameSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMGameSubsystem.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMGameSubsystem>()
	{
		return UMVVMGameSubsystem::StaticClass();
	}
	UMVVMGameSubsystem::UMVVMGameSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMGameSubsystem);
	UMVVMGameSubsystem::~UMVVMGameSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMGameSubsystem, UMVVMGameSubsystem::StaticClass, TEXT("UMVVMGameSubsystem"), &Z_Registration_Info_UClass_UMVVMGameSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMGameSubsystem), 3644027987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_3184090170(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMGameSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

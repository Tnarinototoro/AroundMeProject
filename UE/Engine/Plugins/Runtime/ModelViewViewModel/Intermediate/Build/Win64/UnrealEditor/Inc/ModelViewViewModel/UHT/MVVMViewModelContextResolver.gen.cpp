// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "View/MVVMViewModelContextResolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelContextResolver() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FIELDNOTIFICATION_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelContextResolver();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	struct MVVMViewModelContextResolver_eventK2_CreateInstance_Parms
	{
		const UClass* ExpectedType;
		const UUserWidget* UserWidget;
		TScriptInterface<INotifyFieldValueChanged> ReturnValue;
	};
	static FName NAME_UMVVMViewModelContextResolver_K2_CreateInstance = FName(TEXT("K2_CreateInstance"));
	TScriptInterface<INotifyFieldValueChanged> UMVVMViewModelContextResolver::K2_CreateInstance(const UClass* ExpectedType, const UUserWidget* UserWidget) const
	{
		MVVMViewModelContextResolver_eventK2_CreateInstance_Parms Parms;
		Parms.ExpectedType=ExpectedType;
		Parms.UserWidget=UserWidget;
		const_cast<UMVVMViewModelContextResolver*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMVVMViewModelContextResolver_K2_CreateInstance),&Parms);
		return Parms.ReturnValue;
	}
	void UMVVMViewModelContextResolver::StaticRegisterNativesUMVVMViewModelContextResolver()
	{
	}
	struct Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpectedType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ExpectedType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ExpectedType = { "ExpectedType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelContextResolver_eventK2_CreateInstance_Parms, ExpectedType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ExpectedType_MetaData), Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ExpectedType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelContextResolver_eventK2_CreateInstance_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_UserWidget_MetaData), Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_UserWidget_MetaData) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelContextResolver_eventK2_CreateInstance_Parms, ReturnValue), Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ExpectedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_UserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "DisplayName", "Create Instance" },
		{ "ModuleRelativePath", "Public/View/MVVMViewModelContextResolver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelContextResolver, nullptr, "K2_CreateInstance", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::PropPointers), sizeof(MVVMViewModelContextResolver_eventK2_CreateInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(MVVMViewModelContextResolver_eventK2_CreateInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelContextResolver);
	UClass* Z_Construct_UClass_UMVVMViewModelContextResolver_NoRegister()
	{
		return UMVVMViewModelContextResolver::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelContextResolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMViewModelContextResolver_K2_CreateInstance, "K2_CreateInstance" }, // 1848135173
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Shared data to find or create a ViewModel at runtime.\n */" },
		{ "DisplayName", "Viewmodel Resolver" },
		{ "IncludePath", "View/MVVMViewModelContextResolver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/View/MVVMViewModelContextResolver.h" },
		{ "ToolTip", "Shared data to find or create a ViewModel at runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelContextResolver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::ClassParams = {
		&UMVVMViewModelContextResolver::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMViewModelContextResolver()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelContextResolver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelContextResolver.OuterSingleton, Z_Construct_UClass_UMVVMViewModelContextResolver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelContextResolver.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewModelContextResolver>()
	{
		return UMVVMViewModelContextResolver::StaticClass();
	}
	UMVVMViewModelContextResolver::UMVVMViewModelContextResolver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelContextResolver);
	UMVVMViewModelContextResolver::~UMVVMViewModelContextResolver() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelContextResolver, UMVVMViewModelContextResolver::StaticClass, TEXT("UMVVMViewModelContextResolver"), &Z_Registration_Info_UClass_UMVVMViewModelContextResolver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelContextResolver), 715453758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_4117450593(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewModelContextResolver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

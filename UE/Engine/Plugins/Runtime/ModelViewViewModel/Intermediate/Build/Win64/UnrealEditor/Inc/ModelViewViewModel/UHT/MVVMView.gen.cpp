// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "View/MVVMView.h"
#include "Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FIELDNOTIFICATION_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMView();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMView_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewSource();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewSource;
class UScriptStruct* FMVVMViewSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewSource, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewSource"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewSource.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewSource>()
{
	return FMVVMViewSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegisteredCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatedSource_MetaData[];
#endif
		static void NewProp_bCreatedSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatedSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetManually_MetaData[];
#endif
		static void NewProp_bSetManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetManually;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignedToUserWidgetProperty_MetaData[];
#endif
		static void NewProp_bAssignedToUserWidgetProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignedToUserWidgetProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewSource, Source), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_Source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "// TScriptInterface<INotifyFieldValueChanged>\n" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "TScriptInterface<INotifyFieldValueChanged>" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewSource, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_SourceName_MetaData), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_SourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_RegisteredCount_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "// Number of bindings connected to the source.\n" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Number of bindings connected to the source." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_RegisteredCount = { "RegisteredCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewSource, RegisteredCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_RegisteredCount_MetaData), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_RegisteredCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "// The source is defined in the ClassExtension.\n" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "The source is defined in the ClassExtension." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource_SetBit(void* Obj)
	{
		((FMVVMViewSource*)Obj)->bCreatedSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource = { "bCreatedSource", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMViewSource), &Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource_MetaData), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "// The source was set manually via SetViewModel.\n" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "The source was set manually via SetViewModel." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually_SetBit(void* Obj)
	{
		((FMVVMViewSource*)Obj)->bSetManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually = { "bSetManually", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMViewSource), &Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually_MetaData), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "// The source was set to a UserWidget property.\n" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "The source was set to a UserWidget property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty_SetBit(void* Obj)
	{
		((FMVVMViewSource*)Obj)->bAssignedToUserWidgetProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty = { "bAssignedToUserWidgetProperty", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMVVMViewSource), &Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty_MetaData), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_RegisteredCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bCreatedSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bSetManually,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewProp_bAssignedToUserWidgetProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewSource",
		Z_Construct_UScriptStruct_FMVVMViewSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::PropPointers),
		sizeof(FMVVMViewSource),
		alignof(FMVVMViewSource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewSource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewSource()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewSource.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewSource.InnerSingleton;
	}
	DEFINE_FUNCTION(UMVVMView::execSetViewModelByClass)
	{
		P_GET_TINTERFACE(INotifyFieldValueChanged,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetViewModelByClass(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execSetViewModel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewModelName);
		P_GET_TINTERFACE(INotifyFieldValueChanged,Z_Param_ViewModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetViewModel(Z_Param_ViewModelName,Z_Param_ViewModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execGetViewModel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewModelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<INotifyFieldValueChanged>*)Z_Param__Result=P_THIS->GetViewModel(Z_Param_ViewModelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execAreBindingsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreBindingsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execUninitializeBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninitializeBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execInitializeBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execAreSourcesInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreSourcesInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execUninitializeSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UninitializeSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMView::execInitializeSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSources();
		P_NATIVE_END;
	}
	void UMVVMView::StaticRegisterNativesUMVVMView()
	{
		UClass* Class = UMVVMView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreBindingsInitialized", &UMVVMView::execAreBindingsInitialized },
			{ "AreSourcesInitialized", &UMVVMView::execAreSourcesInitialized },
			{ "GetViewModel", &UMVVMView::execGetViewModel },
			{ "InitializeBindings", &UMVVMView::execInitializeBindings },
			{ "InitializeSources", &UMVVMView::execInitializeSources },
			{ "SetViewModel", &UMVVMView::execSetViewModel },
			{ "SetViewModelByClass", &UMVVMView::execSetViewModelByClass },
			{ "UninitializeBindings", &UMVVMView::execUninitializeBindings },
			{ "UninitializeSources", &UMVVMView::execUninitializeSources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics
	{
		struct MVVMView_eventAreBindingsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMView_eventAreBindingsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MVVMView_eventAreBindingsInitialized_Parms), &Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** The bindings were initialized, manually or automatically. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "The bindings were initialized, manually or automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "AreBindingsInitialized", nullptr, nullptr, Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::MVVMView_eventAreBindingsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::MVVMView_eventAreBindingsInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMView_AreBindingsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_AreBindingsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics
	{
		struct MVVMView_eventAreSourcesInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMView_eventAreSourcesInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MVVMView_eventAreSourcesInitialized_Parms), &Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** The sources were initialized, manually or automatically. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "The sources were initialized, manually or automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "AreSourcesInitialized", nullptr, nullptr, Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::MVVMView_eventAreSourcesInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::MVVMView_eventAreSourcesInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMView_AreSourcesInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_AreSourcesInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_GetViewModel_Statics
	{
		struct MVVMView_eventGetViewModel_Parms
		{
			FName ViewModelName;
			TScriptInterface<INotifyFieldValueChanged> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModelName;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::NewProp_ViewModelName = { "ViewModelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMView_eventGetViewModel_Parms, ViewModelName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMView_eventGetViewModel_Parms, ReturnValue), Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::NewProp_ViewModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Find and return the viewmodel with the specified name. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Find and return the viewmodel with the specified name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "GetViewModel", nullptr, nullptr, Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::MVVMView_eventGetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::MVVMView_eventGetViewModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMView_GetViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_GetViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Initialize the bindings if they are not already initialized.\n\x09 * Initializing the bindings will execute them.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Initialize the bindings if they are not already initialized.\nInitializing the bindings will execute them." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "InitializeBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMVVMView_InitializeBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_InitializeBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_InitializeSources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_InitializeSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Initialize the sources if they are not already initialized.\n\x09 * Initializing the sources will also initialize the bindings if the option bInitializeBindingsOnConstruct is enabled.\n\x09 * @note A sources can be a viewmodel or any other object used by a binding.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Initialize the sources if they are not already initialized.\nInitializing the sources will also initialize the bindings if the option bInitializeBindingsOnConstruct is enabled.\n@note A sources can be a viewmodel or any other object used by a binding." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_InitializeSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "InitializeSources", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_InitializeSources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_InitializeSources_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMVVMView_InitializeSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_InitializeSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_SetViewModel_Statics
	{
		struct MVVMView_eventSetViewModel_Parms
		{
			FName ViewModelName;
			TScriptInterface<INotifyFieldValueChanged> ViewModel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModelName;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ViewModel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModelName = { "ViewModelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMView_eventSetViewModel_Parms, ViewModelName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMView_eventSetViewModel_Parms, ViewModel), Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMView_eventSetViewModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MVVMView_eventSetViewModel_Parms), &Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Set the viewmodel of the specified name.\n\x09 * The viewmodel needs to be settable and the type should match (child of the defined viewmodel).\n\x09 * If the view is initialized, all bindings that uses that viewmodel will be re-executed with the new viewmodel instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Set the viewmodel of the specified name.\nThe viewmodel needs to be settable and the type should match (child of the defined viewmodel).\nIf the view is initialized, all bindings that uses that viewmodel will be re-executed with the new viewmodel instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "SetViewModel", nullptr, nullptr, Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::MVVMView_eventSetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::MVVMView_eventSetViewModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMView_SetViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_SetViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics
	{
		struct MVVMView_eventSetViewModelByClass_Parms
		{
			TScriptInterface<INotifyFieldValueChanged> NewValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMView_eventSetViewModelByClass_Parms, NewValue), Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMView_eventSetViewModelByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MVVMView_eventSetViewModelByClass_Parms), &Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Set the first viewmodel matching the exact specified type. If none is found, set the first viewmodel matching a child of the specified type\n\x09 * The viewmodel needs to be settable and it should have a valid name.\n\x09 * If the view is initialized, all bindings that uses that viewmodel will be re-executed with the new viewmodel instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Set the first viewmodel matching the exact specified type. If none is found, set the first viewmodel matching a child of the specified type\nThe viewmodel needs to be settable and it should have a valid name.\nIf the view is initialized, all bindings that uses that viewmodel will be re-executed with the new viewmodel instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "SetViewModelByClass", nullptr, nullptr, Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::MVVMView_eventSetViewModelByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::MVVMView_eventSetViewModelByClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMView_SetViewModelByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_SetViewModelByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Uninitialize the bindings if they are already initialized. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Uninitialize the bindings if they are already initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "UninitializeBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMVVMView_UninitializeBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_UninitializeBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/**\n\x09 * Uninitialize the sources if they are already initialized.\n\x09 * It will uninitialized the bindings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Uninitialize the sources if they are already initialized.\nIt will uninitialized the bindings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMView, nullptr, "UninitializeSources", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMVVMView_UninitializeSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMView_UninitializeSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMView);
	UClass* Z_Construct_UClass_UMVVMView_NoRegister()
	{
		return UMVVMView::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassExtension_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClassExtension;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogBinding_MetaData[];
#endif
		static void NewProp_bLogBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstructed_MetaData[];
#endif
		static void NewProp_bConstructed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstructed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSourcesInitialized_MetaData[];
#endif
		static void NewProp_bSourcesInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourcesInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBindingsInitialized_MetaData[];
#endif
		static void NewProp_bBindingsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindingsInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEveryTickBinding_MetaData[];
#endif
		static void NewProp_bHasEveryTickBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEveryTickBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidgetExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMView_AreBindingsInitialized, "AreBindingsInitialized" }, // 3785689102
		{ &Z_Construct_UFunction_UMVVMView_AreSourcesInitialized, "AreSourcesInitialized" }, // 1310977386
		{ &Z_Construct_UFunction_UMVVMView_GetViewModel, "GetViewModel" }, // 176600595
		{ &Z_Construct_UFunction_UMVVMView_InitializeBindings, "InitializeBindings" }, // 2326059937
		{ &Z_Construct_UFunction_UMVVMView_InitializeSources, "InitializeSources" }, // 4037560982
		{ &Z_Construct_UFunction_UMVVMView_SetViewModel, "SetViewModel" }, // 4260268039
		{ &Z_Construct_UFunction_UMVVMView_SetViewModelByClass, "SetViewModelByClass" }, // 3465024796
		{ &Z_Construct_UFunction_UMVVMView_UninitializeBindings, "UninitializeBindings" }, // 4143897883
		{ &Z_Construct_UFunction_UMVVMView_UninitializeSources, "UninitializeSources" }, // 1885305330
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Instance UMVVMClassExtension_View for the UUserWdiget\n */" },
		{ "DisplayName", "MVVM View" },
		{ "IncludePath", "View/MVVMView.h" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Instance UMVVMClassExtension_View for the UUserWdiget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension = { "ClassExtension", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMView, ClassExtension), Z_Construct_UClass_UMVVMViewClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMViewSource, METADATA_PARAMS(0, nullptr) }; // 456140532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMView, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources_MetaData) }; // 456140532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Should log when a binding is executed. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Should log when a binding is executed." },
	};
#endif
	void Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding_SetBit(void* Obj)
	{
		((UMVVMView*)Obj)->bLogBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding = { "bLogBinding", nullptr, (EPropertyFlags)0x0040000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMView), &Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Is the Construct method called. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Is the Construct method called." },
	};
#endif
	void Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed_SetBit(void* Obj)
	{
		((UMVVMView*)Obj)->bConstructed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed = { "bConstructed", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMView), &Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Is the Initialize method called. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Is the Initialize method called." },
	};
#endif
	void Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized_SetBit(void* Obj)
	{
		((UMVVMView*)Obj)->bSourcesInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized = { "bSourcesInitialized", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMView), &Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** Is the Initialize method called. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "Is the Initialize method called." },
	};
#endif
	void Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized_SetBit(void* Obj)
	{
		((UMVVMView*)Obj)->bBindingsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized = { "bBindingsInitialized", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMView), &Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** The view has at least one binding that need to be ticked every frame. */" },
		{ "ModuleRelativePath", "Public/View/MVVMView.h" },
		{ "ToolTip", "The view has at least one binding that need to be ticked every frame." },
	};
#endif
	void Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding_SetBit(void* Obj)
	{
		((UMVVMView*)Obj)->bHasEveryTickBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding = { "bHasEveryTickBinding", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMVVMView), &Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding_MetaData), Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_ClassExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_Sources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_bLogBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_bConstructed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_bSourcesInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_bBindingsInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMView_Statics::NewProp_bHasEveryTickBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMView_Statics::ClassParams = {
		&UMVVMView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::PropPointers),
		0,
		0x00B000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMView()
	{
		if (!Z_Registration_Info_UClass_UMVVMView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMView.OuterSingleton, Z_Construct_UClass_UMVVMView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMView.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMView>()
	{
		return UMVVMView::StaticClass();
	}
	UMVVMView::UMVVMView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMView);
	UMVVMView::~UMVVMView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewSource::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewSource_Statics::NewStructOps, TEXT("MVVMViewSource"), &Z_Registration_Info_UScriptStruct_MVVMViewSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewSource), 456140532U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMView, UMVVMView::StaticClass, TEXT("UMVVMView"), &Z_Registration_Info_UClass_UMVVMView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMView), 2529176951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_860207157(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMView_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

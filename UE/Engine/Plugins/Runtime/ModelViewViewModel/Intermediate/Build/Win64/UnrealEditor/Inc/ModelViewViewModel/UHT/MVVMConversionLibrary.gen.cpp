// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bindings/MVVMConversionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMConversionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMConversionLibrary();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMConversionLibrary_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMConversionLibrary::execConv_BoolToSlateVisibility)
	{
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_GET_ENUM(ESlateVisibility,Z_Param_TrueVisibility);
		P_GET_ENUM(ESlateVisibility,Z_Param_FalseVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=UMVVMConversionLibrary::Conv_BoolToSlateVisibility(Z_Param_bIsVisible,ESlateVisibility(Z_Param_TrueVisibility),ESlateVisibility(Z_Param_FalseVisibility));
		P_NATIVE_END;
	}
	void UMVVMConversionLibrary::StaticRegisterNativesUMVVMConversionLibrary()
	{
		UClass* Class = UMVVMConversionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_BoolToSlateVisibility", &UMVVMConversionLibrary::execConv_BoolToSlateVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics
	{
		struct MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms
		{
			bool bIsVisible;
			ESlateVisibility TrueVisibility;
			ESlateVisibility FalseVisibility;
			ESlateVisibility ReturnValue;
		};
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrueVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrueVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalseVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalseVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms), &Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_TrueVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_TrueVisibility = { "TrueVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms, TrueVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_FalseVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_FalseVisibility = { "FalseVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms, FalseVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_TrueVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_TrueVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_FalseVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_FalseVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Converts a bool to a slate visibility.\n\x09 */" },
		{ "CPP_Default_FalseVisibility", "Collapsed" },
		{ "CPP_Default_TrueVisibility", "Visible" },
		{ "DisplayName", "To Bool (Visibility)" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMConversionLibrary.h" },
		{ "ToolTip", "Converts a bool to a slate visibility." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMConversionLibrary, nullptr, "Conv_BoolToSlateVisibility", nullptr, nullptr, Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::MVVMConversionLibrary_eventConv_BoolToSlateVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMConversionLibrary);
	UClass* Z_Construct_UClass_UMVVMConversionLibrary_NoRegister()
	{
		return UMVVMConversionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMConversionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMConversionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMConversionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMConversionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMConversionLibrary_Conv_BoolToSlateVisibility, "Conv_BoolToSlateVisibility" }, // 144195223
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMConversionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMConversionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bindings/MVVMConversionLibrary.h" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMConversionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMConversionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMConversionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMConversionLibrary_Statics::ClassParams = {
		&UMVVMConversionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMConversionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMConversionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMConversionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMVVMConversionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMConversionLibrary.OuterSingleton, Z_Construct_UClass_UMVVMConversionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMConversionLibrary.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMConversionLibrary>()
	{
		return UMVVMConversionLibrary::StaticClass();
	}
	UMVVMConversionLibrary::UMVVMConversionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMConversionLibrary);
	UMVVMConversionLibrary::~UMVVMConversionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMConversionLibrary, UMVVMConversionLibrary::StaticClass, TEXT("UMVVMConversionLibrary"), &Z_Registration_Info_UClass_UMVVMConversionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMConversionLibrary), 116517125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_3276117150(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

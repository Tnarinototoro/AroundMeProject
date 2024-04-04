// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuV/CustomizableObjectValidationCommandlet.h"
#include "MuCO/CustomizableObjectInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectValidationCommandlet() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateContext();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UCustomizableObjectValidationCommandlet();
	MUTABLEVALIDATION_API UClass* Z_Construct_UClass_UCustomizableObjectValidationCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MutableValidation();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizableObjectValidationCommandlet::execOnInstanceUpdate)
	{
		P_GET_STRUCT_REF(FUpdateContext,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstanceUpdate(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void UCustomizableObjectValidationCommandlet::StaticRegisterNativesUCustomizableObjectValidationCommandlet()
	{
		UClass* Class = UCustomizableObjectValidationCommandlet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInstanceUpdate", &UCustomizableObjectValidationCommandlet::execOnInstanceUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics
	{
		struct CustomizableObjectValidationCommandlet_eventOnInstanceUpdate_Parms
		{
			FUpdateContext Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizableObjectValidationCommandlet_eventOnInstanceUpdate_Parms, Result), Z_Construct_UScriptStruct_FUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::NewProp_Result_MetaData), Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::NewProp_Result_MetaData) }; // 1650647531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback invoked once the currently updating instance has done the update.\n\x09 * @paragm Result is a container that provides us with data related with the instance updating process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MuV/CustomizableObjectValidationCommandlet.h" },
		{ "ToolTip", "Callback invoked once the currently updating instance has done the update.\n@paragm Result is a container that provides us with data related with the instance updating process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectValidationCommandlet, nullptr, "OnInstanceUpdate", nullptr, nullptr, Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::CustomizableObjectValidationCommandlet_eventOnInstanceUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::CustomizableObjectValidationCommandlet_eventOnInstanceUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectValidationCommandlet);
	UClass* Z_Construct_UClass_UCustomizableObjectValidationCommandlet_NoRegister()
	{
		return UCustomizableObjectValidationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToTestCustomizableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToTestCustomizableObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceBeingUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceBeingUpdated;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesToProcess_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesToProcess_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesToProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_MutableValidation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableObjectValidationCommandlet_OnInstanceUpdate, "OnInstanceUpdate" }, // 1234904793
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuV/CustomizableObjectValidationCommandlet.h" },
		{ "ModuleRelativePath", "Public/MuV/CustomizableObjectValidationCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_ToTestCustomizableObject_MetaData[] = {
		{ "Comment", "/** Customizable Object to be tested */" },
		{ "ModuleRelativePath", "Public/MuV/CustomizableObjectValidationCommandlet.h" },
		{ "ToolTip", "Customizable Object to be tested" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_ToTestCustomizableObject = { "ToTestCustomizableObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectValidationCommandlet, ToTestCustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_ToTestCustomizableObject_MetaData), Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_ToTestCustomizableObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstanceBeingUpdated_MetaData[] = {
		{ "Comment", "/** Customizable Object Instance currently being updated*/" },
		{ "ModuleRelativePath", "Public/MuV/CustomizableObjectValidationCommandlet.h" },
		{ "ToolTip", "Customizable Object Instance currently being updated" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstanceBeingUpdated = { "InstanceBeingUpdated", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectValidationCommandlet, InstanceBeingUpdated), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstanceBeingUpdated_MetaData), Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstanceBeingUpdated_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess_Inner = { "InstancesToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess_MetaData[] = {
		{ "Comment", "/** Array of COI to be generated with randomized parameter values*/" },
		{ "ModuleRelativePath", "Public/MuV/CustomizableObjectValidationCommandlet.h" },
		{ "ToolTip", "Array of COI to be generated with randomized parameter values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess = { "InstancesToProcess", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizableObjectValidationCommandlet, InstancesToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess_MetaData), Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_ToTestCustomizableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstanceBeingUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::NewProp_InstancesToProcess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectValidationCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::ClassParams = {
		&UCustomizableObjectValidationCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomizableObjectValidationCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectValidationCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectValidationCommandlet.OuterSingleton, Z_Construct_UClass_UCustomizableObjectValidationCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectValidationCommandlet.OuterSingleton;
	}
	template<> MUTABLEVALIDATION_API UClass* StaticClass<UCustomizableObjectValidationCommandlet>()
	{
		return UCustomizableObjectValidationCommandlet::StaticClass();
	}
	UCustomizableObjectValidationCommandlet::UCustomizableObjectValidationCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectValidationCommandlet);
	UCustomizableObjectValidationCommandlet::~UCustomizableObjectValidationCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_CustomizableObjectValidationCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_CustomizableObjectValidationCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectValidationCommandlet, UCustomizableObjectValidationCommandlet::StaticClass, TEXT("UCustomizableObjectValidationCommandlet"), &Z_Registration_Info_UClass_UCustomizableObjectValidationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectValidationCommandlet), 3352678942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_CustomizableObjectValidationCommandlet_h_1435962376(TEXT("/Script/MutableValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_CustomizableObjectValidationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableValidation_Public_MuV_CustomizableObjectValidationCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

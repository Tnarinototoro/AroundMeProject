// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/DisplayClusterProjectionBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterProjectionBlueprintLib() {}
// Cross Module References
	DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_NoRegister();
	DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib();
	DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterProjection();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayClusterProjectionBlueprintLib::execGetAPI)
	{
		P_GET_TINTERFACE_REF(IDisplayClusterProjectionBlueprintAPI,Z_Param_Out_OutAPI);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDisplayClusterProjectionBlueprintLib::GetAPI(Z_Param_Out_OutAPI);
		P_NATIVE_END;
	}
	void UDisplayClusterProjectionBlueprintLib::StaticRegisterNativesUDisplayClusterProjectionBlueprintLib()
	{
		UClass* Class = UDisplayClusterProjectionBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAPI", &UDisplayClusterProjectionBlueprintLib::execGetAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics
	{
		struct DisplayClusterProjectionBlueprintLib_eventGetAPI_Parms
		{
			TScriptInterface<IDisplayClusterProjectionBlueprintAPI> OutAPI;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::NewProp_OutAPI = { "OutAPI", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplayClusterProjectionBlueprintLib_eventGetAPI_Parms, OutAPI), Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::NewProp_OutAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Return Display Cluster API interface. */" },
		{ "DisplayName", "DisplayClusterProjection Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterProjectionBlueprintLib.h" },
		{ "ToolTip", "Return Display Cluster API interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib, nullptr, "GetAPI", nullptr, nullptr, Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::DisplayClusterProjectionBlueprintLib_eventGetAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::DisplayClusterProjectionBlueprintLib_eventGetAPI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterProjectionBlueprintLib);
	UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_NoRegister()
	{
		return UDisplayClusterProjectionBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterProjection,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterProjectionBlueprintLib_GetAPI, "GetAPI" }, // 2575743062
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint API function library\n */" },
		{ "IncludePath", "Blueprints/DisplayClusterProjectionBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterProjectionBlueprintLib.h" },
		{ "ToolTip", "Blueprint API function library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterProjectionBlueprintLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::ClassParams = {
		&UDisplayClusterProjectionBlueprintLib::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintLib.OuterSingleton, Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintLib.OuterSingleton;
	}
	template<> DISPLAYCLUSTERPROJECTION_API UClass* StaticClass<UDisplayClusterProjectionBlueprintLib>()
	{
		return UDisplayClusterProjectionBlueprintLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterProjectionBlueprintLib);
	UDisplayClusterProjectionBlueprintLib::~UDisplayClusterProjectionBlueprintLib() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterProjectionBlueprintLib, UDisplayClusterProjectionBlueprintLib::StaticClass, TEXT("UDisplayClusterProjectionBlueprintLib"), &Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterProjectionBlueprintLib), 3689996017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_397207973(TEXT("/Script/DisplayClusterProjection"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_DisplayClusterProjectionBlueprintLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

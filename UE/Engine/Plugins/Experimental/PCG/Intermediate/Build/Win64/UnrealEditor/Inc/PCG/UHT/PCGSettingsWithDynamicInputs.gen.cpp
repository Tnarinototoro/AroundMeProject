// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGSettingsWithDynamicInputs.h"
#include "PCGPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSettingsWithDynamicInputs() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsWithDynamicInputs();
	PCG_API UClass* Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPinProperties();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGSettingsWithDynamicInputs::StaticRegisterNativesUPCGSettingsWithDynamicInputs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGSettingsWithDynamicInputs);
	UClass* Z_Construct_UClass_UPCGSettingsWithDynamicInputs_NoRegister()
	{
		return UPCGSettingsWithDynamicInputs::StaticClass();
	}
	struct Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicInputPinProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicInputPinProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicInputPinProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* UPCGSettings subclass with functionality to dynamically add/remove input pins\n*/" },
		{ "IncludePath", "PCGSettingsWithDynamicInputs.h" },
		{ "ModuleRelativePath", "Public/PCGSettingsWithDynamicInputs.h" },
		{ "ToolTip", "UPCGSettings subclass with functionality to dynamically add/remove input pins" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties_Inner = { "DynamicInputPinProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGPinProperties, METADATA_PARAMS(0, nullptr) }; // 1976663911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties_MetaData[] = {
		{ "Comment", "/** Dynamic pin properties that the user can add or remove from */" },
		{ "ModuleRelativePath", "Public/PCGSettingsWithDynamicInputs.h" },
		{ "ToolTip", "Dynamic pin properties that the user can add or remove from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties = { "DynamicInputPinProperties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGSettingsWithDynamicInputs, DynamicInputPinProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties_MetaData), Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties_MetaData) }; // 1976663911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::NewProp_DynamicInputPinProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGSettingsWithDynamicInputs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::ClassParams = {
		&UPCGSettingsWithDynamicInputs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGSettingsWithDynamicInputs()
	{
		if (!Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.OuterSingleton, Z_Construct_UClass_UPCGSettingsWithDynamicInputs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGSettingsWithDynamicInputs>()
	{
		return UPCGSettingsWithDynamicInputs::StaticClass();
	}
	UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGSettingsWithDynamicInputs);
	UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGSettingsWithDynamicInputs, UPCGSettingsWithDynamicInputs::StaticClass, TEXT("UPCGSettingsWithDynamicInputs"), &Z_Registration_Info_UClass_UPCGSettingsWithDynamicInputs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGSettingsWithDynamicInputs), 2163960562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_1303679272(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGSettingsWithDynamicInputs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

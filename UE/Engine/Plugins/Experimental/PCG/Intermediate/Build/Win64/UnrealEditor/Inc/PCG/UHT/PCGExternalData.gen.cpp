// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/IO/PCGExternalData.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGExternalData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGExternalDataSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGExternalDataSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGExternalDataSettings::StaticRegisterNativesUPCGExternalDataSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGExternalDataSettings);
	UClass* Z_Construct_UClass_UPCGExternalDataSettings_NoRegister()
	{
		return UPCGExternalDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGExternalDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeMapping_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGExternalDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExternalDataSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGExternalDataSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Base class for external data input settings */" },
		{ "IncludePath", "Elements/IO/PCGExternalData.h" },
		{ "ModuleRelativePath", "Public/Elements/IO/PCGExternalData.h" },
		{ "ToolTip", "Base class for external data input settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_ValueProp = { "AttributeMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 1471452776
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_Key_KeyProp = { "AttributeMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/IO/PCGExternalData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping = { "AttributeMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExternalDataSettings, AttributeMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_MetaData), Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_MetaData) }; // 1471452776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExternalDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExternalDataSettings_Statics::NewProp_AttributeMapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGExternalDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExternalDataSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExternalDataSettings_Statics::ClassParams = {
		&UPCGExternalDataSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGExternalDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExternalDataSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExternalDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExternalDataSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExternalDataSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGExternalDataSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGExternalDataSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExternalDataSettings.OuterSingleton, Z_Construct_UClass_UPCGExternalDataSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGExternalDataSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGExternalDataSettings>()
	{
		return UPCGExternalDataSettings::StaticClass();
	}
	UPCGExternalDataSettings::UPCGExternalDataSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGExternalDataSettings);
	UPCGExternalDataSettings::~UPCGExternalDataSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGExternalData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGExternalData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExternalDataSettings, UPCGExternalDataSettings::StaticClass, TEXT("UPCGExternalDataSettings"), &Z_Registration_Info_UClass_UPCGExternalDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExternalDataSettings), 3455416869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGExternalData_h_2624748647(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGExternalData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_IO_PCGExternalData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

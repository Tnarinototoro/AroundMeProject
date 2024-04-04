// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGMakeConcreteElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGMakeConcreteElement() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGMakeConcreteSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGMakeConcreteSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGMakeConcreteSettings::StaticRegisterNativesUPCGMakeConcreteSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGMakeConcreteSettings);
	UClass* Z_Construct_UClass_UPCGMakeConcreteSettings_NoRegister()
	{
		return UPCGMakeConcreteSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGMakeConcreteSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Makes data Concrete, collapsing to Point if necessary. Discards non-Spatial data. */" },
		{ "IncludePath", "Elements/PCGMakeConcreteElement.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGMakeConcreteElement.h" },
		{ "ToolTip", "Makes data Concrete, collapsing to Point if necessary. Discards non-Spatial data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGMakeConcreteSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::ClassParams = {
		&UPCGMakeConcreteSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGMakeConcreteSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGMakeConcreteSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGMakeConcreteSettings.OuterSingleton, Z_Construct_UClass_UPCGMakeConcreteSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGMakeConcreteSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGMakeConcreteSettings>()
	{
		return UPCGMakeConcreteSettings::StaticClass();
	}
	UPCGMakeConcreteSettings::UPCGMakeConcreteSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGMakeConcreteSettings);
	UPCGMakeConcreteSettings::~UPCGMakeConcreteSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGMakeConcreteSettings, UPCGMakeConcreteSettings::StaticClass, TEXT("UPCGMakeConcreteSettings"), &Z_Registration_Info_UClass_UPCGMakeConcreteSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGMakeConcreteSettings), 2004780960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_3591887190(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGCullPointsOutsideActorBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCullPointsOutsideActorBounds() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGCullPointsOutsideActorBoundsSettings::StaticRegisterNativesUPCGCullPointsOutsideActorBoundsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCullPointsOutsideActorBoundsSettings);
	UClass* Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_NoRegister()
	{
		return UPCGCullPointsOutsideActorBoundsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Removes points that lie outside the current actor bounds.\n */" },
		{ "IncludePath", "Elements/PCGCullPointsOutsideActorBounds.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCullPointsOutsideActorBounds.h" },
		{ "ToolTip", "Removes points that lie outside the current actor bounds." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCullPointsOutsideActorBoundsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::ClassParams = {
		&UPCGCullPointsOutsideActorBoundsSettings::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.OuterSingleton, Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCullPointsOutsideActorBoundsSettings>()
	{
		return UPCGCullPointsOutsideActorBoundsSettings::StaticClass();
	}
	UPCGCullPointsOutsideActorBoundsSettings::UPCGCullPointsOutsideActorBoundsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCullPointsOutsideActorBoundsSettings);
	UPCGCullPointsOutsideActorBoundsSettings::~UPCGCullPointsOutsideActorBoundsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCullPointsOutsideActorBoundsSettings, UPCGCullPointsOutsideActorBoundsSettings::StaticClass, TEXT("UPCGCullPointsOutsideActorBoundsSettings"), &Z_Registration_Info_UClass_UPCGCullPointsOutsideActorBoundsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCullPointsOutsideActorBoundsSettings), 1919779380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_3811189661(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCullPointsOutsideActorBounds_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

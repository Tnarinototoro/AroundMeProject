// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ICVFXTestLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICVFXTestLocation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	ICVFXTESTING_API UClass* Z_Construct_UClass_AICVFXTestLocation();
	ICVFXTESTING_API UClass* Z_Construct_UClass_AICVFXTestLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ICVFXTesting();
// End Cross Module References
	void AICVFXTestLocation::StaticRegisterNativesAICVFXTestLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AICVFXTestLocation);
	UClass* Z_Construct_UClass_AICVFXTestLocation_NoRegister()
	{
		return AICVFXTestLocation::StaticClass();
	}
	struct Z_Construct_UClass_AICVFXTestLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AICVFXTestLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ICVFXTesting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AICVFXTestLocation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AICVFXTestLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ICVFX" },
		{ "Comment", "/**\n * Actor used when running ICVFX perf tests. For every test location, the display cluster root actor will be moved to this location and perf data will be connected for a minute.\n */" },
		{ "DisplayName", "ICVFXTestLocation" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "ICVFXTestLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ICVFXTestLocation.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor used when running ICVFX perf tests. For every test location, the display cluster root actor will be moved to this location and perf data will be connected for a minute." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AICVFXTestLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AICVFXTestLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AICVFXTestLocation_Statics::ClassParams = {
		&AICVFXTestLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AICVFXTestLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_AICVFXTestLocation_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AICVFXTestLocation()
	{
		if (!Z_Registration_Info_UClass_AICVFXTestLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AICVFXTestLocation.OuterSingleton, Z_Construct_UClass_AICVFXTestLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AICVFXTestLocation.OuterSingleton;
	}
	template<> ICVFXTESTING_API UClass* StaticClass<AICVFXTestLocation>()
	{
		return AICVFXTestLocation::StaticClass();
	}
	AICVFXTestLocation::AICVFXTestLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AICVFXTestLocation);
	AICVFXTestLocation::~AICVFXTestLocation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AICVFXTestLocation, AICVFXTestLocation::StaticClass, TEXT("AICVFXTestLocation"), &Z_Registration_Info_UClass_AICVFXTestLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AICVFXTestLocation), 1537821831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_187680344(TEXT("/Script/ICVFXTesting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_ICVFXTesting_Source_ICVFXTesting_Public_ICVFXTestLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassSignalSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSignalSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSignals();
// End Cross Module References
	void UMassSignalSubsystem::StaticRegisterNativesUMassSignalSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSignalSubsystem);
	UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister()
	{
		return UMassSignalSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassSignalSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSignalSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSignals,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSignalSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A subsystem for handling Signals in Mass\n*/" },
		{ "IncludePath", "MassSignalSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassSignalSubsystem.h" },
		{ "ToolTip", "A subsystem for handling Signals in Mass" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSignalSubsystem_Statics::NewProp_CachedWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSignalSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassSignalSubsystem_Statics::NewProp_CachedWorld = { "CachedWorld", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassSignalSubsystem, CachedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalSubsystem_Statics::NewProp_CachedWorld_MetaData), Z_Construct_UClass_UMassSignalSubsystem_Statics::NewProp_CachedWorld_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSignalSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSignalSubsystem_Statics::NewProp_CachedWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSignalSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSignalSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSignalSubsystem_Statics::ClassParams = {
		&UMassSignalSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSignalSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassSignalSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassSignalSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassSignalSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSignalSubsystem.OuterSingleton, Z_Construct_UClass_UMassSignalSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSignalSubsystem.OuterSingleton;
	}
	template<> MASSSIGNALS_API UClass* StaticClass<UMassSignalSubsystem>()
	{
		return UMassSignalSubsystem::StaticClass();
	}
	UMassSignalSubsystem::UMassSignalSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSignalSubsystem);
	UMassSignalSubsystem::~UMassSignalSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSignalSubsystem, UMassSignalSubsystem::StaticClass, TEXT("UMassSignalSubsystem"), &Z_Registration_Info_UClass_UMassSignalSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSignalSubsystem), 3831898304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_1366589192(TEXT("/Script/MassSignals"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

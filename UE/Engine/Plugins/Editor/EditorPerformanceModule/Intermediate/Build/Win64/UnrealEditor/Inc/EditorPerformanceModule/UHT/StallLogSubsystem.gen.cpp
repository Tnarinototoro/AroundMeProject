// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StallLogSubsystem/StallLogSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStallLogSubsystem() {}
// Cross Module References
	EDITORPERFORMANCEMODULE_API UClass* Z_Construct_UClass_UStallLogSubsystem();
	EDITORPERFORMANCEMODULE_API UClass* Z_Construct_UClass_UStallLogSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorPerformanceModule();
// End Cross Module References
	void UStallLogSubsystem::StaticRegisterNativesUStallLogSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStallLogSubsystem);
	UClass* Z_Construct_UClass_UStallLogSubsystem_NoRegister()
	{
		return UStallLogSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UStallLogSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStallLogSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorPerformanceModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStallLogSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStallLogSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem that provides feedback on stall detection\n */" },
		{ "IncludePath", "StallLogSubsystem/StallLogSubsystem.h" },
		{ "ModuleRelativePath", "Public/StallLogSubsystem/StallLogSubsystem.h" },
		{ "ToolTip", "Subsystem that provides feedback on stall detection" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStallLogSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStallLogSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStallLogSubsystem_Statics::ClassParams = {
		&UStallLogSubsystem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStallLogSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UStallLogSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStallLogSubsystem()
	{
		if (!Z_Registration_Info_UClass_UStallLogSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStallLogSubsystem.OuterSingleton, Z_Construct_UClass_UStallLogSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStallLogSubsystem.OuterSingleton;
	}
	template<> EDITORPERFORMANCEMODULE_API UClass* StaticClass<UStallLogSubsystem>()
	{
		return UStallLogSubsystem::StaticClass();
	}
	UStallLogSubsystem::UStallLogSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStallLogSubsystem);
	UStallLogSubsystem::~UStallLogSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorPerformanceModule_Source_EditorPerformanceModule_Public_StallLogSubsystem_StallLogSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorPerformanceModule_Source_EditorPerformanceModule_Public_StallLogSubsystem_StallLogSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStallLogSubsystem, UStallLogSubsystem::StaticClass, TEXT("UStallLogSubsystem"), &Z_Registration_Info_UClass_UStallLogSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStallLogSubsystem), 2575879015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorPerformanceModule_Source_EditorPerformanceModule_Public_StallLogSubsystem_StallLogSubsystem_h_2729670819(TEXT("/Script/EditorPerformanceModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorPerformanceModule_Source_EditorPerformanceModule_Public_StallLogSubsystem_StallLogSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorPerformanceModule_Source_EditorPerformanceModule_Public_StallLogSubsystem_StallLogSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

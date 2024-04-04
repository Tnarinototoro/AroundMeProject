// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Param/ParameterLibraryViewMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterLibraryViewMenuContext() {}
// Cross Module References
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UParameterLibraryViewMenuContext();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UParameterLibraryViewMenuContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References
	void UParameterLibraryViewMenuContext::StaticRegisterNativesUParameterLibraryViewMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterLibraryViewMenuContext);
	UClass* Z_Construct_UClass_UParameterLibraryViewMenuContext_NoRegister()
	{
		return UParameterLibraryViewMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/ParameterLibraryViewMenuContext.h" },
		{ "ModuleRelativePath", "Private/Param/ParameterLibraryViewMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterLibraryViewMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::ClassParams = {
		&UParameterLibraryViewMenuContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UParameterLibraryViewMenuContext()
	{
		if (!Z_Registration_Info_UClass_UParameterLibraryViewMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterLibraryViewMenuContext.OuterSingleton, Z_Construct_UClass_UParameterLibraryViewMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterLibraryViewMenuContext.OuterSingleton;
	}
	template<> ANIMNEXTEDITOR_API UClass* StaticClass<UParameterLibraryViewMenuContext>()
	{
		return UParameterLibraryViewMenuContext::StaticClass();
	}
	UParameterLibraryViewMenuContext::UParameterLibraryViewMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterLibraryViewMenuContext);
	UParameterLibraryViewMenuContext::~UParameterLibraryViewMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterLibraryViewMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterLibraryViewMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParameterLibraryViewMenuContext, UParameterLibraryViewMenuContext::StaticClass, TEXT("UParameterLibraryViewMenuContext"), &Z_Registration_Info_UClass_UParameterLibraryViewMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterLibraryViewMenuContext), 1337277205U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterLibraryViewMenuContext_h_3277341615(TEXT("/Script/AnimNextEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterLibraryViewMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterLibraryViewMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

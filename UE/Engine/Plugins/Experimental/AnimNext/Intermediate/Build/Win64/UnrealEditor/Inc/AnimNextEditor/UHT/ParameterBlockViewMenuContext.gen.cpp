// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Param/ParameterBlockViewMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterBlockViewMenuContext() {}
// Cross Module References
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UParameterBlockViewMenuContext();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UParameterBlockViewMenuContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References
	void UParameterBlockViewMenuContext::StaticRegisterNativesUParameterBlockViewMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterBlockViewMenuContext);
	UClass* Z_Construct_UClass_UParameterBlockViewMenuContext_NoRegister()
	{
		return UParameterBlockViewMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UParameterBlockViewMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/ParameterBlockViewMenuContext.h" },
		{ "ModuleRelativePath", "Private/Param/ParameterBlockViewMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterBlockViewMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::ClassParams = {
		&UParameterBlockViewMenuContext::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UParameterBlockViewMenuContext()
	{
		if (!Z_Registration_Info_UClass_UParameterBlockViewMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterBlockViewMenuContext.OuterSingleton, Z_Construct_UClass_UParameterBlockViewMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterBlockViewMenuContext.OuterSingleton;
	}
	template<> ANIMNEXTEDITOR_API UClass* StaticClass<UParameterBlockViewMenuContext>()
	{
		return UParameterBlockViewMenuContext::StaticClass();
	}
	UParameterBlockViewMenuContext::UParameterBlockViewMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterBlockViewMenuContext);
	UParameterBlockViewMenuContext::~UParameterBlockViewMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterBlockViewMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterBlockViewMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParameterBlockViewMenuContext, UParameterBlockViewMenuContext::StaticClass, TEXT("UParameterBlockViewMenuContext"), &Z_Registration_Info_UClass_UParameterBlockViewMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterBlockViewMenuContext), 3952389614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterBlockViewMenuContext_h_3178889392(TEXT("/Script/AnimNextEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterBlockViewMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_ParameterBlockViewMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

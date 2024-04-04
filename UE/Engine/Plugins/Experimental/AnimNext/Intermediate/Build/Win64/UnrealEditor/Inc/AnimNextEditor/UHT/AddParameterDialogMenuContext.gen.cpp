// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Param/AddParameterDialogMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddParameterDialogMenuContext() {}
// Cross Module References
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAddParameterDialogMenuContext();
	ANIMNEXTEDITOR_API UClass* Z_Construct_UClass_UAddParameterDialogMenuContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimNextEditor();
// End Cross Module References
	void UAddParameterDialogMenuContext::StaticRegisterNativesUAddParameterDialogMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddParameterDialogMenuContext);
	UClass* Z_Construct_UClass_UAddParameterDialogMenuContext_NoRegister()
	{
		return UAddParameterDialogMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UAddParameterDialogMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/AddParameterDialogMenuContext.h" },
		{ "ModuleRelativePath", "Private/Param/AddParameterDialogMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddParameterDialogMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::ClassParams = {
		&UAddParameterDialogMenuContext::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAddParameterDialogMenuContext()
	{
		if (!Z_Registration_Info_UClass_UAddParameterDialogMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddParameterDialogMenuContext.OuterSingleton, Z_Construct_UClass_UAddParameterDialogMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddParameterDialogMenuContext.OuterSingleton;
	}
	template<> ANIMNEXTEDITOR_API UClass* StaticClass<UAddParameterDialogMenuContext>()
	{
		return UAddParameterDialogMenuContext::StaticClass();
	}
	UAddParameterDialogMenuContext::UAddParameterDialogMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddParameterDialogMenuContext);
	UAddParameterDialogMenuContext::~UAddParameterDialogMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AddParameterDialogMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AddParameterDialogMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAddParameterDialogMenuContext, UAddParameterDialogMenuContext::StaticClass, TEXT("UAddParameterDialogMenuContext"), &Z_Registration_Info_UClass_UAddParameterDialogMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddParameterDialogMenuContext), 3540261551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AddParameterDialogMenuContext_h_1983026683(TEXT("/Script/AnimNextEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AddParameterDialogMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextEditor_Private_Param_AddParameterDialogMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

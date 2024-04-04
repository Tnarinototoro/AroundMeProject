// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Editor/ControlRigWrapperObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigWrapperObject() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigWrapperObject();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigWrapperObject_NoRegister();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMDetailsViewWrapperObject();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigWrapperObject::StaticRegisterNativesUControlRigWrapperObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigWrapperObject);
	UClass* Z_Construct_UClass_UControlRigWrapperObject_NoRegister()
	{
		return UControlRigWrapperObject::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigWrapperObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigWrapperObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMDetailsViewWrapperObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWrapperObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigWrapperObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/ControlRigWrapperObject.h" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigWrapperObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigWrapperObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigWrapperObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigWrapperObject_Statics::ClassParams = {
		&UControlRigWrapperObject::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWrapperObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigWrapperObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UControlRigWrapperObject()
	{
		if (!Z_Registration_Info_UClass_UControlRigWrapperObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigWrapperObject.OuterSingleton, Z_Construct_UClass_UControlRigWrapperObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigWrapperObject.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigWrapperObject>()
	{
		return UControlRigWrapperObject::StaticClass();
	}
	UControlRigWrapperObject::UControlRigWrapperObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigWrapperObject);
	UControlRigWrapperObject::~UControlRigWrapperObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigWrapperObject, UControlRigWrapperObject::StaticClass, TEXT("UControlRigWrapperObject"), &Z_Registration_Info_UClass_UControlRigWrapperObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigWrapperObject), 4111935759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_1569729770(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigWrapperObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

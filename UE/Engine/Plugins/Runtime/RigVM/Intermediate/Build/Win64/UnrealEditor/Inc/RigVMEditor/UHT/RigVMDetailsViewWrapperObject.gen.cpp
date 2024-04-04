// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/RigVMDetailsViewWrapperObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDetailsViewWrapperObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMDetailsViewWrapperObject();
	RIGVMEDITOR_API UClass* Z_Construct_UClass_URigVMDetailsViewWrapperObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMEditor();
// End Cross Module References
	void URigVMDetailsViewWrapperObject::StaticRegisterNativesURigVMDetailsViewWrapperObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMDetailsViewWrapperObject);
	UClass* Z_Construct_UClass_URigVMDetailsViewWrapperObject_NoRegister()
	{
		return URigVMDetailsViewWrapperObject::StaticClass();
	}
	struct Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SubjectPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/RigVMDetailsViewWrapperObject.h" },
		{ "ModuleRelativePath", "Public/Editor/RigVMDetailsViewWrapperObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::NewProp_SubjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Editor/RigVMDetailsViewWrapperObject.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::NewProp_SubjectPtr = { "SubjectPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMDetailsViewWrapperObject, SubjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::NewProp_SubjectPtr_MetaData), Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::NewProp_SubjectPtr_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::NewProp_SubjectPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMDetailsViewWrapperObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::ClassParams = {
		&URigVMDetailsViewWrapperObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMDetailsViewWrapperObject()
	{
		if (!Z_Registration_Info_UClass_URigVMDetailsViewWrapperObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMDetailsViewWrapperObject.OuterSingleton, Z_Construct_UClass_URigVMDetailsViewWrapperObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMDetailsViewWrapperObject.OuterSingleton;
	}
	template<> RIGVMEDITOR_API UClass* StaticClass<URigVMDetailsViewWrapperObject>()
	{
		return URigVMDetailsViewWrapperObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMDetailsViewWrapperObject);
	URigVMDetailsViewWrapperObject::~URigVMDetailsViewWrapperObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMDetailsViewWrapperObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMDetailsViewWrapperObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMDetailsViewWrapperObject, URigVMDetailsViewWrapperObject::StaticClass, TEXT("URigVMDetailsViewWrapperObject"), &Z_Registration_Info_UClass_URigVMDetailsViewWrapperObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMDetailsViewWrapperObject), 1448548996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMDetailsViewWrapperObject_h_3469814664(TEXT("/Script/RigVMEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMDetailsViewWrapperObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMEditor_Public_Editor_RigVMDetailsViewWrapperObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

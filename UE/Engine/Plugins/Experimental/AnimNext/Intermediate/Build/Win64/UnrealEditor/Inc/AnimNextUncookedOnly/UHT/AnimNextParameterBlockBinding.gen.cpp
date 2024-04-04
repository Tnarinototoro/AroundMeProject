// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlockBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlockBinding() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBinding();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBinding_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockBindingInterface_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockEntry();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_NoRegister();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlockBinding::StaticRegisterNativesUAnimNextParameterBlockBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlockBinding);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockBinding_NoRegister()
	{
		return UAnimNextParameterBlockBinding::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Library;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BindingGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNextParameterBlockEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter binding block entry */" },
		{ "IncludePath", "Param/AnimNextParameterBlockBinding.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBinding.h" },
		{ "ToolTip", "Parameter binding block entry" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Parameter name we reference */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBinding.h" },
		{ "ToolTip", "Parameter name we reference" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlockBinding, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_ParameterName_MetaData), Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_ParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_Library_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** Parameter library we reference */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBinding.h" },
		{ "ToolTip", "Parameter library we reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlockBinding, Library), Z_Construct_UClass_UAnimNextParameterLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_Library_MetaData), Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_Library_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_BindingGraph_MetaData[] = {
		{ "Comment", "/** Binding graph */" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlockBinding.h" },
		{ "ToolTip", "Binding graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_BindingGraph = { "BindingGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextParameterBlockBinding, BindingGraph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_BindingGraph_MetaData), Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_BindingGraph_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_Library,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::NewProp_BindingGraph,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextParameterBlockBindingInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextParameterBlockBinding, IAnimNextParameterBlockBindingInterface), false },  // 3576219340
			{ Z_Construct_UClass_UAnimNextParameterBlockGraphInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextParameterBlockBinding, IAnimNextParameterBlockGraphInterface), false },  // 463229635
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlockBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::ClassParams = {
		&UAnimNextParameterBlockBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNextParameterBlockBinding()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlockBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlockBinding.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlockBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlockBinding.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlockBinding>()
	{
		return UAnimNextParameterBlockBinding::StaticClass();
	}
	UAnimNextParameterBlockBinding::UAnimNextParameterBlockBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlockBinding);
	UAnimNextParameterBlockBinding::~UAnimNextParameterBlockBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlockBinding, UAnimNextParameterBlockBinding::StaticClass, TEXT("UAnimNextParameterBlockBinding"), &Z_Registration_Info_UClass_UAnimNextParameterBlockBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlockBinding), 2674602386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBinding_h_3671749887(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlockBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

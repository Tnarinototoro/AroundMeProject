// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/ControlRigGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGraphSchema() {}
// Cross Module References
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphSchema();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphSchema_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	void UControlRigGraphSchema::StaticRegisterNativesUControlRigGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigGraphSchema);
	UClass* Z_Construct_UClass_UControlRigGraphSchema_NoRegister()
	{
		return UControlRigGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/ControlRigGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Graph/ControlRigGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigGraphSchema_Statics::ClassParams = {
		&UControlRigGraphSchema::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UControlRigGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UControlRigGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigGraphSchema.OuterSingleton, Z_Construct_UClass_UControlRigGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigGraphSchema.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UControlRigGraphSchema>()
	{
		return UControlRigGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigGraphSchema);
	UControlRigGraphSchema::~UControlRigGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigGraphSchema, UControlRigGraphSchema::StaticClass, TEXT("UControlRigGraphSchema"), &Z_Registration_Info_UClass_UControlRigGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigGraphSchema), 3658685236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphSchema_h_2687701325(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

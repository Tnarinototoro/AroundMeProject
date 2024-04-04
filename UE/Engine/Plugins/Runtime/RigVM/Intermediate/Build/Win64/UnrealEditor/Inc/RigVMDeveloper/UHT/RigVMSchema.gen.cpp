// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMSchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMSchema();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMSchema::StaticRegisterNativesURigVMSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMSchema);
	UClass* Z_Construct_UClass_URigVMSchema_NoRegister()
	{
		return URigVMSchema::StaticClass();
	}
	struct Z_Construct_UClass_URigVMSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContextStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExecuteContextStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Schema is used to determine which actions are allowed\n * on a graph. This includes any topological change.\n */" },
		{ "IncludePath", "RigVMModel/RigVMSchema.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMSchema.h" },
		{ "ToolTip", "The Schema is used to determine which actions are allowed\non a graph. This includes any topological change." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMSchema_Statics::NewProp_ExecuteContextStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMSchema_Statics::NewProp_ExecuteContextStruct = { "ExecuteContextStruct", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMSchema, ExecuteContextStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMSchema_Statics::NewProp_ExecuteContextStruct_MetaData), Z_Construct_UClass_URigVMSchema_Statics::NewProp_ExecuteContextStruct_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMSchema_Statics::NewProp_ExecuteContextStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMSchema_Statics::ClassParams = {
		&URigVMSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMSchema_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMSchema_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMSchema_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMSchema_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMSchema()
	{
		if (!Z_Registration_Info_UClass_URigVMSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMSchema.OuterSingleton, Z_Construct_UClass_URigVMSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMSchema.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMSchema>()
	{
		return URigVMSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMSchema);
	URigVMSchema::~URigVMSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMSchema, URigVMSchema::StaticClass, TEXT("URigVMSchema"), &Z_Registration_Info_UClass_URigVMSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMSchema), 1281823263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_1686768384(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSchema() {}
// Cross Module References
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigSchema();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigSchema_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMSchema();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	void UControlRigSchema::StaticRegisterNativesUControlRigSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSchema);
	UClass* Z_Construct_UClass_UControlRigSchema_NoRegister()
	{
		return UControlRigSchema::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ControlRigSchema.h" },
		{ "ModuleRelativePath", "Public/ControlRigSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSchema_Statics::ClassParams = {
		&UControlRigSchema::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UControlRigSchema()
	{
		if (!Z_Registration_Info_UClass_UControlRigSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSchema.OuterSingleton, Z_Construct_UClass_UControlRigSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSchema.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UControlRigSchema>()
	{
		return UControlRigSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSchema);
	UControlRigSchema::~UControlRigSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSchema, UControlRigSchema::StaticClass, TEXT("UControlRigSchema"), &Z_Registration_Info_UClass_UControlRigSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSchema), 3397331447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_1098107198(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

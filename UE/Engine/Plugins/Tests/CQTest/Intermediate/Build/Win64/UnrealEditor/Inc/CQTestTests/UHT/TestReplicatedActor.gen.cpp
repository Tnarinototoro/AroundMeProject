// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/TestReplicatedActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestReplicatedActor() {}
// Cross Module References
	CQTESTTESTS_API UClass* Z_Construct_UClass_ATestReplicatedActor();
	CQTESTTESTS_API UClass* Z_Construct_UClass_ATestReplicatedActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CQTestTests();
// End Cross Module References
	void ATestReplicatedActor::StaticRegisterNativesATestReplicatedActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestReplicatedActor);
	UClass* Z_Construct_UClass_ATestReplicatedActor_NoRegister()
	{
		return ATestReplicatedActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestReplicatedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicatedInt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestReplicatedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CQTestTests,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestReplicatedActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestReplicatedActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -----------------------------------------------------------------------------\n" },
		{ "IncludePath", "Components/TestReplicatedActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Components/TestReplicatedActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestReplicatedActor_Statics::NewProp_ReplicatedInt_MetaData[] = {
		{ "ModuleRelativePath", "Private/Components/TestReplicatedActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestReplicatedActor_Statics::NewProp_ReplicatedInt = { "ReplicatedInt", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestReplicatedActor, ReplicatedInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestReplicatedActor_Statics::NewProp_ReplicatedInt_MetaData), Z_Construct_UClass_ATestReplicatedActor_Statics::NewProp_ReplicatedInt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestReplicatedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestReplicatedActor_Statics::NewProp_ReplicatedInt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestReplicatedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestReplicatedActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestReplicatedActor_Statics::ClassParams = {
		&ATestReplicatedActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestReplicatedActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestReplicatedActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestReplicatedActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestReplicatedActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestReplicatedActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATestReplicatedActor()
	{
		if (!Z_Registration_Info_UClass_ATestReplicatedActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestReplicatedActor.OuterSingleton, Z_Construct_UClass_ATestReplicatedActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestReplicatedActor.OuterSingleton;
	}
	template<> CQTESTTESTS_API UClass* StaticClass<ATestReplicatedActor>()
	{
		return ATestReplicatedActor::StaticClass();
	}

	void ATestReplicatedActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedInt(TEXT("ReplicatedInt"));

		const bool bIsValid = true
			&& Name_ReplicatedInt == ClassReps[(int32)ENetFields_Private::ReplicatedInt].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATestReplicatedActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestReplicatedActor);
	ATestReplicatedActor::~ATestReplicatedActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestReplicatedActor, ATestReplicatedActor::StaticClass, TEXT("ATestReplicatedActor"), &Z_Registration_Info_UClass_ATestReplicatedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestReplicatedActor), 2446490542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_3603951463(TEXT("/Script/CQTestTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_TestReplicatedActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

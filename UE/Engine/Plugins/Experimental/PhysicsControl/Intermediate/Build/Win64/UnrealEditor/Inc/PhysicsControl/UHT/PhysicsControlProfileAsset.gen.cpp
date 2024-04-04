// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsControlProfileAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsControlProfileAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlProfileAsset();
	PHYSICSCONTROL_API UClass* Z_Construct_UClass_UPhysicsControlProfileAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsControl();
// End Cross Module References
	DEFINE_FUNCTION(UPhysicsControlProfileAsset::execLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Log();
		P_NATIVE_END;
	}
	void UPhysicsControlProfileAsset::StaticRegisterNativesUPhysicsControlProfileAsset()
	{
		UClass* Class = UPhysicsControlProfileAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Log", &UPhysicsControlProfileAsset::execLog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsControlProfileAsset_Log_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsControlProfileAsset_Log_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** Placeholder for testing/developing */" },
		{ "ModuleRelativePath", "Public/PhysicsControlProfileAsset.h" },
		{ "ToolTip", "Placeholder for testing/developing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsControlProfileAsset_Log_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsControlProfileAsset, nullptr, "Log", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsControlProfileAsset_Log_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsControlProfileAsset_Log_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPhysicsControlProfileAsset_Log()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsControlProfileAsset_Log_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsControlProfileAsset);
	UClass* Z_Construct_UClass_UPhysicsControlProfileAsset_NoRegister()
	{
		return UPhysicsControlProfileAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsControlProfileAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TestValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsControl,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsControlProfileAsset_Log, "Log" }, // 776984088
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset for storing Physics Control Profiles. These will contain data that define:\n * - Controls and body modifiers to be created on a mesh\n * - Sets referencing those controls and body modifiers\n * - Full profiles containing settings for all the controls/modifiers\n * - Sparse profiles containing partial sets of settings for specific controls/modifiers\n * \n * It will also be desirable to support \"inheritance\" - so a generic profile can be made, and then \n * customized for certain characters or scenarios.\n */" },
		{ "IncludePath", "PhysicsControlProfileAsset.h" },
		{ "ModuleRelativePath", "Public/PhysicsControlProfileAsset.h" },
		{ "ToolTip", "Asset for storing Physics Control Profiles. These will contain data that define:\n- Controls and body modifiers to be created on a mesh\n- Sets referencing those controls and body modifiers\n- Full profiles containing settings for all the controls/modifiers\n- Sparse profiles containing partial sets of settings for specific controls/modifiers\n\nIt will also be desirable to support \"inheritance\" - so a generic profile can be made, and then\ncustomized for certain characters or scenarios." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Category", "PreviewMesh" },
		{ "Comment", "/** \n\x09* The skeletal mesh to use for generating controls and previewing. If it turns out this \n\x09* doesn't need to be stored in the asset, it will get moved out of here.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicsControlProfileAsset.h" },
		{ "ToolTip", "The skeletal mesh to use for generating controls and previewing. If it turns out this\ndoesn't need to be stored in the asset, it will get moved out of here." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014010000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsControlProfileAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData), Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_TestValue_MetaData[] = {
		{ "Category", "PhysicsControl" },
		{ "Comment", "/** Placeholder for testing/developing */" },
		{ "ModuleRelativePath", "Public/PhysicsControlProfileAsset.h" },
		{ "ToolTip", "Placeholder for testing/developing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_TestValue = { "TestValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsControlProfileAsset, TestValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_TestValue_MetaData), Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_TestValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_PreviewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::NewProp_TestValue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UPhysicsControlProfileAsset, IInterface_PreviewMeshProvider), false },  // 539613644
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsControlProfileAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::ClassParams = {
		&UPhysicsControlProfileAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPhysicsControlProfileAsset()
	{
		if (!Z_Registration_Info_UClass_UPhysicsControlProfileAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsControlProfileAsset.OuterSingleton, Z_Construct_UClass_UPhysicsControlProfileAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsControlProfileAsset.OuterSingleton;
	}
	template<> PHYSICSCONTROL_API UClass* StaticClass<UPhysicsControlProfileAsset>()
	{
		return UPhysicsControlProfileAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsControlProfileAsset);
	UPhysicsControlProfileAsset::~UPhysicsControlProfileAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlProfileAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlProfileAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsControlProfileAsset, UPhysicsControlProfileAsset::StaticClass, TEXT("UPhysicsControlProfileAsset"), &Z_Registration_Info_UClass_UPhysicsControlProfileAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsControlProfileAsset), 471870516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlProfileAsset_h_2730923011(TEXT("/Script/PhysicsControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlProfileAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlProfileAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

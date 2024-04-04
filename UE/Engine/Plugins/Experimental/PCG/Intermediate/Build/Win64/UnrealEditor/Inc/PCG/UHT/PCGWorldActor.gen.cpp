// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGWorldActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGWorldActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PCG_API UClass* Z_Construct_UClass_APCGWorldActor();
	PCG_API UClass* Z_Construct_UClass_APCGWorldActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGLandscapeCache_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void APCGWorldActor::StaticRegisterNativesAPCGWorldActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APCGWorldActor);
	UClass* Z_Construct_UClass_APCGWorldActor_NoRegister()
	{
		return APCGWorldActor::StaticClass();
	}
	struct Z_Construct_UClass_APCGWorldActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartitionGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PartitionGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeCacheObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeCacheObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUse2DGrid_MetaData[];
#endif
		static void NewProp_bUse2DGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse2DGrid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGuids_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_GridGuids_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGuids_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GridGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APCGWorldActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PCGWorldActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize_MetaData[] = {
		{ "Category", "GenerationSettings" },
		{ "Comment", "/** Size of the PCG partition actor grid for non-hierarchical-generation graphs. */" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "Size of the PCG partition actor grid for non-hierarchical-generation graphs." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize = { "PartitionGridSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGWorldActor, PartitionGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize_MetaData), Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject_MetaData[] = {
		{ "Category", "CachedData" },
		{ "Comment", "/** Contains all the PCG data required to query the landscape complete. Serialized in cooked builds only */" },
		{ "DisplayName", "Landscape Cache" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "Contains all the PCG data required to query the landscape complete. Serialized in cooked builds only" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject = { "LandscapeCacheObject", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGWorldActor, LandscapeCacheObject), Z_Construct_UClass_UPCGLandscapeCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject_MetaData), Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_MetaData[] = {
		{ "Category", "GenerationSettings" },
		{ "Comment", "/** Disable creation of Partition Actors on the Z axis. Can improve performances if 3D partitioning is not needed. */" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "Disable creation of Partition Actors on the Z axis. Can improve performances if 3D partitioning is not needed." },
	};
#endif
	void Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_SetBit(void* Obj)
	{
		((APCGWorldActor*)Obj)->bUse2DGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid = { "bUse2DGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APCGWorldActor), &Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_MetaData), Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_ValueProp = { "GridGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_Key_KeyProp = { "GridGuids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_MetaData[] = {
		{ "Comment", "/** GUIDs of the partitioned actor grids, one per grid size. */" },
		{ "ModuleRelativePath", "Public/PCGWorldActor.h" },
		{ "ToolTip", "GUIDs of the partitioned actor grids, one per grid size." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids = { "GridGuids", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APCGWorldActor, GridGuids), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_MetaData), Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APCGWorldActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_PartitionGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_LandscapeCacheObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_bUse2DGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APCGWorldActor_Statics::NewProp_GridGuids,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APCGWorldActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APCGWorldActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APCGWorldActor_Statics::ClassParams = {
		&APCGWorldActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APCGWorldActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APCGWorldActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APCGWorldActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APCGWorldActor()
	{
		if (!Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton, Z_Construct_UClass_APCGWorldActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APCGWorldActor.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<APCGWorldActor>()
	{
		return APCGWorldActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APCGWorldActor);
	APCGWorldActor::~APCGWorldActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGWorldActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGWorldActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APCGWorldActor, APCGWorldActor::StaticClass, TEXT("APCGWorldActor"), &Z_Registration_Info_UClass_APCGWorldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APCGWorldActor), 3853615362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGWorldActor_h_4217577045(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGWorldActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGWorldActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

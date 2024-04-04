// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/CollisionQueryTaskData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionQueryTaskData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionQueryTaskData();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionQueryTaskData;
class UScriptStruct* FCollisionQueryTaskData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionQueryTaskData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionQueryTaskData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionQueryTaskData, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("CollisionQueryTaskData"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionQueryTaskData.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FCollisionQueryTaskData>()
{
	return FCollisionQueryTaskData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data Store struct used to extend collision-based targeting tasks providing extra data from outside */" },
		{ "ModuleRelativePath", "Tasks/CollisionQueryTaskData.h" },
		{ "ToolTip", "Data Store struct used to extend collision-based targeting tasks providing extra data from outside" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionQueryTaskData>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "Collision Query Task Overrides" },
		{ "Comment", "/** Any extra actors we want to ignore. Note: Given that this is a globally-managed struct, we're manually adding refs to it in UTargetingSubsystem::AddReferencedObjects */" },
		{ "ModuleRelativePath", "Tasks/CollisionQueryTaskData.h" },
		{ "ToolTip", "Any extra actors we want to ignore. Note: Given that this is a globally-managed struct, we're manually adding refs to it in UTargetingSubsystem::AddReferencedObjects" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCollisionQueryTaskData, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors_MetaData), Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewProp_IgnoredActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"CollisionQueryTaskData",
		Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::PropPointers),
		sizeof(FCollisionQueryTaskData),
		alignof(FCollisionQueryTaskData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionQueryTaskData()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionQueryTaskData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionQueryTaskData.InnerSingleton, Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionQueryTaskData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_CollisionQueryTaskData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_CollisionQueryTaskData_h_Statics::ScriptStructInfo[] = {
		{ FCollisionQueryTaskData::StaticStruct, Z_Construct_UScriptStruct_FCollisionQueryTaskData_Statics::NewStructOps, TEXT("CollisionQueryTaskData"), &Z_Registration_Info_UScriptStruct_CollisionQueryTaskData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionQueryTaskData), 2137388124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_CollisionQueryTaskData_h_2184166929(TEXT("/Script/TargetingSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_CollisionQueryTaskData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_CollisionQueryTaskData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

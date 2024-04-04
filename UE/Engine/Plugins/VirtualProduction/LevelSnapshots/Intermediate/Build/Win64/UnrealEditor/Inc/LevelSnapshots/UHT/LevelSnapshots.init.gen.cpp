// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshots_init() {}
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelSnapshots;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelSnapshots()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelSnapshots.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelSnapshots",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0x8623FE41,
				0x0239EA82,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelSnapshots.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelSnapshots.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelSnapshots(Z_Construct_UPackage__Script_LevelSnapshots, TEXT("/Script/LevelSnapshots"), Z_Registration_Info_UPackage__Script_LevelSnapshots, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8623FE41, 0x0239EA82));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

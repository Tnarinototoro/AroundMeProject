// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debugger/StateTreeDebuggerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeDebuggerTypes() {}
// Cross Module References
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeBreakpointType;
	static UEnum* EStateTreeBreakpointType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBreakpointType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeBreakpointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeBreakpointType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeBreakpointType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBreakpointType>()
	{
		return EStateTreeBreakpointType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::Enumerators[] = {
		{ "EStateTreeBreakpointType::Unset", (int64)EStateTreeBreakpointType::Unset },
		{ "EStateTreeBreakpointType::OnEnter", (int64)EStateTreeBreakpointType::OnEnter },
		{ "EStateTreeBreakpointType::OnExit", (int64)EStateTreeBreakpointType::OnExit },
		{ "EStateTreeBreakpointType::OnTransition", (int64)EStateTreeBreakpointType::OnTransition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Debugger/StateTreeDebuggerTypes.h" },
		{ "OnEnter.Name", "EStateTreeBreakpointType::OnEnter" },
		{ "OnExit.Name", "EStateTreeBreakpointType::OnExit" },
		{ "OnTransition.Name", "EStateTreeBreakpointType::OnTransition" },
		{ "Unset.Name", "EStateTreeBreakpointType::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeBreakpointType",
		"EStateTreeBreakpointType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBreakpointType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeBreakpointType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeBreakpointType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeBreakpointType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeDebuggerTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeDebuggerTypes_h_Statics::EnumInfo[] = {
		{ EStateTreeBreakpointType_StaticEnum, TEXT("EStateTreeBreakpointType"), &Z_Registration_Info_UEnum_EStateTreeBreakpointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1700541664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeDebuggerTypes_h_2161234746(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeDebuggerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeDebuggerTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

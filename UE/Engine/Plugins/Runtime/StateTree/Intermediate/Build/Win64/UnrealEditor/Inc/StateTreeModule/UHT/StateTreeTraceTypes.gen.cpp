// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debugger/StateTreeTraceTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTraceTypes() {}
// Cross Module References
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeTraceEventType;
	static UEnum* EStateTreeTraceEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeTraceEventType"));
		}
		return Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTraceEventType>()
	{
		return EStateTreeTraceEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::Enumerators[] = {
		{ "EStateTreeTraceEventType::Unset", (int64)EStateTreeTraceEventType::Unset },
		{ "EStateTreeTraceEventType::OnEntering", (int64)EStateTreeTraceEventType::OnEntering },
		{ "EStateTreeTraceEventType::OnEntered", (int64)EStateTreeTraceEventType::OnEntered },
		{ "EStateTreeTraceEventType::OnExiting", (int64)EStateTreeTraceEventType::OnExiting },
		{ "EStateTreeTraceEventType::OnExited", (int64)EStateTreeTraceEventType::OnExited },
		{ "EStateTreeTraceEventType::Push", (int64)EStateTreeTraceEventType::Push },
		{ "EStateTreeTraceEventType::Pop", (int64)EStateTreeTraceEventType::Pop },
		{ "EStateTreeTraceEventType::OnStateSelected", (int64)EStateTreeTraceEventType::OnStateSelected },
		{ "EStateTreeTraceEventType::OnStateCompleted", (int64)EStateTreeTraceEventType::OnStateCompleted },
		{ "EStateTreeTraceEventType::OnTicking", (int64)EStateTreeTraceEventType::OnTicking },
		{ "EStateTreeTraceEventType::OnTaskCompleted", (int64)EStateTreeTraceEventType::OnTaskCompleted },
		{ "EStateTreeTraceEventType::OnTicked", (int64)EStateTreeTraceEventType::OnTicked },
		{ "EStateTreeTraceEventType::Passed", (int64)EStateTreeTraceEventType::Passed },
		{ "EStateTreeTraceEventType::Failed", (int64)EStateTreeTraceEventType::Failed },
		{ "EStateTreeTraceEventType::OnEvaluating", (int64)EStateTreeTraceEventType::OnEvaluating },
		{ "EStateTreeTraceEventType::OnTransition", (int64)EStateTreeTraceEventType::OnTransition },
		{ "EStateTreeTraceEventType::OnTreeStarted", (int64)EStateTreeTraceEventType::OnTreeStarted },
		{ "EStateTreeTraceEventType::OnTreeStopped", (int64)EStateTreeTraceEventType::OnTreeStopped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::Enum_MetaDataParams[] = {
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EStateTreeTraceEventType::Failed" },
		{ "ModuleRelativePath", "Public/Debugger/StateTreeTraceTypes.h" },
		{ "OnEntered.DisplayName", "Entered" },
		{ "OnEntered.Name", "EStateTreeTraceEventType::OnEntered" },
		{ "OnEntering.DisplayName", "Entering" },
		{ "OnEntering.Name", "EStateTreeTraceEventType::OnEntering" },
		{ "OnEvaluating.DisplayName", "Evaluating" },
		{ "OnEvaluating.Name", "EStateTreeTraceEventType::OnEvaluating" },
		{ "OnExited.DisplayName", "Exited" },
		{ "OnExited.Name", "EStateTreeTraceEventType::OnExited" },
		{ "OnExiting.DisplayName", "Exiting" },
		{ "OnExiting.Name", "EStateTreeTraceEventType::OnExiting" },
		{ "OnStateCompleted.DisplayName", "Completed" },
		{ "OnStateCompleted.Name", "EStateTreeTraceEventType::OnStateCompleted" },
		{ "OnStateSelected.DisplayName", "Selected" },
		{ "OnStateSelected.Name", "EStateTreeTraceEventType::OnStateSelected" },
		{ "OnTaskCompleted.DisplayName", "Completed" },
		{ "OnTaskCompleted.Name", "EStateTreeTraceEventType::OnTaskCompleted" },
		{ "OnTicked.DisplayName", "Ticked" },
		{ "OnTicked.Name", "EStateTreeTraceEventType::OnTicked" },
		{ "OnTicking.DisplayName", "Tick" },
		{ "OnTicking.Name", "EStateTreeTraceEventType::OnTicking" },
		{ "OnTransition.DisplayName", "Transition" },
		{ "OnTransition.Name", "EStateTreeTraceEventType::OnTransition" },
		{ "OnTreeStarted.DisplayName", "Tree Started" },
		{ "OnTreeStarted.Name", "EStateTreeTraceEventType::OnTreeStarted" },
		{ "OnTreeStopped.DisplayName", "Tree Stopped" },
		{ "OnTreeStopped.Name", "EStateTreeTraceEventType::OnTreeStopped" },
		{ "Passed.DisplayName", "Passed" },
		{ "Passed.Name", "EStateTreeTraceEventType::Passed" },
		{ "Pop.DisplayName", "Pop" },
		{ "Pop.Name", "EStateTreeTraceEventType::Pop" },
		{ "Push.DisplayName", "Push" },
		{ "Push.Name", "EStateTreeTraceEventType::Push" },
		{ "Unset.Name", "EStateTreeTraceEventType::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeTraceEventType",
		"EStateTreeTraceEventType",
		Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeTraceEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeTraceEventType.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeTraceEventType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeTraceTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeTraceTypes_h_Statics::EnumInfo[] = {
		{ EStateTreeTraceEventType_StaticEnum, TEXT("EStateTreeTraceEventType"), &Z_Registration_Info_UEnum_EStateTreeTraceEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 416884295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeTraceTypes_h_1969926901(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeTraceTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Debugger_StateTreeTraceTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

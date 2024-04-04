// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/RigUnit_GetJointTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetJointTransform() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformGetterType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetJointTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetJointTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_GetJointTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform;
class UScriptStruct* FRigUnit_GetJointTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetJointTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetJointTransform_Execute;
		Arguments_FRigUnit_GetJointTransform_Execute.Emplace(TEXT("Joint"), TEXT("FName"));
		Arguments_FRigUnit_GetJointTransform_Execute.Emplace(TEXT("Type"), TEXT("ETransformGetterType"));
		Arguments_FRigUnit_GetJointTransform_Execute.Emplace(TEXT("TransformSpace"), TEXT("ETransformSpaceMode"));
		Arguments_FRigUnit_GetJointTransform_Execute.Emplace(TEXT("BaseTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetJointTransform_Execute.Emplace(TEXT("BaseJoint"), TEXT("FName"));
		Arguments_FRigUnit_GetJointTransform_Execute.Emplace(TEXT("Output"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetJointTransform::Execute"), &FRigUnit_GetJointTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.OuterSingleton, Arguments_FRigUnit_GetJointTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetJointTransform>()
{
	return FRigUnit_GetJointTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Joint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseJoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseJoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Get Joint Transform" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetJointTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Joint_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetJointTransform, Joint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Joint_MetaData), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Joint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetJointTransform, Type), Z_Construct_UEnum_ControlRig_ETransformGetterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type_MetaData) }; // 1909425353
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetJointTransform, TransformSpace), Z_Construct_UEnum_ControlRig_ETransformSpaceMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace_MetaData), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace_MetaData) }; // 1414560775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseTransform\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseTransform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetJointTransform, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseTransform_MetaData), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseJoint_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Transform op option. Use if ETransformSpace is BaseJoint\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
		{ "ToolTip", "Transform op option. Use if ETransformSpace is BaseJoint" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseJoint = { "BaseJoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetJointTransform, BaseJoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseJoint_MetaData), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseJoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// possibly space, relative transform so on can be input\n" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_GetJointTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "possibly space, relative transform so on can be input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetJointTransform, Output), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Output_MetaData), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Output_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Joint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_TransformSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_BaseJoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_GetJointTransform",
		Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::PropPointers),
		sizeof(FRigUnit_GetJointTransform),
		alignof(FRigUnit_GetJointTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetJointTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform.InnerSingleton;
	}

void FRigUnit_GetJointTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetJointTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Joint,
		Type,
		TransformSpace,
		BaseTransform,
		BaseJoint,
		Output
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetJointTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics::NewStructOps, TEXT("RigUnit_GetJointTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetJointTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetJointTransform), 2814833025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h_2603237814(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

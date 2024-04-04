// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/RigVMEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraphSchema() {}
// Cross Module References
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphSchema();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphSchema_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMEdGraphSchemaAction_LocalVar>() == std::is_polymorphic<FEdGraphSchemaAction_BlueprintVariableBase>(), "USTRUCT FRigVMEdGraphSchemaAction_LocalVar cannot be polymorphic unless super FEdGraphSchemaAction_BlueprintVariableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar;
class UScriptStruct* FRigVMEdGraphSchemaAction_LocalVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMEdGraphSchemaAction_LocalVar"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMEdGraphSchemaAction_LocalVar>()
{
	return FRigVMEdGraphSchemaAction_LocalVar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMEdGraphSchemaAction_LocalVar>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_BlueprintVariableBase,
		&NewStructOps,
		"RigVMEdGraphSchemaAction_LocalVar",
		nullptr,
		0,
		sizeof(FRigVMEdGraphSchemaAction_LocalVar),
		alignof(FRigVMEdGraphSchemaAction_LocalVar),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar.InnerSingleton, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMEdGraphSchemaAction_PromoteToVariable>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FRigVMEdGraphSchemaAction_PromoteToVariable cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable;
class UScriptStruct* FRigVMEdGraphSchemaAction_PromoteToVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMEdGraphSchemaAction_PromoteToVariable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMEdGraphSchemaAction_PromoteToVariable>()
{
	return FRigVMEdGraphSchemaAction_PromoteToVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMEdGraphSchemaAction_PromoteToVariable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"RigVMEdGraphSchemaAction_PromoteToVariable",
		nullptr,
		0,
		sizeof(FRigVMEdGraphSchemaAction_PromoteToVariable),
		alignof(FRigVMEdGraphSchemaAction_PromoteToVariable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMEdGraphSchemaAction_PromoteToExposedPin>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FRigVMEdGraphSchemaAction_PromoteToExposedPin cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin;
class UScriptStruct* FRigVMEdGraphSchemaAction_PromoteToExposedPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMEdGraphSchemaAction_PromoteToExposedPin"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMEdGraphSchemaAction_PromoteToExposedPin>()
{
	return FRigVMEdGraphSchemaAction_PromoteToExposedPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMEdGraphSchemaAction_PromoteToExposedPin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"RigVMEdGraphSchemaAction_PromoteToExposedPin",
		nullptr,
		0,
		sizeof(FRigVMEdGraphSchemaAction_PromoteToExposedPin),
		alignof(FRigVMEdGraphSchemaAction_PromoteToExposedPin),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin.InnerSingleton, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMEdGraphSchemaAction_Event>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FRigVMEdGraphSchemaAction_Event cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event;
class UScriptStruct* FRigVMEdGraphSchemaAction_Event::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMEdGraphSchemaAction_Event"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMEdGraphSchemaAction_Event>()
{
	return FRigVMEdGraphSchemaAction_Event::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMEdGraphSchemaAction_Event>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"RigVMEdGraphSchemaAction_Event",
		nullptr,
		0,
		sizeof(FRigVMEdGraphSchemaAction_Event),
		alignof(FRigVMEdGraphSchemaAction_Event),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event.InnerSingleton, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event.InnerSingleton;
	}
	void URigVMEdGraphSchema::StaticRegisterNativesURigVMEdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraphSchema);
	UClass* Z_Construct_UClass_URigVMEdGraphSchema_NoRegister()
	{
		return URigVMEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/RigVMEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraphSchema_Statics::ClassParams = {
		&URigVMEdGraphSchema::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URigVMEdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraphSchema.OuterSingleton, Z_Construct_UClass_URigVMEdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraphSchema.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMEdGraphSchema>()
	{
		return URigVMEdGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraphSchema);
	URigVMEdGraphSchema::~URigVMEdGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FRigVMEdGraphSchemaAction_LocalVar::StaticStruct, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics::NewStructOps, TEXT("RigVMEdGraphSchemaAction_LocalVar"), &Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_LocalVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMEdGraphSchemaAction_LocalVar), 1459647933U) },
		{ FRigVMEdGraphSchemaAction_PromoteToVariable::StaticStruct, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics::NewStructOps, TEXT("RigVMEdGraphSchemaAction_PromoteToVariable"), &Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMEdGraphSchemaAction_PromoteToVariable), 3146783772U) },
		{ FRigVMEdGraphSchemaAction_PromoteToExposedPin::StaticStruct, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics::NewStructOps, TEXT("RigVMEdGraphSchemaAction_PromoteToExposedPin"), &Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_PromoteToExposedPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMEdGraphSchemaAction_PromoteToExposedPin), 120834749U) },
		{ FRigVMEdGraphSchemaAction_Event::StaticStruct, Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics::NewStructOps, TEXT("RigVMEdGraphSchemaAction_Event"), &Z_Registration_Info_UScriptStruct_RigVMEdGraphSchemaAction_Event, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMEdGraphSchemaAction_Event), 990620239U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraphSchema, URigVMEdGraphSchema::StaticClass, TEXT("URigVMEdGraphSchema"), &Z_Registration_Info_UClass_URigVMEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraphSchema), 565439922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_2907301350(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

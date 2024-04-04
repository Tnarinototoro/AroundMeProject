// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGCreateTargetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGCreateTargetActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateTargetActor();
	PCG_API UClass* Z_Construct_UClass_UPCGCreateTargetActor_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttachOptions();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGCreateTargetActor::StaticRegisterNativesUPCGCreateTargetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGCreateTargetActor);
	UClass* Z_Construct_UClass_UPCGCreateTargetActor_NoRegister()
	{
		return UPCGCreateTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_UPCGCreateTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTemplateActorEditing_MetaData[];
#endif
		static void NewProp_bAllowTemplateActorEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTemplateActorEditing;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AttachOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RootActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorPivot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGCreateTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Elements/PCGCreateTargetActor.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActorClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisallowCreateNew", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
		{ "OnlyPlaceable", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActorClass = { "TemplateActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateTargetActor, TemplateActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActorClass_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bAllowTemplateActorEditing" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateTargetActor, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActor_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// TODO: make this InlineEditConditionToggle, not done because property changed event does not propagate correctly so we can't track accurately the need to create the target actor\n" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
		{ "ToolTip", "TODO: make this InlineEditConditionToggle, not done because property changed event does not propagate correctly so we can't track accurately the need to create the target actor" },
	};
#endif
	void Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing_SetBit(void* Obj)
	{
		((UPCGCreateTargetActor*)Obj)->bAllowTemplateActorEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing = { "bAllowTemplateActorEditing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGCreateTargetActor), &Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions = { "AttachOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateTargetActor, AttachOptions), Z_Construct_UEnum_PCG_EPCGAttachOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions_MetaData) }; // 227260305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_RootActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateTargetActor, RootActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_RootActor_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_RootActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorLabel = { "ActorLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateTargetActor, ActorLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorLabel_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorLabel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorPivot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGCreateTargetActor.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorPivot = { "ActorPivot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCreateTargetActor, ActorPivot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorPivot_MetaData), Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorPivot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGCreateTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_bAllowTemplateActorEditing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_AttachOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGCreateTargetActor_Statics::NewProp_ActorPivot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGCreateTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCreateTargetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGCreateTargetActor_Statics::ClassParams = {
		&UPCGCreateTargetActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGCreateTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGCreateTargetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGCreateTargetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGCreateTargetActor()
	{
		if (!Z_Registration_Info_UClass_UPCGCreateTargetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCreateTargetActor.OuterSingleton, Z_Construct_UClass_UPCGCreateTargetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGCreateTargetActor.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGCreateTargetActor>()
	{
		return UPCGCreateTargetActor::StaticClass();
	}
	UPCGCreateTargetActor::UPCGCreateTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGCreateTargetActor);
	UPCGCreateTargetActor::~UPCGCreateTargetActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCreateTargetActor, UPCGCreateTargetActor::StaticClass, TEXT("UPCGCreateTargetActor"), &Z_Registration_Info_UClass_UPCGCreateTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCreateTargetActor), 2862063094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_4193652266(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGCreateTargetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

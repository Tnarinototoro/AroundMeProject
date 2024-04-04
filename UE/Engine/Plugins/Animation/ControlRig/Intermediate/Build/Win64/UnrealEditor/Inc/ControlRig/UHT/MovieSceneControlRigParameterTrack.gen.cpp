// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneControlRigParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigParameterTrack() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRotationOrder();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRotationOrder;
class UScriptStruct* FControlRotationOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRotationOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRotationOrder, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRotationOrder"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRotationOrder.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRotationOrder>()
{
	return FControlRotationOrder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRotationOrder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSetting_MetaData[];
#endif
		static void NewProp_bOverrideSetting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRotationOrder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRotationOrder>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Comment", "/* Rotation Order*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Rotation Order" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlRotationOrder, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_MetaData), Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_MetaData) }; // 943455862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_MetaData[] = {
		{ "Comment", "/** Override the default control setting*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Override the default control setting" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_SetBit(void* Obj)
	{
		((FControlRotationOrder*)Obj)->bOverrideSetting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting = { "bOverrideSetting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlRotationOrder), &Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_MetaData), Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewProp_bOverrideSetting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRotationOrder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRotationOrder",
		Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers),
		sizeof(FControlRotationOrder),
		alignof(FControlRotationOrder),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRotationOrder_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRotationOrder_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FControlRotationOrder()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRotationOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRotationOrder.InnerSingleton, Z_Construct_UScriptStruct_FControlRotationOrder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRotationOrder.InnerSingleton;
	}
	void UMovieSceneControlRigParameterTrack::StaticRegisterNativesUMovieSceneControlRigParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneControlRigParameterTrack);
	UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister()
	{
		return UMovieSceneControlRigParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionToKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SectionToKey;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsRotationOrder_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlsRotationOrder_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsRotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlsRotationOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of skeletal mesh actors using animation ControlRigs\n */" },
		{ "IncludePath", "Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors using animation ControlRigs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig_MetaData[] = {
		{ "Comment", "/** Control Rig we control*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Control Rig we control" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig_MetaData), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey_MetaData[] = {
		{ "Comment", "/** Section we should Key */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Section we should Key" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey = { "SectionToKey", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, SectionToKey), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey_MetaData), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The sections owned by this track .*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "The sections owned by this track ." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_MetaData), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Unique Name*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Unique Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName_MetaData), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_ValueProp = { "ControlsRotationOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FControlRotationOrder, METADATA_PARAMS(0, nullptr) }; // 3956901563
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_Key_KeyProp = { "ControlsRotationOrder_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_MetaData[] = {
		{ "Comment", "/** Uses Rotation Order*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Uses Rotation Order" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder = { "ControlsRotationOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, ControlsRotationOrder), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_MetaData), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_MetaData) }; // 3956901563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlsRotationOrder,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 3839488910
			{ Z_Construct_UClass_UNodeAndChannelMappings_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterTrack, INodeAndChannelMappings), false },  // 2532619362
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneControlRigParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::ClassParams = {
		&UMovieSceneControlRigParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UMovieSceneControlRigParameterTrack>()
	{
		return UMovieSceneControlRigParameterTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneControlRigParameterTrack);
	UMovieSceneControlRigParameterTrack::~UMovieSceneControlRigParameterTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ScriptStructInfo[] = {
		{ FControlRotationOrder::StaticStruct, Z_Construct_UScriptStruct_FControlRotationOrder_Statics::NewStructOps, TEXT("ControlRotationOrder"), &Z_Registration_Info_UScriptStruct_ControlRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRotationOrder), 3956901563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneControlRigParameterTrack, UMovieSceneControlRigParameterTrack::StaticClass, TEXT("UMovieSceneControlRigParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneControlRigParameterTrack), 823778407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_750169128(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EvaluateChooserNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluateChooserNode() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserTable_NoRegister();
	CHOOSERUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateChooser();
	CHOOSERUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateChooser2();
	CHOOSERUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateChooser2_NoRegister();
	CHOOSERUNCOOKED_API UClass* Z_Construct_UClass_UK2Node_EvaluateChooser_NoRegister();
	CHOOSERUNCOOKED_API UEnum* Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode();
	UPackage* Z_Construct_UPackage__Script_ChooserUncooked();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEvaluateChooserMode;
	static UEnum* EEvaluateChooserMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEvaluateChooserMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEvaluateChooserMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode, (UObject*)Z_Construct_UPackage__Script_ChooserUncooked(), TEXT("EEvaluateChooserMode"));
		}
		return Z_Registration_Info_UEnum_EEvaluateChooserMode.OuterSingleton;
	}
	template<> CHOOSERUNCOOKED_API UEnum* StaticEnum<EEvaluateChooserMode>()
	{
		return EEvaluateChooserMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::Enumerators[] = {
		{ "EEvaluateChooserMode::FirstResult", (int64)EEvaluateChooserMode::FirstResult },
		{ "EEvaluateChooserMode::AllResults", (int64)EEvaluateChooserMode::AllResults },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::Enum_MetaDataParams[] = {
		{ "AllResults.Name", "EEvaluateChooserMode::AllResults" },
		{ "FirstResult.Name", "EEvaluateChooserMode::FirstResult" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChooserUncooked,
		nullptr,
		"EEvaluateChooserMode",
		"EEvaluateChooserMode",
		Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode()
	{
		if (!Z_Registration_Info_UEnum_EEvaluateChooserMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEvaluateChooserMode.InnerSingleton, Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEvaluateChooserMode.InnerSingleton;
	}
	void UK2Node_EvaluateChooser::StaticRegisterNativesUK2Node_EvaluateChooser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EvaluateChooser);
	UClass* Z_Construct_UClass_UK2Node_EvaluateChooser_NoRegister()
	{
		return UK2Node_EvaluateChooser::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EvaluateChooser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chooser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_ChooserUncooked,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UK2Node_EvaluateChooser\n// old implementation of this node for backwards compatibility - not currently accessible to create new instances in content\n" },
		{ "IncludePath", "EvaluateChooserNode.h" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
		{ "ToolTip", "UK2Node_EvaluateChooser\nold implementation of this node for backwards compatibility - not currently accessible to create new instances in content" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Chooser_MetaData[] = {
		{ "Category", "Chooser" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateChooser, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Chooser_MetaData), Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Chooser_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Chooser" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateChooser, Mode), Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode_MetaData) }; // 3224766163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Chooser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EvaluateChooser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::ClassParams = {
		&UK2Node_EvaluateChooser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::PropPointers),
		0,
		0x010800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UK2Node_EvaluateChooser()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EvaluateChooser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EvaluateChooser.OuterSingleton, Z_Construct_UClass_UK2Node_EvaluateChooser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EvaluateChooser.OuterSingleton;
	}
	template<> CHOOSERUNCOOKED_API UClass* StaticClass<UK2Node_EvaluateChooser>()
	{
		return UK2Node_EvaluateChooser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EvaluateChooser);
	UK2Node_EvaluateChooser::~UK2Node_EvaluateChooser() {}
	void UK2Node_EvaluateChooser2::StaticRegisterNativesUK2Node_EvaluateChooser2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EvaluateChooser2);
	UClass* Z_Construct_UClass_UK2Node_EvaluateChooser2_NoRegister()
	{
		return UK2Node_EvaluateChooser2::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chooser_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Chooser;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_ChooserUncooked,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------------------------------------------------------\n// UK2Node_EvaluateChooser2\n// New Implementation of EvaluateChooser with support for passing in/out multiple objects and structs\n" },
		{ "IncludePath", "EvaluateChooserNode.h" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
		{ "ToolTip", "UK2Node_EvaluateChooser2\nNew Implementation of EvaluateChooser with support for passing in/out multiple objects and structs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Chooser_MetaData[] = {
		{ "Category", "Chooser" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Chooser = { "Chooser", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateChooser2, Chooser), Z_Construct_UClass_UChooserTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Chooser_MetaData), Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Chooser_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Chooser" },
		{ "ModuleRelativePath", "Private/EvaluateChooserNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_EvaluateChooser2, Mode), Z_Construct_UEnum_ChooserUncooked_EEvaluateChooserMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode_MetaData) }; // 3224766163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Chooser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EvaluateChooser2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::ClassParams = {
		&UK2Node_EvaluateChooser2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UK2Node_EvaluateChooser2()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EvaluateChooser2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EvaluateChooser2.OuterSingleton, Z_Construct_UClass_UK2Node_EvaluateChooser2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EvaluateChooser2.OuterSingleton;
	}
	template<> CHOOSERUNCOOKED_API UClass* StaticClass<UK2Node_EvaluateChooser2>()
	{
		return UK2Node_EvaluateChooser2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EvaluateChooser2);
	UK2Node_EvaluateChooser2::~UK2Node_EvaluateChooser2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics::EnumInfo[] = {
		{ EEvaluateChooserMode_StaticEnum, TEXT("EEvaluateChooserMode"), &Z_Registration_Info_UEnum_EEvaluateChooserMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3224766163U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EvaluateChooser, UK2Node_EvaluateChooser::StaticClass, TEXT("UK2Node_EvaluateChooser"), &Z_Registration_Info_UClass_UK2Node_EvaluateChooser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EvaluateChooser), 1827710218U) },
		{ Z_Construct_UClass_UK2Node_EvaluateChooser2, UK2Node_EvaluateChooser2::StaticClass, TEXT("UK2Node_EvaluateChooser2"), &Z_Registration_Info_UClass_UK2Node_EvaluateChooser2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EvaluateChooser2), 2083756430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_3173940422(TEXT("/Script/ChooserUncooked"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserUncooked_Private_EvaluateChooserNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

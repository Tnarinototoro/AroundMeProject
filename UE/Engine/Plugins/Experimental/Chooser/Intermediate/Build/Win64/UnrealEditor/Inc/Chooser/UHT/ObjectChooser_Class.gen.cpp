// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/ObjectChooser_Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectChooser_Class() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FClassChooser();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FClassChooser>() == std::is_polymorphic<FObjectChooserBase>(), "USTRUCT FClassChooser cannot be polymorphic unless super FObjectChooserBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassChooser;
class UScriptStruct* FClassChooser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassChooser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassChooser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassChooser, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ClassChooser"));
	}
	return Z_Registration_Info_UScriptStruct_ClassChooser.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FClassChooser>()
{
	return FClassChooser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassChooser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassChooser_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Internal/ObjectChooser_Class.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassChooser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassChooser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassChooser_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/ObjectChooser_Class.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FClassChooser_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassChooser, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassChooser_Statics::NewProp_Class_MetaData), Z_Construct_UScriptStruct_FClassChooser_Statics::NewProp_Class_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassChooser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassChooser_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassChooser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FObjectChooserBase,
		&NewStructOps,
		"ClassChooser",
		Z_Construct_UScriptStruct_FClassChooser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassChooser_Statics::PropPointers),
		sizeof(FClassChooser),
		alignof(FClassChooser),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassChooser_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassChooser_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassChooser_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClassChooser()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassChooser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassChooser.InnerSingleton, Z_Construct_UScriptStruct_FClassChooser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassChooser.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Class_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Class_h_Statics::ScriptStructInfo[] = {
		{ FClassChooser::StaticStruct, Z_Construct_UScriptStruct_FClassChooser_Statics::NewStructOps, TEXT("ClassChooser"), &Z_Registration_Info_UScriptStruct_ClassChooser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassChooser), 3318699395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Class_h_1526215076(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Class_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectChooser_Class_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IObjectChooser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIObjectChooser() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser();
	CHOOSER_API UClass* Z_Construct_UClass_UObjectChooser_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserEvaluationContext();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserEvaluationInputObject();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	void UObjectChooser::StaticRegisterNativesUObjectChooser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectChooser);
	UClass* Z_Construct_UClass_UObjectChooser_NoRegister()
	{
		return UObjectChooser::StaticClass();
	}
	struct Z_Construct_UClass_UObjectChooser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectChooser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectChooser_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectChooser_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IObjectChooser.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectChooser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObjectChooser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectChooser_Statics::ClassParams = {
		&UObjectChooser::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectChooser_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectChooser_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UObjectChooser()
	{
		if (!Z_Registration_Info_UClass_UObjectChooser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectChooser.OuterSingleton, Z_Construct_UClass_UObjectChooser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectChooser.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UObjectChooser>()
	{
		return UObjectChooser::StaticClass();
	}
	UObjectChooser::UObjectChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectChooser);
	UObjectChooser::~UObjectChooser() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject;
class UScriptStruct* FChooserEvaluationInputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationInputObject, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserEvaluationInputObject"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserEvaluationInputObject>()
{
	return FChooserEvaluationInputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IObjectChooser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserEvaluationInputObject>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserEvaluationInputObject",
		nullptr,
		0,
		sizeof(FChooserEvaluationInputObject),
		alignof(FChooserEvaluationInputObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserEvaluationInputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject.InnerSingleton, Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserEvaluationContext;
class UScriptStruct* FChooserEvaluationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserEvaluationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserEvaluationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserEvaluationContext, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserEvaluationContext"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserEvaluationContext.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserEvaluationContext>()
{
	return FChooserEvaluationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IObjectChooser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserEvaluationContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserEvaluationContext",
		nullptr,
		0,
		sizeof(FChooserEvaluationContext),
		alignof(FChooserEvaluationContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserEvaluationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserEvaluationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserEvaluationContext.InnerSingleton, Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserEvaluationContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectChooserBase;
class UScriptStruct* FObjectChooserBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectChooserBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectChooserBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectChooserBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ObjectChooserBase"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectChooserBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FObjectChooserBase>()
{
	return FObjectChooserBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectChooserBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectChooserBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IObjectChooser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectChooserBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectChooserBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectChooserBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ObjectChooserBase",
		nullptr,
		0,
		sizeof(FObjectChooserBase),
		alignof(FObjectChooserBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectChooserBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectChooserBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectChooserBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectChooserBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectChooserBase.InnerSingleton, Z_Construct_UScriptStruct_FObjectChooserBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectChooserBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ScriptStructInfo[] = {
		{ FChooserEvaluationInputObject::StaticStruct, Z_Construct_UScriptStruct_FChooserEvaluationInputObject_Statics::NewStructOps, TEXT("ChooserEvaluationInputObject"), &Z_Registration_Info_UScriptStruct_ChooserEvaluationInputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserEvaluationInputObject), 2135165703U) },
		{ FChooserEvaluationContext::StaticStruct, Z_Construct_UScriptStruct_FChooserEvaluationContext_Statics::NewStructOps, TEXT("ChooserEvaluationContext"), &Z_Registration_Info_UScriptStruct_ChooserEvaluationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserEvaluationContext), 3923735805U) },
		{ FObjectChooserBase::StaticStruct, Z_Construct_UScriptStruct_FObjectChooserBase_Statics::NewStructOps, TEXT("ObjectChooserBase"), &Z_Registration_Info_UScriptStruct_ObjectChooserBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectChooserBase), 2796759806U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectChooser, UObjectChooser::StaticClass, TEXT("UObjectChooser"), &Z_Registration_Info_UClass_UObjectChooser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectChooser), 1520499641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_3384599811(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IObjectChooser_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

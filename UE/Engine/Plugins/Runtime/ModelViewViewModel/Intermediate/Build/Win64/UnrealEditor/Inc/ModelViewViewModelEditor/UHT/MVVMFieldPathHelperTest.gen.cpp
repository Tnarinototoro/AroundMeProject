// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/MVVMFieldPathHelperTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMFieldPathHelperTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FIELDNOTIFICATION_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMObjectFieldPathHelperTest();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest;
class UScriptStruct* FMVVMStructFieldPathHelperTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelEditor(), TEXT("MVVMStructFieldPathHelperTest"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest.OuterSingleton;
}
template<> MODELVIEWVIEWMODELEDITOR_API UScriptStruct* StaticStruct<FMVVMStructFieldPathHelperTest>()
{
	return FMVVMStructFieldPathHelperTest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMStructFieldPathHelperTest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyInt = { "PropertyInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMStructFieldPathHelperTest, PropertyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyVector = { "PropertyVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMStructFieldPathHelperTest, PropertyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyObject = { "PropertyObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMStructFieldPathHelperTest, PropertyObject), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyViewModel = { "PropertyViewModel", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMStructFieldPathHelperTest, PropertyViewModel), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewProp_PropertyViewModel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
		nullptr,
		&NewStructOps,
		"MVVMStructFieldPathHelperTest",
		Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::PropPointers),
		sizeof(FMVVMStructFieldPathHelperTest),
		alignof(FMVVMStructFieldPathHelperTest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest.InnerSingleton, Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest.InnerSingleton;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyViewModelWithBPGetterSetter)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyViewModelWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyViewModelWithGetterSetterAndBP)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyViewModelWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyViewModelWithGetterSetter)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyViewModelWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyViewModel)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModel(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyViewModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyObjectWithBPGetterSetter)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyObjectWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyObjectWithGetterSetterAndBP)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyObjectWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyObjectWithGetterSetter)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyObjectWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyObject)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObject(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyStructWithBPGetterSetter)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyStructWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyStructWithGetterSetterAndBP)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyStructWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyStructWithGetterSetter)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyStructWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyStruct)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStruct(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyVectorWithBPGetterSetter)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyVectorWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyVectorWithGetterSetterAndBP)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyVectorWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyVectorWithGetterSetter)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyVectorWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyVector)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVector(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyIntWithBPGetterSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyIntWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyIntWithGetterSetterAndBP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyIntWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyIntWithGetterSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyIntWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execSetPropertyInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyInt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMObjectFieldPathHelperTest::execGetPropertyInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyInt();
		P_NATIVE_END;
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyIntWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetPropertyIntWithGetterSetter();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyIntWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetPropertyIntWithGetterSetter(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyIntWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetPropertyIntWithGetterSetterAndBP();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyIntWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetPropertyIntWithGetterSetterAndBP(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyVectorWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		FVector& Result = *(FVector*)OutValue;
		Result = (FVector)Obj->GetPropertyVectorWithGetterSetter();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyVectorWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		FVector& Value = *(FVector*)InValue;
		Obj->SetPropertyVectorWithGetterSetter(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyVectorWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		FVector& Result = *(FVector*)OutValue;
		Result = (FVector)Obj->GetPropertyVectorWithGetterSetterAndBP();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyVectorWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		FVector& Value = *(FVector*)InValue;
		Obj->SetPropertyVectorWithGetterSetterAndBP(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyStructWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Result = *(FMVVMStructFieldPathHelperTest*)OutValue;
		Result = (FMVVMStructFieldPathHelperTest)Obj->GetPropertyStructWithGetterSetter();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyStructWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Value = *(FMVVMStructFieldPathHelperTest*)InValue;
		Obj->SetPropertyStructWithGetterSetter(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyStructWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Result = *(FMVVMStructFieldPathHelperTest*)OutValue;
		Result = (FMVVMStructFieldPathHelperTest)Obj->GetPropertyStructWithGetterSetterAndBP();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyStructWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Value = *(FMVVMStructFieldPathHelperTest*)InValue;
		Obj->SetPropertyStructWithGetterSetterAndBP(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyObjectWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Result = *(UMVVMObjectFieldPathHelperTest**)OutValue;
		Result = (UMVVMObjectFieldPathHelperTest*)Obj->GetPropertyObjectWithGetterSetter();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyObjectWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Value = *(UMVVMObjectFieldPathHelperTest**)InValue;
		Obj->SetPropertyObjectWithGetterSetter(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyObjectWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Result = *(UMVVMObjectFieldPathHelperTest**)OutValue;
		Result = (UMVVMObjectFieldPathHelperTest*)Obj->GetPropertyObjectWithGetterSetterAndBP();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyObjectWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Value = *(UMVVMObjectFieldPathHelperTest**)InValue;
		Obj->SetPropertyObjectWithGetterSetterAndBP(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyViewModelWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Result = *(UMVVMViewModelFieldPathHelperTest**)OutValue;
		Result = (UMVVMViewModelFieldPathHelperTest*)Obj->GetPropertyViewModelWithGetterSetter();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyViewModelWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Value = *(UMVVMViewModelFieldPathHelperTest**)InValue;
		Obj->SetPropertyViewModelWithGetterSetter(Value);
	}
	void UMVVMObjectFieldPathHelperTest::GetPropertyViewModelWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMObjectFieldPathHelperTest* Obj = (const UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Result = *(UMVVMViewModelFieldPathHelperTest**)OutValue;
		Result = (UMVVMViewModelFieldPathHelperTest*)Obj->GetPropertyViewModelWithGetterSetterAndBP();
	}
	void UMVVMObjectFieldPathHelperTest::SetPropertyViewModelWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMObjectFieldPathHelperTest* Obj = (UMVVMObjectFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Value = *(UMVVMViewModelFieldPathHelperTest**)InValue;
		Obj->SetPropertyViewModelWithGetterSetterAndBP(Value);
	}
	void UMVVMObjectFieldPathHelperTest::StaticRegisterNativesUMVVMObjectFieldPathHelperTest()
	{
		UClass* Class = UMVVMObjectFieldPathHelperTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPropertyInt", &UMVVMObjectFieldPathHelperTest::execGetPropertyInt },
			{ "GetPropertyIntWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyIntWithBPGetterSetter },
			{ "GetPropertyIntWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyIntWithGetterSetter },
			{ "GetPropertyIntWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execGetPropertyIntWithGetterSetterAndBP },
			{ "GetPropertyObject", &UMVVMObjectFieldPathHelperTest::execGetPropertyObject },
			{ "GetPropertyObjectWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyObjectWithBPGetterSetter },
			{ "GetPropertyObjectWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyObjectWithGetterSetter },
			{ "GetPropertyObjectWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execGetPropertyObjectWithGetterSetterAndBP },
			{ "GetPropertyStruct", &UMVVMObjectFieldPathHelperTest::execGetPropertyStruct },
			{ "GetPropertyStructWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyStructWithBPGetterSetter },
			{ "GetPropertyStructWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyStructWithGetterSetter },
			{ "GetPropertyStructWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execGetPropertyStructWithGetterSetterAndBP },
			{ "GetPropertyVector", &UMVVMObjectFieldPathHelperTest::execGetPropertyVector },
			{ "GetPropertyVectorWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyVectorWithBPGetterSetter },
			{ "GetPropertyVectorWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyVectorWithGetterSetter },
			{ "GetPropertyVectorWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execGetPropertyVectorWithGetterSetterAndBP },
			{ "GetPropertyViewModel", &UMVVMObjectFieldPathHelperTest::execGetPropertyViewModel },
			{ "GetPropertyViewModelWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyViewModelWithBPGetterSetter },
			{ "GetPropertyViewModelWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execGetPropertyViewModelWithGetterSetter },
			{ "GetPropertyViewModelWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execGetPropertyViewModelWithGetterSetterAndBP },
			{ "SetPropertyInt", &UMVVMObjectFieldPathHelperTest::execSetPropertyInt },
			{ "SetPropertyIntWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyIntWithBPGetterSetter },
			{ "SetPropertyIntWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyIntWithGetterSetter },
			{ "SetPropertyIntWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execSetPropertyIntWithGetterSetterAndBP },
			{ "SetPropertyObject", &UMVVMObjectFieldPathHelperTest::execSetPropertyObject },
			{ "SetPropertyObjectWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyObjectWithBPGetterSetter },
			{ "SetPropertyObjectWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyObjectWithGetterSetter },
			{ "SetPropertyObjectWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execSetPropertyObjectWithGetterSetterAndBP },
			{ "SetPropertyStruct", &UMVVMObjectFieldPathHelperTest::execSetPropertyStruct },
			{ "SetPropertyStructWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyStructWithBPGetterSetter },
			{ "SetPropertyStructWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyStructWithGetterSetter },
			{ "SetPropertyStructWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execSetPropertyStructWithGetterSetterAndBP },
			{ "SetPropertyVector", &UMVVMObjectFieldPathHelperTest::execSetPropertyVector },
			{ "SetPropertyVectorWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyVectorWithBPGetterSetter },
			{ "SetPropertyVectorWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyVectorWithGetterSetter },
			{ "SetPropertyVectorWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execSetPropertyVectorWithGetterSetterAndBP },
			{ "SetPropertyViewModel", &UMVVMObjectFieldPathHelperTest::execSetPropertyViewModel },
			{ "SetPropertyViewModelWithBPGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyViewModelWithBPGetterSetter },
			{ "SetPropertyViewModelWithGetterSetter", &UMVVMObjectFieldPathHelperTest::execSetPropertyViewModelWithGetterSetter },
			{ "SetPropertyViewModelWithGetterSetterAndBP", &UMVVMObjectFieldPathHelperTest::execSetPropertyViewModelWithGetterSetterAndBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyInt_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyInt", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyIntWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyIntWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyIntWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyObject_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyObject_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyObject", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyObjectWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyObjectWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyObjectWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyStruct_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyStruct", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyStructWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyStructWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyStructWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyVector", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyVectorWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyVectorWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyVectorWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyViewModel_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyViewModel_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyViewModel", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyViewModelWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyViewModelWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "GetPropertyViewModelWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyInt_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyInt", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyIntWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyIntWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyIntWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyObject_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyObject_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyObject", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyObjectWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyObjectWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyObjectWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyStruct_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyStruct_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyStruct", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyStructWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyStructWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyStructWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyVector_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyVector", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyVectorWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyVectorWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyVectorWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyViewModel_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyViewModel_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyViewModel", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyViewModelWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyViewModelWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics
	{
		struct MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, nullptr, "SetPropertyViewModelWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMObjectFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMObjectFieldPathHelperTest);
	UClass* Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister()
	{
		return UMVVMObjectFieldPathHelperTest::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelWithBPGetterSetter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyInt, "GetPropertyInt" }, // 302383636
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithBPGetterSetter, "GetPropertyIntWithBPGetterSetter" }, // 1552679447
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetter, "GetPropertyIntWithGetterSetter" }, // 1511579006
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP, "GetPropertyIntWithGetterSetterAndBP" }, // 2538359764
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObject, "GetPropertyObject" }, // 2763186582
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter, "GetPropertyObjectWithBPGetterSetter" }, // 1517076457
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetter, "GetPropertyObjectWithGetterSetter" }, // 3787770778
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP, "GetPropertyObjectWithGetterSetterAndBP" }, // 3953048797
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStruct, "GetPropertyStruct" }, // 4284530499
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithBPGetterSetter, "GetPropertyStructWithBPGetterSetter" }, // 3929507247
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetter, "GetPropertyStructWithGetterSetter" }, // 3012024484
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP, "GetPropertyStructWithGetterSetterAndBP" }, // 2791376737
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVector, "GetPropertyVector" }, // 2783582519
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter, "GetPropertyVectorWithBPGetterSetter" }, // 3663872476
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetter, "GetPropertyVectorWithGetterSetter" }, // 567455439
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP, "GetPropertyVectorWithGetterSetterAndBP" }, // 1477089164
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModel, "GetPropertyViewModel" }, // 1412588123
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter, "GetPropertyViewModelWithBPGetterSetter" }, // 1853788273
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetter, "GetPropertyViewModelWithGetterSetter" }, // 343869153
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP, "GetPropertyViewModelWithGetterSetterAndBP" }, // 315007190
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyInt, "SetPropertyInt" }, // 3498447270
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithBPGetterSetter, "SetPropertyIntWithBPGetterSetter" }, // 91085640
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetter, "SetPropertyIntWithGetterSetter" }, // 4117166766
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP, "SetPropertyIntWithGetterSetterAndBP" }, // 1660244176
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObject, "SetPropertyObject" }, // 2742495267
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter, "SetPropertyObjectWithBPGetterSetter" }, // 624967632
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetter, "SetPropertyObjectWithGetterSetter" }, // 2908105326
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP, "SetPropertyObjectWithGetterSetterAndBP" }, // 2385082374
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStruct, "SetPropertyStruct" }, // 2315171517
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithBPGetterSetter, "SetPropertyStructWithBPGetterSetter" }, // 3324342162
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetter, "SetPropertyStructWithGetterSetter" }, // 1993442337
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP, "SetPropertyStructWithGetterSetterAndBP" }, // 1883960155
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVector, "SetPropertyVector" }, // 3114313655
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter, "SetPropertyVectorWithBPGetterSetter" }, // 757847567
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetter, "SetPropertyVectorWithGetterSetter" }, // 4184069888
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP, "SetPropertyVectorWithGetterSetterAndBP" }, // 2213789631
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModel, "SetPropertyViewModel" }, // 1387964973
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter, "SetPropertyViewModelWithBPGetterSetter" }, // 3605325856
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetter, "SetPropertyViewModelWithGetterSetter" }, // 1793478650
		{ &Z_Construct_UFunction_UMVVMObjectFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP, "SetPropertyViewModelWithGetterSetterAndBP" }, // 2299128152
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "Tests/MVVMFieldPathHelperTest.h" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyInt = { "PropertyInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter = { "PropertyIntWithGetterSetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyIntWithGetterSetter_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyIntWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyIntWithGetterSetter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyIntWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyIntWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP = { "PropertyIntWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyIntWithGetterSetterAndBP_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyIntWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyIntWithGetterSetterAndBP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyIntWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyIntWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter = { "PropertyIntWithBPGetterSetter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyIntWithBPGetterSetter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVector = { "PropertyVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter = { "PropertyVectorWithGetterSetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyVectorWithGetterSetter_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyVectorWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyVectorWithGetterSetter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyVectorWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyVectorWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP = { "PropertyVectorWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyVectorWithGetterSetterAndBP_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyVectorWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyVectorWithGetterSetterAndBP), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyVectorWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyVectorWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter = { "PropertyVectorWithBPGetterSetter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyVectorWithBPGetterSetter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStruct = { "PropertyStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyStruct), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStruct_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStruct_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter = { "PropertyStructWithGetterSetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyStructWithGetterSetter_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyStructWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyStructWithGetterSetter), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyStructWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyStructWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP = { "PropertyStructWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyStructWithGetterSetterAndBP_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyStructWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyStructWithGetterSetterAndBP), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyStructWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyStructWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter = { "PropertyStructWithBPGetterSetter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyStructWithBPGetterSetter), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObject = { "PropertyObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyObject), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter = { "PropertyObjectWithGetterSetter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyObjectWithGetterSetter_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyObjectWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyObjectWithGetterSetter), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyObjectWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyObjectWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP = { "PropertyObjectWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyObjectWithGetterSetterAndBP_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyObjectWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyObjectWithGetterSetterAndBP), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyObjectWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyObjectWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter = { "PropertyObjectWithBPGetterSetter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyObjectWithBPGetterSetter), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModel = { "PropertyViewModel", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyViewModel), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter = { "PropertyViewModelWithGetterSetter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyViewModelWithGetterSetter_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyViewModelWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyViewModelWithGetterSetter), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyViewModelWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyViewModelWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP = { "PropertyViewModelWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMObjectFieldPathHelperTest::SetPropertyViewModelWithGetterSetterAndBP_WrapperImpl, &UMVVMObjectFieldPathHelperTest::GetPropertyViewModelWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyViewModelWithGetterSetterAndBP), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyViewModelWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyViewModelWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter = { "PropertyViewModelWithBPGetterSetter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMObjectFieldPathHelperTest, PropertyViewModelWithBPGetterSetter), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMObjectFieldPathHelperTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::ClassParams = {
		&UMVVMObjectFieldPathHelperTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::PropPointers),
		0,
		0x050800A9u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMObjectFieldPathHelperTest()
	{
		if (!Z_Registration_Info_UClass_UMVVMObjectFieldPathHelperTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMObjectFieldPathHelperTest.OuterSingleton, Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMObjectFieldPathHelperTest.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMObjectFieldPathHelperTest>()
	{
		return UMVVMObjectFieldPathHelperTest::StaticClass();
	}
	UMVVMObjectFieldPathHelperTest::UMVVMObjectFieldPathHelperTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMObjectFieldPathHelperTest);
	UMVVMObjectFieldPathHelperTest::~UMVVMObjectFieldPathHelperTest() {}
	void UMVVMViewModelFieldPathHelperTestBase::StaticRegisterNativesUMVVMViewModelFieldPathHelperTestBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelFieldPathHelperTestBase);
	UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_NoRegister()
	{
		return UMVVMViewModelFieldPathHelperTestBase::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMVVMObjectFieldPathHelperTest,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "Tests/MVVMFieldPathHelperTest.h" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, (int32)VTABLE_OFFSET(UMVVMViewModelFieldPathHelperTestBase, INotifyFieldValueChanged), false },  // 118155385
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelFieldPathHelperTestBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::ClassParams = {
		&UMVVMViewModelFieldPathHelperTestBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x050800A9u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTestBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTestBase.OuterSingleton, Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTestBase.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMViewModelFieldPathHelperTestBase>()
	{
		return UMVVMViewModelFieldPathHelperTestBase::StaticClass();
	}
	UMVVMViewModelFieldPathHelperTestBase::UMVVMViewModelFieldPathHelperTestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelFieldPathHelperTestBase);
	UMVVMViewModelFieldPathHelperTestBase::~UMVVMViewModelFieldPathHelperTestBase() {}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execSetPropertyViewModelNotify)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execGetPropertyViewModelNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execSetPropertyObjectNotify)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execGetPropertyObjectNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execSetPropertyStructNotify)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execGetPropertyStructNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execSetPropertyVectorNotify)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execGetPropertyVectorNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execSetPropertyIntNotify)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelFieldPathHelperTest::execGetPropertyIntNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntNotify();
		P_NATIVE_END;
	}
	void UMVVMViewModelFieldPathHelperTest::StaticRegisterNativesUMVVMViewModelFieldPathHelperTest()
	{
		UClass* Class = UMVVMViewModelFieldPathHelperTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPropertyIntNotify", &UMVVMViewModelFieldPathHelperTest::execGetPropertyIntNotify },
			{ "GetPropertyObjectNotify", &UMVVMViewModelFieldPathHelperTest::execGetPropertyObjectNotify },
			{ "GetPropertyStructNotify", &UMVVMViewModelFieldPathHelperTest::execGetPropertyStructNotify },
			{ "GetPropertyVectorNotify", &UMVVMViewModelFieldPathHelperTest::execGetPropertyVectorNotify },
			{ "GetPropertyViewModelNotify", &UMVVMViewModelFieldPathHelperTest::execGetPropertyViewModelNotify },
			{ "SetPropertyIntNotify", &UMVVMViewModelFieldPathHelperTest::execSetPropertyIntNotify },
			{ "SetPropertyObjectNotify", &UMVVMViewModelFieldPathHelperTest::execSetPropertyObjectNotify },
			{ "SetPropertyStructNotify", &UMVVMViewModelFieldPathHelperTest::execSetPropertyStructNotify },
			{ "SetPropertyVectorNotify", &UMVVMViewModelFieldPathHelperTest::execSetPropertyVectorNotify },
			{ "SetPropertyViewModelNotify", &UMVVMViewModelFieldPathHelperTest::execSetPropertyViewModelNotify },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventGetPropertyIntNotify_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventGetPropertyIntNotify_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "GetPropertyIntNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyIntNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyIntNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventGetPropertyObjectNotify_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventGetPropertyObjectNotify_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "GetPropertyObjectNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyObjectNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyObjectNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventGetPropertyStructNotify_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventGetPropertyStructNotify_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "GetPropertyStructNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyStructNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyStructNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventGetPropertyVectorNotify_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventGetPropertyVectorNotify_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "GetPropertyVectorNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyVectorNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyVectorNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "GetPropertyViewModelNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::MVVMViewModelFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventSetPropertyIntNotify_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventSetPropertyIntNotify_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "SetPropertyIntNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyIntNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyIntNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventSetPropertyObjectNotify_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventSetPropertyObjectNotify_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "SetPropertyObjectNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyObjectNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyObjectNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventSetPropertyStructNotify_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventSetPropertyStructNotify_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "SetPropertyStructNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyStructNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyStructNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventSetPropertyVectorNotify_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventSetPropertyVectorNotify_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "SetPropertyVectorNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyVectorNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyVectorNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics
	{
		struct MVVMViewModelFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMViewModelFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, nullptr, "SetPropertyViewModelNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::MVVMViewModelFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelFieldPathHelperTest);
	UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister()
	{
		return UMVVMViewModelFieldPathHelperTest::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorNotify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructNotify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelNotify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyIntNotify, "GetPropertyIntNotify" }, // 1478133508
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyObjectNotify, "GetPropertyObjectNotify" }, // 4257650624
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyStructNotify, "GetPropertyStructNotify" }, // 4294062612
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyVectorNotify, "GetPropertyVectorNotify" }, // 3122670065
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_GetPropertyViewModelNotify, "GetPropertyViewModelNotify" }, // 2445858922
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyIntNotify, "SetPropertyIntNotify" }, // 3472580052
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyObjectNotify, "SetPropertyObjectNotify" }, // 2687983757
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyStructNotify, "SetPropertyStructNotify" }, // 2577299864
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyVectorNotify, "SetPropertyVectorNotify" }, // 3704248411
		{ &Z_Construct_UFunction_UMVVMViewModelFieldPathHelperTest_SetPropertyViewModelNotify, "SetPropertyViewModelNotify" }, // 3929978402
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "Tests/MVVMFieldPathHelperTest.h" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyIntNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyIntNotify = { "PropertyIntNotify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewModelFieldPathHelperTest, PropertyIntNotify), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyIntNotify_MetaData), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyIntNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify = { "PropertyVectorNotify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewModelFieldPathHelperTest, PropertyVectorNotify), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify_MetaData), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyStructNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyStructNotify = { "PropertyStructNotify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewModelFieldPathHelperTest, PropertyStructNotify), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyStructNotify_MetaData), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyStructNotify_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify = { "PropertyObjectNotify", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewModelFieldPathHelperTest, PropertyObjectNotify), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify_MetaData), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify = { "PropertyViewModelNotify", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMViewModelFieldPathHelperTest, PropertyViewModelNotify), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify_MetaData), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyIntNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyStructNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelFieldPathHelperTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::ClassParams = {
		&UMVVMViewModelFieldPathHelperTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::PropPointers),
		0,
		0x050800A9u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTest.OuterSingleton, Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTest.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMViewModelFieldPathHelperTest>()
	{
		return UMVVMViewModelFieldPathHelperTest::StaticClass();
	}
	UMVVMViewModelFieldPathHelperTest::UMVVMViewModelFieldPathHelperTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelFieldPathHelperTest);
	UMVVMViewModelFieldPathHelperTest::~UMVVMViewModelFieldPathHelperTest() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyIntNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyVectorNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyStructNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyObjectNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyViewModelNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UMVVMViewModelFieldPathHelperTest)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyIntNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyVectorNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyStructNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyObjectNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMViewModelFieldPathHelperTest, PropertyViewModelNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UMVVMViewModelFieldPathHelperTest);
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelNotify)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelWithBPGetterSetter)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelWithGetterSetterAndBP)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelWithGetterSetter)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModelWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModelWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModel)
	{
		P_GET_OBJECT(UMVVMViewModelFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyViewModel(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyViewModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectNotify)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectWithBPGetterSetter)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectWithGetterSetterAndBP)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectWithGetterSetter)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObjectWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObjectWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyObject)
	{
		P_GET_OBJECT(UMVVMObjectFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyObject(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMObjectFieldPathHelperTest**)Z_Param__Result=P_THIS->GetPropertyObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyStructNotify)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyStructNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyStructWithBPGetterSetter)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyStructWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyStructWithGetterSetterAndBP)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyStructWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyStructWithGetterSetter)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStructWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyStructWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStructWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyStruct)
	{
		P_GET_STRUCT(FMVVMStructFieldPathHelperTest,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyStruct(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMStructFieldPathHelperTest*)Z_Param__Result=P_THIS->GetPropertyStruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorNotify)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorWithBPGetterSetter)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorWithGetterSetterAndBP)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorWithGetterSetter)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVectorWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVectorWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyVector)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyVector(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPropertyVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyIntNotify)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntNotify(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyIntNotify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntNotify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyIntWithBPGetterSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntWithBPGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyIntWithBPGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntWithBPGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyIntWithGetterSetterAndBP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntWithGetterSetterAndBP(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyIntWithGetterSetterAndBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntWithGetterSetterAndBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyIntWithGetterSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyIntWithGetterSetter(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyIntWithGetterSetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyIntWithGetterSetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execSetPropertyInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropertyInt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMWidgetFieldPathHelperTest::execGetPropertyInt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPropertyInt();
		P_NATIVE_END;
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyIntWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetPropertyIntWithGetterSetter();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyIntWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetPropertyIntWithGetterSetter(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyIntWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetPropertyIntWithGetterSetterAndBP();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyIntWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetPropertyIntWithGetterSetterAndBP(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyVectorWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		FVector& Result = *(FVector*)OutValue;
		Result = (FVector)Obj->GetPropertyVectorWithGetterSetter();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyVectorWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		FVector& Value = *(FVector*)InValue;
		Obj->SetPropertyVectorWithGetterSetter(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyVectorWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		FVector& Result = *(FVector*)OutValue;
		Result = (FVector)Obj->GetPropertyVectorWithGetterSetterAndBP();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyVectorWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		FVector& Value = *(FVector*)InValue;
		Obj->SetPropertyVectorWithGetterSetterAndBP(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyStructWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Result = *(FMVVMStructFieldPathHelperTest*)OutValue;
		Result = (FMVVMStructFieldPathHelperTest)Obj->GetPropertyStructWithGetterSetter();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyStructWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Value = *(FMVVMStructFieldPathHelperTest*)InValue;
		Obj->SetPropertyStructWithGetterSetter(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyStructWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Result = *(FMVVMStructFieldPathHelperTest*)OutValue;
		Result = (FMVVMStructFieldPathHelperTest)Obj->GetPropertyStructWithGetterSetterAndBP();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyStructWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		FMVVMStructFieldPathHelperTest& Value = *(FMVVMStructFieldPathHelperTest*)InValue;
		Obj->SetPropertyStructWithGetterSetterAndBP(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyObjectWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Result = *(UMVVMObjectFieldPathHelperTest**)OutValue;
		Result = (UMVVMObjectFieldPathHelperTest*)Obj->GetPropertyObjectWithGetterSetter();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyObjectWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Value = *(UMVVMObjectFieldPathHelperTest**)InValue;
		Obj->SetPropertyObjectWithGetterSetter(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyObjectWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Result = *(UMVVMObjectFieldPathHelperTest**)OutValue;
		Result = (UMVVMObjectFieldPathHelperTest*)Obj->GetPropertyObjectWithGetterSetterAndBP();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyObjectWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMObjectFieldPathHelperTest*& Value = *(UMVVMObjectFieldPathHelperTest**)InValue;
		Obj->SetPropertyObjectWithGetterSetterAndBP(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyViewModelWithGetterSetter_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Result = *(UMVVMViewModelFieldPathHelperTest**)OutValue;
		Result = (UMVVMViewModelFieldPathHelperTest*)Obj->GetPropertyViewModelWithGetterSetter();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyViewModelWithGetterSetter_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Value = *(UMVVMViewModelFieldPathHelperTest**)InValue;
		Obj->SetPropertyViewModelWithGetterSetter(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::GetPropertyViewModelWithGetterSetterAndBP_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMWidgetFieldPathHelperTest* Obj = (const UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Result = *(UMVVMViewModelFieldPathHelperTest**)OutValue;
		Result = (UMVVMViewModelFieldPathHelperTest*)Obj->GetPropertyViewModelWithGetterSetterAndBP();
	}
	void UMVVMWidgetFieldPathHelperTest::SetPropertyViewModelWithGetterSetterAndBP_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMWidgetFieldPathHelperTest* Obj = (UMVVMWidgetFieldPathHelperTest*)Object;
		UMVVMViewModelFieldPathHelperTest*& Value = *(UMVVMViewModelFieldPathHelperTest**)InValue;
		Obj->SetPropertyViewModelWithGetterSetterAndBP(Value);
	}
	void UMVVMWidgetFieldPathHelperTest::StaticRegisterNativesUMVVMWidgetFieldPathHelperTest()
	{
		UClass* Class = UMVVMWidgetFieldPathHelperTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPropertyInt", &UMVVMWidgetFieldPathHelperTest::execGetPropertyInt },
			{ "GetPropertyIntNotify", &UMVVMWidgetFieldPathHelperTest::execGetPropertyIntNotify },
			{ "GetPropertyIntWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyIntWithBPGetterSetter },
			{ "GetPropertyIntWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyIntWithGetterSetter },
			{ "GetPropertyIntWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execGetPropertyIntWithGetterSetterAndBP },
			{ "GetPropertyObject", &UMVVMWidgetFieldPathHelperTest::execGetPropertyObject },
			{ "GetPropertyObjectNotify", &UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectNotify },
			{ "GetPropertyObjectWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectWithBPGetterSetter },
			{ "GetPropertyObjectWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectWithGetterSetter },
			{ "GetPropertyObjectWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execGetPropertyObjectWithGetterSetterAndBP },
			{ "GetPropertyStruct", &UMVVMWidgetFieldPathHelperTest::execGetPropertyStruct },
			{ "GetPropertyStructNotify", &UMVVMWidgetFieldPathHelperTest::execGetPropertyStructNotify },
			{ "GetPropertyStructWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyStructWithBPGetterSetter },
			{ "GetPropertyStructWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyStructWithGetterSetter },
			{ "GetPropertyStructWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execGetPropertyStructWithGetterSetterAndBP },
			{ "GetPropertyVector", &UMVVMWidgetFieldPathHelperTest::execGetPropertyVector },
			{ "GetPropertyVectorNotify", &UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorNotify },
			{ "GetPropertyVectorWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorWithBPGetterSetter },
			{ "GetPropertyVectorWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorWithGetterSetter },
			{ "GetPropertyVectorWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execGetPropertyVectorWithGetterSetterAndBP },
			{ "GetPropertyViewModel", &UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModel },
			{ "GetPropertyViewModelNotify", &UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelNotify },
			{ "GetPropertyViewModelWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelWithBPGetterSetter },
			{ "GetPropertyViewModelWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelWithGetterSetter },
			{ "GetPropertyViewModelWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execGetPropertyViewModelWithGetterSetterAndBP },
			{ "SetPropertyInt", &UMVVMWidgetFieldPathHelperTest::execSetPropertyInt },
			{ "SetPropertyIntNotify", &UMVVMWidgetFieldPathHelperTest::execSetPropertyIntNotify },
			{ "SetPropertyIntWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyIntWithBPGetterSetter },
			{ "SetPropertyIntWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyIntWithGetterSetter },
			{ "SetPropertyIntWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execSetPropertyIntWithGetterSetterAndBP },
			{ "SetPropertyObject", &UMVVMWidgetFieldPathHelperTest::execSetPropertyObject },
			{ "SetPropertyObjectNotify", &UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectNotify },
			{ "SetPropertyObjectWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectWithBPGetterSetter },
			{ "SetPropertyObjectWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectWithGetterSetter },
			{ "SetPropertyObjectWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execSetPropertyObjectWithGetterSetterAndBP },
			{ "SetPropertyStruct", &UMVVMWidgetFieldPathHelperTest::execSetPropertyStruct },
			{ "SetPropertyStructNotify", &UMVVMWidgetFieldPathHelperTest::execSetPropertyStructNotify },
			{ "SetPropertyStructWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyStructWithBPGetterSetter },
			{ "SetPropertyStructWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyStructWithGetterSetter },
			{ "SetPropertyStructWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execSetPropertyStructWithGetterSetterAndBP },
			{ "SetPropertyVector", &UMVVMWidgetFieldPathHelperTest::execSetPropertyVector },
			{ "SetPropertyVectorNotify", &UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorNotify },
			{ "SetPropertyVectorWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorWithBPGetterSetter },
			{ "SetPropertyVectorWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorWithGetterSetter },
			{ "SetPropertyVectorWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execSetPropertyVectorWithGetterSetterAndBP },
			{ "SetPropertyViewModel", &UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModel },
			{ "SetPropertyViewModelNotify", &UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelNotify },
			{ "SetPropertyViewModelWithBPGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelWithBPGetterSetter },
			{ "SetPropertyViewModelWithGetterSetter", &UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelWithGetterSetter },
			{ "SetPropertyViewModelWithGetterSetterAndBP", &UMVVMWidgetFieldPathHelperTest::execSetPropertyViewModelWithGetterSetterAndBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyInt_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyInt", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyIntNotify_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyIntNotify_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyIntNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyIntWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyIntWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyIntWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyIntWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyObject_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyObject_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyObject", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectNotify_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectNotify_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyObjectNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyObjectWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyObjectWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms
		{
			UMVVMObjectFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyObjectWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyObjectWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyStruct_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyStruct", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyStructNotify_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyStructNotify_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyStructNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyStructWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyStructWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms
		{
			FMVVMStructFieldPathHelperTest ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyStructWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyStructWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyVector", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorNotify_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorNotify_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyVectorNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyVectorWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyVectorWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyVectorWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyVectorWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModel_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModel_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyViewModel", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyViewModelNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyViewModelWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyViewModelWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms
		{
			UMVVMViewModelFieldPathHelperTest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "GetPropertyViewModelWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventGetPropertyViewModelWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyInt_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyInt", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyIntNotify_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyIntNotify_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyIntNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyIntWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyIntWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyIntWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyIntWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyObject_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyObject_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyObject", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectNotify_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectNotify_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyObjectNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyObjectWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyObjectWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms
		{
			UMVVMObjectFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms, Value), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyObjectWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyObjectWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyStruct_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyStruct_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyStruct", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyStructNotify_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyStructNotify_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyStructNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyStructWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyStructWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms
		{
			FMVVMStructFieldPathHelperTest Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms, Value), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(0, nullptr) }; // 3656413328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyStructWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyStructWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyVector_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyVector", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorNotify_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorNotify_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyVectorNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyVectorWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyVectorWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyVectorWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyVectorWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModel_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModel_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyViewModel", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyViewModelNotify", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelNotify_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyViewModelWithBPGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithBPGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyViewModelWithGetterSetter", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics
	{
		struct MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms
		{
			UMVVMViewModelFieldPathHelperTest* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms, Value), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, nullptr, "SetPropertyViewModelWithGetterSetterAndBP", nullptr, nullptr, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::MVVMWidgetFieldPathHelperTest_eventSetPropertyViewModelWithGetterSetterAndBP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMWidgetFieldPathHelperTest);
	UClass* Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_NoRegister()
	{
		return UMVVMWidgetFieldPathHelperTest::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIntNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyIntNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyVectorNotify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyVectorNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyStructNotify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyStructNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyObjectNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyObjectNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelWithGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelWithGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelWithGetterSetterAndBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelWithBPGetterSetter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelWithBPGetterSetter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyViewModelNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyViewModelNotify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyInt, "GetPropertyInt" }, // 3988308693
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntNotify, "GetPropertyIntNotify" }, // 2003522175
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithBPGetterSetter, "GetPropertyIntWithBPGetterSetter" }, // 3120943068
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetter, "GetPropertyIntWithGetterSetter" }, // 2239235961
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyIntWithGetterSetterAndBP, "GetPropertyIntWithGetterSetterAndBP" }, // 108543836
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObject, "GetPropertyObject" }, // 983995174
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectNotify, "GetPropertyObjectNotify" }, // 1043074867
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithBPGetterSetter, "GetPropertyObjectWithBPGetterSetter" }, // 334164978
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetter, "GetPropertyObjectWithGetterSetter" }, // 2319471756
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyObjectWithGetterSetterAndBP, "GetPropertyObjectWithGetterSetterAndBP" }, // 2813919219
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStruct, "GetPropertyStruct" }, // 2219349572
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructNotify, "GetPropertyStructNotify" }, // 3148092515
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithBPGetterSetter, "GetPropertyStructWithBPGetterSetter" }, // 3329891271
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetter, "GetPropertyStructWithGetterSetter" }, // 354856746
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyStructWithGetterSetterAndBP, "GetPropertyStructWithGetterSetterAndBP" }, // 3771585470
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVector, "GetPropertyVector" }, // 1344911301
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorNotify, "GetPropertyVectorNotify" }, // 624464059
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithBPGetterSetter, "GetPropertyVectorWithBPGetterSetter" }, // 4265818471
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetter, "GetPropertyVectorWithGetterSetter" }, // 3074526428
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyVectorWithGetterSetterAndBP, "GetPropertyVectorWithGetterSetterAndBP" }, // 4124563190
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModel, "GetPropertyViewModel" }, // 2960887029
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelNotify, "GetPropertyViewModelNotify" }, // 2512742708
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithBPGetterSetter, "GetPropertyViewModelWithBPGetterSetter" }, // 3154178553
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetter, "GetPropertyViewModelWithGetterSetter" }, // 324611918
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_GetPropertyViewModelWithGetterSetterAndBP, "GetPropertyViewModelWithGetterSetterAndBP" }, // 2614827160
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyInt, "SetPropertyInt" }, // 1021022022
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntNotify, "SetPropertyIntNotify" }, // 1030875469
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithBPGetterSetter, "SetPropertyIntWithBPGetterSetter" }, // 4145652833
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetter, "SetPropertyIntWithGetterSetter" }, // 3085444621
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyIntWithGetterSetterAndBP, "SetPropertyIntWithGetterSetterAndBP" }, // 2262986602
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObject, "SetPropertyObject" }, // 216098010
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectNotify, "SetPropertyObjectNotify" }, // 1503116542
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithBPGetterSetter, "SetPropertyObjectWithBPGetterSetter" }, // 3088837597
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetter, "SetPropertyObjectWithGetterSetter" }, // 453395722
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyObjectWithGetterSetterAndBP, "SetPropertyObjectWithGetterSetterAndBP" }, // 3953663139
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStruct, "SetPropertyStruct" }, // 2199722097
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructNotify, "SetPropertyStructNotify" }, // 3276098864
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithBPGetterSetter, "SetPropertyStructWithBPGetterSetter" }, // 498816647
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetter, "SetPropertyStructWithGetterSetter" }, // 2814673252
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyStructWithGetterSetterAndBP, "SetPropertyStructWithGetterSetterAndBP" }, // 2940165226
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVector, "SetPropertyVector" }, // 2481257615
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorNotify, "SetPropertyVectorNotify" }, // 3970158768
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithBPGetterSetter, "SetPropertyVectorWithBPGetterSetter" }, // 2079632161
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetter, "SetPropertyVectorWithGetterSetter" }, // 3560675491
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyVectorWithGetterSetterAndBP, "SetPropertyVectorWithGetterSetterAndBP" }, // 640696645
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModel, "SetPropertyViewModel" }, // 4250565525
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelNotify, "SetPropertyViewModelNotify" }, // 3311971869
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithBPGetterSetter, "SetPropertyViewModelWithBPGetterSetter" }, // 182035799
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetter, "SetPropertyViewModelWithGetterSetter" }, // 4088669767
		{ &Z_Construct_UFunction_UMVVMWidgetFieldPathHelperTest_SetPropertyViewModelWithGetterSetterAndBP, "SetPropertyViewModelWithGetterSetterAndBP" }, // 2315680655
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "Tests/MVVMFieldPathHelperTest.h" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyInt = { "PropertyInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyInt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyInt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter = { "PropertyIntWithGetterSetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyIntWithGetterSetter_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyIntWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyIntWithGetterSetter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyIntWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyIntWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP = { "PropertyIntWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyIntWithGetterSetterAndBP_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyIntWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyIntWithGetterSetterAndBP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyIntWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyIntWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter = { "PropertyIntWithBPGetterSetter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyIntWithBPGetterSetter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntNotify = { "PropertyIntNotify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyIntNotify), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntNotify_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVector = { "PropertyVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter = { "PropertyVectorWithGetterSetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyVectorWithGetterSetter_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyVectorWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyVectorWithGetterSetter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyVectorWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyVectorWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP = { "PropertyVectorWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyVectorWithGetterSetterAndBP_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyVectorWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyVectorWithGetterSetterAndBP), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyVectorWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyVectorWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter = { "PropertyVectorWithBPGetterSetter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyVectorWithBPGetterSetter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify = { "PropertyVectorNotify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyVectorNotify), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStruct = { "PropertyStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyStruct), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStruct_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStruct_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter = { "PropertyStructWithGetterSetter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyStructWithGetterSetter_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyStructWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyStructWithGetterSetter), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyStructWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyStructWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP = { "PropertyStructWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyStructWithGetterSetterAndBP_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyStructWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyStructWithGetterSetterAndBP), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyStructWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyStructWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter = { "PropertyStructWithBPGetterSetter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyStructWithBPGetterSetter), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructNotify = { "PropertyStructNotify", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyStructNotify), Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructNotify_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructNotify_MetaData) }; // 3656413328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObject = { "PropertyObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyObject), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter = { "PropertyObjectWithGetterSetter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyObjectWithGetterSetter_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyObjectWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyObjectWithGetterSetter), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyObjectWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyObjectWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP = { "PropertyObjectWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyObjectWithGetterSetterAndBP_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyObjectWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyObjectWithGetterSetterAndBP), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyObjectWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyObjectWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter = { "PropertyObjectWithBPGetterSetter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyObjectWithBPGetterSetter), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify = { "PropertyObjectNotify", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyObjectNotify), Z_Construct_UClass_UMVVMObjectFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModel = { "PropertyViewModel", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyViewModel), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter = { "PropertyViewModelWithGetterSetter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyViewModelWithGetterSetter_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyViewModelWithGetterSetter_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyViewModelWithGetterSetter), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyViewModelWithGetterSetterAndBP" },
		{ "BlueprintSetter", "SetPropertyViewModelWithGetterSetterAndBP" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP = { "PropertyViewModelWithGetterSetterAndBP", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UMVVMWidgetFieldPathHelperTest::SetPropertyViewModelWithGetterSetterAndBP_WrapperImpl, &UMVVMWidgetFieldPathHelperTest::GetPropertyViewModelWithGetterSetterAndBP_WrapperImpl, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyViewModelWithGetterSetterAndBP), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter_MetaData[] = {
		{ "BlueprintGetter", "GetPropertyViewModelWithBPGetterSetter" },
		{ "BlueprintSetter", "SetPropertyViewModelWithBPGetterSetter" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter = { "PropertyViewModelWithBPGetterSetter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyViewModelWithBPGetterSetter), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/MVVMFieldPathHelperTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify = { "PropertyViewModelNotify", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMVVMWidgetFieldPathHelperTest, PropertyViewModelNotify), Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify_MetaData), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyIntNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyVectorNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyStructNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyObjectNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithGetterSetterAndBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelWithBPGetterSetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::NewProp_PropertyViewModelNotify,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMWidgetFieldPathHelperTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::ClassParams = {
		&UMVVMWidgetFieldPathHelperTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::PropPointers),
		0,
		0x05A810A9u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest()
	{
		if (!Z_Registration_Info_UClass_UMVVMWidgetFieldPathHelperTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMWidgetFieldPathHelperTest.OuterSingleton, Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMWidgetFieldPathHelperTest.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMWidgetFieldPathHelperTest>()
	{
		return UMVVMWidgetFieldPathHelperTest::StaticClass();
	}
	UMVVMWidgetFieldPathHelperTest::UMVVMWidgetFieldPathHelperTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMWidgetFieldPathHelperTest);
	UMVVMWidgetFieldPathHelperTest::~UMVVMWidgetFieldPathHelperTest() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyIntNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyVectorNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyStructNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyObjectNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyViewModelNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UMVVMWidgetFieldPathHelperTest)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyIntNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyVectorNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyStructNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyObjectNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UMVVMWidgetFieldPathHelperTest, PropertyViewModelNotify)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UMVVMWidgetFieldPathHelperTest);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics::ScriptStructInfo[] = {
		{ FMVVMStructFieldPathHelperTest::StaticStruct, Z_Construct_UScriptStruct_FMVVMStructFieldPathHelperTest_Statics::NewStructOps, TEXT("MVVMStructFieldPathHelperTest"), &Z_Registration_Info_UScriptStruct_MVVMStructFieldPathHelperTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMStructFieldPathHelperTest), 3656413328U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMObjectFieldPathHelperTest, UMVVMObjectFieldPathHelperTest::StaticClass, TEXT("UMVVMObjectFieldPathHelperTest"), &Z_Registration_Info_UClass_UMVVMObjectFieldPathHelperTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMObjectFieldPathHelperTest), 3125165495U) },
		{ Z_Construct_UClass_UMVVMViewModelFieldPathHelperTestBase, UMVVMViewModelFieldPathHelperTestBase::StaticClass, TEXT("UMVVMViewModelFieldPathHelperTestBase"), &Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelFieldPathHelperTestBase), 3993465502U) },
		{ Z_Construct_UClass_UMVVMViewModelFieldPathHelperTest, UMVVMViewModelFieldPathHelperTest::StaticClass, TEXT("UMVVMViewModelFieldPathHelperTest"), &Z_Registration_Info_UClass_UMVVMViewModelFieldPathHelperTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelFieldPathHelperTest), 48350351U) },
		{ Z_Construct_UClass_UMVVMWidgetFieldPathHelperTest, UMVVMWidgetFieldPathHelperTest::StaticClass, TEXT("UMVVMWidgetFieldPathHelperTest"), &Z_Registration_Info_UClass_UMVVMWidgetFieldPathHelperTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMWidgetFieldPathHelperTest), 3905349679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_777540021(TEXT("/Script/ModelViewViewModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMFieldPathHelperTest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

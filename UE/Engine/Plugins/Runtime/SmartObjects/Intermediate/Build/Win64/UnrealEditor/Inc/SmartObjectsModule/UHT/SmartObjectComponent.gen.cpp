// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectComponent.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UFunction* Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectEventData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics
	{
		struct _Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms
		{
			FSmartObjectEventData EventData;
			const AActor* Interactor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms, EventData), Z_Construct_UScriptStruct_FSmartObjectEventData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_EventData_MetaData), Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_EventData_MetaData) }; // 1279009157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_Interactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_Interactor_MetaData), Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule, nullptr, "SmartObjectComponentEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::_Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::_Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSmartObjectComponentEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartObjectComponentEventSignature, FSmartObjectEventData const& EventData, const AActor* Interactor)
{
	struct _Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms
	{
		FSmartObjectEventData EventData;
		const AActor* Interactor;
	};
	_Script_SmartObjectsModule_eventSmartObjectComponentEventSignature_Parms Parms;
	Parms.EventData=EventData;
	Parms.Interactor=Interactor;
	SmartObjectComponentEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct SmartObjectComponent_eventReceiveOnEvent_Parms
	{
		FSmartObjectEventData EventData;
		const AActor* Interactor;
	};
	static FName NAME_USmartObjectComponent_ReceiveOnEvent = FName(TEXT("ReceiveOnEvent"));
	void USmartObjectComponent::ReceiveOnEvent(FSmartObjectEventData const& EventData, const AActor* Interactor)
	{
		SmartObjectComponent_eventReceiveOnEvent_Parms Parms;
		Parms.EventData=EventData;
		Parms.Interactor=Interactor;
		ProcessEvent(FindFunctionChecked(NAME_USmartObjectComponent_ReceiveOnEvent),&Parms);
	}
	void USmartObjectComponent::StaticRegisterNativesUSmartObjectComponent()
	{
	}
	struct Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartObjectComponent_eventReceiveOnEvent_Parms, EventData), Z_Construct_UScriptStruct_FSmartObjectEventData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_EventData_MetaData), Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_EventData_MetaData) }; // 1279009157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_Interactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartObjectComponent_eventReceiveOnEvent_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_Interactor_MetaData), Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_Interactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_EventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "DisplayName", "OnSmartObjectEventReceived" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectComponent, nullptr, "ReceiveOnEvent", nullptr, nullptr, Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::PropPointers), sizeof(SmartObjectComponent_eventReceiveOnEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(SmartObjectComponent_eventReceiveOnEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectComponent);
	UClass* Z_Construct_UClass_USmartObjectComponent_NoRegister()
	{
		return USmartObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSmartObjectEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartObjectEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefinitionAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBePartOfCollection_MetaData[];
#endif
		static void NewProp_bCanBePartOfCollection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBePartOfCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USmartObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmartObjectComponent_ReceiveOnEvent, "ReceiveOnEvent" }, // 2484585874
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Gameplay" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Mobility Navigation Physics RayTracing Rendering Tags TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "SmartObjectComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_OnSmartObjectEvent_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "DisplayName", "OnSmartObjectEvent" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_OnSmartObjectEvent = { "OnSmartObjectEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectComponent, OnSmartObjectEvent), Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_OnSmartObjectEvent_MetaData), Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_OnSmartObjectEvent_MetaData) }; // 2532298793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_DefinitionAsset_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_DefinitionAsset = { "DefinitionAsset", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectComponent, DefinitionAsset), Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_DefinitionAsset_MetaData), Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_DefinitionAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_RegisteredHandle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** RegisteredHandle != FSmartObjectHandle::Invalid when registered into a collection by SmartObjectSubsystem */" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
		{ "ToolTip", "RegisteredHandle != FSmartObjectHandle::Invalid when registered into a collection by SmartObjectSubsystem" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_RegisteredHandle = { "RegisteredHandle", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectComponent, RegisteredHandle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_RegisteredHandle_MetaData), Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_RegisteredHandle_MetaData) }; // 1193682404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** \n\x09 * Controls whether a given SmartObject can be aggregated in SmartObjectPersistentCollections. SOs in collections\n\x09 * can be queried and reasoned about even while the actual Actor and its components are not streamed in.\n\x09 * By default SmartObjects are not placed in collections and are active only as long as the owner-actor remains\n\x09 * loaded and active (i.e. not streamed out).\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
		{ "ToolTip", "Controls whether a given SmartObject can be aggregated in SmartObjectPersistentCollections. SOs in collections\ncan be queried and reasoned about even while the actual Actor and its components are not streamed in.\nBy default SmartObjects are not placed in collections and are active only as long as the owner-actor remains\nloaded and active (i.e. not streamed out)." },
	};
#endif
	void Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection_SetBit(void* Obj)
	{
		((USmartObjectComponent*)Obj)->bCanBePartOfCollection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection = { "bCanBePartOfCollection", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmartObjectComponent), &Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection_MetaData), Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_OnSmartObjectEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_DefinitionAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_RegisteredHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectComponent_Statics::NewProp_bCanBePartOfCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectComponent_Statics::ClassParams = {
		&USmartObjectComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USmartObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartObjectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USmartObjectComponent()
	{
		if (!Z_Registration_Info_UClass_USmartObjectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectComponent.OuterSingleton, Z_Construct_UClass_USmartObjectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectComponent.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectComponent>()
	{
		return USmartObjectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectComponent);
	USmartObjectComponent::~USmartObjectComponent() {}

static_assert(std::is_polymorphic<FSmartObjectComponentInstanceData>() == std::is_polymorphic<FActorComponentInstanceData>(), "USTRUCT FSmartObjectComponentInstanceData cannot be polymorphic unless super FActorComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData;
class UScriptStruct* FSmartObjectComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectComponentInstanceData>()
{
	return FSmartObjectComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefinitionAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store SmartObjectComponent data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
		{ "ToolTip", "Used to store SmartObjectComponent data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectComponentInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewProp_DefinitionAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewProp_DefinitionAsset = { "DefinitionAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectComponentInstanceData, DefinitionAsset), Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewProp_DefinitionAsset_MetaData), Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewProp_DefinitionAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewProp_DefinitionAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FActorComponentInstanceData,
		&NewStructOps,
		"SmartObjectComponentInstanceData",
		Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::PropPointers),
		sizeof(FSmartObjectComponentInstanceData),
		alignof(FSmartObjectComponentInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics::NewStructOps, TEXT("SmartObjectComponentInstanceData"), &Z_Registration_Info_UScriptStruct_SmartObjectComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectComponentInstanceData), 3501594742U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectComponent, USmartObjectComponent::StaticClass, TEXT("USmartObjectComponent"), &Z_Registration_Info_UClass_USmartObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectComponent), 964684248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_185188036(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

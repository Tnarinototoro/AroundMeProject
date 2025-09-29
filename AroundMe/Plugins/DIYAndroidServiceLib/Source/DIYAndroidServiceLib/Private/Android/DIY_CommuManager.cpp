// Copyright (c) 2020 Nineva Studios

#include "DIY_CommuManager.h"

#include "Async/Async.h"
#include "DIY_CommuDevice.h"
#include "DIY_CommuLog.h"
#include "Utils/DIY_CommuJavaConvertor.h"

void UDIY_CommuManager::Init()
{
	UE_LOG(DIY_CommuLog, Verbose, TEXT("Initialising Android DIY_Commu Manager"));

	DIY_CommuManagerJObject = MakeShared<FJavaClassObject>(
		"com/aroundmelib/DIY_CommuManager", "(Landroid/app/Activity;J)V", FJavaWrapper::GameActivityThis, (jlong)this);

	IsBleSupportedMethod = DIY_CommuManagerJObject->GetClassMethod("isBleSupported", "()Z");
	IsBluetoothEnabledMethod = DIY_CommuManagerJObject->GetClassMethod("isBluetoothEnabled", "()Z");
	SetBluetoothStateMethod = DIY_CommuManagerJObject->GetClassMethod("setBluetoothState", "(Z)V");
	StartScanForDevicesMethod = DIY_CommuManagerJObject->GetClassMethod("startScanForDevices", "([Ljava/lang/String;)V");
	StartScanForAdvertisementsMethod = DIY_CommuManagerJObject->GetClassMethod("startScanForAdvertisements", "([Ljava/lang/String;)V");
	StopScanMethod = DIY_CommuManagerJObject->GetClassMethod("stopScan", "()V");
}

bool UDIY_CommuManager::IsBleSupported() const
{
	return DIY_CommuManagerJObject->CallMethod<bool>(IsBleSupportedMethod);
}

bool UDIY_CommuManager::IsBluetoothEnabled() const
{
	return DIY_CommuManagerJObject->CallMethod<bool>(IsBluetoothEnabledMethod);
}

void UDIY_CommuManager::SetBluetoothState(bool bState)
{
	DIY_CommuManagerJObject->CallMethod<void>(SetBluetoothStateMethod, bState);
}

void UDIY_CommuManager::ScanForDevices(const TArray<FString>& ServiceUUIDs, const FDIY_CommuOnDeviceFoundDelegate& OnDeviceFound)
{
	if (bIsScanning)
	{
		UE_LOG(DIY_CommuLog, Warning, TEXT("Scan is already in progress."));
		return;
	}

	OnDeviceFoundDelegate = OnDeviceFound;
	bIsScanning = true;

	DIY_CommuManagerJObject->CallMethod<void>(StartScanForDevicesMethod,
		DIY_CommuJavaConvertor::ToJavaStringArray(ServiceUUIDs));
}

void UDIY_CommuManager::ScanForAdvertisements(const TArray<FString>& NameFilters, const FDIY_CommuOnAdvertisementDelegate& OnAdvertisement)
{
	if (bIsScanning)
	{
		UE_LOG(DIY_CommuLog, Warning, TEXT("Scan is already in progress."));
		return;
	}

	OnAdvertisementDelegate = OnAdvertisement;
	bIsScanning = true;

	DIY_CommuManagerJObject->CallMethod<void>(StartScanForAdvertisementsMethod,
		DIY_CommuJavaConvertor::ToJavaStringArray(NameFilters));
}

void UDIY_CommuManager::StopScan()
{
	bIsScanning = false;
	DIY_CommuManagerJObject->CallMethod<void>(StopScanMethod);
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuManager_onDeviceFound(
	JNIEnv* env, jclass clazz, jlong objAddr, jobject jDevice)
{
	UDIY_CommuManager* DIY_CommuManager = reinterpret_cast<UDIY_CommuManager*>(objAddr);

	UDIY_CommuDevice* Device = NewObject<UDIY_CommuDevice>();
	Device->Init(jDevice);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		DIY_CommuManager->OnDeviceFound(Device);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuManager_onAdvertisement(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring deviceName, jbyteArray bytes)
{
	UDIY_CommuManager* DIY_CommuManager = reinterpret_cast<UDIY_CommuManager*>(objAddr);
	FString DeviceName = FJavaHelper::FStringFromParam(env, deviceName);
	TArray<uint8> Data = DIY_CommuJavaConvertor::ToByteArray(bytes);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		DIY_CommuManager->OnAdvertisement(DeviceName, Data);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuManager_onScanError(
	JNIEnv* env, jclass clazz, jstring errorMessage)
{
	FString ErrorMessage = FJavaHelper::FStringFromParam(env, errorMessage);
	UE_LOG(DIY_CommuLog, Error, TEXT("%s"), *ErrorMessage);
}

// Copyright (c) 2020 Nineva Studios

#include "DIY_CommuDevice.h"

#include "Async/Async.h"
#include "DIY_CommuLog.h"
#include "Utils/DIY_CommuJavaConvertor.h"

UDIY_CommuDevice::~UDIY_CommuDevice()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	Env->DeleteGlobalRef(JDevice);
}

void UDIY_CommuDevice::Init(jobject Device)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	JDevice = Env->NewGlobalRef(Device);

	jclass DIY_CommuDeviceClass = FAndroidApplication::FindJavaClass("com/ninevastudios/DIY_Commu/DIY_CommuGoodiesDevice");

	jmethodID InitCallbacksMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "initCallbacks", "(J)V", false);
	Env->CallVoidMethod(JDevice, InitCallbacksMethod, (jlong)this);

	ConnectdMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "connect", "()V", false);
	DisconnectMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "disconnect", "()V", false);
	IsConnectedMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "isConnected", "()Z", false);
	GetDeviceNameMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "getName", "()Ljava/lang/String;", false);
	GetDeviceIDMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "getId", "()Ljava/lang/String;", false);
	GetServicesMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "getServicesUUIDs", "()[Ljava/lang/String;", false);
	HasServiceMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "hasService", "(Ljava/lang/String;)Z", false);
	ReadCharacteristicMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "readCharacteristic", "(Ljava/lang/String;Ljava/lang/String;)V", false);
	WriteCharacteristicMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "writeCharacteristic", "(Ljava/lang/String;Ljava/lang/String;[B)V", false);
	SubscribeToCharacteristicMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "subscribeToCharacteristic", "(Ljava/lang/String;Ljava/lang/String;Z)V", false);
	UnsubscribeFromCharacteristicMethod = FJavaWrapper::FindMethod(Env, DIY_CommuDeviceClass, "unsubscribeFromCharacteristic", "(Ljava/lang/String;Ljava/lang/String;)V", false);
}

void UDIY_CommuDevice::Connect(const FDIY_CommuDelegate& OnConnect, const FDIY_CommuErrorDelegate& OnConnectError)
{
	OnConnectDelegate = OnConnect;
	OnConnectErrorDelegate = OnConnectError;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	Env->CallVoidMethod(JDevice, ConnectdMethod);
}

void UDIY_CommuDevice::Disconnect(const FDIY_CommuDelegate& OnDisconnect, const FDIY_CommuErrorDelegate& OnDisconnectError)
{
	OnDisconnectDelegate = OnDisconnect;
	OnDisconnectErrorDelegate = OnDisconnectError;

	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	Env->CallVoidMethod(JDevice, DisconnectMethod);
}

bool UDIY_CommuDevice::IsConnected() const
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	return Env->CallBooleanMethod(JDevice, IsConnectedMethod);
}

FString UDIY_CommuDevice::GetDeviceName() const
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jstring Name = static_cast<jstring>(Env->CallObjectMethod(JDevice, GetDeviceNameMethod));
	return FJavaHelper::FStringFromLocalRef(Env, Name);
}

FString UDIY_CommuDevice::GetDeviceId() const
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jstring Id = static_cast<jstring>(Env->CallObjectMethod(JDevice, GetDeviceIDMethod));
	return FJavaHelper::FStringFromLocalRef(Env, Id);
}

TArray<FString> UDIY_CommuDevice::GetServices(const TArray<FString>& FilterUUIDs) const
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	jobjectArray JArray = static_cast<jobjectArray>(Env->CallObjectMethod(JDevice, GetServicesMethod));
	TArray<FString> ServiceUUIDs = DIY_CommuJavaConvertor::ToStringArray(JArray);

	if (FilterUUIDs.Num() > 0)
	{
		ServiceUUIDs = ServiceUUIDs.FilterByPredicate([&FilterUUIDs](const FString& ServiceUUID) -> bool {
			return FilterUUIDs.Contains(ServiceUUID);
		});
	}

	return ServiceUUIDs;
}

bool UDIY_CommuDevice::IsServiceAvailable(const FString& ServiceUUID) const
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	auto JServiceUUID = FJavaClassObject::GetJString(ServiceUUID);
	return Env->CallBooleanMethod(JDevice, HasServiceMethod, *JServiceUUID);
}

void UDIY_CommuDevice::ReadCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	auto JServiceUUID = FJavaClassObject::GetJString(ServiceUUID);
	auto JCharacteristicUUID = FJavaClassObject::GetJString(CharacteristicUUID);
	Env->CallVoidMethod(JDevice, ReadCharacteristicMethod, *JServiceUUID, *JCharacteristicUUID);
}

void UDIY_CommuDevice::WriteCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID, const TArray<uint8>& Data)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	auto JServiceUUID = FJavaClassObject::GetJString(ServiceUUID);
	auto JCharacteristicUUID = FJavaClassObject::GetJString(CharacteristicUUID);
	Env->CallVoidMethod(JDevice, WriteCharacteristicMethod, *JServiceUUID, *JCharacteristicUUID,
		DIY_CommuJavaConvertor::ToJavaByteArray(Data));
}

void UDIY_CommuDevice::SubscribeToCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID, bool bIsIndicationCharacteristic)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	auto JServiceUUID = FJavaClassObject::GetJString(ServiceUUID);
	auto JCharacteristicUUID = FJavaClassObject::GetJString(CharacteristicUUID);
	Env->CallVoidMethod(JDevice, SubscribeToCharacteristicMethod, *JServiceUUID, *JCharacteristicUUID, bIsIndicationCharacteristic);
}

void UDIY_CommuDevice::UnsubscribeFromCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	auto JServiceUUID = FJavaClassObject::GetJString(ServiceUUID);
	auto JCharacteristicUUID = FJavaClassObject::GetJString(CharacteristicUUID);
	Env->CallVoidMethod(JDevice, UnsubscribeFromCharacteristicMethod, *JServiceUUID, *JCharacteristicUUID);
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onConnect(JNIEnv* env, jclass clazz, jlong objAddr)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnConnect();
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onDisconnect(JNIEnv* env, jclass clazz, jlong objAddr)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnDisconnect();
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onConnectError(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring errorMessage)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ErrorMessage = FJavaHelper::FStringFromParam(env, errorMessage);

	UE_LOG(DIY_CommuLog, Error, TEXT("Failed during connect: %s"), *ErrorMessage);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnConnectError(ErrorMessage);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onDisconnectError(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring errorMessage)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ErrorMessage = FJavaHelper::FStringFromParam(env, errorMessage);

	UE_LOG(DIY_CommuLog, Error, TEXT("Failed during disconnect: %s"), *ErrorMessage);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnDisconnectError(ErrorMessage);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onRead(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring service, jstring characteristic, jbyteArray bytes)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ServiceUUID = FJavaHelper::FStringFromParam(env, service);
	FString CharacteristicUUID = FJavaHelper::FStringFromParam(env, characteristic);
	TArray<uint8> Data = DIY_CommuJavaConvertor::ToByteArray(bytes);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnRead(ServiceUUID, CharacteristicUUID, Data);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onWrite(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring service, jstring characteristic)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ServiceUUID = FJavaHelper::FStringFromParam(env, service);
	FString CharacteristicUUID = FJavaHelper::FStringFromParam(env, characteristic);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnWrite(ServiceUUID, CharacteristicUUID);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onNotification(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring service, jstring characteristic, jbyteArray bytes)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ServiceUUID = FJavaHelper::FStringFromParam(env, service);
	FString CharacteristicUUID = FJavaHelper::FStringFromParam(env, characteristic);
	TArray<uint8> Data = DIY_CommuJavaConvertor::ToByteArray(bytes);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnNotification(ServiceUUID, CharacteristicUUID, Data);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onUnsubscribe(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring service, jstring characteristic)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ServiceUUID = FJavaHelper::FStringFromParam(env, service);
	FString CharacteristicUUID = FJavaHelper::FStringFromParam(env, characteristic);

	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnUnsubscribe(ServiceUUID, CharacteristicUUID);
	});
}

JNI_METHOD void Java_com_aroundmelib_DIY_1CommuDevice_onError(
	JNIEnv* env, jclass clazz, jlong objAddr, jstring service, jstring characteristic, jstring errorMessage)
{
	UDIY_CommuDevice* Device = reinterpret_cast<UDIY_CommuDevice*>(objAddr);
	FString ServiceUUID = FJavaHelper::FStringFromParam(env, service);
	FString CharacteristicUUID = FJavaHelper::FStringFromParam(env, characteristic);
	FString ErrorMessage = FJavaHelper::FStringFromParam(env, errorMessage);

	UE_LOG(DIY_CommuLog, Error, TEXT("Characteristic operation error: %s"), *ErrorMessage);
	AsyncTask(ENamedThreads::GameThread, [=]() {
		Device->OnError(ServiceUUID, CharacteristicUUID, ErrorMessage);
	});
}

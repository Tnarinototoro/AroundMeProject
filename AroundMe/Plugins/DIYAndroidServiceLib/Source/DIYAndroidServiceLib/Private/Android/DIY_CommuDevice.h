// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Android/AndroidJNI.h"
#include "Interfaces/DIY_CommuDeviceInterface.h"

#include "DIY_CommuDevice.generated.h"

UCLASS()
class UDIY_CommuDevice : public UObject, public IDIY_CommuDeviceInterface
{
	GENERATED_BODY()

public:
	virtual ~UDIY_CommuDevice();

	void Init(jobject Device);

	virtual void Connect(const FDIY_CommuDelegate& OnConnect, const FDIY_CommuErrorDelegate& OnConnectError) override;
	virtual void Disconnect(const FDIY_CommuDelegate& OnDisconnect, const FDIY_CommuErrorDelegate& OnDisconnectError) override;
	virtual bool IsConnected() const override;
	virtual FString GetDeviceName() const override;
	virtual FString GetDeviceId() const override;
	virtual TArray<FString> GetServices(const TArray<FString>& FilterUUIDs) const override;
	virtual bool IsServiceAvailable(const FString& ServiceUUID) const override;
	virtual void ReadCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID) override;
	virtual void WriteCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID, const TArray<uint8>& Data) override;
	virtual void SubscribeToCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID, bool bIsIndicationCharacteristic) override;
	virtual void UnsubscribeFromCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID) override;

	void OnConnect() { OnConnectDelegate.ExecuteIfBound(); }
	void OnDisconnect() { OnDisconnectDelegate.ExecuteIfBound(); }
	void OnConnectError(const FString& ErrorMessage) { OnConnectErrorDelegate.ExecuteIfBound(ErrorMessage); }
	void OnDisconnectError(const FString& ErrorMessage) { OnDisconnectErrorDelegate.ExecuteIfBound(ErrorMessage); }
	void OnUnsubscribe(const FString& ServiceUUID, const FString& CharacteristicUUID)
	{
		OnUnsubscribeDelegate.ExecuteIfBound(ServiceUUID, CharacteristicUUID);
	}
	void OnWrite(const FString& ServiceUUID, const FString& CharacteristicUUID)
	{
		OnWriteSuccessDelegate.ExecuteIfBound(ServiceUUID, CharacteristicUUID);
	}
	void OnRead(const FString& ServiceUUID, const FString& CharacteristicUUID, const TArray<uint8>& Data)
	{
		OnReadDelegate.ExecuteIfBound(ServiceUUID, CharacteristicUUID, Data);
	}
	void OnNotification(const FString& ServiceUUID, const FString& CharacteristicUUID, const TArray<uint8>& Data)
	{
		OnNotificationDelegate.ExecuteIfBound(ServiceUUID, CharacteristicUUID, Data);
	}
	void OnError(const FString& ServiceUUID, const FString& CharacteristicUUID, const FString& ErrorMessage)
	{
		OnCharacteristicErrorDelegate.ExecuteIfBound(ServiceUUID, CharacteristicUUID, ErrorMessage);
	}

private:
	jobject JDevice;
	jmethodID ConnectdMethod;
	jmethodID DisconnectMethod;
	jmethodID IsConnectedMethod;
	jmethodID GetDeviceNameMethod;
	jmethodID GetDeviceIDMethod;
	jmethodID GetServicesMethod;
	jmethodID HasServiceMethod;
	jmethodID ReadCharacteristicMethod;
	jmethodID WriteCharacteristicMethod;
	jmethodID SubscribeToCharacteristicMethod;
	jmethodID UnsubscribeFromCharacteristicMethod;
};

// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Interface/DIY_CommuDeviceInterface.h"

#include "DIY_CommuDevice.generated.h"

class UDIY_CommuManager;
@class CBPeripheral;
@class CBCharacteristic;

UCLASS()
class UDIY_CommuDevice : public UObject, public IDIY_CommuDeviceInterface
{
	GENERATED_BODY()

public:
	virtual ~UDIY_CommuDevice();

	void Init(UDIY_CommuManager* InitManager, CBPeripheral* InitDevice);

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

	void OnConnect();
	void OnDisconnect() { OnDisconnectDelegate.ExecuteIfBound(); }
	void OnConnectError(const FString& ErrorMessage) { OnConnectErrorDelegate.ExecuteIfBound(ErrorMessage); }
	void OnDisconnectError(const FString& ErrorMessage) { OnDisconnectErrorDelegate.ExecuteIfBound(ErrorMessage); }

private:
	CBCharacteristic* GetCharacteristic(const FString& ServiceUUID, const FString& CharacteristicUUID) const;
	CBPeripheral* Device;
	
	UPROPERTY()
	UDIY_CommuManager* Manager = nullptr;
};

// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Android/AndroidJava.h"
#include "Interfaces/DIY_CommuManagerInterface.h"

#include "DIY_CommuManager.generated.h"

UCLASS()
class UDIY_CommuManager : public UObject, public IDIY_CommuManagerInterface
{
	GENERATED_BODY()

public:
	virtual ~UDIY_CommuManager() = default;

	virtual void Init() override;
	virtual bool IsBleSupported() const override;
	virtual bool IsBluetoothEnabled() const override;
	virtual void SetBluetoothState(bool bState) override;
	virtual void ScanForDevices(const TArray<FString>& ServiceUUIDs, const FDIY_CommuOnDeviceFoundDelegate& OnDeviceFound) override;
	virtual void ScanForAdvertisements(const TArray<FString>& NameFilters, const FDIY_CommuOnAdvertisementDelegate& OnAdvertisement) override;
	virtual void StopScan() override;

	void OnDeviceFound(TScriptInterface<IDIY_CommuDeviceInterface> Device) { OnDeviceFoundDelegate.ExecuteIfBound(Device); }
	void OnAdvertisement(const FString& DeviceName, const TArray<uint8>& Data) { OnAdvertisementDelegate.ExecuteIfBound(DeviceName, Data); }

private:
	TSharedPtr<FJavaClassObject> DIY_CommuManagerJObject;
	FJavaClassMethod IsBleSupportedMethod;
	FJavaClassMethod IsBluetoothEnabledMethod;
	FJavaClassMethod SetBluetoothStateMethod;
	FJavaClassMethod StartScanForDevicesMethod;
	FJavaClassMethod StartScanForAdvertisementsMethod;
	FJavaClassMethod StopScanMethod;
};

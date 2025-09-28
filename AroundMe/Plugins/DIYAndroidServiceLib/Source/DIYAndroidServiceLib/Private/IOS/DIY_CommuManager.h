// Copyright (c) 2020 Nineva Studios

#pragma once

#include "Interfaces/DIY_CommuManagerInterface.h"

#include "DIY_CommuManager.generated.h"

class UDIY_CommuDevice;
@class CBPeripheral;
@class CBCentralManager;
@class DIY_CommuManagerDelegate;

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

	void SetTargetDevice(UDIY_CommuDevice* Target);
	void ConnectDevice(CBPeripheral* Device) const;
	void DisconnectDevice(CBPeripheral* Device) const;

private:
	CBCentralManager* CentralManager;
	DIY_CommuManagerDelegate* ManagerDelegate;

	UPROPERTY()
	UDIY_CommuDevice* DeviceTarget = nullptr;
};

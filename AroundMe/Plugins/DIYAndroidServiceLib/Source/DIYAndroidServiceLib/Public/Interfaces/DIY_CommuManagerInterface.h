// Copyright (c) 2025 ShadowCandle Studios

#pragma once

#include "UObject/Interface.h"

#include "DIY_CommuManagerInterface.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FDIY_CommuOnDeviceFoundDelegate, TScriptInterface<IDIY_CommuDeviceInterface>, Device);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FDIY_CommuOnAdvertisementDelegate, FString, DeviceName, const TArray<uint8>&, Data);

UINTERFACE(BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class DIYPLATFORMSERVICE_API UDIY_CommuManagerInterface : public UInterface
{
	GENERATED_BODY()
};

class DIYPLATFORMSERVICE_API IDIY_CommuManagerInterface
{
	GENERATED_BODY()

public:
	virtual void Init() = 0;

	/**
	* Check if Bluetooth Low Energy is supported
	*
	* @return - True if BLE is supported, false otherwise
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	virtual bool IsBleSupported() const = 0;

	/**
	* Check if Bluetooth is enabled
	*
	* @return - True if Bluetooth is enabled, false otherwise
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	virtual bool IsBluetoothEnabled() const = 0;

	/**
	* Enable/disable Bluetooth (Android only)
	*
	* @param bState - New Bluetooth state
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	virtual void SetBluetoothState(bool bState) = 0;

	/**
	* Start searching for nearby BLE devices
	*
	* @param ServiceUUIDs - An array of service UUIDs to filter devices
	* @param OnDeviceFound - Called when a new device is found
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY", meta = (AutoCreateRefTerm = "ServiceUUIDs"))
	virtual void ScanForDevices(const TArray<FString>& ServiceUUIDs, const FDIY_CommuOnDeviceFoundDelegate& OnDeviceFound) = 0;

	/**
	* Start listening for advertisements
	*
	* @param NameFilters - An array of device names to listen to for advertisements
	* @param OnAdvertisement - Called when an advertisement is picked up
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY", meta = (AutoCreateRefTerm = "NameFilters"))
	virtual void ScanForAdvertisements(const TArray<FString>& NameFilters, const FDIY_CommuOnAdvertisementDelegate& OnAdvertisement) = 0;

	/**
	* Stop searching for nearby BLE devices
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	virtual void StopScan() = 0;

	/**
	* Check if scan is in progress
	*
	* @return - True if the subsystem is currently scanning for devices/advertisements
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	virtual bool IsScanning() const { return bIsScanning; }

protected:
	bool bIsScanning = false;

	FDIY_CommuOnDeviceFoundDelegate OnDeviceFoundDelegate;
	FDIY_CommuOnAdvertisementDelegate OnAdvertisementDelegate;
};

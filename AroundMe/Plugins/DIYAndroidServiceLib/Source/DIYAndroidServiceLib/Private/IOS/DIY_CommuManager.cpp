// Copyright (c) 2020 Nineva Studios

#include "DIY_CommuManager.h"

#include "DIY_CommuDevice.h"
#include "DIY_CommuLog.h"
#include "DIY_CommuManagerDelegate.h"

#import <CoreBluetooth/CoreBluetooth.h>

void UDIY_CommuManager::Init()
{
	UE_LOG(DIY_CommuLog, Verbose, TEXT("Initialising iOS BLE Manager"));

	ManagerDelegate = [[DIY_CommuManagerDelegate alloc] init];

	ManagerDelegate.onDeviceFound = ^(CBPeripheral* Peripheral) {
		UDIY_CommuDevice* Device = NewObject<UDIY_CommuDevice>();
		Device->Init(this, Peripheral);

		OnDeviceFoundDelegate.ExecuteIfBound(Device);
	};
	ManagerDelegate.onAdvertisementReceived = ^(FString DeviceName, NSData* Data) {
		TArray<uint8> ByteData;
		uint8* ByteArray = (uint8*)Data.bytes;
		if (ByteArray)
		{
			// skip the first two prefix bytes (0x0201)
			const int StartIndex = ByteArray[0] == 0x02 && ByteArray[1] == 0x01 ? 2 : 0;
			for (int i = StartIndex; i < Data.length; i++)
			{
				ByteData.Add(ByteArray[i]);
			}
			[Data release];
		}

		OnAdvertisementDelegate.ExecuteIfBound(DeviceName, ByteData);
	};
	ManagerDelegate.onDeviceConnected = ^(CBPeripheral* Peripheral) {
		if (DeviceTarget)
		{
			DeviceTarget->OnConnect();
			DeviceTarget = nullptr;
		}
	};
	ManagerDelegate.onFailToConnect = ^(CBPeripheral* Peripheral, FString ErrorMessage) {
		if (DeviceTarget)
		{
			DeviceTarget->OnConnectError(ErrorMessage);
			DeviceTarget = nullptr;
		}
	};
	ManagerDelegate.onDeviceDisconnected = ^(CBPeripheral* Peripheral) {
		if (DeviceTarget)
		{
			DeviceTarget->OnDisconnect();
			DeviceTarget = nullptr;
		}
	};
	ManagerDelegate.onFailToDisconnect = ^(CBPeripheral* Peripheral, FString ErrorMessage) {
		if (DeviceTarget)
		{
			DeviceTarget->OnDisconnectError(ErrorMessage);
			DeviceTarget = nullptr;
		}
	};

	CentralManager = [[CBCentralManager alloc] initWithDelegate:ManagerDelegate queue:nil];
}

bool UDIY_CommuManager::IsDIY_CommuSupported() const
{
	return CentralManager.state != CBManagerStateUnsupported;
}

bool UDIY_CommuManager::IsBluetoothEnabled() const
{
	return CentralManager.state == CBManagerStatePoweredOn;
}

void UDIY_CommuManager::SetBluetoothState(bool bState)
{
	UE_LOG(DIY_CommuLog, Warning, TEXT("This functionality is not available on iOS"));
}

void UDIY_CommuManager::ScanForDevices(const TArray<FString>& ServiceUUIDs, const FDIY_CommuOnDeviceFoundDelegate& OnDeviceFound)
{
	if (CentralManager.state != CBManagerStatePoweredOn)
	{
		UE_LOG(DIY_CommuLog, Error, TEXT("BLE Manager is not initialized. Initialization may take some time - try to invoke this function after a delay."));
		return;
	}

	if (bIsScanning)
	{
		UE_LOG(DIY_CommuLog, Warning, TEXT("Scan is already in progress."));
		return;
	}

	OnDeviceFoundDelegate = OnDeviceFound;
	bIsScanning = true;

	NSMutableArray* UUIDs = [NSMutableArray arrayWithCapacity:ServiceUUIDs.Num()];
	for (const auto& UUID : ServiceUUIDs)
	{
		if (!UUID.IsEmpty() && UDIY_CommuUtils::IsUUIDValid(UUID))
			[UUIDs addObject:[CBUUID UUIDWithString:UUID.GetNSString()]];
	}

	ManagerDelegate.bScanningForAdvertisements = false;
	[CentralManager scanForPeripheralsWithServices:UUIDs
										   options:@{CBCentralManagerScanOptionAllowDuplicatesKey: @NO}];
}

void UDIY_CommuManager::ScanForAdvertisements(const TArray<FString>& NameFilters, const FDIY_CommuOnAdvertisementDelegate& OnAdvertisement)
{
	if (CentralManager.state != CBManagerStatePoweredOn)
	{
		UE_LOG(DIY_CommuLog, Error, TEXT("BLE Manager is not initialized. Initialization may take some time - try to invoke this function after a delay."));
		return;
	}

	if (bIsScanning)
	{
		UE_LOG(DIY_CommuLog, Warning, TEXT("Scan is already in progress."));
		return;
	}

	OnAdvertisementDelegate = OnAdvertisement;
	bIsScanning = true;

	NSMutableArray* NameFiltersArray = [NSMutableArray arrayWithCapacity:NameFilters.Num()];
	for (const auto& Name : NameFilters)
	{
		[NameFiltersArray addObject:Name.GetNSString()];
	}

	ManagerDelegate.bScanningForAdvertisements = true;
	ManagerDelegate.NameFilters = NameFiltersArray;
	[CentralManager scanForPeripheralsWithServices:nil
										   options:@{CBCentralManagerScanOptionAllowDuplicatesKey: @NO}];
}

void UDIY_CommuManager::StopScan()
{
	bIsScanning = false;
	[CentralManager stopScan];
}

void UDIY_CommuManager::SetTargetDevice(UDIY_CommuDevice* Target)
{
	if (DeviceTarget)
	{
		UE_LOG(DIY_CommuLog, Error, TEXT("Connect/Disconnect operation in progress. Try again later."));
		return;
	}
	DeviceTarget = Target;
}

void UDIY_CommuManager::ConnectDevice(CBPeripheral* Device) const
{
	[CentralManager connectPeripheral:Device options:nil];
}

void UDIY_CommuManager::DisconnectDevice(CBPeripheral* Device) const
{
	[CentralManager cancelPeripheralConnection:Device];
}


// Fill out your copyright notice in the Description page of Project Settings.

#include "DIYBFL_PlatformService.h"
#include "DIY_CommuLog.h"
#include "Misc/Parse.h"
#if PLATFORM_ANDROID
#include "Android/DIY_CommuManager.h"
#elif PLATFORM_IOS
//#include "DIY_CommuDevice.h"
#endif

void UDIYBFL_PlatformService::StartPlatformService()
{
    ADIYPlatformServiceProvider::StartProvidingService();
}

void UDIYBFL_PlatformService::StopPlatformService()
{
    ADIYPlatformServiceProvider::StopProvidingService();
}

void UDIYBFL_PlatformService::RequestAddGiveTask(int item_id)
{
    ADIYPlatformServiceProvider::RequestAddGiveTask(item_id);
}




TScriptInterface<IDIY_CommuManagerInterface> UDIYBFL_PlatformService::CreateDIY_CommuManager()
{
	TScriptInterface<IDIY_CommuManagerInterface> DIY_CommuManagerInterface;

#if PLATFORM_IOS || PLATFORM_ANDROID
	UDIY_CommuManager* DIY_CommuManager = NewObject<UDIY_CommuManager>();
	DIY_CommuManager->Init();

	DIY_CommuManagerInterface.SetObject(DIY_CommuManager);
	DIY_CommuManagerInterface.SetInterface(Cast<IDIY_CommuManagerInterface>(DIY_CommuManager));
#endif

	return DIY_CommuManagerInterface;
}

FString UDIYBFL_PlatformService::ConvertBytesToHexString(const TArray<uint8>& Bytes)
{
	return BytesToHex(Bytes.GetData(), Bytes.Num());
}

FString UDIYBFL_PlatformService::HexToUUID(const FString& InHexString)
{
	FString HexString = InHexString.TrimStartAndEnd();
	const int StartPos = HexString.StartsWith(TEXT("0x")) ? 2 : 0;

	if (HexString.Len() - StartPos > 4)
	{
		UE_LOG(DIY_CommuLog, Error, TEXT("Cannot convert %s as it is not a 16 bit value"), *HexString);
		return FString();
	}

	for (int i = StartPos; i < HexString.Len(); i++)
	{
		if (!CheckTCharIsHex(HexString[i]))
		{
			UE_LOG(DIY_CommuLog, Error, TEXT("Failed to convert %s to a valid UUID, found invalid character: %c"), *HexString, HexString[i]);
			return FString();
		}
	}

	uint32 Id = FParse::HexNumber(*HexString);
	FGuid Guid = FGuid(Id, 0x00001000, 0x80000080, 0x5f9b34fb);

	if (!Guid.IsValid())
	{
		UE_LOG(DIY_CommuLog, Error, TEXT("Failed to convert %s to a valid UUID"), *HexString);
		return FString();
	}

	FString GuidString = Guid.ToString(EGuidFormats::DigitsWithHyphens);
	return GuidString.ToLower();
}

TArray<FString> UDIYBFL_PlatformService::HexToUUIDs(const TArray<FString>& HexStrings)
{
	TArray<FString>UuidArray;

	for (const FString& HexString : HexStrings)
	{
		UuidArray.Add(UDIYBFL_PlatformService::HexToUUID(HexString));
	}

	return UuidArray;
}

bool UDIYBFL_PlatformService::IsUUIDValid(const FString& UUID)
{
	FGuid Guid;
	
	if (UUID.Len() == 36 && !FGuid::ParseExact(UUID, EGuidFormats::DigitsWithHyphens, Guid)) return false;
	return Guid.IsValid();
}

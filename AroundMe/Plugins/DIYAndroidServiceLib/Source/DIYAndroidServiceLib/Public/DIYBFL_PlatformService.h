// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIYPlatformServiceProvider.h"
#include "DIYBFL_PlatformService.generated.h"

/**
 *
 */
UCLASS()
class DIYPLATFORMSERVICE_API UDIYBFL_PlatformService : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "PlatFormService")
    static void StartPlatformService();
    UFUNCTION(BlueprintCallable, Category = "PlatFormService")
    static void StopPlatformService();

    UFUNCTION(BlueprintCallable, Category = "PlatFormService")
    static void RequestAddGiveTask(int item_id);

    /**
	* Create a BLE Manager
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	static TScriptInterface<IDIY_CommuManagerInterface> CreateDIY_CommuManager();

	/**
	 * Convert an array of bytes to a hex string
	 *
	 * @return - Hex string representing array of bytes
	 */
	UFUNCTION(BlueprintPure, Category = "BLE DIY")
	static FString ConvertBytesToHexString(const TArray<uint8>& Bytes);

	/**
	* Parse a 16 bit hex value into a UUID string
	*
	* @return - UUID string
	*/
	UFUNCTION(BlueprintPure, Category = "BLE DIY")
	static FString HexToUUID(const FString& HexString);

	/**
	* Parse an array of 16 bit hex values into an array of UUID strings
	*
	* @return - Array of UUID strings
	*/
	UFUNCTION(BlueprintPure, Category = "BLE DIY")
	static TArray<FString> HexToUUIDs(const TArray<FString>& HexStrings);

	/**
	* Check if a provided UUID is a valid fully qualified UUID in the format XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX
	* This will return false for short hex UUIDs.
	*
	* @return - True if the UUID string is valid, false otherwise
	*/
	UFUNCTION(BlueprintCallable, Category = "BLE DIY")
	static bool IsUUIDValid(const FString& UUID);
};

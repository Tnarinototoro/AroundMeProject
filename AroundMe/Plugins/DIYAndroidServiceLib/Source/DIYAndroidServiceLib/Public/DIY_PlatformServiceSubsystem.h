#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DIY_PlatformServiceSubsystem.generated.h"

UCLASS()
class DIYPLATFORMSERVICE_API UDIYPlatformServiceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
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
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    static UDIYPlatformServiceSubsystem* Get(UWorld* OptionalWorld = nullptr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAroundMeService_SimpleTrigger);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAroundMeService_WithStringMsg, const FString&, inMsg);

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAroundMeService_WithIntMsg, int, inIntMsg);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImageTextureReceived, UTexture2D *,inTexture);

public: // 蓝图可调用
    UFUNCTION(BlueprintCallable)
    void StartPlatformService();

    UFUNCTION(BlueprintCallable)
    void StopPlatformService();

    UFUNCTION(BlueprintCallable)
    void RequestAddGiveTask(int ItemID);

	UFUNCTION(BlueprintCallable)
	void PushAlienMessage(FString Title, FString Content);

	void OnImageBytesReceived(const TArray<uint8>& ImageBytes);
    class UTexture2D* CreateTextureFromImageBytes(
    const TArray<uint8>& ImageData);
public: // 蓝图 Delegate
    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_SimpleTrigger OnDeviceDetected_Delegate_GarbageName_Provider;
    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_WithStringMsg OnDeviceDetected_Delegate_WithName_Provider;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_WithStringMsg OnMessageReceivedFromOtherPDevices_Delegate_Provider;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_GarbageNamesCount_Delegate_Provider;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_WithNamesCount_Delegate_Provider;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_WithIntMsg OnSubmittingBaypassData_GameUserCount_Delegate_Provider;

    UPROPERTY(BlueprintAssignable, Category = "PlatformService")
    FOnAroundMeService_WithIntMsg OnItemGiftReceived_Delegate_Provider;
    
	UPROPERTY(BlueprintAssignable, Category = "PlatformService")
	FOnImageTextureReceived OnImageTextureReceived;

protected:
	UPROPERTY()
    class UTexture2D* LastReceivedImageTexture = nullptr;
};

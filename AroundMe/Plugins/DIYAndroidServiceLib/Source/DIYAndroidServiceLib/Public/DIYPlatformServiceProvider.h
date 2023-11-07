#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"
#endif
#include "DIYPlatformServiceProvider.generated.h"




UCLASS()
class DIYPLATFORMSERVICE_API ADIYPlatformServiceProvider : public AActor
{

	GENERATED_BODY()


	// 多播委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceDetectedDelegate_GarbageName);

	// 声明多播委托
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeviceDetectedDelegate_WithName, const FString&, inDeviceInfo);
public:


	ADIYPlatformServiceProvider();
	~ADIYPlatformServiceProvider();

	static void StartProvidingService();
	static void StopProvidingService();
	UFUNCTION()
	virtual void Setup(UWorld* validWorld);
	
	UPROPERTY()
	FOnDeviceDetectedDelegate_GarbageName DeviceDetectedDelegate_GarbageName;

	UPROPERTY()
	FOnDeviceDetectedDelegate_WithName DeviceDetectedDelegate_WithName;



	/*static FOnDeviceDetectedDelegate_GarbageName Garbage_Test;

	static FOnDeviceDetectedDelegate_WithName With_Test;*/
	/* UWorld reference */
	UPROPERTY()
	UWorld* world;
};

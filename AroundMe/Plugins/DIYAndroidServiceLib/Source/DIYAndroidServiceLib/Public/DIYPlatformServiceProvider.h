#pragma once

#include "CoreMinimal.h"
#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"
#endif
class DIYPLATFORMSERVICE_API DIYPlatformServiceProvider
{
public:
	DIYPlatformServiceProvider();
	~DIYPlatformServiceProvider();

	static void StartProvidingService();
	static void StopProvidingService();
};

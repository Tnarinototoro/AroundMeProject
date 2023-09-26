// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestLibBPLibrary.h"
#include "TestLib.h"
#include "TestLibJNI.h"
UTestLibBPLibrary::UTestLibBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UTestLibBPLibrary::TestLibSampleFunction(float Param)
{
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("[SJL][TestLibJNI]CallTest Start"));
	TestLibJNI::CallTest();
	UE_LOG(LogTemp, Warning, TEXT("[SJL][TestLibJNI]CallTest End"));

#endif

	return -1;
}


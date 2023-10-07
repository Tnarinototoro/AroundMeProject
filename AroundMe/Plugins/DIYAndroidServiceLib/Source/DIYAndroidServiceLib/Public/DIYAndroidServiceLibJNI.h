// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"


/**
 * DIYAndroidServiceLibJNI provides basic info
 */
//In Here we must use upper case or this build will not pass the tests
class DIYANDROIDSERVICELIB_API DIYAndroidServiceLibJNI
{
public:
	DIYAndroidServiceLibJNI();
	~DIYAndroidServiceLibJNI();

	static void CallTest();
};
#endif
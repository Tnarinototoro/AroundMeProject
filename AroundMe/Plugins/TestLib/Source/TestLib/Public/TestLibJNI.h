// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"


/**
 * 
 */
class TESTLIB_API TestLibJNI
{
public:
	TestLibJNI();
	~TestLibJNI();

	static void CallTest();
};
#endif
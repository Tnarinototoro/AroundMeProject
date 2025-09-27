#pragma once

#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include "Android/AndroidJava.h"

namespace DIY_CommuJavaConvertor
{
jobjectArray ToJavaStringArray(const TArray<FString>& StringArray);
jbyteArray ToJavaByteArray(const TArray<uint8>& Data);
TArray<FString> ToStringArray(jobjectArray JavaArray);
TArray<uint8> ToByteArray(jbyteArray JavaArray);
};

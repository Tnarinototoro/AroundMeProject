#pragma once

#include "CoreMinimal.h"
// #include "DIY_LogHelper.generated.h"


#ifndef ENABLE_MAINPLAYER_LOG 
#define ENABLE_MAINPLAYER_LOG 1
#endif



DECLARE_LOG_CATEGORY_EXTERN(MainPlayerLog, Log, All);





#if defined(ENABLE_MAINPLAYER_LOG) && ENABLE_MAINPLAYER_LOG
#define EASY_LOG_MAINPLAYER(Format, ...) \
{ \
    if (ENABLE_MAINPLAYER_LOG) \
    { \
        UE_LOG(MainPlayerLog, Warning, TEXT(Format), ##__VA_ARGS__); \
    } \
}
#else
#endif




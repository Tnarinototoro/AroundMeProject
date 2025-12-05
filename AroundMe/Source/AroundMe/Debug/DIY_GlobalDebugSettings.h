#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#pragma once

class FDIY_GlobalDebugSettings
{
public:
    struct Equipment
    {
        bool bShowControlRigInfo{ false };
        bool bShowKagoDebugInfo{ false };
        bool bShowHandHeadDebugInfo{ false };
        bool bShowRobotHandDebugInfo{ false };
    }equipment;

    struct Item
    {
        bool bShowItemState{ false };
    }item;


    struct Player
    {
        bool bShowPlayerState{ false };
    }player;

    struct MusicPlayer
    {
        int OverrideBGMHour{ -1 };
    }musicplayer;

    struct Sky
    {
        bool bForceControlSky{ false };
        // 0-2400
        float TimeOfDay{ 1200.f };

        // 0-2.0f
        float OverallIntensity{ 1.f };

        //-0.2-1.f
        float Contrast{ 0.1f };

        // 0-1.5f
        float Saturation{ 1.0f };

        bool bEnableAnimatedTime{ false };

        float AnimatedTimeSpeed{ 1.0f };

    }sky;

    struct Weather
    {
        //0-20
        int32 WeatherPresetType{ 0 };
    }weather;
  


    static FDIY_GlobalDebugSettings sInstance;
};
#endif

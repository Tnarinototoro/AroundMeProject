#include "DIY_MusicPlayerUtility.h"
#include "DIY_MusicPlayer.h"

ADIY_MusicPlayer* UDIY_MusicPlayerUtility::DIY_GetMusicPlayerInstance()
{

	return ADIY_MusicPlayer::GetMusicPlayer();
}

UDIY_MusicPlayerUtility::UDIY_MusicPlayerUtility()
{
}

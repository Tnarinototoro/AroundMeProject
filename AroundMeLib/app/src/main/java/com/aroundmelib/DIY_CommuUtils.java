package com.aroundmelib;
import android.util.Log;
import java.util.UUID;

public class DIY_CommuUtils
{


    private static final String TAG = "DIY_CommuUtils";

    public static UUID intToUUID(int i)
    {
        final long MSB = 0x0000000000001000L;
        final long LSB = 0x800000805f9b34fbL;
        return new UUID(MSB | ((long) i << 32), LSB);
    }

    public static void log(String message)
    {
        Log.d(TAG, message);
    }
}

package com.aroundmelib;
import android.util.Log;
import java.util.UUID;

public class DIY_CommuUtils
{


    private static final String TAG = "DIY_CommuUtils";

    public static final UUID mAroundMeIdentify_UUID = UUID.fromString("fd4e1f57-110a-4d52-9a5b-fe97e0dcf7bb");
    public static final UUID CLIENT_CHARACTERISTIC_CONFIG_UUID = UUID
            .fromString("00002902-0000-1000-8000-00805f9b34fb");
    public static final UUID mAroundMe_CONNECT_CHARACTERISTIC_UUID = UUID.fromString("0C136FCC-3381-4F1E-9602-E2A3F8B70CEB");

    public static double calculateDistance(double rssi) {
        double RSSI_BASE = -69.0;
        double ENVIRONMENT_FACTOR = 2.0;
        return Math.pow(10, (RSSI_BASE - rssi) / (10 * ENVIRONMENT_FACTOR));
    }
    public static double calculateDistance(int rssi, int txPower)
    {
        if (rssi == 0)
        {
            return -1.0; // if we cannot determine accuracy, return -1.
        }
        double ratio = rssi * 1.0 / txPower;
        if (ratio < 1.0)
        {
            return Math.pow(ratio, 10);
        }
        else
        {
            double distance = 0.89976 * Math.pow(ratio, 7.7095) + 0.111;
            return distance;
        }
    }
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

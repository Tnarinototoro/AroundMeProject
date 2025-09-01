package com.aroundmelib;

import android.app.Service;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.content.Intent;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.util.Log;

public class DIY_Service extends Service {
    private static final String TAG = "DIY_Service";
    private static final String CHANNEL_ID = "DIYServiceChannel";

    private Handler handler;
    private Runnable logTask;
    private NotificationManager notificationManager;
    private int seconds = 0;

    @Override
    public void onCreate() {
        super.onCreate();

        notificationManager = (NotificationManager) getSystemService(NOTIFICATION_SERVICE);

        // Android 8.0+ 必须创建通知渠道
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            NotificationChannel channel = new NotificationChannel(
                    CHANNEL_ID,
                    "DIY Service Channel",
                    NotificationManager.IMPORTANCE_LOW
            );
            Log.d(TAG, "Notification enabled: " + notificationManager.areNotificationsEnabled());
            notificationManager.createNotificationChannel(channel);
        }

        // 初始通知
        Notification notification = new Notification.Builder(this, CHANNEL_ID)
                .setContentTitle("DIY Service")
                .setContentText("Service started, counting...")
                .setSmallIcon(android.R.drawable.ic_media_play)
                .build();

        startForeground(1, notification);

        // 定时任务：每秒更新通知和日志
        handler = new Handler();
        logTask = new Runnable() {
            @Override
            public void run() {
                seconds++;
                String msg = "Service running for " + seconds + " sec";
                Log.d(TAG, msg);

                Notification updatedNotification = new Notification.Builder(DIY_Service.this, CHANNEL_ID)
                        .setContentTitle("DIY Service")
                        .setContentText(msg)
                        .setSmallIcon(android.R.drawable.ic_media_play)
                        .build();

                notificationManager.notify(1, updatedNotification);

                handler.postDelayed(this, 1000);
            }
        };
        handler.post(logTask);
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        return START_STICKY; // 保持运行，系统杀掉后会尽量重启
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        if (handler != null && logTask != null) {
            handler.removeCallbacks(logTask);
        }
        Log.d(TAG, "DIY_Service destroyed");
    }

    @Override
    public IBinder onBind(Intent intent) {
        return null; // 不支持绑定
    }
}

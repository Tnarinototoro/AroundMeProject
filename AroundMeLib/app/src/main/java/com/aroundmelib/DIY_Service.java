package com.aroundmelib;

import android.app.Activity;
import android.app.Service;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.util.Log;
import android.widget.RemoteViews;
import android.media.AudioAttributes;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.IntentFilter;

import androidx.core.app.NotificationCompat;
import androidx.core.app.NotificationManagerCompat;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.InputStream;

public class DIY_Service extends Service implements DIY_CommuManagerReportSchema, DIY_PassByManagerReportSchema
{

    private static final String TAG = "DIY_Service";

    // --- 1. 新增变量 ---
    private static final String LOG_CHANNEL_ID = "DIY_LOG_CHANNEL";
    private java.util.LinkedList<String> logQueue = new java.util.LinkedList<>();


    private static final int MAX_LOG_LINES = 5; // 通知栏只显示最近5条
    private static final int LOG_NOTIF_ID = 888; // Log 通知的唯一 ID

    // --- 2. 在 onCreate 中初始化 Log 渠道 ---
    private void createLogNotificationChannel()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O)
        {
            NotificationChannel channel = new NotificationChannel(
                    LOG_CHANNEL_ID, "DIY System Logs", NotificationManager.IMPORTANCE_MIN); // 设为 MIN，不弹窗不响，只在下拉栏看
            channel.setShowBadge(false);
            notificationManager.createNotificationChannel(channel);
        }
    }
    private static final String CHANNEL_ID = "DIYServiceChannel";
    public static final String ACTION_PICK_IMAGE = "DIY_ACTION_PICK_IMAGE";
    public static DIY_Service Instance = null;
    public static Activity BoundActivity = null;
    // 1. 追踪游戏状态
    private boolean isGameActive = false;
    // 提供给 GameActivity 调用的接口，用来更新状态
    public void setGameActive(boolean active)
    {

        this.isGameActive = active;
        Log.d(TAG, "Game Active State Changed: " + active);
    }
    // 供 C++ 调用：添加待发送的照片路径
    public static void AddPhotoToPendingQueue(String filePath)
    {
        if(null==Instance)
        {
            return;
        }


        DIY_PassByManager  mgr = Instance.GetPassByManager();

        mgr.AddPhotoToPendingQueue(filePath);
    }

    // 供 Java 内部发送完毕后调用：清理文件
    public static void ClearAndThumbnail(Uri photoUri)
    {
        if(null==Instance)
        {
            return;
        }


        DIY_PassByManager  mgr = Instance.GetPassByManager();

        mgr.ClearAndThumbnail(photoUri);
    }
    public static native void OnNewRandomDeviceEncountered_GarbageName();

    public static native void OnNewLogGenerated(String in_string);

    public static native void OnNewRandomDeviceEncountered_WithName(String in_string);
    public static native void OnMessageReceivedFromOtherPDevices(String in_string);

    public static native void OnSubmittingBypassData_WithNames(int in_withname_device_count);

    public static native void OnSubmittingBypassData_GarbageNames(int in_withoutname_device_count);

    public static native void OnSubmittingBypassData_GameUser(int in_User_Coount);



    public static native void OnItemGiftReceived(String assetId);
    public static native void OnImageBytesForGame(byte[] imageBytes);


    // -------------------------
    // 👇 static entry for UE
    // -------------------------
    public static void StartDIYService(Activity activity)
    {
        Intent intent = new Intent(activity, DIY_Service.class);

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O)
        {
            activity.startForegroundService(intent);
        }
        else
        {
            activity.startService(intent);
        }
        Log.d("DIY_Service", "Service started from UE");
        BoundActivity=activity;
    }

    public static void StopDIYService(Activity activity)
    {
        Intent intent = new Intent(activity, DIY_Service.class);
        activity.stopService(intent);
        Log.d("DIY_Service", "Service stopped from UE");
    }

    private byte[] ReadBytesFromUri(Uri uri)
    {
        try
        {
            InputStream inputStream =
                    getContentResolver().openInputStream(uri);

            ByteArrayOutputStream buffer = new ByteArrayOutputStream();
            byte[] data = new byte[4096];
            int nRead;

            while ((nRead = inputStream.read(data, 0, data.length)) != -1)
            {
                buffer.write(data, 0, nRead);
            }

            buffer.flush();
            inputStream.close();

            return buffer.toByteArray();
        }
        catch (Exception e)
        {
            appendToLog("Read image failed: " + e.getMessage(),
                    DIY_CommuUtils.LogLevel.ERROR);
            return null;
        }
    }

    public static void RequestGiveAItem(String item_id)
    {
        if(null==Instance)
        {
            OnNewLogGenerated("RequestGiveAItem Failed due to invalid service instance");
            return;
        }

        if(null== Instance.mCommuManager)
        {
            OnNewLogGenerated("RequestGiveAItem Failed due to invalid commu manager instance");
            return;
        }
        OnNewLogGenerated("RequestGiveAItem "+item_id);
        Instance.mCommuManager.RequestGiveAItemTask(item_id);

    }

    // Java 层
    public static void ShowAlienMessage(String title, String content)
    {
        if (Instance != null)
        {
            Instance.showAlienNotification(title, content);
        }
    }

    public static void TryOpenImagePicker()
    {
        if (Instance != null)
        {
            Instance.RequestPickImageInternal();
        }
    }
    private DIY_CommuManager mCommuManager = null;
    private DIY_PassByManager mPassByManager =null;

    public DIY_CommuManager  GetCommuManager()
    {
        return mCommuManager;
    }

    public DIY_PassByManager GetPassByManager()
    {
        return mPassByManager;
    }
    private Handler handler;
    private Runnable logTask;
    private NotificationManager notificationManager;
    private int seconds = 0;
    private int getResId(String name, String type) {
        return getResources().getIdentifier(name, type, getPackageName());
    }
    private java.util.Random random = new java.util.Random();
    /**
     * 初始化外星人通知渠道
     */
    private void createAlienNotificationChannel() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            CharSequence name = "Alien Messages";
            String description = "Messages from the Radio Universe";

            NotificationChannel channel = new NotificationChannel(
                    DIY_CommuUtils.CHANNEL_ID_ALIEN, name, NotificationManager.IMPORTANCE_HIGH);
            channel.setDescription(description);

            // ✨ 修改：动态获取 diy_alien_pop 音效 ID
            int soundResId = getResId("diy_alien_pop", "raw");
            if (soundResId != 0) {
                Uri soundUri = Uri.parse("android.resource://" + getPackageName() + "/" + soundResId);
                AudioAttributes audioAttributes = new AudioAttributes.Builder()
                        .setContentType(AudioAttributes.CONTENT_TYPE_SONIFICATION)
                        .setUsage(AudioAttributes.USAGE_NOTIFICATION)
                        .build();
                channel.setSound(soundUri, audioAttributes);
            }
            channel.enableVibration(true);

            NotificationManager nm = getSystemService(NotificationManager.class);
            nm.createNotificationChannel(channel);
        }
    }

    // 监听“划掉”音效
    private final BroadcastReceiver dismissReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            if (DIY_CommuUtils.ACTION_DISMISS_NOTIFICATION.equals(intent.getAction())) {
                // ✨ 修改：动态获取 diy_alien_dismiss 音效 ID
                int dismissSoundId = getResId("diy_alien_dismiss", "raw");
                if (dismissSoundId != 0) {
                    android.media.MediaPlayer mp = android.media.MediaPlayer.create(context, dismissSoundId);
                    mp.setOnCompletionListener(android.media.MediaPlayer::release);
                    mp.start();
                }
            }
        }
    };

    /**
     * 发送自定义样式的通知
     */
    public void showAlienNotification(String title, String message) {
        int layoutId = getResId("diy_alien_notification", "layout");
        // 依然使用兜底逻辑确保不崩溃
        int smallIconId = getResId("diy_ic_launcher_foreground", "drawable");
        if (smallIconId == 0) smallIconId = android.R.drawable.ic_dialog_info;

        if (layoutId == 0) return;

        RemoteViews remoteViews = new RemoteViews(getPackageName(), layoutId);
        remoteViews.setTextViewText(getResId("notif_title", "id"), title);
        remoteViews.setTextViewText(getResId("notif_content", "id"), message);
        remoteViews.setImageViewResource(getResId("notif_avatar", "id"), getResId("diy_ic_alien_head", "drawable"));
        remoteViews.setImageViewResource(getResId("notif_bg_pattern", "id"), getResId("diy_ic_wave_pattern", "drawable"));

        Intent deleteIntent = new Intent(DIY_CommuUtils.ACTION_DISMISS_NOTIFICATION).setPackage(getPackageName());
        PendingIntent deletePendingIntent = PendingIntent.getBroadcast(this, 0, deleteIntent, PendingIntent.FLAG_IMMUTABLE);

        NotificationCompat.Builder builder = new NotificationCompat.Builder(this, DIY_CommuUtils.CHANNEL_ID_ALIEN)
                .setSmallIcon(smallIconId)
                .setStyle(new NotificationCompat.DecoratedCustomViewStyle())
                .setCustomContentView(remoteViews)
                .setCustomBigContentView(remoteViews)
                .setPriority(NotificationCompat.PRIORITY_HIGH) // 确保高优先级弹出
                .setDeleteIntent(deletePendingIntent)
                .setSound(null) // 关键：让系统去读 Channel 的音效设置，不要在这里覆盖
                .setAutoCancel(true);

        NotificationManagerCompat nm = NotificationManagerCompat.from(this);

        // ✨ 核心改动：使用随机 ID，实现多条消息并存（轰炸感）
        int randomId = 2000 + random.nextInt(10000);
        nm.notify(randomId, builder.build());
    }
    public void appendToLog(String text, DIY_CommuUtils.LogLevel level)
    {
        OnNewLogGenerated(text);

        // B. 更新 Log 队列
        String timeStamp = new java.text.SimpleDateFormat("HH:mm:ss").format(new java.util.Date());
        logQueue.addFirst(timeStamp + ": " + text);
        if (logQueue.size() > MAX_LOG_LINES) {
            logQueue.removeLast();
        }

        // C. 刷新 Log 通知
        updateLogNotification();
    }
    private void updateLogNotification() {
        StringBuilder sb = new StringBuilder();
        for (String s : logQueue) {
            sb.append(s).append("\n");
        }

        Notification logNotif = new NotificationCompat.Builder(this, LOG_CHANNEL_ID)
                .setContentTitle("AroundMe Realtime Logs")
                .setSmallIcon(android.R.drawable.ic_menu_info_details)
                .setStyle(new NotificationCompat.BigTextStyle().bigText(sb.toString()))
                .setOngoing(true)
                .build();

        notificationManager.notify(LOG_NOTIF_ID, logNotif);
    }
    private void RequestPickImageInternal()
    {
        if (BoundActivity == null)
        {
            appendToLog("Choose Image failed: no bound activity",
                    DIY_CommuUtils.LogLevel.ERROR);
            return;
        }

        BoundActivity.runOnUiThread(() ->
        {
            if (mPassByManager != null)
            {
                mPassByManager.openImagePicker();
            }
        });
    }

    public void processIncomingAction(String rawMessage) {
        if (rawMessage == null || !rawMessage.contains("|")) {
            appendToLog("收到无法识别的电波信号: " + rawMessage, DIY_CommuUtils.LogLevel.WARNING);
            return;
        }

        String[] parts = rawMessage.split("\\|", 2); // 分成 动作 和 数据 两部分
        String action = parts[0];
        String payload = parts[1];

        switch (action) {
            case "ACTION_GIFT":
                // 收到礼物 AssetID
                OnItemGiftReceived(payload);
                showAlienNotification("收到神秘物质", "Raw Msg "+ rawMessage +"捕获到来自外星的 ID: " + payload);
                break;

            case "ACTION_ENERGY":
                // 收到能量石信号 (以后扩展)
                // OnEnergyCaptured(payload);
                break;

            case "ACTION_PHOTO_REQ":
                // 收到大文件传输请求 (以后开启 WFD)
                appendToLog("对方请求建立高能视觉链接: " + payload, DIY_CommuUtils.LogLevel.DEBUG);
                break;
        }
    }
    public void handleActivityResult(int requestCode, int resultCode, Intent data)
    {
        if(null==BoundActivity)
        {
            return;
        }
        if(null==mPassByManager)
        {
            return;
        }
        if(null==mCommuManager)
        {
            return;
        }

        if (requestCode == DIY_PermissionHelper.REQUEST_ENABLE_BT)
        {
            if (resultCode == Activity.RESULT_OK)
            {
                DIY_CommuUtils.PushToast(BoundActivity.getApplicationContext(), "✅ 蓝牙已开启");
            }
            else
            {
                DIY_CommuUtils.PushToast(BoundActivity.getApplicationContext(), "❌ 必须开启蓝牙才能使用 AroundMe");
                DIY_PermissionHelper.showEnableBluetoothDialog(BoundActivity);
            }
        }
        mPassByManager.onActivityResult(requestCode, resultCode, data);
        if (requestCode == DIY_CommuUtils.REQUEST_OPEN_PIC && resultCode == Activity.RESULT_OK && data != null)
        {
            Uri selectedImage =mPassByManager.GetLatestInPendingQueue_Uri();


            appendToLog("图片已选择：" + selectedImage.toString(), DIY_CommuUtils.LogLevel.INFO);

            byte[] imageBytes = ReadBytesFromUri(selectedImage);
            if (imageBytes != null)
            {
                OnImageBytesForGame(imageBytes);
            }
            appendToLog("Pic Submitted to game instance!" , DIY_CommuUtils.LogLevel.INFO);



        }
    }
    @Override
    public void onCreate()
    {
        super.onCreate();

        Instance = this;
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

        // 👉 定义一个 Intent 用于点击按钮时停止服务
        Intent stopIntent = new Intent(this, DIY_Service.class);
        stopIntent.setAction("STOP_SERVICE");

        PendingIntent stopPendingIntent = PendingIntent.getService(
                this,
                0,
                stopIntent,
                Build.VERSION.SDK_INT >= Build.VERSION_CODES.M ?
                        PendingIntent.FLAG_IMMUTABLE | PendingIntent.FLAG_UPDATE_CURRENT :
                        PendingIntent.FLAG_UPDATE_CURRENT
        );

        Intent pickImageIntent = new Intent(this, DIY_Service.class);
        pickImageIntent.setAction(ACTION_PICK_IMAGE);

        PendingIntent pickImagePendingIntent = PendingIntent.getService(
                this,
                1,
                pickImageIntent,
                Build.VERSION.SDK_INT >= Build.VERSION_CODES.M ?
                        PendingIntent.FLAG_IMMUTABLE | PendingIntent.FLAG_UPDATE_CURRENT :
                        PendingIntent.FLAG_UPDATE_CURRENT
        );


        // 👉 创建带“停止”按钮的通知
        Notification notification = new Notification.Builder(this, CHANNEL_ID)
                .setContentTitle("DIY Service")
                .setContentText("Service started, counting...")
                .setSmallIcon(android.R.drawable.ic_menu_gallery)
                .addAction(new Notification.Action.Builder(
                        null, "Choose Image", pickImagePendingIntent).build())
                .addAction(new Notification.Action.Builder(
                        null, "Stop Service", stopPendingIntent).build())
                .build();


        //Create alien notification channel
        createAlienNotificationChannel();
        createLogNotificationChannel();

        // 2. 动态注册“划掉”音效的接收器
        IntentFilter filter = new IntentFilter(DIY_CommuUtils.ACTION_DISMISS_NOTIFICATION);
        // 注意：Android 14+ 要求动态注册广播必须指定 RECEIVER_EXPORTED 或 RECEIVER_NOT_EXPORTED
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.TIRAMISU) {
            registerReceiver(dismissReceiver, filter, Context.RECEIVER_NOT_EXPORTED);
        } else {
            registerReceiver(dismissReceiver, filter);
        }

        // 启动前台服务
        startForeground(1, notification);

        mCommuManager=new DIY_CommuManager(BoundActivity,this);
        mCommuManager.setCommuManagerReportSchema(this);


        mPassByManager=new DIY_PassByManager(BoundActivity,this);
        mPassByManager.setPassByManagerReportSchema(this);



        // 👉 定时任务：每秒更新通知内容
        handler = new Handler();
        logTask = new Runnable()
        {
            @Override
            public void run() {
                seconds++;


                Notification updatedNotification = new Notification.Builder(DIY_Service.this, CHANNEL_ID)
                        .setContentTitle("DIY Service")
                        .setContentText(String.format("%d sec| Game %s | Commu %s \n Name:%d Null:%d User:%d",
                                seconds,
                                isGameActive ? "ACTIVE" : "PAUSED",
                                mCommuManager.mIsAroundMeServiceRunning? "ON" : "OFF",
                                mCommuManager.GetDeviceCountEncountered_WithName(),
                                mCommuManager.GetDeviceCountEncountered_WithGarbageName(),
                                mCommuManager.GetDIYGameUserEncountered_WithName()


                        ))
                        .setSmallIcon(android.R.drawable.ic_menu_gallery)
                        .addAction(new Notification.Action.Builder(
                                null, "Choose Image", pickImagePendingIntent).build())
                        .addAction(new Notification.Action.Builder(
                                null, "Stop Service", stopPendingIntent).build())
                        .build();

                notificationManager.notify(1, updatedNotification);
                handler.postDelayed(this, 1000);

                if(!mCommuManager.mIsAroundMeServiceRunning)
                {
                    mCommuManager.StartAroundMeService();
                }
            }
        };
        handler.post(logTask);
    }
    @Override
    public int onStartCommand(Intent intent, int flags, int startId)
    {

        if (intent != null)
        {
            String action = intent.getAction();

            if ("STOP_SERVICE".equals(action))
            {
                Log.d(TAG, "Stop button clicked, stopping service.");
                stopSelf();
            }
            else if (ACTION_PICK_IMAGE.equals(action))
            {
                Log.d(TAG, "Choose Image button clicked.");
                RequestPickImageInternal();
            }
        }


        return START_STICKY; // 保持运行，系统杀掉后会尽量重启
    }

    @Override
    public void onDestroy()
    {

        Instance=null;
        BoundActivity = null;
        mCommuManager.StopAroundMeService();
        mCommuManager.onDestroy();
        mCommuManager=null;
        // 3. 别忘了注销，防止服务停止后还在监听
        if (dismissReceiver != null)
        {
            unregisterReceiver(dismissReceiver);
        }


        if (handler != null && logTask != null)
        {
            handler.removeCallbacks(logTask);
        }
        Log.d(TAG, "DIY_Service destroyed");

        super.onDestroy();
    }

    @Override
    public IBinder onBind(Intent intent) {
        return null; // 不支持绑定
    }





    @Override
    public void OnPostResetAroundMeBluetoothService()
    {
        DIY_CommuManagerReportSchema.super.OnPostResetAroundMeBluetoothService();


    }

    @Override
    public void PostStopAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStopAroundMeService();
        appendToLog("BLE搜索结束...", DIY_CommuUtils.LogLevel.INFO);
        setGameActive(false);
    }

    @Override
    public void PostStartAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStartAroundMeService();
        setGameActive(true);
    }


    @Override
    public void PostMsgReceivedFromPDevice(String inText)
    {
        DIY_CommuManagerReportSchema.super.PostMsgReceivedFromPDevice(inText);


        // 🔄 如果当前不是调试模式（即游戏运行中），将消息回调给 UE 层
        OnMessageReceivedFromOtherPDevices(inText);
        processIncomingAction(inText);


    }

    @Override
    public void PostMsgReceivedFromCDevice(String inText)
    {
        DIY_CommuManagerReportSchema.super.PostMsgReceivedFromCDevice(inText);



    }

    @Override
    public void OnPostMainUpdate()
    {

        DIY_CommuManagerReportSchema.super.OnPostMainUpdate();

    }


    @Override
    public void OnSubmitInfoToUE5()
    {
        DIY_CommuManagerReportSchema.super.OnSubmitInfoToUE5();
        //no more needed to do this!
        OnSubmittingBypassData_GarbageNames(mCommuManager.GetDeviceCountEncountered_WithGarbageName());


        OnSubmittingBypassData_WithNames(mCommuManager.GetDeviceCountEncountered_WithName());
        OnSubmittingBypassData_GameUser(mCommuManager.GetDIYGameUserEncountered_WithName());


        appendToLog("SubmitInfoToUE5 once"

                //+ GetCurrentNumStatus()
                , DIY_CommuUtils.LogLevel.INFO);
    }
    @Override
    public boolean GetIsGameActive()
    {
        return isGameActive;
    }

    @Override
    public void OnCallBack_BLEDeviceEncountered_GarbageName()
    {
        OnNewRandomDeviceEncountered_GarbageName();
        appendToLog("Garbage detected!", DIY_CommuUtils.LogLevel.INFO);
    }
    @Override
    public void OnCallBack_NewBLEDeviceEncountered_WithName(String inText)
    {
        OnNewRandomDeviceEncountered_WithName(inText);
        appendToLog(inText, DIY_CommuUtils.LogLevel.INFO);
    }


    @Override
    public void OnCallBack_OldBLEDeviceEncountered_WithName(String inText)
    {

    }
    @Override
    public void OnCallBack_NewClassicDeviceEncountered_WithName(String inText)
    {
        OnNewRandomDeviceEncountered_WithName(inText);
        appendToLog(inText, DIY_CommuUtils.LogLevel.INFO);
    }

    @Override
    public void OnCallBack_OldClassicDeviceEncountered_WithName(String inText)
    {


    }

    @Override
    public void OnCallBack_ClassicDeviceEncountered_GarbageName()
    {

        OnNewRandomDeviceEncountered_GarbageName();

    }






    @Override
    public void onWIFILogReport(String inText, DIY_CommuUtils.LogLevel level)
    {
        appendToLog(inText, level);

    }
    @Override
    public void onBLELogReport(String inText, DIY_CommuUtils.LogLevel level)
    {
        appendToLog(inText, level);

    }


    @Override
    public void onImageReceived(File file)
    {
       /* requireActivity().runOnUiThread(() ->
        {
            appendWfdLog_UIOperation("准备 decode 图片: " + file.getAbsolutePath());

            Bitmap bmp = BitmapFactory.decodeFile(file.getAbsolutePath());
            if (bmp == null)
            {
                appendWfdLog_UIOperation("❌ decodeFile 失败，图片损坏！");
                return;
            }

            appendWfdLog_UIOperation("✔ decodeFile 成功，设置到 UI");

            ImageView recvView = getView().findViewById(R.id.image_receive);
            recvView.setImageBitmap(bmp);

            appendWfdLog_UIOperation("✔ 图片已成功显示在 Receive 区域");
        });*/
    }


    @Override
    public DIY_CommuManager GetCurrentContextPossibleCommuManager()
    {
        return GetCommuManager();
    }

    @Override
    public DIY_PassByManager GetCurrentContextPossiblePassByManager()
    {
        return GetPassByManager();
    }

    @Override
    public boolean HasAnySendPhotoTask()
    {
        DIY_PassByManager mgr = GetPassByManager();
        if(null==mgr)
        {
            return false;
        }
        return mgr.mPendingToSendPhotoUris.size()>0;
    }
}

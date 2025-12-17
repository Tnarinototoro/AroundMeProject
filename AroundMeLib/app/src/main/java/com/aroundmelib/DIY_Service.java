package com.aroundmelib;

import android.app.Activity;
import android.app.Service;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.util.Log;
import android.widget.ImageView;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.InputStream;
import java.util.ArrayList;

public class DIY_Service extends Service implements DIY_CommuManagerReportSchema, DIY_PassByManagerReportSchema
{
    private static final String TAG = "DIY_Service";
    private static final String CHANNEL_ID = "DIYServiceChannel";
    public static final String ACTION_PICK_IMAGE = "DIY_ACTION_PICK_IMAGE";
    public static DIY_Service Instance = null;
    public static Activity BoundActivity = null;


    public static native void OnNewRandomDeviceEncountered_GarbageName();

    public static native void OnNewLogGenerated(String in_string);

    public static native void OnNewRandomDeviceEncountered_WithName(String in_string);
    public static native void OnMessageReceivedFromOtherPDevices(String in_string);

    public static native void OnSubmittingBypassData_WithNames(int in_withname_device_count);

    public static native void OnSubmittingBypassData_GarbageNames(int in_withoutname_device_count);

    public static native void OnSubmittingBaypassData_GameUser(int in_User_Coount);



    public static native void OnItemGiftReceived(int received_item_id);
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

    public static void RequestGiveAItem(int item_id)
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

        Instance.mCommuManager.RequestGiveAItemTask(item_id);

    }


    private DIY_CommuManager mCommuManager = null;
    private DIY_PassByManager mPassByManager =null;
    private Handler handler;
    private Runnable logTask;
    private NotificationManager notificationManager;
    private int seconds = 0;


    public void appendToLog(String text, DIY_CommuUtils.LogLevel level)
    {
        OnNewLogGenerated(text);
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
            Uri selectedImage =mPassByManager.GetChosen_Uri();


            appendToLog("图片已选择：" + selectedImage.toString(), DIY_CommuUtils.LogLevel.INFO);

            byte[] imageBytes = ReadBytesFromUri(selectedImage);
            if (imageBytes != null)
            {
                OnImageBytesForGame(imageBytes);
            }
            appendToLog("Pic Submitted to game instance!" , DIY_CommuUtils.LogLevel.INFO);

            //wifiFragment.Picked_imageView.setImageURI(selectedImage);

        }
    }
    @Override
    public void onCreate() {
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

        // 启动前台服务
        startForeground(1, notification);

        mCommuManager=new DIY_CommuManager(BoundActivity,BoundActivity.getApplicationContext());
        mCommuManager.setCommuManagerReportSchema(this);


        mPassByManager=new DIY_PassByManager(BoundActivity);
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
                        .setContentText(String.format("Service running for %d sec \n Name:%d Null:%d User:%d",
                                seconds,
                                mCommuManager.mDeviceCountEncountered_WithName_Latest,
                                mCommuManager.mDeviceCountEncountered_WithGarbageName_Latest,
                                mCommuManager.mDIYGameUserEncountered_WithName_Latest


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
        super.onDestroy();
        Instance=null;
        BoundActivity = null;
        mCommuManager.StopAroundMeService();
        mCommuManager.onDestroy();
        mCommuManager=null;

        if (handler != null && logTask != null)
        {
            handler.removeCallbacks(logTask);
        }
        Log.d(TAG, "DIY_Service destroyed");
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

    }

    @Override
    public void PostStartAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStartAroundMeService();


    }


    @Override
    public void PostMsgReceivedFromPDevice(String inText)
    {
        DIY_CommuManagerReportSchema.super.PostMsgReceivedFromPDevice(inText);


        // 🔄 如果当前不是调试模式（即游戏运行中），将消息回调给 UE 层
        OnMessageReceivedFromOtherPDevices(inText);


        // 🎁 简单的消息解析逻辑：
        // 如果消息以 "X" 或 "x" 开头，则认为是系统指令；
        // 否则认为是游戏中收到的“礼物物品ID”。
        if (inText.startsWith("X") || inText.startsWith("x"))
        {
            // TODO: 系统级指令处理
        }
        else
        {

            // 将字符串转为整数作为 Item ID，通知游戏层“收到礼物”
            OnItemGiftReceived(Integer.parseInt(inText));

        }
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
        OnSubmittingBypassData_GarbageNames(mCommuManager.mDeviceCountEncountered_WithGarbageName_Latest);


        OnSubmittingBypassData_WithNames(mCommuManager.mDeviceCountEncountered_WithName_Latest);
        OnSubmittingBaypassData_GameUser(mCommuManager.mDIYGameUserEncountered_WithName_Latest);


        appendToLog("SubmitInfoToUE5 once"

                //+ GetCurrentNumStatus()
                , DIY_CommuUtils.LogLevel.INFO);
    }

    @Override
    public void OnCallBack_BLEDeviceEncountered_GarbageName()
    {
        OnNewRandomDeviceEncountered_GarbageName();

    }
    @Override
    public void OnCallBack_NewBLEDeviceEncountered_WithName(String inText)
    {
        OnNewRandomDeviceEncountered_WithName(inText);

    }


    @Override
    public void OnCallBack_OldBLEDeviceEncountered_WithName(String inText)
    {

    }
    @Override
    public void OnCallBack_NewClassicDeviceEncountered_WithName(String inText)
    {
        OnNewRandomDeviceEncountered_WithName(inText);

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



}

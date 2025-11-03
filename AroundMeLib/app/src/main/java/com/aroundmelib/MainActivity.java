
package com.aroundmelib;


import android.Manifest;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCallback;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothGattServer;
import android.bluetooth.BluetoothGattServerCallback;
import android.bluetooth.BluetoothGattService;
import android.bluetooth.BluetoothManager;
import android.bluetooth.BluetoothProfile;
import android.bluetooth.le.AdvertiseCallback;
import android.bluetooth.le.AdvertiseData;
import android.bluetooth.le.AdvertiseSettings;
import android.bluetooth.le.BluetoothLeAdvertiser;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.net.Uri;
import android.net.wifi.p2p.WifiP2pManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.ParcelUuid;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.style.ForegroundColorSpan;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.UUID;
import com.aroundmelib.DIY_CommuManagerReportSchema;


@SuppressLint("MissingPermission")
public class MainActivity extends AppCompatActivity implements DIY_CommuManagerReportSchema
{

    // Debug ui part starts ----------------------------------------------------------------------
    private View mLog_button_divider;
    private View mUtility_DeviceList_divider;

    private View mDeviceList_divider_y2;
    private ImageView Picked_imageView;
    private LinearLayout mbuttonPanel;
    private LinearLayout mlogPanel;
    private LinearLayout mBypassPanel;

    private LinearLayout mUtilityPanel;
    private LinearLayout mDeviceListPanel;
    private EditText mInputMessage;
    private Button mButton_StartScan;
    private Button mButton_CancelScan;

    private Button mButton_Pick;
    private boolean mLogViewautoScroll = true;
    private ListView mSp_Device_listView;
    private ListView mRandom_Device_listView;
    private TextView mLogTextView;

    private TextView mMacAddrCountView;
    private ScrollView mLogScrollView;
    private ArrayAdapter<String> mSp_deviceArrayAdapter;
    private ArrayAdapter<String> mRandom_deviceArrayAdapter;

    private void ToggleButtons() {
        if (mButton_CancelScan != null && mButton_StartScan != null) {

            mButton_StartScan.setEnabled(!mButton_StartScan.isEnabled());
            mButton_CancelScan.setEnabled(!mButton_CancelScan.isEnabled());
        }
    }

    private void scrollToBottom() {
        mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
    }



    // Debug ui part ends----------------------------------------------------------------------

    private String GetCurrentNumStatus()
    {
        return String.format("Name:%d, Null:%d, User:%d",
                mDIY_CommuManagerInstace.mDeviceCountEncountered_WithName_Latest,
                mDIY_CommuManagerInstace.mDeviceCountEncountered_WithGarbageName_Latest,
                mDIY_CommuManagerInstace.mDIYGameUserEncountered_WithName_Latest);
    }

    // call from java implemented in UE5




    WifiP2pManager manager;
    WifiP2pManager.Channel channel;

    // 定义






    private ArrayList<String> mSp_deviceDisplayArrayList;

    private ArrayList<String> mRandom_deviceDisplayArrayList;



    private DIY_CommuManager mDIY_CommuManagerInstace=null;


    private DIY_PassByManager mDIY_PassByManagerInstace=null;






    public void appendToLog(String text, DIY_CommuUtils.LogLevel level)
    {
        runOnUiThread(() -> {
            if (mLogTextView == null) return;

            int color;
            String prefix = "";

            // 🎨 根据日志级别决定颜色和前缀
            switch (level)
            {
                case ERROR:
                    color = Color.RED;
                    prefix = "❌ [Error] ";
                    break;

                case WARNING:
                    color = Color.rgb(255, 165, 0);
                    prefix = "⚠ [Warning] ";
                    break;

                case DEBUG:
                    color = Color.CYAN;
                    prefix = "🔍 [Debug] ";
                    break;

                case SUCCESS:
                    color = Color.GREEN;
                    prefix = "✅ [OK] ";
                    break;

                case INFO:
                default:
                    color = Color.WHITE;
                    prefix = "ℹ [Info] ";
                    break;
            }

            // 时间戳
            String time = new SimpleDateFormat("HH:mm:ss", Locale.getDefault()).format(new Date());
            String formatted = String.format("[%s] %s%s", time, prefix, text);

            SpannableString coloredText = new SpannableString(formatted + "\n");
            coloredText.setSpan(new ForegroundColorSpan(color), 0, coloredText.length(), Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);

            mLogTextView.append(coloredText);

            // 自动滚动到底部
            if (mLogViewautoScroll && mLogScrollView != null)
            {
                mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
            }
        });
    }


    private void SubmitInfoToUE5()
    {
        appendToLog("SubmitInfoToUE5 once"+ GetCurrentNumStatus(), DIY_CommuUtils.LogLevel.INFO);

    }


    // activity events start
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        // UI gadgets fixing
        {

            // layout setting
            setContentView(R.layout.activity_main);

            // sp device list view init
            {
                // device array list\adaptor init
                mSp_deviceDisplayArrayList = new ArrayList<>();

                mSp_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1,
                        mSp_deviceDisplayArrayList);

                // list view set the adaptor and view
                mSp_Device_listView = findViewById(R.id.sp_device_list);
                mSp_Device_listView.setAdapter(mSp_deviceArrayAdapter);

            }

            // random device list view init
            {
                // device array list\adaptor init
                mRandom_deviceDisplayArrayList = new ArrayList<>();

                mRandom_deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1,
                        mRandom_deviceDisplayArrayList);
                // list view set the adaptor and view
                mRandom_Device_listView = findViewById(R.id.random_device_list);
                mRandom_Device_listView.setAdapter(mRandom_deviceArrayAdapter);

            }

            //ui init
            {
                // text and button binding
                mButton_StartScan = this.findViewById(R.id.button_start);
                mButton_CancelScan = this.findViewById(R.id.button_stop);

                mButton_StartScan.setEnabled(true);
                mButton_CancelScan.setEnabled(false);

                mButton_Pick = this.findViewById(R.id.button_pickpic);
                mLogTextView = findViewById(R.id.log_text_view);
                mLogScrollView = findViewById(R.id.log_scroll_view);
                mInputMessage = findViewById(R.id.input_message);
                mMacAddrCountView = findViewById(R.id.Mac_Addr_Count);
                mLog_button_divider = findViewById(R.id.divider);
                mUtility_DeviceList_divider = findViewById(R.id.divider_y);
                Picked_imageView=findViewById(R.id.image_send);
                mBypassPanel= findViewById(R.id.bypass_panel);;
                mDeviceList_divider_y2=findViewById(R.id.divider_y2);
                mbuttonPanel = findViewById(R.id.button_panel);
                mlogPanel = findViewById(R.id.log_panel);

                mUtilityPanel = findViewById(R.id.utility_panel);
                mDeviceListPanel = findViewById(R.id.Device_list_panel);
                mLog_button_divider.setOnTouchListener(new View.OnTouchListener() {
                    private float initialX;
                    private int initialButtonPanelWidth;

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                initialX = event.getX();
                                initialButtonPanelWidth = mbuttonPanel.getWidth();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaX = event.getX() - initialX;
                                int newButtonPanelWidth = initialButtonPanelWidth + (int) deltaX;

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) mbuttonPanel
                                        .getLayoutParams();
                                params.width = newButtonPanelWidth;
                                mbuttonPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) mlogPanel.getLayoutParams();
                                params.width = mlogPanel.getWidth() - (int) deltaX;
                                mlogPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });

                mUtility_DeviceList_divider.setOnTouchListener(new View.OnTouchListener() {
                    private float initialY;
                    private int initialTopPanelHeight, initialBottomPanelHeight;

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                initialY = event.getY();
                                initialTopPanelHeight = mUtilityPanel.getHeight();
                                initialBottomPanelHeight = mDeviceListPanel.getHeight();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaY = event.getY() - initialY;
                                int newTopPanelHeight = initialTopPanelHeight + (int) deltaY;
                                int newBottomPanelHeight = initialBottomPanelHeight - (int) deltaY;

                                LinearLayout.LayoutParams params = (LinearLayout.LayoutParams) mUtilityPanel
                                        .getLayoutParams();
                                params.height = newTopPanelHeight;
                                mUtilityPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) mDeviceListPanel.getLayoutParams();
                                params.height = newBottomPanelHeight;
                                mDeviceListPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });

                mDeviceList_divider_y2.setOnTouchListener(new View.OnTouchListener() {
                    private float initialY;
                    private int initialDevicePanelHeight, initialBypassPanelHeight;

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                initialY = event.getY();
                                initialDevicePanelHeight = mDeviceListPanel.getHeight();
                                initialBypassPanelHeight = mBypassPanel.getHeight();
                                return true;
                            case MotionEvent.ACTION_MOVE:
                                float deltaY = event.getY() - initialY;
                                int newDevicePanelHeight = initialDevicePanelHeight + (int) deltaY;
                                int newBypassPanelHeight = initialBypassPanelHeight - (int) deltaY;

                                LinearLayout.LayoutParams params =
                                        (LinearLayout.LayoutParams) mDeviceListPanel.getLayoutParams();
                                params.height = newDevicePanelHeight;
                                mDeviceListPanel.setLayoutParams(params);

                                params = (LinearLayout.LayoutParams) mBypassPanel.getLayoutParams();
                                params.height = newBypassPanelHeight;
                                mBypassPanel.setLayoutParams(params);
                                return true;
                        }
                        return false;
                    }
                });
            }




            {
                mLogScrollView.setOnTouchListener(new View.OnTouchListener() {

                    @Override
                    public boolean onTouch(View v, MotionEvent event) {
                        switch (event.getAction()) {
                            case MotionEvent.ACTION_DOWN:
                                // 用户开始触摸，暂停自动滚动
                                mLogViewautoScroll = false;
                                break;
                            case MotionEvent.ACTION_UP:
                                break;
                            case MotionEvent.ACTION_CANCEL:
                                // 用户停止触摸，开始自动滚动
                                mLogViewautoScroll = true;
                                scrollToBottom(); // 立即滚动到底部
                                break;
                        }
                        return false; // 这里返回 false 以允许 ScrollView 的默认滚动行为
                    }
                });

                mButton_StartScan.setOnClickListener(new View.OnClickListener() {

                    @Override
                    public void onClick(View arg0) {
                        mDIY_CommuManagerInstace.StartAroundMeService();

                    }
                });

                mButton_CancelScan.setOnClickListener
                        (new View.OnClickListener()
                {

                    @Override
                    public void onClick(View arg0) {
                        mDIY_CommuManagerInstace.StopAroundMeService();

                    }

                });


                mButton_Pick.setOnClickListener(new View.OnClickListener()
                {
                    @Override
                    public void onClick(View arg0)
                        {
                            if(null!=mDIY_PassByManagerInstace)
                            {
                                mDIY_PassByManagerInstace.openImagePicker();
                            }
                        }
                });
            }

        }

        {
            mDIY_CommuManagerInstace=new DIY_CommuManager(this,getApplicationContext());
            mDIY_CommuManagerInstace.setCommuManagerReportSchema(this);


            mDIY_PassByManagerInstace=new DIY_PassByManager(this);
        }





        // wifi direct is not in use now, we are still discussing the usability of it
        {

        }

    }

    public void onDestroy()
    {

        super.onDestroy();
        mDIY_CommuManagerInstace.onDestroy();
    }

    protected void onResume()
    {
        super.onResume();
        if (null!=mDIY_CommuManagerInstace&&mDIY_CommuManagerInstace.mIsAroundMeServiceRunning)
        {
            mDIY_CommuManagerInstace.RequestMainUpdateNextFrame();
        }

    }

    @Override
    protected void onPause()
    {
        super.onPause();

        if (null!=mDIY_CommuManagerInstace&&mDIY_CommuManagerInstace.mIsAroundMeServiceRunning)
        {
            mDIY_CommuManagerInstace.StopMainUpdate();
        }

    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data)
    {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode == DIY_PermissionHelper.REQUEST_ENABLE_BT) {
            if (resultCode == Activity.RESULT_OK) {
                DIY_CommuUtils.PushToast(this, "✅ 蓝牙已开启");
            } else {
                DIY_CommuUtils.PushToast(this, "❌ 必须开启蓝牙才能使用 AroundMe");
                DIY_PermissionHelper.showEnableBluetoothDialog(this);
            }
        }
        mDIY_PassByManagerInstace.onActivityResult(requestCode, resultCode, data);
        if (requestCode == DIY_CommuUtils.REQUEST_OPEN_PIC && resultCode == Activity.RESULT_OK && data != null)
        {
            Uri selectedImage =mDIY_PassByManagerInstace.GetChosen_Uri();

            appendToLog("图片已选择：" + selectedImage.toString(), DIY_CommuUtils.LogLevel.INFO);
            Picked_imageView.setImageURI(selectedImage);
            //imageView.setImageURI(selectedImage);
            //nativeOnImageSelected(path);
        }
    }

    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
    {




      super.onRequestPermissionsResult(requestCode, permissions, grantResults);

        if (DIY_PermissionHelper.handlePermissionsResult(this, requestCode, permissions, grantResults))
        {

            mDIY_CommuManagerInstace.StartAroundMeService();
        }






    }

    @Override
    public void OnPostResetAroundMeBluetoothService()
    {
        DIY_CommuManagerReportSchema.super.OnPostResetAroundMeBluetoothService();

        mSp_deviceDisplayArrayList.clear();
        mRandom_deviceDisplayArrayList.clear();

        mRandom_deviceArrayAdapter.notifyDataSetChanged();
        mSp_deviceArrayAdapter.notifyDataSetChanged();
        mMacAddrCountView.setText(GetCurrentNumStatus());

    }

    @Override
    public void PostStopAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStopAroundMeService();
        appendToLog("BLE搜索结束...", DIY_CommuUtils.LogLevel.INFO);
        ToggleButtons();
    }

    @Override
    public void PostStartAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStartAroundMeService();
        ToggleButtons();

    }


    @Override
    public void PostMsgReceivedFromPDevice(String inText)
    {
        DIY_CommuManagerReportSchema.super.PostMsgReceivedFromPDevice(inText);
        // 🔄 如果当前不是调试模式（即游戏运行中），将消息回调给 UE 层
        // 🎁 简单的消息解析逻辑：
        // 如果消息以 "X" 或 "x" 开头，则认为是系统指令；
        // 否则认为是游戏中收到的“礼物物品ID”。
        if (inText.startsWith("X") || inText.startsWith("x"))
        {
            // TODO: 系统级指令处理
        }
        else
        {

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

        mMacAddrCountView.setText(GetCurrentNumStatus());
    }


    @Override
    public void OnSubmitInfoToUE5()
    {
        DIY_CommuManagerReportSchema.super.OnSubmitInfoToUE5();
        SubmitInfoToUE5();
    }

    @Override
    public void OnCallBack_BLEDeviceEncountered_GarbageName()
    {
    }
    @Override
    public void OnCallBack_NewBLEDeviceEncountered_WithName(String inText)
    {
        mSp_deviceArrayAdapter.notifyDataSetChanged();


    }


    @Override
    public void OnCallBack_OldBLEDeviceEncountered_WithName(String inText)
    {
        mSp_deviceArrayAdapter.notifyDataSetChanged();
    }
    @Override
    public void OnCallBack_NewClassicDeviceEncountered_WithName(String inText)
    {
        mRandom_deviceArrayAdapter.notifyDataSetChanged();

    }

    @Override
    public void OnCallBack_OldClassicDeviceEncountered_WithName(String inText)
    {
        mRandom_deviceArrayAdapter.notifyDataSetChanged();


    }

    @Override
    public void OnCallBack_ClassicDeviceEncountered_GarbageName()
    {
    }

    @Override
    public void onLogReport(String inText, DIY_CommuUtils.LogLevel level)
    {
        appendToLog(inText, level);

    }

    @Override
    public ArrayList<String> GetSp_deviceDisplayArrayList() {
        return mSp_deviceDisplayArrayList;
    }

    @Override
    public ArrayList<String> GetRandom_deviceDisplayArrayList() {
        return mRandom_deviceDisplayArrayList;
    }

    @Override
    public String GetInputMessage()
    {
        return mInputMessage.getText().toString();
    }

    // activity events end
}

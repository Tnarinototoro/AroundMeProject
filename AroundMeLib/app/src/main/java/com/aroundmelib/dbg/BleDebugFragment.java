package com.aroundmelib.dbg;


import android.graphics.Color;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.style.ForegroundColorSpan;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.aroundmelib.DIY_CommuManager;
import com.aroundmelib.DIY_CommuManagerReportSchema;
import com.aroundmelib.DIY_CommuUtils;
import com.aroundmelib.DIY_PassByManager;
import com.aroundmelib.MainActivity;
import com.aroundmelib.R;

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Locale;

public class BleDebugFragment extends Fragment implements DIY_CommuManagerReportSchema
{
    public ListView mSp_Device_listView;
    public ArrayAdapter<String> mSp_deviceArrayAdapter;
    public ArrayList<String> mSp_deviceDisplayArrayList;

    public ListView mRandom_Device_listView;
    public ArrayAdapter<String> mRandom_deviceArrayAdapter;
    public ArrayList<String> mRandom_deviceDisplayArrayList;

    public Button mButton_StartScan, mButton_CancelScan;
    public TextView mLogTextView;
    public TextView mMacAddrCountView;
    public ScrollView mLogScrollView;
    public EditText mInputMessage;

    public View mLog_button_divider, mUtility_DeviceList_divider;
    public LinearLayout mUtilityPanel, mDeviceListPanel, mBypassPanel;
    public LinearLayout mbuttonPanel, mlogPanel;




    private DIY_CommuManager GetDIY_CommuManagerInstance()
    {
        MainActivity Cur_Activity =
                (MainActivity)getActivity();

        if(null!=Cur_Activity)
        {
            return Cur_Activity.getDIY_CommuManagerInstace();
        }

        return null;
    }

    public boolean mLogViewautoScroll = true;

    public BleDebugFragment() {}
    public void appendToLog(String text, DIY_CommuUtils.LogLevel level)
    {
        getActivity().runOnUiThread(() -> {
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
    public void ToggleButtons() {
        if (mButton_CancelScan != null && mButton_StartScan != null) {

            mButton_StartScan.setEnabled(!mButton_StartScan.isEnabled());
            mButton_CancelScan.setEnabled(!mButton_CancelScan.isEnabled());
        }
    }

    private void scrollToBottom() {
        mLogScrollView.post(() -> mLogScrollView.fullScroll(View.FOCUS_DOWN));
    }
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        return inflater.inflate(R.layout.frag_debug_ble, container, false);
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState)
    {
        super.onViewCreated(view, savedInstanceState);



        // sp device list view init
        {
            // device array list\adaptor init
            mSp_deviceDisplayArrayList = new ArrayList<>();


            mSp_deviceArrayAdapter = new ArrayAdapter<>(getContext(), android.R.layout.simple_list_item_1,
                    mSp_deviceDisplayArrayList);

            // list view set the adaptor and view
            mSp_Device_listView = view.findViewById(R.id.sp_device_list);
            mSp_Device_listView.setAdapter(mSp_deviceArrayAdapter);

        }

        // random device list view init
        {
            // device array list\adaptor init
            mRandom_deviceDisplayArrayList = new ArrayList<>();

            mRandom_deviceArrayAdapter = new ArrayAdapter<>(getContext(), android.R.layout.simple_list_item_1,
                    mRandom_deviceDisplayArrayList);
            // list view set the adaptor and view
            mRandom_Device_listView = view.findViewById(R.id.random_device_list);
            mRandom_Device_listView.setAdapter(mRandom_deviceArrayAdapter);

        }

        //ui init
        {
            // text and button binding
            mButton_StartScan = view.findViewById(R.id.button_start);
            mButton_CancelScan = view.findViewById(R.id.button_stop);

            mButton_StartScan.setEnabled(true);
            mButton_CancelScan.setEnabled(false);


            mLogTextView = view.findViewById(R.id.log_text_view);
            mLogScrollView = view.findViewById(R.id.log_scroll_view);
            mInputMessage = view.findViewById(R.id.input_message);
            mMacAddrCountView = view.findViewById(R.id.Mac_Addr_Count);
            mLog_button_divider = view.findViewById(R.id.divider);
            mUtility_DeviceList_divider = view.findViewById(R.id.divider_y);

            mBypassPanel= view.findViewById(R.id.bypass_panel);;

            mbuttonPanel = view.findViewById(R.id.button_panel);
            mlogPanel = view.findViewById(R.id.log_panel);

            mUtilityPanel = view.findViewById(R.id.utility_panel);
            mDeviceListPanel = view.findViewById(R.id.Device_list_panel);
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

                            // 防止拖到 panel 消失
                            if (newTopPanelHeight < 100) newTopPanelHeight = 100;
                            if (newBottomPanelHeight < 100) newBottomPanelHeight = 100;

                            LinearLayout.LayoutParams topParams =
                                    (LinearLayout.LayoutParams) mUtilityPanel.getLayoutParams();
                            topParams.height = newTopPanelHeight;
                            mUtilityPanel.setLayoutParams(topParams);

                            LinearLayout.LayoutParams bottomParams =
                                    (LinearLayout.LayoutParams) mDeviceListPanel.getLayoutParams();
                            bottomParams.height = newBottomPanelHeight;
                            mDeviceListPanel.setLayoutParams(bottomParams);

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
                public void onClick(View arg0)
                {
                    DIY_CommuManager Cur_DIY_CommuManager =GetDIY_CommuManagerInstance();
                    if(null!=Cur_DIY_CommuManager)
                    {
                        Cur_DIY_CommuManager.StartAroundMeService();
                    }

                }
            });

            mButton_CancelScan.setOnClickListener
                    (new View.OnClickListener()
                    {

                        @Override
                        public void onClick(View arg0)
                        {
                            DIY_CommuManager Cur_DIY_CommuManager =GetDIY_CommuManagerInstance();
                            if(null!=Cur_DIY_CommuManager)
                            {
                                Cur_DIY_CommuManager.StopAroundMeService();
                            }

                        }

                    });




        }


    }




    //Interfaces!!!!

    @Override
    public void OnPostResetAroundMeBluetoothService()
    {
        DIY_CommuManagerReportSchema.super.OnPostResetAroundMeBluetoothService();


        mSp_deviceDisplayArrayList.clear();
        mRandom_deviceDisplayArrayList.clear();

        mRandom_deviceArrayAdapter.notifyDataSetChanged();
        mSp_deviceArrayAdapter.notifyDataSetChanged();

        DIY_CommuManager Cur_DIY_CommuManager =GetDIY_CommuManagerInstance();
        if(null!=Cur_DIY_CommuManager)
        {
            mMacAddrCountView.setText(Cur_DIY_CommuManager.GetCurrentNumStatus());
        }



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


        DIY_CommuManager Cur_DIY_CommuManager =GetDIY_CommuManagerInstance();
        if(null!=Cur_DIY_CommuManager)
        {
            mMacAddrCountView.setText(Cur_DIY_CommuManager.GetCurrentNumStatus());
        }

    }


    @Override
    public void OnSubmitInfoToUE5()
    {
        DIY_CommuManagerReportSchema.super.OnSubmitInfoToUE5();

        DIY_CommuManager Cur_DIY_CommuManager =GetDIY_CommuManagerInstance();
        if(null!=Cur_DIY_CommuManager)
        {
            appendToLog("SubmitInfoToUE5 once"+ Cur_DIY_CommuManager.GetCurrentNumStatus(), DIY_CommuUtils.LogLevel.INFO);
        }

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
    public void onBLELogReport(String inText, DIY_CommuUtils.LogLevel level)
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

}

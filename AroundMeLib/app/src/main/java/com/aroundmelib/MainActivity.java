
package com.aroundmelib;


import android.Manifest;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.Intent;
import android.graphics.Color;
import android.net.Uri;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.style.ForegroundColorSpan;
import android.view.View;
import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.viewpager2.adapter.FragmentStateAdapter;
import androidx.viewpager2.widget.ViewPager2;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Locale;
import com.aroundmelib.DIY_CommuManagerReportSchema;
import com.aroundmelib.dbg.BleDebugFragment;
import com.aroundmelib.dbg.WifiDirectDebugFragment;
import com.google.android.material.tabs.TabLayout;
import com.google.android.material.tabs.TabLayoutMediator;


@SuppressLint("MissingPermission")
public class MainActivity extends AppCompatActivity implements DIY_CommuManagerReportSchema
{

    // Debug ui part starts ----------------------------------------------------------------------

    private TabLayout tabLayout;
    private ViewPager2 viewPager;


    private BleDebugFragment bleFragment=null;
    private WifiDirectDebugFragment wifiFragment=null;
    // Debug ui part ends----------------------------------------------------------------------

    private String GetCurrentNumStatus()
    {
        return String.format("Name:%d, Null:%d, User:%d",
                mDIY_CommuManagerInstace.mDeviceCountEncountered_WithName_Latest,
                mDIY_CommuManagerInstace.mDeviceCountEncountered_WithGarbageName_Latest,
                mDIY_CommuManagerInstace.mDIYGameUserEncountered_WithName_Latest);
    }


    private DIY_CommuManager mDIY_CommuManagerInstace=null;


    private DIY_PassByManager mDIY_PassByManagerInstace=null;

    public DIY_CommuManager getDIY_CommuManagerInstace()
    {
        return mDIY_CommuManagerInstace;
    }

    public DIY_PassByManager getDIY_PassByManagerInstace()
    {
        return mDIY_PassByManagerInstace;
    }




    private void appendToLog(String text, DIY_CommuUtils.LogLevel level)
    {
        if(bleFragment!=null)
        {
            bleFragment.appendToLog(text, level);
        }
    }

    private void SubmitInfoToUE5()
    {
        if(bleFragment!=null)
        {
            bleFragment.appendToLog("SubmitInfoToUE5 once"+ GetCurrentNumStatus(), DIY_CommuUtils.LogLevel.INFO);
        }


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

            //lay out setting!
            {
                tabLayout = findViewById(R.id.tab_layout);
                viewPager = findViewById(R.id.view_pager);

                bleFragment = new BleDebugFragment();
                wifiFragment = new WifiDirectDebugFragment();
                viewPager.setAdapter(new FragmentStateAdapter(this) {
                    @NonNull
                    @Override
                    public Fragment createFragment(int position)
                    {
                        if (position == 0) return bleFragment;
                        else return wifiFragment;
                    }

                    @Override
                    public int getItemCount() {
                        return 2;
                    }
                });

                new TabLayoutMediator(tabLayout, viewPager,
                        (tab, position) -> tab.setText(position == 0 ? "BLE Debug" : "WiFi Direct"))
                        .attach();

            }



        }

        {
            mDIY_CommuManagerInstace=new DIY_CommuManager(this,getApplicationContext());
            mDIY_CommuManagerInstace.setCommuManagerReportSchema(this);


            mDIY_PassByManagerInstace=new DIY_PassByManager(this);
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
            wifiFragment.Picked_imageView.setImageURI(selectedImage);

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


        bleFragment.mSp_deviceDisplayArrayList.clear();
        bleFragment.mRandom_deviceDisplayArrayList.clear();

        bleFragment.mRandom_deviceArrayAdapter.notifyDataSetChanged();
        bleFragment.mSp_deviceArrayAdapter.notifyDataSetChanged();
        bleFragment.mMacAddrCountView.setText(GetCurrentNumStatus());

    }

    @Override
    public void PostStopAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStopAroundMeService();
        appendToLog("BLE搜索结束...", DIY_CommuUtils.LogLevel.INFO);
        bleFragment.ToggleButtons();
    }

    @Override
    public void PostStartAroundMeService()
    {
        DIY_CommuManagerReportSchema.super.PostStartAroundMeService();
        bleFragment.ToggleButtons();

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

        bleFragment.mMacAddrCountView.setText(GetCurrentNumStatus());
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
        bleFragment.mSp_deviceArrayAdapter.notifyDataSetChanged();


    }


    @Override
    public void OnCallBack_OldBLEDeviceEncountered_WithName(String inText)
    {
        bleFragment.mSp_deviceArrayAdapter.notifyDataSetChanged();
    }
    @Override
    public void OnCallBack_NewClassicDeviceEncountered_WithName(String inText)
    {
        bleFragment.mRandom_deviceArrayAdapter.notifyDataSetChanged();

    }

    @Override
    public void OnCallBack_OldClassicDeviceEncountered_WithName(String inText)
    {
        bleFragment.mRandom_deviceArrayAdapter.notifyDataSetChanged();


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
        return bleFragment.mSp_deviceDisplayArrayList;
    }

    @Override
    public ArrayList<String> GetRandom_deviceDisplayArrayList() {
        return bleFragment.mRandom_deviceDisplayArrayList;
    }

    @Override
    public String GetInputMessage()
    {
        return bleFragment.mInputMessage.getText().toString();
    }

    // activity events end
}

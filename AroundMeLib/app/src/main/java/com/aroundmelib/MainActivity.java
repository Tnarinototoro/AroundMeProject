package com.aroundmelib;


import android.Manifest;
import android.annotation.SuppressLint;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;


import com.example.com.aroundmelib.R;

import java.util.ArrayList;


public class MainActivity extends AppCompatActivity {

    //定义
    private static final int PERMISSION_REQUEST_FINE_LOCATION = 1;
    private static final int PERMISSION_REQUEST_BLUETOOTH = 2;
    private BluetoothAdapter mBluetoothAdapter;
    private TextView mText_State_info;
    private Button mButton_StartScan;
    private Button mButton_CancelScan;
    private ListView listView;
    private ArrayAdapter<String> deviceArrayAdapter;
    private ArrayList<String> deviceArrayList;


    private final ActivityResultLauncher<Intent> enableBluetoothLauncher =
            registerForActivityResult(new ActivityResultContracts.StartActivityForResult(),
                    result -> {
                        if (result.getResultCode() == RESULT_OK) {
                            mButton_StartScan.callOnClick();
                            Log.i("BluetoothStatus", "User enabled Bluetooth.");
                        } else {
                            Log.i("BluetoothStatus", "User declined to enable Bluetooth.");
                        }
                    });

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        //UI gadgets fixing
        {
            //layout setting
            setContentView(R.layout.activity_main);

            //device array list\adaptor init
            deviceArrayList = new ArrayList<>();
            deviceArrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, deviceArrayList);

            //list view set the adaptor and view
            listView = findViewById(R.id.device_list);
            listView.setAdapter(deviceArrayAdapter);

            //text and button binding
            mText_State_info = (TextView) this.findViewById(R.id.Text_State_info); //状态信息
            mButton_StartScan = (Button) this.findViewById(R.id.button_start_scan);
            mButton_CancelScan = (Button) this.findViewById(R.id.button_stop_scan);
        }

        checkBluetoothPermissions();
        checkLocationPermission();

        mBluetoothAdapter = BluetoothAdapter.getDefaultAdapter();

        IntentFilter filter_bluetooth_action_found = new IntentFilter(BluetoothDevice.ACTION_FOUND);
        registerReceiver(mReceiver, filter_bluetooth_action_found);
        IntentFilter filter_bluetooth_action_discovery_finished = new IntentFilter(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
        registerReceiver(mReceiver, filter_bluetooth_action_discovery_finished);

        mButton_StartScan.setOnClickListener(new View.OnClickListener() {

            @SuppressLint("MissingPermission")
            @Override
            public void onClick(View arg0) {

                if (!mBluetoothAdapter.isEnabled()) {


                    Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                    enableBluetoothLauncher.launch(enableBtIntent);


                } else {

                    mBluetoothAdapter.startDiscovery();
                    mText_State_info.setText("正在搜索ing...");
                }

            }


        });

        mButton_CancelScan.setOnClickListener(new View.OnClickListener() {

            @SuppressLint("MissingPermission")
            @Override
            public void onClick(View arg0) {



                if (mBluetoothAdapter.isEnabled() && mBluetoothAdapter.isDiscovering()&&checkBluetoothPermissions()) {
                    mBluetoothAdapter.cancelDiscovery();

                }

            }


        });

    }
    private boolean checkLocationPermission()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M)
        {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.ACCESS_FINE_LOCATION)
                    != PackageManager.PERMISSION_GRANTED) {
                ActivityCompat.requestPermissions(this,
                        new String[]{Manifest.permission.ACCESS_FINE_LOCATION},
                        PERMISSION_REQUEST_FINE_LOCATION);


                return false;
            }
        }

        return true;
    }
    private boolean checkBluetoothPermissions()
    {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S)
        {
            if (ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_SCAN)
                    != PackageManager.PERMISSION_GRANTED
                    || ContextCompat.checkSelfPermission(this, Manifest.permission.BLUETOOTH_CONNECT)
                    != PackageManager.PERMISSION_GRANTED)
            {
                ActivityCompat.requestPermissions(this, new String[]{
                                Manifest.permission.BLUETOOTH_SCAN,
                                Manifest.permission.BLUETOOTH_CONNECT},
                        PERMISSION_REQUEST_BLUETOOTH);
                return false;
            }
        }

        return true;
    }
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {

        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == PERMISSION_REQUEST_BLUETOOTH)
        {
            if (grantResults.length > 1
                    && grantResults[0] == PackageManager.PERMISSION_GRANTED
                    && grantResults[1] == PackageManager.PERMISSION_GRANTED)
            {
                Toast.makeText(this, "Bluetooth permissions granted", Toast.LENGTH_SHORT).show();
            }
            else
            {
                Toast.makeText(this, "Bluetooth permissions denied", Toast.LENGTH_SHORT).show();
                finish();
            }
        } else if (requestCode == PERMISSION_REQUEST_FINE_LOCATION)
        {
            if (grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                Toast.makeText(this, "Location permission granted", Toast.LENGTH_SHORT).show();
            }
            else
            {
                Toast.makeText(this, "Location permission denied", Toast.LENGTH_SHORT).show();
                finish();
            }
        }
    }
    public void onDestroy() {

        super.onDestroy();
        //解除注册
        unregisterReceiver(mReceiver);
        Log.e("destory","解除注册");
    }



    //定义广播接收
    private BroadcastReceiver mReceiver=new BroadcastReceiver(){



        @SuppressLint("MissingPermission")
        @Override
        public void onReceive(Context context, Intent intent) {

            String action=intent.getAction();


            if(action.equals(BluetoothDevice.ACTION_FOUND))
            {
                BluetoothDevice device=intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                String name=intent.getStringExtra(BluetoothDevice.EXTRA_NAME);
                if(name==null)
                {
                    name="unknown device";
                }
                Log.e("Device name is "+name, action);
                name+="@";


                String deviceAddress =name+device.getAddress();
                if (!deviceArrayList.contains(deviceAddress))
                {
                    deviceArrayList.add(deviceAddress);
                    deviceArrayAdapter.notifyDataSetChanged();
                }



                if(device.getBondState()==BluetoothDevice.BOND_BONDED)
                {    //显示已配对设备
                   // text.append("\n"+device.getName()+"==>"+device.getAddress()+"\n");
                }else if(device.getBondState()!=BluetoothDevice.BOND_BONDED)
                {
                    //text3.append("\n"+device.getName()+"==>"+device.getAddress()+"\n");
                }

            }else if(action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED))
            {
                mText_State_info.setText("搜索结束...");
            }

        }


    };

}

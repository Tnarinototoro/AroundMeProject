package com.aroundmelib;
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
import android.bluetooth.le.ScanRecord;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.os.Handler;
import android.os.ParcelUuid;
import android.util.SparseArray;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
        import java.util.List;
import java.util.Map;

public class DIY_CommuManager
{

    public static native void onDeviceFound(long callbackAddr, DIY_CommuDevice device);
    public static native void onAdvertisement(long callbackAddr, String deviceName, byte[] bytes);
    public static native void onScanError(String errorMessage);

    public BluetoothAdapter mBluetoothAdapter = null;
    public BluetoothManager mBluetoothManager=null;

    public boolean mIsAroundMeServiceRunning = false;

    public BluetoothLeScanner mBluetoothLeScanner=null;

    public BluetoothLeAdvertiser mBluetoothLeAdvertiser=null;

    public BluetoothGattServer mBluetoothGattServer=null;
    private Activity mActivity = null;
    private Context mContext=null;
    private Handler mHandler = new Handler();
    private ArrayList<Integer> mRequestedToGiveItems=new ArrayList<Integer>();


    private long mCallbackAddr = 0;
    private boolean mScanningForAdvertisements = false;

    private HashSet<String> mFoundDevices_old = new HashSet<String>();

    //temp to make it public
    public Map<String, DIY_CommuDevice> mFoundDevices = new HashMap<>();
    private DIY_CommuManagerReportSchema mReportSchema=null;

    private int mDeviceCountEncountered_WithName = 0;

    private int mDeviceCountEncountered_WithGarbageName = 0;

    private int mDIYGameUserEncountered_WithName = 0;

    public int mDeviceCountEncountered_WithName_Latest = 0;
    public int mDeviceCountEncountered_WithGarbageName_Latest = 0;

    public int mDIYGameUserEncountered_WithName_Latest = 0;
    public void RequestGiveAItemTask(int inItemID)
    {
        mRequestedToGiveItems.add(inItemID);
    }
    public void RequestMainUpdateNextFrame()
    {
        mHandler.post(MainUpdate); // Start sending messages
    }
    public void StopMainUpdate()
    {

        mHandler.removeCallbacks(MainUpdate); // Stop sending messages
    }
    public void setCommuManagerReportSchema(DIY_CommuManagerReportSchema inSchema)
    {
        mReportSchema = inSchema;
    }
    public int GetDeviceCountEncountered_WithName()
    {
        return mDeviceCountEncountered_WithName;
    }
    public int GetDeviceCountEncountered_WithGarbageName()
    {
        return mDeviceCountEncountered_WithGarbageName;
    }


    private void UpdateCounts()
    {

        mDeviceCountEncountered_WithName_Latest = Math.max(mDeviceCountEncountered_WithName_Latest, mDeviceCountEncountered_WithName);
        mDeviceCountEncountered_WithGarbageName_Latest =Math.max(mDeviceCountEncountered_WithGarbageName_Latest, mDeviceCountEncountered_WithGarbageName);
        mDIYGameUserEncountered_WithName_Latest =Math.max(mDIYGameUserEncountered_WithName_Latest, mDIYGameUserEncountered_WithName);
    }


    public String GetCurrentNumStatus()
    {
        return String.format("Name:%d, Null:%d, User:%d",
                mDeviceCountEncountered_WithName_Latest,
                mDeviceCountEncountered_WithGarbageName_Latest,
                mDIYGameUserEncountered_WithName_Latest);
    }

    @SuppressLint("MissingPermission")
    private void ResetAroundMeBluetoothServiceResults()
    {
        mDeviceCountEncountered_WithName = 0;
        mDeviceCountEncountered_WithGarbageName = 0;





        if (mFoundDevices != null)
        {
            for (String mac_addr : mFoundDevices.keySet())
            {
                BluetoothGatt gatt_got_now = mFoundDevices.get(mac_addr).mDeviceGatt;

                if (null != gatt_got_now)
                {

                    gatt_got_now.close();
                }
            }
            mFoundDevices.clear();
        }


        if(mReportSchema!= null)
        {
            mReportSchema.OnPostResetAroundMeBluetoothService();
        }

    }

    @SuppressLint("MissingPermission")
    public void stopClassicBluetoothDiscovery()
    {
        if (mBluetoothAdapter.isDiscovering())
        {
            mBluetoothAdapter.cancelDiscovery();
        }

    }


    private void appendToLog(String inText)
    {
        if(mReportSchema!=null)
        {
            mReportSchema.onBLELogReport(inText, DIY_CommuUtils.LogLevel.INFO);
        }
    }
    @SuppressLint("MissingPermission")
    public void startClassicBluetoothDiscovery()
    {
        if (!mBluetoothAdapter.isDiscovering())
        {
            mBluetoothAdapter.startDiscovery();

            if(mReportSchema!=null)
            {
                mReportSchema.onBLELogReport("经典蓝牙 搜索 开始~", DIY_CommuUtils.LogLevel.SUCCESS);
            }






        }

    }


    @SuppressLint("MissingPermission")
    private void StartBLE_DIYServiceScanning()
    {
        ScanFilter scanFilter = new ScanFilter.Builder()
                .setServiceUuid(new ParcelUuid(DIY_CommuUtils.mAroundMeIdentify_UUID))
                .build();

        ScanSettings scanSettings = new ScanSettings.Builder()
                .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                .build();

        mBluetoothLeScanner.startScan(Arrays.asList(scanFilter), scanSettings, mBLEScanCallback);


        appendToLog("BLE Scanning started!");
    }

    @SuppressLint("MissingPermission")
    private void StartBLE_DIYServiceBroadcast() {

        //Configure service server profile!
        {
            mBluetoothGattServer = mBluetoothManager.openGattServer(mContext, gattServerCallback);

            if (mBluetoothGattServer == null) {
                appendToLog("mBluetoothGattServer not started well");

            } else {
                appendToLog("mBluetoothGattServer started well");
            }

            BluetoothGattService service = new BluetoothGattService(DIY_CommuUtils.mAroundMeIdentify_UUID,
                    BluetoothGattService.SERVICE_TYPE_PRIMARY);

            BluetoothGattCharacteristic writeCharacteristic = new BluetoothGattCharacteristic(
                    DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID,
                    BluetoothGattCharacteristic.PROPERTY_NOTIFY |
                            BluetoothGattCharacteristic.PROPERTY_READ |
                            BluetoothGattCharacteristic.PROPERTY_WRITE,
                    BluetoothGattCharacteristic.PERMISSION_READ |
                            BluetoothGattCharacteristic.PERMISSION_WRITE |
                            BluetoothGattCharacteristic.PROPERTY_NOTIFY);

            service.addCharacteristic(writeCharacteristic);

            mBluetoothGattServer.addService(service);
        }


        //start actual advertise
        {
            AdvertiseSettings settings = new AdvertiseSettings.Builder()
                    .setAdvertiseMode(AdvertiseSettings.ADVERTISE_MODE_BALANCED)
                    .setConnectable(true)
                    .setTimeout(0)
                    .setTxPowerLevel(AdvertiseSettings.ADVERTISE_TX_POWER_LOW)
                    .build();

            AdvertiseData advdata = new AdvertiseData.Builder()
                    .setIncludeDeviceName(true)
                    .addServiceUuid(new ParcelUuid(DIY_CommuUtils.mAroundMeIdentify_UUID))
                    .build();
            mBluetoothLeAdvertiser.startAdvertising(settings, advdata, mAdvertiseCallback);
        }


    }


    //Center device uses this callback to handle scanning results, service is from p device
// BLE 扫描回调对象 —— 当 BLE 扫描到新设备或更新已有设备的信号强度时被系统调用
    private ScanCallback mBLEScanCallback = new ScanCallback()
    {
        @SuppressLint("MissingPermission")
        @Override
        public void onScanResult(int callbackType, ScanResult result)
        {
            super.onScanResult(callbackType, result);

            // 从扫描结果中获取设备对象（包含 MAC、名称、信号等信息）
            BluetoothDevice result_device = result.getDevice();
            String result_device_mac_addr = result_device.getAddress();

            // 如果设备有有效名称（过滤掉无效或空名称设备）
            if (result_device.getName() != null && !result_device.getName().equals("null"))
            {
                // ✅ 1. 设备有名字：表示是一个“有效设备”

                // 判断该设备是否已在已发现设备表中
                if (mFoundDevices.containsKey(result_device_mac_addr))
                {
                    // 🔁 已经发现过这个设备，属于“旧设备”
                    DIY_CommuDevice cur_player_info = mFoundDevices.get(result_device_mac_addr);

                    // 检查是否有效，且不是随机设备（即属于已注册玩家）
                    if (null != cur_player_info && !cur_player_info.misRandomDeivce)
                    {
                        // 获取信号强度 RSSI 并估算距离
                        int rssi = result.getRssi();
                        int txPower = -59; // 理论发射功率，需根据设备实际情况调整
                        double estimatedDistance_new = DIY_CommuUtils.calculateDistance(rssi, txPower);

                        // 更新设备距离信息
                        cur_player_info.mDistance = estimatedDistance_new;

                        // 更新 UI 或数据报告层
                        if (mReportSchema != null && mReportSchema.GetSp_deviceDisplayArrayList() != null)
                        {
                            // 更新显示字符串
                            mReportSchema.GetSp_deviceDisplayArrayList().set(
                                    cur_player_info.mIndex,
                                    cur_player_info.GenerateDisplayString()
                            );

                            // 通知回调层（例如 GameActivity）该设备再次被扫描到
                            mReportSchema.OnCallBack_OldBLEDeviceEncountered_WithName(cur_player_info.mDeviceName);
                        }
                    }
                }
                else
                {
                    // 🆕 第一次发现这个设备，属于“新设备”

                    // 尝试建立 GATT 连接（本机作为 Central）
                    @SuppressLint("MissingPermission")
                    BluetoothGatt got_gatt = result_device.connectGatt(mContext, false, mConnection_GattCallback);

                    if (got_gatt != null)
                    {
                        appendToLog("connected successfully");
                    }
                    else
                    {
                        appendToLog("connected failed!");
                    }

                    // 计算距离
                    int rssi = result.getRssi();
                    int txPower = -59;
                    double estimatedDistance = DIY_CommuUtils.calculateDistance(rssi, txPower);

                    // 构建一个新的设备信息对象
                    DIY_CommuDevice player_info = new DIY_CommuDevice(mActivity, result_device);
                    player_info.mDeviceGatt = got_gatt;                      // 保存连接句柄
                    player_info.mDeviceName = result_device.getName();       // 设备名称
                    player_info.misRandomDeivce = false;                     // 标记为有效设备
                    player_info.mDistance = estimatedDistance;               // 估算距离
                    player_info.mRegisteredPlayerDeviceMacAddr = result_device_mac_addr; // MAC地址

                    // 更新显示列表（UI 层）
                    if (mReportSchema != null && mReportSchema.GetSp_deviceDisplayArrayList() != null)
                    {
                        player_info.mIndex = mReportSchema.GetSp_deviceDisplayArrayList().size();
                        mReportSchema.GetSp_deviceDisplayArrayList().add(player_info.GenerateDisplayString());
                    }

                    // 存入全局设备表
                    mFoundDevices.put(result_device_mac_addr, player_info);


                    // 有效设备数量 +1
                    mDeviceCountEncountered_WithName++;
                    mDIYGameUserEncountered_WithName++;

                    // 通知回调层（如 GameActivity）
                    if (mReportSchema != null)
                    {
                        mReportSchema.OnCallBack_NewBLEDeviceEncountered_WithName(player_info.mDeviceName);
                    }
                }
            }
            else
            {
                // 🚫 设备无名称（可能是匿名广播、IoT设备或垃圾数据）

                mDeviceCountEncountered_WithGarbageName++;
                // 通知回调层更新统计
                if (mReportSchema != null)
                {
                    mReportSchema.OnCallBack_BLEDeviceEncountered_GarbageName();
                }
            }
        }

        @Override
        public void onScanFailed(int errorCode)
        {
            super.onScanFailed(errorCode);
            appendToLog("BLE Scan Started Failed! with error code: " + errorCode);

            // 🔥 扫描启动失败的处理（比如蓝牙被占用、未开启权限等）
            // errorCode 常见值：
            //  - 1: SCAN_FAILED_ALREADY_STARTED
            //  - 2: SCAN_FAILED_APPLICATION_REGISTRATION_FAILED
            //  - 3: SCAN_FAILED_INTERNAL_ERROR
            //  - 4: SCAN_FAILED_FEATURE_UNSUPPORTED
        }
    };


    //
    // GATT 回调对象 —— 由 Central（本机）在 connectGatt() 连接 Peripheral 后，用于接收连接与通信事件
    private BluetoothGattCallback mConnection_GattCallback = new BluetoothGattCallback()
    {
        // 📡 当连接状态发生变化时被调用（包括连接成功、断开等）
        @SuppressLint("MissingPermission")
        @Override
        public void onConnectionStateChange(BluetoothGatt gatt, int status, int newState)
        {
            // 如果成功连接到了 Peripheral（对方设备）
            if (newState == BluetoothProfile.STATE_CONNECTED)
            {
                appendToLog("connected with p-device:" +
                        gatt.getDevice().getName() + "@" +
                        gatt.getDevice().getAddress());

                // ✅ 开始发现对方设备提供的 GATT Service 列表
                // 这一步是 GATT 通信的关键，只有发现 Service 后才能访问 Characteristic
                gatt.discoverServices();
            }

            // ⚠️ 可选：如果 newState == STATE_DISCONNECTED，可以在此进行资源清理
        }

        // 🔍 当 Peripheral 的服务发现完成时被调用（discoverServices() 完成后）
        @SuppressLint("MissingPermission")
        @Override
        public void onServicesDiscovered(BluetoothGatt gatt, int status)
        {
            if (status == BluetoothGatt.GATT_SUCCESS)
            {
                // 获取 Peripheral 端的特定服务（用自定义 UUID 识别）
                BluetoothGattService service = gatt.getService(DIY_CommuUtils.mAroundMeIdentify_UUID);
                if (service != null)
                {
                    // 获取该服务下的特征（Characteristic）
                    BluetoothGattCharacteristic characteristic =
                            service.getCharacteristic(DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID);

                    if (characteristic != null)
                    {
                        // ✅ 启用特征通知（Notification）
                        // 允许对方主动推送数据（类似订阅）
                        gatt.setCharacteristicNotification(characteristic, true);

                        // 配置特征的描述符（Descriptor）以真正启用 Notify 功能
                        BluetoothGattDescriptor descriptor =
                                characteristic.getDescriptor(DIY_CommuUtils.CLIENT_CHARACTERISTIC_CONFIG_UUID);

                        if (descriptor != null)
                        {
                            // 设置为“启用通知”模式（即让对方可以主动推送）
                            descriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);

                            // 写入配置到远端设备
                            gatt.writeDescriptor(descriptor);
                        }
                    }
                }
            }
        }

        // 📖 当 Central 主动读取 Peripheral 的某个特征时，会在此回调返回结果
        @Override
        public void onCharacteristicRead(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic, int status)
        {
            if (status == BluetoothGatt.GATT_SUCCESS)
            {
                // 可在此获取 characteristic.getValue() 得到远程数据
                // 当前项目中暂未使用主动读特征的功能
            }
        }

        // 📩 当 Peripheral（外设）主动向 Central（本机）推送数据时被调用
        // 即特征值（Characteristic Value）发生变化时的通知（Notify/Indicate）
        @SuppressLint("MissingPermission")
        @Override
        public void onCharacteristicChanged(BluetoothGatt gatt, BluetoothGattCharacteristic characteristic)
        {
            // 从特征中取出字节数据并转换为字符串
            byte[] data = characteristic.getValue();
            String receivedString = new String(data, Charset.forName("UTF-8"));

            // 打印日志：显示是哪个设备发来的消息
            appendToLog("msg from p device:" +
                    gatt.getDevice().getName() + "@" +
                    gatt.getDevice().getAddress() +
                    "@mgs:" + receivedString);


            if(mReportSchema!=null)
            {
                mReportSchema.PostMsgReceivedFromPDevice(receivedString);
            }

        }
    };


    private final BluetoothGattServerCallback gattServerCallback = new BluetoothGattServerCallback() {

        // receive msg from c device
        @SuppressLint("MissingPermission")
        @Override
        public void onCharacteristicWriteRequest(
                BluetoothDevice device,                 // 发起写入请求的 Central 设备
                int requestId,                          // 本次请求的唯一 ID（用于 sendResponse 时对应回应）
                BluetoothGattCharacteristic characteristic, // 被写入的特征（Characteristic）
                boolean preparedWrite,                  // 是否是“分包写入”（长数据分段传输时为 true）
                boolean responseNeeded,                 // 对方是否需要我们回一个响应
                int offset,                             // 写入偏移位置（通常为 0）
                byte[] value)                           // Central 写入的实际数据
        {
            // 调用父类方法以确保系统内部状态同步（不是必须，但推荐保留）
            super.onCharacteristicWriteRequest(device, requestId, characteristic,
                    preparedWrite, responseNeeded, offset, value);

            // 判断当前被写入的 Characteristic 是否是我们定义的那个连接通道（mAroundMe_CONNECT_CHARACTERISTIC_UUID）
            // 同时确认发起设备的名字不是 "null"（防止系统返回空设备名）
            if (DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID.equals(characteristic.getUuid())
                    && device.getName() != "null")
            {
                // 向对方（Central）发送响应，告诉它这次写入成功了。
                // 如果不调用 sendResponse，对方可能会等待超时并报错。
                mBluetoothGattServer.sendResponse(device, requestId,
                        BluetoothGatt.GATT_SUCCESS,     // 表示成功
                        0,                              // 偏移，一般是 0
                        null);                          // 不需要额外返回数据

                // 将 Central 写入的字节数据转换为 UTF-8 字符串，方便调试打印
                String receivedData = new String(value, StandardCharsets.UTF_8);

                // 打印日志，用于调试和验证通信是否正常
                // 显示发送方设备名、MAC 地址、以及它发送的消息内容
                appendToLog("Received msg from c device: " +
                        device.getName() + "@" + device.getAddress() +
                        " msg:" + receivedData);

                if(mReportSchema!=null)
                {
                    mReportSchema.PostMsgReceivedFromCDevice(receivedData);
                }
            }
        }

        @SuppressLint("MissingPermission")
        @Override
        public void onCharacteristicReadRequest(
                BluetoothDevice device,                 // 发起读取请求的 Central 设备
                int requestId,                          // 本次请求的唯一 ID（用于 sendResponse 时匹配）
                int offset,                             // 读取偏移量（通常为 0）
                BluetoothGattCharacteristic characteristic // 被读取的特征（Characteristic）
        )
        {
            // 调用父类方法，保证 Android BLE 内部状态一致（推荐保留）
            super.onCharacteristicReadRequest(device, requestId, offset, characteristic);

            // Central 设备请求读取当前 Characteristic 的值时，
            // 我们通过 sendResponse 主动返回这个特征当前的值（characteristic.getValue()）。
            //
            // 如果不调用 sendResponse，Central 会一直等待结果并最终超时报错。
            //
            // 参数解释：
            //  - device：请求方设备
            //  - requestId：请求ID
            //  - BluetoothGatt.GATT_SUCCESS：状态码，表示成功
            //  - offset：读取偏移（通常为0）
            //  - characteristic.getValue()：返回当前特征的数据
            mBluetoothGattServer.sendResponse(
                    device,
                    requestId,
                    BluetoothGatt.GATT_SUCCESS,  // 表示读取成功
                    offset,                      // 偏移量（通常为0）
                    characteristic.getValue()    // 实际返回给 Central 的字节数据
            );
        }

        @SuppressLint("MissingPermission")
        @Override
        public void onConnectionStateChange(
                BluetoothDevice device,   // 发生状态变化的设备
                int status,               // 操作状态码（GATT_SUCCESS 或错误码）
                int newState              // 新的连接状态：STATE_CONNECTED / STATE_DISCONNECTED
        )
        {
            // 调用父类方法，保持 BLE 栈状态同步
            super.onConnectionStateChange(device, status, newState);

            // 当有设备连接上 GATT Server
            if (newState == BluetoothProfile.STATE_CONNECTED)
            {
                // 说明 Central 设备成功连接到当前设备（本机是 Peripheral）
                appendToLog("Connected with c-device: " + device.getName() + "@" + device.getAddress());

                // 如果这个设备之前已经在已连接列表中，就提示重复连接
                if (mFoundDevices.containsKey(device.getAddress()))
                {
                    appendToLog("Already connected with p-device: " + device.getName() + "@" + device.getAddress());
                }

                // 此处可以做一些连接建立后的初始化工作，比如：
                // - 保存该连接的 BluetoothDevice 对象
                // - 为其分配通信通道或资源
                // - 初始化数据交换逻辑
            }
            // 当连接断开时
            else if (newState == BluetoothProfile.STATE_DISCONNECTED)
            {
                // 打印断开日志
                appendToLog("Disconnected with c-device: " + device.getName() + "@" + device.getAddress());

                // 这里可以执行断开清理逻辑，比如：
                // - 移除设备引用
                // - 释放资源
                // - 通知上层逻辑设备已断开
            }
        }

    };

    // BLE 广播回调 —— 当调用 BluetoothLeAdvertiser.startAdvertising() 后，系统通过此回调反馈广播是否成功启动
    private AdvertiseCallback mAdvertiseCallback = new AdvertiseCallback()
    {
        // ✅ 广播启动成功时调用
        @Override
        public void onStartSuccess(AdvertiseSettings settingsInEffect)
        {
            super.onStartSuccess(settingsInEffect);

            // 广播启动成功，说明此设备现在正在以 Peripheral 角色
            // 向周围设备（Central）周期性发送 BLE 广播包
            // 广播包中可包含 deviceName、ServiceUUID 等标识信息。
            appendToLog("BLE BroadCast Started successfully");

            // 此时，周围的 Central（例如另一台手机）可通过扫描发现该设备。
            // 后续 Central 调用 connectGatt() 即可与此设备建立 GATT 连接。
        }

        // ❌ 广播启动失败时调用
        @Override
        public void onStartFailure(int errorCode)
        {
            super.onStartFailure(errorCode);

            // 打印错误码，方便排查
            appendToLog("BLE BroadCast Started Failed! with error code " + errorCode);

            // 常见的 errorCode 说明：
            // 1 → ADVERTISE_FAILED_DATA_TOO_LARGE
            //     广播数据太大（>31 bytes）
            //     ✅ 解决：删减广播内容，如 setIncludeDeviceName(false)
            //
            // 2 → ADVERTISE_FAILED_TOO_MANY_ADVERTISERS
            //     系统已达到最大同时广播数（Android 限制）
            //
            // 3 → ADVERTISE_FAILED_ALREADY_STARTED
            //     已经在广播中（重复启动）
            //
            // 4 → ADVERTISE_FAILED_INTERNAL_ERROR
            //     系统内部错误（驱动层或蓝牙堆栈异常）
            //
            // 5 → ADVERTISE_FAILED_FEATURE_UNSUPPORTED
            //     当前设备或系统版本不支持 BLE 广播

            // ⚠️ 广播失败可能导致设备无法被扫描发现，
            // 应在上层逻辑中进行重试或提示用户开启蓝牙、定位权限等。
        }
    };




    @SuppressLint("MissingPermission")
    public void StopAroundMeService()
    {


        if (DIY_PermissionHelper.ensureBluetoothEnabled(mActivity))
        {
            DIY_CommuUtils.PushToast(mActivity, "蓝牙可用，可以启动服务");
        }
        else
        {
            DIY_CommuUtils.PushToast(mActivity, "请开启蓝牙后再试");

            return;
        }


        // BLE process
        {
            if (mBluetoothLeAdvertiser != null && mAdvertiseCallback != null)
            {
                mBluetoothLeAdvertiser.stopAdvertising(mAdvertiseCallback);

                appendToLog("Stop BroadCasting your service");
            }

            if (mBluetoothLeScanner != null && mBLEScanCallback != null)
            {
                mBluetoothLeScanner.stopScan(mBLEScanCallback);
            }



            mBluetoothGattServer.close();


            UpdateCounts();


            ResetAroundMeBluetoothServiceResults();



        }

        // classic bluetooth process
        {

            stopClassicBluetoothDiscovery();

        }

        mHandler.removeCallbacks(MainUpdate);

        mIsAroundMeServiceRunning = false;


        if(mReportSchema!=null)
        {
            mReportSchema.PostStopAroundMeService();
        }

    }

    public void StartAroundMeService()
    {





        if (!DIY_PermissionHelper.ensureAllPermissions(mActivity))
        {
            return; // 等权限回调后再继续
        }

        if (DIY_PermissionHelper.ensureBluetoothEnabled(mActivity))
        {
            DIY_CommuUtils.PushToast(mActivity, "蓝牙可用，可以启动服务");
        }
        else
        {
            DIY_CommuUtils.PushToast(mActivity, "请开启蓝牙后再试");
        }


        ResetAroundMeBluetoothServiceResults();


        startClassicBluetoothDiscovery();



        StartBLE_DIYServiceBroadcast();

        StartBLE_DIYServiceScanning();





        mHandler.post(MainUpdate);

        mIsAroundMeServiceRunning = true;
        if(mReportSchema!=null)
        {
            mReportSchema.PostStartAroundMeService();
        }

    }





























    private Runnable MainUpdate = new Runnable()
    {


        @SuppressLint("MissingPermission")
        @Override
        public void run()
        {

            if (mBluetoothGattServer != null)
            {
                // Here, we simulate sending data as peripheral every 2 seconds.
                List<BluetoothDevice> connectedDevices = mBluetoothManager.getConnectedDevices(BluetoothProfile.GATT);
                for (BluetoothDevice device : connectedDevices)
                {
                    String messageToSend = "TestString";

                    if(mReportSchema!=null)
                    {
                        messageToSend=mReportSchema.GetInputMessage();
                    }
                    if(mRequestedToGiveItems.size()>0)
                    {
                        messageToSend=String.format("%d",mRequestedToGiveItems.get(mRequestedToGiveItems.size()-1));
                        mRequestedToGiveItems.remove(mRequestedToGiveItems.size()-1);

                        appendToLog(String.format("XXXXXXXX left gifts to give %d",mRequestedToGiveItems.size()));
                    }
                    BluetoothGattCharacteristic characteristic = mBluetoothGattServer
                            .getService(DIY_CommuUtils.mAroundMeIdentify_UUID)
                            .getCharacteristic(DIY_CommuUtils.mAroundMe_CONNECT_CHARACTERISTIC_UUID);
                    characteristic.setValue(messageToSend.getBytes(StandardCharsets.UTF_8));
                    mBluetoothGattServer.notifyCharacteristicChanged(device, characteristic, false);

                    appendToLog("msg sent to c device :" + device.getName() + "@" + device.getAddress()+"msg: "+messageToSend);

                }
            }

            if (mBluetoothAdapter.isEnabled())
            {


                if (mBluetoothAdapter.isDiscovering())
                {
                    appendToLog("经典蓝牙搜索设备ing");
                }
                else
                {
                    if(mReportSchema!=null)
                    {
                        mReportSchema.OnSubmitInfoToUE5();
                    }
                    startClassicBluetoothDiscovery();


                    UpdateCounts();
                    ResetAroundMeBluetoothServiceResults();

                }

            }

            mHandler.postDelayed(MainUpdate, 2000); // Schedule the next message in 2 seconds


            if(mReportSchema!=null)
            {
                mReportSchema.OnPostMainUpdate();
            }





        }
    };








    public void onDestroy()
    {
        mContext.unregisterReceiver(mClassicBluetoothReceiver);
    }
    private final BroadcastReceiver mClassicBluetoothReceiver = new BroadcastReceiver()
    {
        public void onReceive(Context context, Intent intent)
        {
            String action = intent.getAction();
            if (BluetoothDevice.ACTION_FOUND.equals(action))
            {
                BluetoothDevice device = intent.getParcelableExtra(BluetoothDevice.EXTRA_DEVICE);
                @SuppressLint("MissingPermission")
                String deviceName = device.getName();
                String deviceAddress = device.getAddress();


                //if good  name exists
                if (deviceName != null && !deviceName.equals("null"))
                {
                    if (!mFoundDevices.containsKey(deviceAddress))
                    {
                        short rssi = intent.getShortExtra(BluetoothDevice.EXTRA_RSSI, Short.MIN_VALUE);
                        double estimatedDistance = DIY_CommuUtils.calculateDistance(rssi);
                        DIY_CommuDevice player_info = new DIY_CommuDevice(mActivity,device);
                        player_info.mDeviceGatt = null;
                        player_info.mDeviceName = deviceName;
                        player_info.mRegisteredPlayerDeviceMacAddr = deviceAddress;
                        player_info.misRandomDeivce = true;
                        player_info.mDistance = estimatedDistance;
                        mFoundDevices.put(deviceAddress, player_info);




                        //if ui exists!
                        if(mReportSchema!=null)
                        {
                            if (mReportSchema.GetRandom_deviceDisplayArrayList() != null)
                            {
                                player_info.mIndex = mReportSchema.GetRandom_deviceDisplayArrayList().size();
                                mReportSchema.GetRandom_deviceDisplayArrayList().add(player_info.GenerateDisplayString());

                            }


                        }

                        //classic device with name
                        mDeviceCountEncountered_WithName++;

                        // OnNewMacAddressEncountered();

                        //if schema exists
                        if(mReportSchema!=null)
                        {
                            mReportSchema.OnCallBack_NewClassicDeviceEncountered_WithName(player_info.GenerateDisplayString());
                        }


                    }
                    else
                    {
                        DIY_CommuDevice cur_player_info = mFoundDevices.get(deviceAddress);

                        if (null != cur_player_info && cur_player_info.misRandomDeivce)
                        {
                            short rssi = intent.getShortExtra(BluetoothDevice.EXTRA_RSSI, Short.MIN_VALUE);
                            double estimatedDistance_new = DIY_CommuUtils.calculateDistance(rssi);
                            cur_player_info.mDistance = estimatedDistance_new;

                            //if ui exists
                            if(mReportSchema!=null&&mReportSchema.GetRandom_deviceDisplayArrayList()!=null)
                            {
                                mReportSchema.GetRandom_deviceDisplayArrayList().set(cur_player_info.mIndex,cur_player_info.GenerateDisplayString());
                                mReportSchema.OnCallBack_OldClassicDeviceEncountered_WithName(cur_player_info.GenerateDisplayString());

                            }

                        }
                    }
                }
                else
                {

                    mDeviceCountEncountered_WithGarbageName++;

                    if(mReportSchema!=null)
                    {
                        mReportSchema.OnCallBack_ClassicDeviceEncountered_GarbageName();
                    }

                }

            }
            else if (action.equals(BluetoothAdapter.ACTION_DISCOVERY_FINISHED))
            {
                if(mReportSchema!=null)
                {
                    mReportSchema.onBLELogReport("经典蓝牙 搜索结束",DIY_CommuUtils.LogLevel.SUCCESS);
                }
            }

        }
    };





    private ScanCallback mScanCallback = new ScanCallback() {
        @SuppressLint({"MissingPermission", "NewApi"})
        @Override
        public void onScanResult(int callbackType, final ScanResult result) {
            if (mScanningForAdvertisements) {
                ScanRecord record = result.getScanRecord();
                if (record != null) {
                    SparseArray<byte[]> manufacturerData = record.getManufacturerSpecificData();
                    for (int i = 0; i < manufacturerData.size(); i++) {
                        DIY_CommuUtils.log("Record found: " + record);
                        onAdvertisement(mCallbackAddr, record.getDeviceName(), manufacturerData.valueAt(i));
                    }
                }
            }
            else {
                BluetoothDevice device = result.getDevice();
                if (!mFoundDevices_old.contains(device.getAddress())) {
                    mFoundDevices_old.add(device.getAddress());
                    DIY_CommuUtils.log(String.format("Device found: %s, name: %s, alias: %s", device, device.getName(), device.getAlias()));
                    onDeviceFound(mCallbackAddr, new DIY_CommuDevice(mActivity, device));
                }
            }
        }
        @Override
        public void onScanFailed(int errorCode) {
            onScanError("Failed to start scan: " + errorCode);
        }
    };

    public DIY_CommuManager(Activity activity, long callbackAddr) {
        mActivity = activity;
        mCallbackAddr = callbackAddr;
    }
    public DIY_CommuManager(Activity activity, Context inContext) {
        mActivity = activity;

        mContext=inContext;



        // bluetooth utility init
        {
            mBluetoothManager = (BluetoothManager) mContext.getSystemService(Context.BLUETOOTH_SERVICE);
            mBluetoothAdapter = mBluetoothManager.getAdapter();

            mBluetoothLeScanner = mBluetoothAdapter.getBluetoothLeScanner();
            mBluetoothLeAdvertiser = mBluetoothAdapter.getBluetoothLeAdvertiser();
            if (mBluetoothLeAdvertiser == null)
            {
                if(null!=mReportSchema)
                {
                    mReportSchema.onBLELogReport("硬件不支持 BLE 广播",DIY_CommuUtils.LogLevel.ERROR);
                }


            }
            if (!mActivity.getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE))
            {
                if(null!=mReportSchema)
                {
                    mReportSchema.onBLELogReport("硬件不支持 BLE机能",DIY_CommuUtils.LogLevel.ERROR);
                }


            }
        }


        // classic bluetooth device finder intent setting
        {
            IntentFilter filter = new IntentFilter();
            filter.addAction(BluetoothDevice.ACTION_FOUND);
            filter.addAction(BluetoothAdapter.ACTION_DISCOVERY_FINISHED);
            mContext.registerReceiver(mClassicBluetoothReceiver, filter);
        }


    }
    public boolean isBleSupported() {
        return mActivity.getPackageManager().hasSystemFeature(PackageManager.FEATURE_BLUETOOTH_LE);
    }

    public boolean isBluetoothEnabled()
    {
        return mBluetoothAdapter != null && mBluetoothAdapter.isEnabled();
    }

    @SuppressLint("MissingPermission")
    public void setBluetoothState(boolean isEnabled) {
        if (mBluetoothAdapter == null) return;
        if (isEnabled)
        {
            mBluetoothAdapter.enable();
        }
        else
        {
            mBluetoothAdapter.disable();
        }
    }


    @SuppressLint("MissingPermission")
    public void startScanForDevices(String[] uuids) {
        if (mBluetoothAdapter == null) return;

        mScanningForAdvertisements = false;
        BluetoothLeScanner scanner =  mBluetoothAdapter.getBluetoothLeScanner();
        try {
            if (uuids.length == 0) {
                scanner.startScan(mScanCallback);
            } else {
                List<ScanFilter> filters = new ArrayList<>();
                for (String uuid : uuids) {
                    filters.add(new ScanFilter.Builder().setServiceUuid(ParcelUuid.fromString(uuid)).build());
                }

                ScanSettings settings = new ScanSettings.Builder().setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY).build();
                mFoundDevices.clear();
                scanner.startScan(filters, settings, mScanCallback);
            }
        }
        catch (Exception e) {
            onScanError("Failed to start scan: " +  e.toString());
        }
    }

    @SuppressLint("MissingPermission")
    public void startScanForAdvertisements(String[] nameFilters) {
        if (mBluetoothAdapter == null) return;
        mScanningForAdvertisements = true;
        BluetoothLeScanner scanner =  mBluetoothAdapter.getBluetoothLeScanner();
        try {
            if (nameFilters.length == 0) {
                scanner.startScan(mScanCallback);
            } else {
                List<ScanFilter> filters = new ArrayList<>();
                for (String nameFilter : nameFilters) {
                    filters.add(new ScanFilter.Builder().setDeviceName(nameFilter).build());
                }

                ScanSettings settings = new ScanSettings.Builder().setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY).build();
                scanner.startScan(filters, settings, mScanCallback);
            }
        }
        catch (Exception e) {
            onScanError("Failed to start scan: " +  e.toString());
        }
    }

    @SuppressLint("MissingPermission")
    public void stopScan() {
        if (mBluetoothAdapter == null) return;

        BluetoothLeScanner scanner =  mBluetoothAdapter.getBluetoothLeScanner();
        scanner.stopScan(mScanCallback);
    }

}

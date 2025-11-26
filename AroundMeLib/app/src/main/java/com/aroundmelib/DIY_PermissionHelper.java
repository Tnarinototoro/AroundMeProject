package com.aroundmelib;

import android.Manifest;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.AlertDialog;
import android.bluetooth.BluetoothAdapter;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import java.util.ArrayList;
import java.util.List;


@SuppressLint("MissingPermission")
public class DIY_PermissionHelper {

    private static final String TAG = "DIY_PermissionHelper";
    public static final int REQUEST_CODE_PERMISSIONS = 1001;
    public static final int REQUEST_ENABLE_BT = 2001; // 新增常量

    /** 检查并尝试启用蓝牙 */
    public static boolean ensureBluetoothEnabled(final Activity activity) {
        BluetoothAdapter adapter = BluetoothAdapter.getDefaultAdapter();

        if (adapter == null) {
            DIY_CommuUtils.PushToast(activity, "此设备不支持蓝牙功能");
            return false;
        }

        if (!adapter.isEnabled()) {
            Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            // ✅ 旧式兼容 GameActivity 的启动方式
            activity.startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);
            return false;
        }

        // 蓝牙已开启
        return true;
    }

    /** 当蓝牙未开启时弹窗提示 */
    public static void showEnableBluetoothDialog(final Activity activity) {
        new AlertDialog.Builder(activity)
                .setTitle("蓝牙未开启")
                .setMessage("AroundMe 需要蓝牙以搜索附近设备，请开启蓝牙后重试。")
                .setPositiveButton("开启蓝牙", (d, w) -> {
                    Intent enableBtIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                    activity.startActivityForResult(enableBtIntent, REQUEST_ENABLE_BT);
                })
                .setNegativeButton("取消", (d, w) -> d.dismiss())
                .show();
    }

    /** 根据当前系统版本，动态返回需要的权限清单 */
    public static String[] getRequiredPermissions() {
        List<String> perms = new ArrayList<>();

        // Android 13+ 通知需要运行时权限
        perms.add(Manifest.permission.POST_NOTIFICATIONS);
        perms.add(Manifest.permission.BLUETOOTH_SCAN);
        perms.add(Manifest.permission.BLUETOOTH_CONNECT);
        perms.add(Manifest.permission.BLUETOOTH_ADVERTISE);
        perms.add(Manifest.permission.ACCESS_FINE_LOCATION);
        perms.add(Manifest.permission.ACCESS_WIFI_STATE);
        perms.add(Manifest.permission.CHANGE_WIFI_STATE);

        perms.add(Manifest.permission.ACCESS_NETWORK_STATE);
        perms.add(Manifest.permission.CHANGE_NETWORK_STATE);
        perms.add(Manifest.permission.NEARBY_WIFI_DEVICES);



        return perms.toArray(new String[0]);
    }

    /** 检查并请求所有权限 */
    public static boolean ensureAllPermissions(Activity activity) {
        if (activity == null) return false;
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.M) return true;

        String[] required = getRequiredPermissions();
        List<String> missing = new ArrayList<>();
        for (String p : required) {
            if (ContextCompat.checkSelfPermission(activity, p) != PackageManager.PERMISSION_GRANTED) {
                missing.add(p);
            }
        }

        if (missing.isEmpty()) {
            Log.d(TAG, "✅ 所有权限已具备");
            return true;
        }

        ActivityCompat.requestPermissions(
                activity,
                missing.toArray(new String[0]),
                REQUEST_CODE_PERMISSIONS
        );
        return false;
    }

    /** 在 Activity.onRequestPermissionsResult 里调用 */
    public static boolean handlePermissionsResult(Activity activity,
                                                  int requestCode,
                                                  String[] permissions,
                                                  int[] grantResults) {
        if (requestCode != REQUEST_CODE_PERMISSIONS) return false;

        List<String> denied = new ArrayList<>();
        List<String> deniedAndDontAsk = new ArrayList<>();

        for (int i = 0; i < permissions.length; i++) {
            boolean granted = grantResults.length > i
                    && grantResults[i] == PackageManager.PERMISSION_GRANTED;
            if (!granted) {
                denied.add(permissions[i]);
                if (!ActivityCompat.shouldShowRequestPermissionRationale(activity, permissions[i])) {
                    deniedAndDontAsk.add(permissions[i]);
                }
            }
        }

        if (denied.isEmpty()) {
            Log.d(TAG, "✅ 用户授予了所有权限");
            return true;
        }

        if (!deniedAndDontAsk.isEmpty()) {
            DIY_CommuUtils.PushToast(activity, "部分权限被永久拒绝，请到设置中开启");
            showGoToSettingsDialog(activity);
            return false;
        }

        DIY_CommuUtils.PushToast(activity, "请授予必要权限以使用 AroundMe");
        return false;
    }

    private static void showGoToSettingsDialog(Activity activity) {
        new AlertDialog.Builder(activity)
                .setTitle("需要权限")
                .setMessage("请前往系统设置中手动开启蓝牙/定位/通知权限，否则功能无法使用。")
                .setPositiveButton("去设置", (d, w) -> openAppSettings(activity))
                .setNegativeButton("取消", (d, w) -> d.dismiss())
                .setCancelable(true)
                .show();
    }

    private static void openAppSettings(Activity activity) {
        try {
            Intent intent = new Intent(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
            intent.setData(Uri.fromParts("package", activity.getPackageName(), null));
            activity.startActivity(intent);
        } catch (Exception e) {
            Log.e(TAG, "无法打开设置页: " + e.getMessage());
        }
    }
}

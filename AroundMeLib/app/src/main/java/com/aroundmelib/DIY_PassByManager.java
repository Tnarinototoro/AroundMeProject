package com.aroundmelib;

import android.app.Activity;
import android.content.ContentUris;
import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.provider.DocumentsContract;
import android.provider.MediaStore;
import android.util.Log;

import java.io.File;

public class DIY_PassByManager
{
    private static final String TAG = "DIY_PassByManager";

    // JNI 回调（在 C++ 侧实现）
    private native void nativeOnImageSelected(String path);
    private Activity activity;
    private Uri Chosen_Uri;
    public DIY_PassByManager(Activity activity)
    {
        this.activity = activity;
    }

    public Uri GetChosen_Uri()
    {
        return Chosen_Uri;
    }

    // 从 Service 或 Activity 被调用以打开图片选择器
    public void openImagePicker()
    {

        if (activity == null) {
            Log.e(TAG, "openImagePicker: activity is null");
            return;
        }
        Intent intent = new Intent(Intent.ACTION_GET_CONTENT);
        intent.setType("image/*");
        activity.startActivityForResult(Intent.createChooser(intent, "Select Image"), DIY_CommuUtils.REQUEST_OPEN_PIC);
    }

    // 必须由持有的 Activity 的 onActivityResult 转发过来
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        if (requestCode != DIY_CommuUtils.REQUEST_OPEN_PIC) return;
        if (resultCode != Activity.RESULT_OK) return;
        if (data == null) return;

        Chosen_Uri = data.getData();
        if (Chosen_Uri == null) return;

        String path = getPathFromUri(activity, Chosen_Uri);
        if (path == null) {
            // 取不到物理路径时，可以先传 URI 字符串回去（UE端再处理），或实现流拷贝到缓存后传路径
            path = Chosen_Uri.toString();
        }
        Log.d(TAG, "Selected image path/uri: " + path);

        //nativeOnImageSelected(path);
    }


    public static String getPathFromUri(final Context context, final Uri uri) {
        // DocumentProvider
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT && DocumentsContract.isDocumentUri(context, uri)) {
            // ExternalStorageProvider
            if ("com.android.externalstorage.documents".equals(uri.getAuthority())) {
                final String docId = DocumentsContract.getDocumentId(uri);
                final String[] split = docId.split(":");
                final String type = split.length > 0 ? split[0] : null;
                if ("primary".equalsIgnoreCase(type)) {
                    return Environment.getExternalStorageDirectory() + "/" + split[1];
                }
            }
            // DownloadsProvider
            else if ("com.android.providers.downloads.documents".equals(uri.getAuthority())) {
                final String id = DocumentsContract.getDocumentId(uri);
                if (id != null && id.startsWith("raw:")) {
                    return id.replaceFirst("raw:", "");
                }
                try {
                    final Uri contentUri = ContentUris.withAppendedId(
                            Uri.parse("content://downloads/public_downloads"), Long.valueOf(id));
                    return queryColumn(context, contentUri, null, null);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            // MediaProvider
            else if ("com.android.providers.media.documents".equals(uri.getAuthority())) {
                final String docId = DocumentsContract.getDocumentId(uri);
                final String[] split = docId.split(":");
                final String type = split[0];
                Uri contentUri = null;
                if ("image".equals(type)) {
                    contentUri = MediaStore.Images.Media.EXTERNAL_CONTENT_URI;
                } else if ("video".equals(type)) {
                    contentUri = MediaStore.Video.Media.EXTERNAL_CONTENT_URI;
                } else if ("audio".equals(type)) {
                    contentUri = MediaStore.Audio.Media.EXTERNAL_CONTENT_URI;
                }
                final String selection = "_id=?";
                final String[] selectionArgs = new String[]{ split[1] };
                return queryColumn(context, contentUri, selection, selectionArgs);
            }
        }
        // MediaStore (and general)
        if ("content".equalsIgnoreCase(uri.getScheme())) {
            return queryColumn(context, uri, null, null);
        }
        // File
        if ("file".equalsIgnoreCase(uri.getScheme())) {
            return uri.getPath();
        }
        return null;
    }

    private static String queryColumn(Context context, Uri uri, String selection, String[] selectionArgs) {
        Cursor cursor = null;
        final String column = MediaStore.Images.Media.DATA;
        final String[] projection = { column };
        try {
            cursor = context.getContentResolver().query(uri, projection, selection, selectionArgs, null);
            if (cursor != null && cursor.moveToFirst()) {
                final int index = cursor.getColumnIndexOrThrow(column);
                return cursor.getString(index);
            }
        } catch (Exception e) {
            Log.w("DIY_PassByManager", "queryColumn failed: " + e.getMessage());
        } finally {
            if (cursor != null) cursor.close();
        }
        return null;
    }



    /** 初始化 WiFi Direct 连接模块 */
    public void initialize() {
        // TODO: 初始化 P2P 连接管理器、注册广播等
    }

    /** 发送文件（图片、音频等） */
    public void sendFile(File file) {
        // TODO: 建立 socket 连接并发送
    }

    /** 接收文件并保存 */
    public void startReceive() {
        // TODO: 开启 socket server 等待对方连接
    }

    /** 接收完成后的回调 */
    private void onFileReceived(File file) {
        // TODO: 通知 UI 或 DIY_Service 更新 ReceivedImageView
    }

    /** 清理资源 */
    public void release() {
        // TODO: 关闭 socket、注销广播
    }
}

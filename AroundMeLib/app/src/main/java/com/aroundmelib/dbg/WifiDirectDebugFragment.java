package com.aroundmelib.dbg;


import android.annotation.SuppressLint;
import android.net.wifi.p2p.WifiP2pDeviceList;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.ScrollView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.aroundmelib.DIY_CommuUtils;
import com.aroundmelib.DIY_PassByManager;
import com.aroundmelib.DIY_PassByManagerReportSchema;
import com.aroundmelib.MainActivity;
import com.aroundmelib.R;

import java.util.ArrayList;
import java.util.List;

public class WifiDirectDebugFragment extends Fragment implements DIY_PassByManagerReportSchema
{

    public WifiDirectDebugFragment()
    {
    }

    private Button mButton_Pick;
    private EditText mEditTcpPort;

    private TextView mWfdLogText;
    private ScrollView mWfdScroll;
    private HorizontalScrollView mWfdHScroll;
    public View mDeviceList_divider_y2;
    public ImageView Picked_imageView;
    public LinearLayout operationPanel;
    public LinearLayout bypassPanel;
    private Button mButtonScanPeers;
    private ListView mPeerListView;
    private ArrayAdapter<String> mPeerListAdapter;
    private ArrayList<String> mPeerDisplayList;




    DIY_PassByManager GetDIY_PassByManagerInstace()
    {
        MainActivity Cur_Activity =
                (MainActivity)getActivity();

        if(null!=Cur_Activity)
        {
            return Cur_Activity.getDIY_PassByManagerInstace();
        }

        return null;

    }

    @Override
    public void onResume()
    {
        super.onResume();

        DIY_PassByManager Cur_PassByManager = GetDIY_PassByManagerInstace();

        if(null!=Cur_PassByManager)
        {
            Cur_PassByManager.onResume();
        }

    }

    @Override
    public void onPause()
    {
        super.onPause();

        DIY_PassByManager Cur_PassByManager = GetDIY_PassByManagerInstace();

        if(null!=Cur_PassByManager)
        {
            Cur_PassByManager.onPause();
        }
    }


    @Override
    public void onDestroy()
    {
        super.onDestroy();
    }




    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        return inflater.inflate(R.layout.frag_debug_wfd, container, false);
    }

    public int getConfiguredPort() {
        int port = 8988;
        try {
            String s = mEditTcpPort.getText().toString().trim();
            if (!s.isEmpty()) port = Integer.parseInt(s);
        } catch (NumberFormatException ignored) {
        }
        return port;
    }

    public void appendWfdLog(String msg) {
        if (mWfdLogText == null) return;

        mWfdLogText.append("\n" + msg);

        mWfdScroll.post(() -> {
            mWfdScroll.fullScroll(View.FOCUS_DOWN);
        });
    }

    @SuppressLint("MissingPermission")
    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {

        super.onViewCreated(view, savedInstanceState);

        mButton_Pick = view.findViewById(R.id.button_pickpic);
        mDeviceList_divider_y2 = view.findViewById(R.id.divider_y2);
        Picked_imageView = view.findViewById(R.id.image_send);

        operationPanel = view.findViewById(R.id.Operation_Panel);
        bypassPanel = view.findViewById(R.id.bypass_panel);

        mEditTcpPort = view.findViewById(R.id.edit_tcp_port);
        mWfdLogText = view.findViewById(R.id.text_wfd_debug);
        mWfdScroll = view.findViewById(R.id.wfd_vertical_scroll);
        mWfdHScroll = view.findViewById(R.id.wfd_horizontal_scroll);
        mButtonScanPeers = view.findViewById(R.id.button_scan_peers);
        mPeerListView = view.findViewById(R.id.list_peers);

        mPeerDisplayList = new ArrayList<>();
        mPeerListAdapter = new ArrayAdapter<>(
                getActivity(),
                android.R.layout.simple_list_item_1,
                mPeerDisplayList
        );
        mPeerListView.setAdapter(mPeerListAdapter);

        mPeerListView.setOnItemClickListener((parent, view1, position, id) ->
        {

            DIY_PassByManager mgr = GetDIY_PassByManagerInstace();
            if (mgr == null) return;

            DIY_CommuUtils.DIY_WfdPeer peer = mgr.getPeerByIndex(position);
            if (peer == null) return;

            if (mgr.isConnected()
                    && peer.macAddress.equals(mgr.getConnectedDeviceMac()))
            {
                mgr.disconnect();
                return;
            }


            appendWfdLog("Try connect to: " + position);

            mgr.connectToPeer(peer.macAddress);
        });
        mButton_Pick.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {
                MainActivity Cur_Activity =
                        (MainActivity) getActivity();

                if (null != Cur_Activity.getDIY_PassByManagerInstace()) {
                    Cur_Activity.getDIY_PassByManagerInstace().openImagePicker();
                }
            }
        });

        mButtonScanPeers.setOnClickListener(v -> {
            appendWfdLog("Start discovering peers...");

            MainActivity Cur_Activity =
                    (MainActivity) getActivity();

            DIY_PassByManager Cur_PassByManager =
                    Cur_Activity.getDIY_PassByManagerInstace();
            Cur_PassByManager.StartScanningPeers();




        });


        mDeviceList_divider_y2.setOnTouchListener(new View.OnTouchListener() {
            float initialY;
            int initialTop, initialBottom;

            @Override
            public boolean onTouch(View v, MotionEvent event) {
                switch (event.getAction()) {

                    case MotionEvent.ACTION_DOWN:
                        initialY = event.getY();
                        initialTop = operationPanel.getHeight();
                        initialBottom = bypassPanel.getHeight();
                        return true;

                    case MotionEvent.ACTION_MOVE:
                        float deltaY = event.getY() - initialY;

                        int newTop = initialTop + (int) deltaY;
                        int newBottom = initialBottom - (int) deltaY;

                        if (newTop < 100) newTop = 100;
                        if (newBottom < 100) newBottom = 100;

                        LinearLayout.LayoutParams topParams =
                                (LinearLayout.LayoutParams) operationPanel.getLayoutParams();
                        topParams.height = newTop;
                        operationPanel.setLayoutParams(topParams);

                        LinearLayout.LayoutParams bottomParams =
                                (LinearLayout.LayoutParams) bypassPanel.getLayoutParams();
                        bottomParams.height = newBottom;
                        bypassPanel.setLayoutParams(bottomParams);
                        return true;
                }
                return false;
            }
        });



    }


    @Override
    public void onReportPeersInfo(WifiP2pDeviceList rawPeers, List<DIY_CommuUtils.DIY_WfdPeer> fullPeers)
    {
        mPeerDisplayList.clear();

        for (DIY_CommuUtils.DIY_WfdPeer p : fullPeers) {


            String text =
                    p.deviceName + (p.isConnected ? " [CONNECTED]" : "[NONE]") +
                            (p.isGroupOwner ? " [GO]" : "[NONE]") +
                            "\n" +
                            p.macAddress + "\n" +
                            "status=" + p.statusString();

            mPeerDisplayList.add(text);
        }

        mPeerListAdapter.notifyDataSetChanged();
        appendWfdLog("Peers: " + fullPeers.size());
    }

    @Override
    public void onWIFILogReport(String inText, DIY_CommuUtils.LogLevel inLogLevel)
    {
        DIY_PassByManagerReportSchema.super.onWIFILogReport(inText,inLogLevel);
        appendWfdLog(inText);
    }
}

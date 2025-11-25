package com.aroundmelib.dbg;


import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.aroundmelib.MainActivity;
import com.aroundmelib.R;

public class WifiDirectDebugFragment extends Fragment {

    public WifiDirectDebugFragment() {}
    private Button mButton_Pick;
    public View mDeviceList_divider_y2;
    public ImageView Picked_imageView;
    public LinearLayout operationPanel;
    public LinearLayout bypassPanel;
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState)
    {
        return inflater.inflate(R.layout.frag_debug_wfd, container, false);
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState)
    {

        super.onViewCreated(view, savedInstanceState);

        mButton_Pick = view.findViewById(R.id.button_pickpic);
        mDeviceList_divider_y2=view.findViewById(R.id.divider_y2);
        Picked_imageView=view.findViewById(R.id.image_send);

        operationPanel = view.findViewById(R.id.Operation_Panel);
        bypassPanel = view.findViewById(R.id.bypass_panel);
        mButton_Pick.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View arg0)
            {
                MainActivity Cur_Activity =
                        (MainActivity)getActivity();

                if(null!=Cur_Activity.getDIY_PassByManagerInstace())
                {
                    Cur_Activity.getDIY_PassByManagerInstace().openImagePicker();
                }
            }
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

}

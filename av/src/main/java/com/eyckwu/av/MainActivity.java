package com.eyckwu.av;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.eyckwu.liblame.LameMp3;

public class MainActivity extends AppCompatActivity {

    LameMp3 lameMp3;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = (TextView) findViewById(R.id.sample_text);
        lameMp3 = new LameMp3();
        tv.setText(lameMp3.getVersion());
    }
}

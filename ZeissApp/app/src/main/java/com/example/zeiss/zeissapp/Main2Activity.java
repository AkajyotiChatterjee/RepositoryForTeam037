package com.example.zeiss.zeissapp;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.webkit.WebView;


public class Main2Activity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        getSupportActionBar().hide();
        setContentView(R.layout.activity_main2);

        //String data = getIntent().getExtras().getString("key");
//        db.insertTemp(regId);

        WebView webview = findViewById(R.id.webview);
        webview.loadUrl("http://172.20.10.2");
      /*Cursor r= db.getData(1);
       TextView display=(TextView)findViewById(R.id.showData);
       String show= r.getString(r.getColumnIndex(DatabaseHandler.TEMP_READINGS_VALUE));
       display.setText(show);
   */

    }
}

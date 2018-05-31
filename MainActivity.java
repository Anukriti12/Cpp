package com.example.kunalfarmah.birthdaycard;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.Toast;

public class MainActivity extends Activity {



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ImageButton b1 = (ImageButton) findViewById(R.id.imageButton2);

        b1.setOnClickListener(new View.OnClickListener(){

            public void onClick(View v){
                Toast.makeText(getApplicationContext(),"Best Wishes From Kunal Farmah", Toast.LENGTH_LONG).show();
            }


    });



    }





}

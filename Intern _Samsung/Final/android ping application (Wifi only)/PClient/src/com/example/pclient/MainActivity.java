package com.example.pclient;



import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.NetworkInterface;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Enumeration;

import android.os.AsyncTask;
import android.os.Bundle;
import android.app.Activity;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends Activity {
 
 TextView textResponse;
 EditText editTextAddress, editTextPort; 
 Button buttonConnect, buttonClear;

 @Override
 protected void onCreate(Bundle savedInstanceState) {
  super.onCreate(savedInstanceState);
  setContentView(R.layout.activity_main);
  
  editTextAddress = (EditText)findViewById(R.id.address);
  editTextPort = (EditText)findViewById(R.id.port);
  buttonConnect = (Button)findViewById(R.id.connect);
  buttonClear = (Button)findViewById(R.id.clear);
  textResponse = (TextView)findViewById(R.id.response);
  
  buttonConnect.setOnClickListener(buttonConnectOnClickListener);
  
  buttonClear.setOnClickListener(new OnClickListener(){

   @Override
   public void onClick(View v) {
    textResponse.setText("");
   }});
 }
 
 OnClickListener buttonConnectOnClickListener = 
   new OnClickListener(){

    @Override
    public void onClick(View arg0) {
     MyClientTask myClientTask = new MyClientTask(
       editTextAddress.getText().toString(),
       Integer.parseInt(editTextPort.getText().toString()));
     myClientTask.execute();
    }
    };

 public class MyClientTask extends AsyncTask<Void, Void, Void> {
  
  String dstAddress;
  int dstPort;
  String response = "";
  
  MyClientTask(String addr, int port){
   dstAddress = addr;
   dstPort = port;
  }

  @Override
  protected Void doInBackground(Void... arg0) {
   
   Socket socket = null;
   //System.setProperty("java.net.preferIPv6Addresses", "true");
   try {
	InetAddress address6 = (InetAddress) InetAddress.getByName(dstAddress);
    //few changes
//	socket = new Socket(dstAddress, dstPort);
	
	//response = "step 1 "+ address6.toString() + "\n Link Local: " + address6.isLinkLocalAddress()+"\n";
	if(address6.isLinkLocalAddress()){
	
	NetworkInterface nif = NetworkInterface.getByName("wlan0");
	Enumeration<InetAddress> nifAddresses = nif.getInetAddresses();

	socket = new Socket();//(address6, dstPort);
	response = response + "step 2 \n";
	socket.bind(new InetSocketAddress(nifAddresses.nextElement(), 0));
	response = response + "step 3 \n";
	socket.connect(new InetSocketAddress(address6, dstPort));
	}
	else{
		socket = new Socket(dstAddress, dstPort);
	}
	
    ByteArrayOutputStream byteArrayOutputStream = 
                  new ByteArrayOutputStream(1024);
    byte[] buffer = new byte[1024];
    
    int bytesRead;
    InputStream inputStream = socket.getInputStream();
    
    /*
     * notice:
     * inputStream.read() will block if no data return
     */
             while ((bytesRead = inputStream.read(buffer)) != -1){
                 byteArrayOutputStream.write(buffer, 0, bytesRead);
                 response += byteArrayOutputStream.toString("UTF-8");
             }

   } catch (UnknownHostException e) {
    // TODO Auto-generated catch block
    e.printStackTrace();
    response += "UnknownHostException: " + e.toString();
   } catch (IOException e) {
    // TODO Auto-generated catch block
    e.printStackTrace();
    response += "IOException: " + e.toString();
   }finally{
    if(socket != null){
     try {
      socket.close();
     } catch (IOException e) {
      // TODO Auto-generated catch block
      e.printStackTrace();
     }
    }
   }
   return null;
  }

  @Override
  protected void onPostExecute(Void result) {
   textResponse.setText(response);
   super.onPostExecute(result);
  }
  
 }

}
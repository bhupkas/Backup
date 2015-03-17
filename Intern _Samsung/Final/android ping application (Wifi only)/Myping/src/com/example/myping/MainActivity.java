package com.example.myping;

import java.io.IOException;
import java.io.OutputStream;
import java.io.PrintStream;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.NetworkInterface;
import java.net.ServerSocket;
import java.net.Socket;
import java.net.SocketException;
import java.util.Enumeration;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

 TextView info, infoip, msg;
 String message = "";
 ServerSocket serverSocket4,serverSocket6;

 @Override
 protected void onCreate(Bundle savedInstanceState) {
  super.onCreate(savedInstanceState);
  setContentView(R.layout.activity_main);
  info = (TextView) findViewById(R.id.info);
  infoip = (TextView) findViewById(R.id.infoip);
  msg = (TextView) findViewById(R.id.msg);
  
  infoip.setText(getIpAddress(6)); //for now 6

  Thread socketServerThread4 = new Thread(new SocketServerThread4());
  

  Thread socketServerThread6 = new Thread(new SocketServerThread6());
  socketServerThread6.start();
  socketServerThread4.start();
 }

 @Override
 protected void onDestroy() {
  super.onDestroy();

  if (serverSocket4 != null) {
   try {
    serverSocket4.close();
   } catch (IOException e) {
    // TODO Auto-generated catch block
    e.printStackTrace();
   }
  }
  if (serverSocket6 != null) {
	   try {
	    serverSocket6.close();
	   } catch (IOException e) {
	    // TODO Auto-generated catch block
	    e.printStackTrace();
	   }
	  }
 }

 private class SocketServerThread4 extends Thread {

  static final int SocketServerPORT = 8081;
  int count = 0;

  @Override
  public void run() {
   try {
  //  serverSocket = new ServerSocket(SocketServerPORT);
	   final Inet6Address address6 = (Inet6Address) Inet6Address.getByName(getIpAddress(6));//"fe80::212:36ff:fe70:bf08");
	   final Inet4Address address4 = (Inet4Address) Inet4Address.getByName(getIpAddress(4));//"192.168.43.174");
	   	   
	   serverSocket4 =  new ServerSocket(SocketServerPORT,10,address4);
	   	   
    MainActivity.this.runOnUiThread(new Runnable() {

     @Override
     public void run() {
      info.setText(info.getText() +  "\nI'm waiting here: "
        + serverSocket4.getLocalPort() +" " + address4.toString());
     }
    });

    while (true) {
     Socket socket = serverSocket4.accept();
     count++;
     message += "#" + count + " from " + socket.getInetAddress()
       + ":" + socket.getPort() + "\n";

     MainActivity.this.runOnUiThread(new Runnable() {

      @Override
      public void run() {
       msg.setText(message);
      }
     });

     SocketServerReplyThread socketServerReplyThread = new SocketServerReplyThread(
       socket, count);
     socketServerReplyThread.run();

    }
   } catch (IOException e) {
    // TODO Auto-generated catch block
    e.printStackTrace();
   }
  }

 }

 private class SocketServerThread6 extends Thread {

	  static final int SocketServerPORT = 8080;
	  int count = 0;

	  @Override
	  public void run() {
	   try {
	  //  serverSocket = new ServerSocket(SocketServerPORT);
		final   Inet6Address address6 = (Inet6Address) Inet6Address.getByName(getIpAddress(6));//"fe80::212:36ff:fe70:bf08");
		final   Inet4Address address4 = (Inet4Address) Inet4Address.getByName(getIpAddress(4));//"192.168.43.174");
		   	   
		   serverSocket6 =  new ServerSocket(SocketServerPORT,10,address6);
		   	   
	    MainActivity.this.runOnUiThread(new Runnable() {

	     @Override
	     public void run() {
	      info.setText(info.getText() +  "\nI'm waiting here: "
	        + serverSocket6.getLocalPort() +" " +address6);
	     }
	    });

	    while (true) {
	     Socket socket = serverSocket6.accept();
	     count++;
	     message += "#" + count + " from " + socket.getInetAddress()
	       + ":" + socket.getPort() + "\n";

	     MainActivity.this.runOnUiThread(new Runnable() {

	      @Override
	      public void run() {
	       msg.setText(message);
	      }
	     });

	     SocketServerReplyThread socketServerReplyThread = new SocketServerReplyThread(
	       socket, count);
	     socketServerReplyThread.run();

	    }
	   } catch (IOException e) {
	    // TODO Auto-generated catch block
	    e.printStackTrace();
	   }
	  }

	 }
 
 
 private class SocketServerReplyThread extends Thread {

  private Socket hostThreadSocket;
  int cnt;

  SocketServerReplyThread(Socket socket, int c) {
   hostThreadSocket = socket;
   cnt = c;
  }

  @Override
  public void run() {
   OutputStream outputStream;
   String msgReply = "Hello from Android, you are #" + cnt;

   try {
    outputStream = hostThreadSocket.getOutputStream();
             PrintStream printStream = new PrintStream(outputStream);
             printStream.print(msgReply);
             printStream.close();

    message += "replayed: " + msgReply + "\n";

    MainActivity.this.runOnUiThread(new Runnable() {

     @Override
     public void run() {
      msg.setText(message);
     }
    });

   } catch (IOException e) {
    // TODO Auto-generated catch block
    e.printStackTrace();
    message += "Something wrong! " + e.toString() + "\n";
   }

   MainActivity.this.runOnUiThread(new Runnable() {

    @Override
    public void run() {
     msg.setText(message);
    }
   });
  }

 }

 private String getIpAddress(int version) {
  String ip = "";
  try {
   Enumeration<NetworkInterface> enumNetworkInterfaces = NetworkInterface
     .getNetworkInterfaces();
   while (enumNetworkInterfaces.hasMoreElements()) {
    NetworkInterface networkInterface = enumNetworkInterfaces
      .nextElement();
    Enumeration<InetAddress> enumInetAddress = networkInterface
      .getInetAddresses();
    while (enumInetAddress.hasMoreElements()) {
     InetAddress inetAddress = enumInetAddress.nextElement();

     if (inetAddress.isLinkLocalAddress() && version==6){//isSiteLocalAddress()) {
      ip = inetAddress.getHostAddress();
     }
     if (inetAddress.isSiteLocalAddress() && version==4){
      ip = inetAddress.getHostAddress();
     }
     
    }

   }

  } catch (SocketException e) {
   // TODO Auto-generated catch block
   e.printStackTrace();
   ip += "Something Wrong! " + e.toString() + "\n";
  }

  return ip;
 }
}

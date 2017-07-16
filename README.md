
Android-BLE-to-Arduino
===================================

This code can be used to communicate with an Arduino and is based on sample code from Google and another githubber.

Google : http://developer.android.com/reference/android/app/Service.html

GitHub : https://developer.android.com/reference/android/bluetooth/BluetoothGatt.html

Introduction
------------

The easiest, least expensive way to add Bluetooth Low Energy communication capabilities to an Arduino is to use one of the HM-10 modules which are readily avaailable on Ebay.  These modules are great because they wrap all the BLE communication code in their firmware so on the Arduino side you're simply reading the serial port.  

Suppose you want to control an Arduino powered robot or a string of RGB LEDs from an Android device.  Define a simple serial protocal so that 'r' means turn right, 'l' means turn left or 'b' means turn the lights blue, 'g' means turn the lights green and so on.  Use the app to send the proper characters from Android and read the serial port in Arduino to get commands.  Remeber that there is a 20 character limit when sending data via BLE.  

Becuase this app is based on the Google sample of a chat program you will see in the attached screen shot the text imput interface with a "Send" button. That UI would work well for testing then you could add an interface with whatever buttons or controls you wish knowing that the lower level code to send commands is working.  


Images
-------------

<img src="screenshots/1-main.png" height="400" alt="Screenshot"/> <img src="screenshots/2-detail.png" height="400" alt="Screenshot"/> <img src="screenshots/arduino.png" height="400" alt="Screenshot"/> 

Setup
-------------

This project builds on my computer using Android Studio 2.3.1.  

The CC2541 chip on a HM-10 module runs at 3.3v.  The module on the photo allows 5v input, so the wiring is Arduino 5V => HM-10 5V, Arduino GND => HM-10 GND, Arduino RX => HM-10 TX (pink, green and yellow wires, respectivley, in the photo).  This setup only sends in oned direction, be aware that you probably want to do level shifting for two way communication.

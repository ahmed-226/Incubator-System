/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.13 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.15.01 or later version;
     - for iOS 1.12.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
//#define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT


// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600
#define REMOTEXY_WIFI_SSID "team11"
#define REMOTEXY_WIFI_PASSWORD ""
#define REMOTEXY_SERVER_PORT 6377


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 216 bytes
  { 255,0,0,18,0,209,0,19,0,0,0,0,31,1,106,200,1,1,16,0,
  67,14,21,63,18,77,2,26,2,67,14,54,63,18,77,2,26,2,67,14,
  88,63,18,77,2,26,2,129,19,9,51,9,64,36,84,101,109,112,101,114,
  97,116,117,114,101,0,129,26,43,36,9,64,36,72,117,109,105,100,105,116,
  121,0,129,23,77,43,9,64,36,72,101,97,114,116,32,82,97,116,101,0,
  129,81,24,10,13,64,36,67,217,146,0,129,82,55,12,16,64,36,37,0,
  129,81,94,15,7,64,36,66,80,77,0,70,20,147,22,22,16,26,94,0,
  129,49,152,49,12,64,36,74,97,117,110,100,105,99,101,0,129,21,109,51,
  9,64,36,79,120,121,103,101,110,32,108,101,118,101,108,0,129,84,124,11,
  14,64,36,37,0,70,20,174,22,22,16,26,36,0,129,55,178,35,13,64,
  36,65,108,97,114,109,0,67,15,121,63,18,77,2,26,2 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // output variables
  float temperature;
  float humidity;
  float heartRate;
  uint8_t jaundiceAlarm; // from 0 to 1
  uint8_t Emergency; // from 0 to 1
  float oxygenLevel;

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////



void setup() 
{
  RemoteXY_Init (); 
  
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}
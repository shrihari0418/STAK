
//------------BT-----------//
//#include<SoftwareSerial.h> // including bt pin library
//SoftwareSerial bt(10,11); // defining rx & tx


#include <BluetoothSerial.h>

// Define the Bluetooth serial object
BluetoothSerial bt;

/*
//----------LCD----------//
#include <Wire.h> 
#include <LiquidCrystal_I2C.h> // inlcuding lcd library

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display:  pin SCL- D22; pin SDA- D21
*/

//-----oled display-----//
#include <U8x8lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif

U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);   // OLEDs without Reset of the Display


//---------Humidity------//
#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 4

//---------Temperature---------//

float Temp();
float Humi();
float temp,humi;

//---------Moisture-------//
#define relay 25    // defining pin for pump
const int moisture = 14;  // moisture sensor at A1 pin
int Moist();             // defining moist function
float moist;
//void Pump();

//-----------pH-----------//

float pH = 33;
float Ph;
float PH();      // defining pH fun.

//-----------EC--------//
const int TDS = 32;
const float temperature = 25.0; // Temperature in degrees Celsius
const float scaleFactor = 1.45; // Calibration factor for TDS measurement
const float ecConversionFactor = 0.67; // Conversion factor for estimating EC from TDS
float tds,ec;
float TDS_();
float EC_(float);




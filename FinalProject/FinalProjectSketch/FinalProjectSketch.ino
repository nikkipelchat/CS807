
#include "SparkFunHTU21D.h" //Humidity sensor library
#include "SparkFunMPL3115A2.h" //Pressure sensor library


HTU21D myHumidity;
MPL3115A2 myPressure;

float humidity;
float pressure;

void setup() {
  // put your setup code here, to run once:

  
  //Initiate humidity sensor
  myHumidity.begin();
  
  //Initiate pressure sensor
  myPressure.begin();
  myPressure.setModeBarometer();
  myPressure.setOversampleRate(128);
  myPressure.enableEventFlags();
  myPressure.setModeActive();



  
}

void loop() {
  // put your main code here, to run repeatedly:

  getWeatherFromSensors();
  sendWeatherToImp();
}

void getWeatherFromSensors() {

  //Humidity
  humidity = myHumidity.readHumidity();

  //Pressure
  pressure = myPressure.readPressure();
  
}

void sendWeatherToImp() {
  
}


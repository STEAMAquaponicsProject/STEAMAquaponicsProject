// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to GPIO15
#define ONE_WIRE_BUS 7
// Setup a oneWire instance to communicate with a OneWire device
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

int x = 0;
int y = 0;

//DeviceAddress sensor3= { 0x28, 0xFF, 0xA0, 0x11, 0x33, 0x17, 0x3, 0x96 };

DeviceAddress sensor1 = { 0x28, 0x40, 0x39, 0xD5, 0x4F, 0x20, 0x1, 0x6D };
DeviceAddress sensor2 = { 0x28, 0x90, 0x13, 0xE7, 0x4C, 0x20, 0x1, 0x47 };

void setup(void){
  Serial.begin(115200);
  sensors.begin();
    pinMode(3, OUTPUT);
}

void loop(void){ 
  


  
  Serial.print("Requesting temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperatures
  Serial.println("DONE");
  
//  Serial.print("Sensor 1(*C): ");
 // Serial.print(sensors.getTempC(sensor1)); 
  Serial.print(" Sensor 1(*F): ");
  Serial.println(sensors.getTempF(sensor1)); 
 

 
//  Serial.print("Sensor 2(*C): ");
 // Serial.print(sensors.getTempC(sensor2)); 
  Serial.print(" Sensor 2(*F): ");
  Serial.println(sensors.getTempF(sensor2)); 

  if (sensors.getTempF(sensor1) > 85) {y = 1 ;Serial.println("WARNING top temperature high");
  digitalWrite(13, HIGH);   
  delay(1000);              
  digitalWrite(13, LOW);    
  delay(1000);}
  if (sensors.getTempF(sensor1) < 60) {y = 1 ;Serial.println("WARNING top temperature low");
  digitalWrite(13, HIGH);   
  delay(1000);              
  digitalWrite(13, LOW);    
  delay(1000);}

  if (sensors.getTempF(sensor2) > 85) {x = 1 ;Serial.println("WARNING bottom temperture high");
  digitalWrite(13, HIGH);   
  delay(1000);              
  digitalWrite(13, LOW);    
  delay(1000);}
  if (sensors.getTempF(sensor2) < 60) {x = 1 ;Serial.println("WARNING bottom temperature low");
  digitalWrite(13, HIGH);   
  delay(1000);              
  digitalWrite(13, LOW);    
  delay(1000);}
  
  delay(2000);

}

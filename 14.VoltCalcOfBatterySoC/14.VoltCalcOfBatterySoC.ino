#include <SPI.h>
#include <SD.h>
File myFile;

unsigned long runMillis;
int analogInput_vol = A0;
float vout = 0.0;
float vin = 0.0;
float R1 = 30000.0;   // Onboard resistor 1 value
float R2 = 7500.0;    // Onboard resistor 2 value
int svalue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(analogInput_vol, INPUT);

  // Setting up & Initializing SD Card
  Serial.println("Initializing SD Card...");
  if (!SD.begin(4)){
    Serial.println("Initializing failed!");
    while(1);
  }

  // Preparing SD card & file for writing
  SD.remove("log.txt");
  myFile = SD.open("log.txt", FILE_WRITE);
  // If File Successfully Opens, Write to File
  if (myFile){
    myFile.println("Voltage(V)\tRuntime");
    Serial.println("Voltage(V)\tRuntime");
  }
  else{
    Serial.println("Error with initializing SD Card.");
  }
  myFile.close();
  delay(1000);

//  // Preparing SD card & file for reading
//  myFile = SD.open("log.txt");
//  if (myFile) {
//    Serial.println("Reading from log.txt");
//
//    // Read from the file until there's nothing else in it:
//    while (myFile.available()) {
//      Serial.write(myFile.read());
//    }
//    // close the file:
//    myFile.close();
//  } else {
//    // if the file didn't open, print an error:
//    Serial.println("Error opening log.txt");
//  } // End Open File for Reading
}

void loop() {
  svalue = analogRead(analogInput_vol);   // This reads the value from the sensor
  vout = (svalue * 5.0) / 1024.0;
  vin = vout / (R2 / (R1 + R2));

  Serial.print(vin); Serial.print("\t\t");
  runMillis = millis(); Serial.print(runMillis);

  // Opening the file for writing
  myFile = SD.open("log.txt", FILE_WRITE);
  if (myFile) {
      myFile.print(vin); myFile.print("\t\t");
      myFile.println(runMillis);
      Serial.println("\t|\tData added/written to SD card");
  }
  myFile.close();

  delay(100);
}

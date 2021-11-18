#include <arduinoFFT.h> 
arduinoFFT FFT = arduinoFFT();
#include <SPI.h>
#include <SD.h>
File myFile;

unsigned long runMillis;
int analogInput_vol = A0;
float vout = 0.0;
float vin = 0.0;
float R1 = 100.0;    // Onboard resistor 1 value
float R2 = 100.0;    // Onboard resistor 2 value
int svalue = 0;
const int SAMPLING_FREQUENCY = 100;
const int windowsize = 128;
double vReal[windowsize];
double vImag[windowsize];

void setup() {
  Serial.begin(9600);
  pinMode(analogInput_vol, INPUT);
  //Serial.println("Freq\tRuntime");

  // Setting up & Initializing SD Card
  Serial.println("Initializing SD Card...");
  if (!SD.begin(4)){
    Serial.println("Initializing failed!");
    while(1);
  }
  SD.remove("log.txt");

  myFile = SD.open("log.txt", FILE_WRITE);
  // If File Successfully Opens, Write to File
  if (myFile){
    myFile.println("VoltageIn\tRuntime");
    Serial.println("VoltageIn\tRuntime");
  }
  else{
    Serial.println("Error with initializing SD Card.");
  }
  myFile.close();
}

void loop() {
  svalue = analogRead(analogInput_vol);   // This reads the value from the sensor
  vout = (svalue * 5.0) / 1024.0;
  vin = vout / (R2 / (R1 + R2));

  Serial.print(vin); Serial.print("\t");
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
  
//  for (int i = 0; i < windowsize; i++){
//    svalue = analogRead(analogInput_vol);   // This reads the value from the sensor
//    vout = (svalue * 5.0) / 1024.0;
//    vin = vout / (R2 / (R1 + R2));
//    vReal[i] = float(int(vin * 100)) / 100;
//    vImag[i] = 0;
//
//    delay(1000 / SAMPLING_FREQUENCY);
//  }
//
//  FFT.Compute(vReal, vImag, windowsize, FFT_FORWARD);
//  FFT.ComplexToMagnitude(vReal, vImag, windowsize);
//  double peak = FFT.MajorPeak(vReal, windowsize, SAMPLING_FREQUENCY);
//
//  Serial.print(peak);
//  Serial.print("\t");
//  runMillis = millis();
//  Serial.println(runMillis);
}

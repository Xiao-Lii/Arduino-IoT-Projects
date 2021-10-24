#include <Wire.h>
#include <SPI.h>
#include <SD.h>

File myFile;
const int MPU6050_addr = 0x68;
int16_t AccX, AccY, AccZ, Temp, GyroX, GyroY, GyroZ;
unsigned long runMillis;

void setup() {
  Wire.setClock(400000);
  Wire.begin();
  Wire.beginTransmission(MPU6050_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  Serial.begin(9600);
  delay(100);

  if(!SD.begin(4)){
    Serial.println("Initilization failed!");
    while(1);
  }
  Serial.println("Initialization done.");
  SD.remove("log.txt");

  myFile = SD.open("log.txt", FILE_WRITE);
  if (myFile){ //If File Successfully Opens, Write to File
  } else{
    Serial.println("Error opening file.");
  }
  myFile.close(); 
}

void loop() {
  Wire.beginTransmission(MPU6050_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU6050_addr, 14, true);
  AccX = Wire.read() << 8 | Wire.read();
  AccY = Wire.read() << 8 | Wire.read();
  AccZ = Wire.read() << 8 | Wire.read();
  Temp = Wire.read() << 8 | Wire.read();
  GyroX = Wire.read() << 8 | Wire.read();
  GyroY = Wire.read() << 8 | Wire.read();
  GyroZ = Wire.read() << 8 | Wire.read();
  Serial.print("AccX = "); Serial.print(AccX);
  Serial.print(" || AccY = "); Serial.print(AccY);
  Serial.print(" || AccZ = "); Serial.print(AccZ);
  Serial.print(" || GyroX = "); Serial.print(GyroX);
  Serial.print(" || GyroY = "); Serial.print(GyroY);
  Serial.print(" || GyroZ = "); Serial.print(GyroZ);
  //Serial.println();

  myFile = SD.open("log.txt", FILE_WRITE);
  if (myFile){ // If file is open, we can write to it
    myFile.print("AccX = "); myFile.print(AccX);
    myFile.print(" || AccY = "); myFile.print(AccY);
    myFile.print(" || AccZ = "); myFile.print(AccZ);
    myFile.print(" || GyroX = "); myFile.print(GyroX);
    myFile.print(" || GyroY = "); myFile.print(GyroY);
    myFile.print(" || GyroZ = "); myFile.print(GyroZ);
    myFile.println(runMillis);
    Serial.println(" || Writing line of data to SD card");
  }else{
    Serial.println("Error writing to file.");
  }
  myFile.close();

  delay(100);
  
//  // Opening the file for reading:
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

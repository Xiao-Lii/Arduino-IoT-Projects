#include <Wire.h>
#include <SPI.h>
#include <SD.h>

File myFile;
const int MPU6050_addr = 0x68;
int16_t AccX, AccY, AccZ, Temp, GyroX, GyroY, GyroZ, xxx;
unsigned long runMillis;

void setup() {
  // Set up the communication with the MPU6050_addr 
  Wire.setClock(400000);      // Set ClockFrequency to 400Kbps(fast mode)
  Wire.begin();               // Initiate the Wire Library to join the I2C bus as a master           
  Wire.beginTransmission(MPU6050_addr); // Begin transmission to MPU6050 as I2C slave
  Wire.write(0x6B);           // Write to our register for power management
  Wire.write(0);              // 0 = Wakes up the MPU-6050 
  Wire.endTransmission(true); // Ends slave device transmission & transmit bytes queued by write()
  Serial.begin(9600);         // Begin Serial Monitor
  delay(100);

  // Prepare our SD card
  if(!SD.begin(4)){
    Serial.println("Initilization failed!");
    while(1);
  }
  // Confirm SD initialization successful to serial monitor
  Serial.println("Initialization done.");
  SD.remove("log.txt");   // Remove any previous files w/ same file name

  // Prepare to create and open a file to write data to
  myFile = SD.open("log.txt", FILE_WRITE);
  if (myFile){ //If File Successfully Opens, Write to File
  } else{
    Serial.println("Error opening file.");
  }
  myFile.close(); 
}

void loop() {
  // Get data from MPU6050_addr in each loop
  Wire.beginTransmission(MPU6050_addr);     // Begin transmission to MPU6050 as I2C slave
  Wire.write(0x3B);                         // Write to register 0x3B 
  Wire.endTransmission(false);              // Restart Arduino but keep connection active
  Wire.requestFrom(MPU6050_addr, 14, true); // Request 14 registers
  
  // Two registers utilized per variable for reading and storing 
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
  Serial.print(" || Temp = "); Serial.print(Temp);
  Serial.print(" || GyroX = "); Serial.print(GyroX);
  Serial.print(" || GyroY = "); Serial.print(GyroY);
  Serial.print(" || GyroZ = "); Serial.print(GyroZ);  
  Serial.print(" || MPU6050 Address = 0x"); Serial.println(MPU6050_addr, HEX);

  myFile = SD.open("log.txt", FILE_WRITE);
  if (myFile){ // If file is open, we can write to it
    myFile.print("AccX = "); myFile.print(AccX);
    myFile.print(" || AccY = "); myFile.print(AccY);
    myFile.print(" || AccZ = "); myFile.print(AccZ);
    myFile.print(" || GyroX = "); myFile.print(GyroX);
    myFile.print(" || GyroY = "); myFile.print(GyroY);
    myFile.print(" || GyroZ = "); myFile.print(GyroZ);
    myFile.println(runMillis);
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

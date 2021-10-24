#include <SPI.h>
#include <SD.h>

File myFile;
int temppin = A0;
unsigned long runMillis;
float tempF;
double thermoresist; 

void setup() {
  Serial.begin(9600);
  pinMode(temppin, INPUT);

  Serial.print("Initializing SD Card...");
  if (!SD.begin(4)){
    Serial.println("Initializing failed!");
    while(1);
  }
  Serial.println("Initializing done...");
  SD.remove("log.txt");

  // Open a Single File
  myFile = SD.open("log.txt", FILE_WRITE);
  // If File Successfully Opens, Write to File
  if (myFile){
    myFile.println("Temp(c) \tResistance(0hm) \tRUNTIME");
    Serial.println("Temp(c) \tResistance(0hm) \tRUNTIME");
  }
  else{
    Serial.println("Error opening file.");
  }
  myFile.close();

}

void loop() {
  int reading = analogRead(temppin);
  double thermoresist = 100000.0 * ((1024.0 / reading - 1)); 
  double logofthermoresist = log(thermoresist);
  double tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * logofthermoresist * logofthermoresist)) * logofthermoresist);
  float tempC = tempK - 273.15;
  tempF = (tempC * 9.0)/5.0 + 32.0; 

  Serial.print(tempC);
  Serial.print("\t\t");
  Serial.print(thermoresist);
  Serial.print("\t\t");
  runMillis = micros();
  Serial.println(runMillis);

  // Opening the file for writing
  myFile = SD.open("log.txt", FILE_WRITE);
  if (myFile) {
      myFile.print(tempC);
      myFile.print("\t\t");
      myFile.print(thermoresist);
      myFile.print("\t\t");
      myFile.println(runMillis);
  }
  myFile.close();
  
  delay(100);
  //delayMicroseconds(1000); 

  /*
  // Opening the file for reading:
  myFile = SD.open("log.txt");
  if (myFile) {
    Serial.println("log.txt:");

    // read from the file until there's nothing else in it:
    while (myFile.available()) {
      Serial.write(myFile.read());
    }
    // close the file:
    myFile.close();
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening log.txt");
  } // End Open File for Reading
  */
}

// Variables for Recording Temp
int temppin = A0;
unsigned long runMillis;
double thermoresist;

// Variables for Recording Voltage
int analogInput_vol = A1;
float vout = 0.0;
float vin = 0.0;
float R1 = 30000.0;  // Onboard resistor 1 value
float R2 = 7500.0;   // Onboard resistor 2 value
int svalue = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Temp(C) Thermoresist Voltage ThermoresistorVolt Runtime");
  pinMode(analogInput_vol, INPUT);
  pinMode(temppin, INPUT);
}

void loop() {
  int reading = analogRead(temppin);
  double thermoresist = 100000.0 * ((1024.0 / reading - 1)); 
  double logofthermoresist = log(thermoresist);
  double tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * logofthermoresist * logofthermoresist)) * logofthermoresist);
  float tempC = tempK - 273.15;
  float tempF = (tempC * 9.0)/5.0 + 32.0; 
  float thermoresistorVolt = (5.0 - vin) * 100000 / vin;

  svalue = analogRead(analogInput_vol); // This reads the value from the sensor
  vout = (svalue * 5.0) / 1024.0;
  vin = vout / (R2 / (R1 + R2));

  Serial.print(tempF);
  Serial.print("\t");
  Serial.print(thermoresist);
  Serial.print("\t");
  Serial.print(vin);
  Serial.print("\t");
  Serial.print(thermoresistorVolt - 1300);
  Serial.print("\t");
  runMillis = micros();
  Serial.println(runMillis); 

  delay(1000);
}

int temppin = A0;
unsigned long runMillis;
float tempF;
double thermoresist; 

void setup() {
  Serial.begin(9600);
  pinMode(temppin, INPUT);
}

void loop() {
  int reading = analogRead(temppin);
  double thermoresist = 1000.0 * ((1024.0 / reading - 1)); 
  double logofthermoresist = log(thermoresist);
  double tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * logofthermoresist * logofthermoresist)) * logofthermoresist);
  float tempC = tempK - 273.15;
  tempF = (tempC * 9.0)/5.0 + 32.0; 

  Serial.print(tempC);
  Serial.print('\t');
  runMillis = micros();
  Serial.println(runMillis);

  delay(1000);
}

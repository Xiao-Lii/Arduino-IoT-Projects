unsigned long runMillis;
const int currentPin = A0;
float sensitivity = 0.1;
int adcValue = 0;
float offsetVoltage = 2.5;
double adcVoltage = 0;
double currentValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(currentPin, INPUT);
}

void loop() {
  adcValue = analogRead(currentPin);
  adcVoltage = (adcValue / 1024.0) * 5;
  currentValue = ((adcVoltage - offsetVoltage) / sensitivity);

  Serial.print(adcValue);
  Serial.print("\t");
  Serial.print(adcVoltage, 3);
  Serial.print("\t");
  Serial.print(currentValue, 3);
  Serial.print("\t");
  runMillis = millis();
  Serial.println(runMillis); 

  delay(1000);
}

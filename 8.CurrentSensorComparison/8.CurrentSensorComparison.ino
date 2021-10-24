unsigned long runMillis;
const int currentPin = A0;
const int voltPin = A1;
int resistance = 100;   // Our resistor value in Ohm 
float voltageOut = 0.0;
float voltageIn = 0.0;
float R1 = 30000.0;     // Onboard resistor 1 Value
float R2 = 7500.0;      // Onboard resistor 2 Value
int svalue = 0; 
float sensitivity = 0.1;
int adcValue = 0;
float offsetVoltage = 2.5;
double adcVoltage = 0;
double currentValue = 0;
double currentValue2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(currentPin, INPUT);
  pinMode(voltPin, INPUT);
  Serial.print("Current 1\tVoltageIn\tACS712 Current\tRuntime");
}

void loop() {
  adcValue = analogRead(currentPin);
  adcVoltage = (adcValue / 1024.0) * 5;
  currentValue = ((adcVoltage - offsetVoltage) / sensitivity);

  svalue = analogRead(voltPin); // This reads the value from the sensor
  voltageOut = (svalue * 5.0) / 1024.0;
  voltageIn = voltageOut / (R2 / (R1 + R2));
  currentValue2 = voltageIn / resistance;

  Serial.print(currentValue, 3);  // We'll experience noise for this value
  Serial.print("\t\t");
  Serial.print(voltageIn);
  Serial.print("\t\t");
  Serial.print(currentValue2, 3);
  Serial.print("\t\t");
  runMillis = millis();
  Serial.println(runMillis); 

  delay(1000);
}

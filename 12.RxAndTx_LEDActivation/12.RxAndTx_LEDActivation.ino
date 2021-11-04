int analogInput_vol = A0;
float vout = 0.0;
float vin = 0.0;
float R1 = 100.0;   // Onboard resistor 1 value
float R2 = 100.0;   // Onboard resistor 2 value
int svalue = 0;
int ledpin = 13;
int voltthresh = 2; 

void setup() {
  Serial.begin(9600);
  pinMode(analogInput_vol, INPUT);  // Get input from voltage sensor
  pinMode(ledpin, OUTPUT);          // Set digital pin 13 as output for ledpin 
  digitalWrite(ledpin, LOW);        // Toggle ledpin to stay off
}

void loop() {
  svalue = analogRead(analogInput_vol); // Reads the value from the sensor 
  vout = (svalue * 5.0) / 1024.0;       // Calculate the voltage out
  vin = vout / (R2 / (R1 + R2));        // Calculate the voltage coming in

  Serial.println(vin); // Print incoming voltage to Serial Monitor (verification purpose)

  // If Voltage In > Threshold, turn LED on
  if (vin > voltthresh) {
    digitalWrite(ledpin, HIGH);
  }else { // If Voltage In < Threshold, turn LED off
    digitalWrite(ledpin, LOW);
  }

  delay(100);     // Wait for 100ms 
}

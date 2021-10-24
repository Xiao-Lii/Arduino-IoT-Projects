int soundPin = 4;
int LEDPin = 2;
int LEDstate;

void setup() {
  Serial.begin(9600);   // Setup Serial
  pinMode(soundPin, INPUT);
  pinMode(LEDPin, INPUT);
  digitalWrite(LEDPin, LOW);
  LEDstate = 0;   // 0 = Off and 1 = On
}

void loop() {
  int tmp = digitalRead(soundPin);
  Serial.println(tmp);
  if(!tmp){
    if (LEDstate == 0){
      digitalWrite(LEDPin, HIGH);
      LEDstate = 1;
    } else {
      digitalWrite(LEDPin, LOW);
      LEDstate = 0;
    }
    delay(1000);
  } else{
    delay(1);
  }
}

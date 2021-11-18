int transistorpin = 7;
int freq = 1;        // We'll keep this less than <50 
int halfcycle = 1000 / freq / 2;
int delaytime = 100;

void setup() {
  Serial.begin(9600);
  pinMode(transistorpin , OUTPUT);
  digitalWrite(transistorpin, LOW);
}

void loop() {
  digitalWrite(transistorpin, HIGH);
  delay(halfcycle);
  digitalWrite(transistorpin, LOW);
  delay(halfcycle);
}

#include <LiquidCrystal.h>
#include <Wire.h>

// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int MPU6050_addr = 0x68;
int16_t gps;
unsigned long runMillis;
bool stepFlag;
int steps = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  Wire.setClock(400000);
  Wire.begin();
  stepFlag = false;
  Wire.beginTransmission(MPU6050_addr);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  delay(10000);
}

void loop() {
  lcd.clear();
  Wire.beginTransmission(MPU6050_addr);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU6050_addr, 14, true);
  gps = (Wire.read() << 8 | Wire.read());
  if (gps < 1){
    stepFlag = true;
  } else if (stepFlag == true && gps > 3){
    stepFlag = false;
    steps++;
    lcd.print("Steps: ");
    lcd.print(steps);
  }
  delay(100);
}

# Internet Of Things(IoT) Project Outline

A collection of Internet of Things(IoT) projects utilizing an arduino uno, jumpwires, thermoresistors, a breadboard, batteries, and various sensors to simulate hardware and software integration. Please refer to the outline below to see the hardware utilized and project goal/results. Your results may vary depending on your computer's hardware. 
#### To run the projects below you'll need:
  * Hardware components listed per project
  * Arduino's open-source IDE software (utilized v. 1.8.16)

## Project #1: Temperature Sensor
<b>Project Goal:</b> To record the temperature readings off the thermistor such as room temperature and more. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)

## Project #2: Validating Properties of Thermistors
<b>Project Goal:</b> By touching the thermistor, we want to record the relationship between temperature and the thermistor's resistance values. We should recognize a pattern between the two. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)

## Project #3: Storing Sensory Data to a SD Card
<b>Project Goal:</b> After recording 10 minutes worth of temperature readings from the thermistor, we'll want to store that data within an SD card. The file and data should be legible through a note reading program such as notepad. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)
  * [Micro SD Card w/ Adapater](https://www.amazon.com/Micro-Center-Class-Memory-Adapter/dp/B08C2G1J9M)
  * [Micro SD Card Reader](https://www.amazon.com/HiLetgo-Adater-Interface-Conversion-Arduino/dp/B07BJ2P6X6)

## Project #4: Recording Frequencies of an SD Card
<b>Project Goal:</b> By recording the thermistor's temperature and decreasing the output delay displayed to the serial monitor little by little - When we recognize there's no change to the runtimes despite the delay being decreased, we can determine the write frequency of our SD card. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)
  * [Micro SD Card w/ Adapater](https://www.amazon.com/Micro-Center-Class-Memory-Adapter/dp/B08C2G1J9M)
  * [Micro SD Card Reader](https://www.amazon.com/HiLetgo-Adater-Interface-Conversion-Arduino/dp/B07BJ2P6X6)

## Project #5: Voltage Sensor
<b>Project Goal:</b> By recording the thermistor's temperature, we can detect the voltage between the connection of the thermistor and our resistor through our voltage sensor. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)
  * [Voltage Sensor](https://www.amazon.com/HiLetgo-Voltage-Detection-Arduino-Electronic/dp/B01HTC4XKY)

## Project #6: Verifying Thermistor Resistance with the Thermistor Voltage 
<b>Project Goal:</b> After recording the thermistor's resistance from project 2, let's verify that these are accurate by utilizing the thermistor's voltage readings and utilizing an equation of where: 
<div align ="center">Resistance = ((5.0 - VoltageIn)/VoltageIn)) * Ohm of Resistor</div>

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)
  * [Voltage Sensor](https://www.amazon.com/HiLetgo-Voltage-Detection-Arduino-Electronic/dp/B01HTC4XKY)

## Project #7: Hall-Based Current Sensor 
<b>Project Goal:</b> We'll utilize a 100 Ohm resistor & apply 5V across it, checking to see if the raw current readings are stable and accurate. Physical separation between the sensing component and current is ideal for high-power applications. We'll see a lot of 'noise' as inaccurate readings and account for this by deducting the current readings when the board is powered on from the current readings when powered off over the same period of time and take an average of that. What we'll see is an average current reading around 0.05A which stands correct by(I = V/R):
<div align ="center">Current = 5V / 100 Ohm Resistor</div>

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [ACS712 Current Sensor](https://www.amazon.com/Electrical-Current-Sensor-Module-ACS712/dp/B01N010ZW6)

## Project #8: Current Readings through Sensor vs Voltage Sensor
<b>Project Goal:</b> We'll be comparing the different current readings between a voltage sensor and utilzing the current sensor and seeing how those values differ real time on the serial monitor. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Voltage Sensor](https://www.amazon.com/HiLetgo-Voltage-Detection-Arduino-Electronic/dp/B01HTC4XKY)
  * [ACS712 Current Sensor](https://www.amazon.com/Electrical-Current-Sensor-Module-ACS712/dp/B01N010ZW6)


## Project #9: LED Activation with Microphone
<b>Project Goal:</b> On our breadboard we'll attach microphone sensor and when it's triggered by noise in both a silent and busy room with background noise, we'll want an LED attached to our breadboard to light up.

https://user-images.githubusercontent.com/69813214/138616233-4219ceba-d9a8-434a-bf96-37855e75a831.mp4

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [LED Light Emitting Diode](https://www.amazon.com/eBoot-Pieces-Emitting-Diodes-Assorted/dp/B06XPV4CSH)
  * [Microphone Sensor](https://www.amazon.com/DAOKI-Sensitivity-Microphone-Detection-Arduino/dp/B00XT0PH10)

## Project #10: Recording Gyrosensor Data to SD Card
<b>Project Goal:</b> Utilizing a 3-axis accelerometer gyroscope sensor, we'll be able to detect changes in the user's position and save that data to a SD card. To allow portability with the arduino board, we'll utilize a 9V battery as the power source. 

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Micro SD Card w/ Adapater](https://www.amazon.com/Micro-Center-Class-Memory-Adapter/dp/B08C2G1J9M)
  * [Micro SD Card Reader](https://www.amazon.com/HiLetgo-Adater-Interface-Conversion-Arduino/dp/B07BJ2P6X6)
  * [3-Axis Accelerometer Gyroscope Module](https://www.amazon.com/HiLetgo-MPU-6050-Accelerometer-Gyroscope-Converter/dp/B00LP25V1A)
  * [9V Rechargeable Battery](https://www.amazon.com/AmazonBasics-Rechargeable-Batteries-200mAh-4-Pack/dp/B07PHCSNZ2)
  * [9V Battery Clip w/ Male Plug for Arduino](https://www.amazon.com/5pack-Battery-2-1mm-Arduino-Corpco/dp/B01AXIEDX8)

## Project #11: Step Counter
<b>Project Goal:</b> With our 3-axis accelerometer gyroscope sensor & 9V battery power source, we'll create a relatively-accurate step counter where each step is recorded based on our gyroscope sensor. This is to simulate a similar function that we see in many of our smart devices today. 

https://user-images.githubusercontent.com/69813214/138616241-e0b94706-3d5c-4fa4-9aa4-f15f63261f53.mp4

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)
  * [3-Axis Accelerometer Gyroscope Module](https://www.amazon.com/HiLetgo-MPU-6050-Accelerometer-Gyroscope-Converter/dp/B00LP25V1A)
  * [9V Rechargeable Battery](https://www.amazon.com/AmazonBasics-Rechargeable-Batteries-200mAh-4-Pack/dp/B07PHCSNZ2)
  * [9V Battery Clip w/ Male Plug for Arduino](https://www.amazon.com/5pack-Battery-2-1mm-Arduino-Corpco/dp/B01AXIEDX8)

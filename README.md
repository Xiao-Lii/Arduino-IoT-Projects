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
  * [Voltage Sensor](https://www.amazon.com/HiLetgo-Adater-Interface-Conversion-Arduino/dp/B07BJ2P6X6)

## Project #6: Verifying Thermistor Resistance with the Thermistor Voltage 
<b>Project Goal:</b> After recording the thermistor's resistance from project 2, let's verify that these are accurate by utilizing the thermistor's voltage readings and utilizing an equation of where: 
<div align ="center">Resistance = ((5.0 - VoltageIn)/VoltageIn) * Ohm of Resistor</div>

#### Hardware Utilized:
  * [Arduino Uno & USB Cable](https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU)
  * [Breadboard](https://www.amazon.com/Breadboard-Solderless-Breadboards-Distribution-Connecting/dp/B082VYKV6B)
  * [Resistor](https://www.amazon.com/BOJACK-Values-Resistor-Resistors-Assortment/dp/B08FHPJ5G8) (Note: Any resistor should do, but must be accounted for in the code's calculations) 
  * [Jumpwires](https://www.amazon.com/QQQ-Breadboard-Multicolored-Arduino-Raspberry/dp/B0925KFP3F)
  * [Thermistor](https://www.amazon.com/uxcell-Thermistors-Resistors-Temperature-Sensors/dp/B07P5Q67RH)
  * [Voltage Sensor](https://www.amazon.com/HiLetgo-Adater-Interface-Conversion-Arduino/dp/B07BJ2P6X6)


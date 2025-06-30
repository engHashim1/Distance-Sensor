# Distance-Sensor
# Distance Sensor with LEDs and Buzzer Feedback

## Overview

This project uses an ultrasonic distance sensor with an Arduino to measure the distance to an object. Depending on the measured distance, it activates LEDs of different colors and a buzzer for alert signals. This setup is commonly used in obstacle detection, parking sensors, or basic proximity alert systems.

## Features

* **Distance Measurement:** Uses an ultrasonic sensor to detect distances in real-time.
* **Visual Indicators:** Three LEDs (green, yellow, red) show distance ranges:

  * Green: Safe distance (>20 cm)
  * Yellow: Caution (10-20 cm)
  * Red: Danger (<10 cm)
* **Audible Alerts:** Buzzer beeps with increasing frequency as objects get closer.

## Hardware Requirements

* Arduino board (Uno/Nano/etc)
* Ultrasonic sensor (HC-SR04)
* 3 LEDs (green, yellow, red)
* Buzzer module
* Jumper wires
* Breadboard

## Pin Connections

| Component       | Arduino Pin |
| --------------- | ----------- |
| Ultrasonic Trig | 9           |
| Ultrasonic Echo | 10          |
| Buzzer          | 11          |
| Green LED       | 5           |
| Yellow LED      | 6           |
| Red LED         | 7           |

## How It Works

* The ultrasonic sensor sends pulses and measures the time it takes for the echo to return.
* Distance is calculated using the speed of sound formula.
* Depending on the measured distance:

  * **>20 cm:** Green LED ON, no buzzer.
  * **10-20 cm:** Yellow LED ON, buzzer beeps slowly.
  * **<10 cm:** Red LED ON, buzzer beeps quickly.

## Usage

1. Connect components according to the pin connections above.
2. Upload the provided code to your Arduino using the Arduino IDE.
3. Open the serial monitor at 9600 baud to see distance readings.
4. Observe LEDs and buzzer behavior as you bring objects closer to the sensor.

## License

This project is open-source and free to use for educational and non-commercial purposes.

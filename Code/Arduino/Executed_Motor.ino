/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-rain-sensor-servo-motor
 */

#include <Servo.h>

#define RAIN_SENSOR_PIN  13 // The ESP32 pin GPIO25 connected to the sound sensor
#define SERVO_PIN        12 // The ESP32 pin GPIO26 connected to the relay

Servo servo; // create servo object to control a servo

// variables will change:
int angle = 0;          // the current angle of servo motor
int prev_rain_state;    // the previous state of rain sensor
int rain_state; // the current state of rain sensor

void setup() {
  Serial.begin(9600);              // initialize serial
  pinMode(RAIN_SENSOR_PIN, INPUT); // set ESP32 pin to input mode
  servo.attach(SERVO_PIN);         // attaches the servo on pin 9 to the servo object

  servo.write(angle);
  rain_state = digitalRead(RAIN_SENSOR_PIN);
}

void loop() {
  prev_rain_state = rain_state;             // save the last state
  rain_state = digitalRead(RAIN_SENSOR_PIN); // read new state

  if (rain_state == LOW && prev_rain_state == HIGH) { // pin state change: LOW -> HIGH
    Serial.println("Rain detected!");
    servo.write(90);
  }
  else
  if (rain_state == HIGH && prev_rain_state == LOW) { // pin state change: HIGH -> LOW
    Serial.println("Rain stopped!");
    servo.write(0);
  }
}
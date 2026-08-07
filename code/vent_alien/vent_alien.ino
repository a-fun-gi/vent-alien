#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>
#include <Servo.h>

Servo servo;

//serial pins:
static const uint8_t PIN_TX = 2;
static const uint8_t PIN_RX = 3;

SoftwareSerial softwareSerial(PIN_RX,PIN_TX);
DFRobotDFPlayerMini player;

void setup() {
  // put your setup code here, to run once:
  servo.attach(6);
  servo.write(180);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 180; i >= 100; i--) {
    servo.write(i);
    delay(5);
  }
  delay(1000);
  for (int i = 100; i <= 180; i++) {
    servo.write(i);
    delay(5);
  }
  delay(1000);
}

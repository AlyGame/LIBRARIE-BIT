#ifndef MASINA_H
#define MASINA_H

#include <Servo.h>
#include <Arduino.h>

// Directii
#define FORWARD 92
#define BACKWARD 163
#define TURN_LEFT 149
#define TURN_RIGHT 106
#define TOP_LEFT 20
#define BOTTOM_LEFT 129
#define TOP_RIGHT 72
#define BOTTOM_RIGHT 34
#define STOP 0
#define CONTRA_ROTATE 172
#define ROTATE_CLOCKWISE 83

// PWM control pin
#define PWM1 5
#define PWM2 6
#define SHCP 2
#define EN_PIN 7
#define DATA_PIN 8
#define STCP 4

// PINS

class Robot_Bitmi
{
public:
  Robot_Bitmi() {}

  void Setup()
  {
    pinMode(PWM1, OUTPUT);
    pinMode(PWM2, OUTPUT);
    pinMode(SHCP, OUTPUT);
    pinMode(EN_PIN, OUTPUT);
    pinMode(DATA_PIN, OUTPUT);
    pinMode(STCP, OUTPUT);
  }

  void Forward(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, FORWARD);
    digitalWrite(STCP, HIGH);
  }

  void Backward(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, BACKWARD);
    digitalWrite(STCP, HIGH);
  }
  void TurnLeft(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, TURN_LEFT);
    digitalWrite(STCP, HIGH);
  }
  void TurnRight(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, TURN_RIGHT);
    digitalWrite(STCP, HIGH);
  }
  void TopLeft(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, TOP_LEFT);
    digitalWrite(STCP, HIGH);
  }
  void BottomLeft(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, BOTTOM_LEFT);
    digitalWrite(STCP, HIGH);
  }
  void TopRight(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, TOP_RIGHT);
    digitalWrite(STCP, HIGH);
  }
  void BottomRight(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, BOTTOM_RIGHT);
    digitalWrite(STCP, HIGH);
  }

  void Stop()
  {
    int speed = 0;
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, STOP);
    digitalWrite(STCP, HIGH);
  }
  void ContraRotate(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, CONTRA_ROTATE);
    digitalWrite(STCP, HIGH);
  }
  void RotateClockwise(unsigned int speed)
  {
    digitalWrite(EN_PIN, LOW);
    analogWrite(PWM1, speed);
    analogWrite(PWM2, speed);

    digitalWrite(STCP, LOW);
    shiftOut(DATA_PIN, SHCP, MSBFIRST, ROTATE_CLOCKWISE);
    digitalWrite(STCP, HIGH);
  }
};

#endif

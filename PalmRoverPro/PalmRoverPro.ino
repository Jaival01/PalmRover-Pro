#include <AFMotor.h>
#include <NewPing.h>
#include <Servo.h>

#define TRIG A0
#define ECHO A1
#define IR_LEFT  A2
#define IR_RIGHT A3
#define MAX_DISTANCE 200

NewPing sonar(TRIG, ECHO, MAX_DISTANCE);
Servo scanServo;

// Motor mapping
// M1 = Front Left ( उल्टा )
// M2 = Back Left  ( सीधा )
// M3 = Back Right ( सीधा )
// M4 = Front Right( उल्टा )

AF_DCMotor m1(1);
AF_DCMotor m2(2);
AF_DCMotor m3(3);
AF_DCMotor m4(4);

void setup() {
  pinMode(IR_LEFT, INPUT);
  pinMode(IR_RIGHT, INPUT);

  scanServo.attach(10);   // SERVO1
  scanServo.write(0); delay(600);
  scanServo.write(180); delay(600);
  scanServo.write(90); delay(400);

  m1.setSpeed(200);
  m2.setSpeed(200);
  m3.setSpeed(200);
  m4.setSpeed(200);

  stopCar();
}

void loop() {
  int leftIR = digitalRead(IR_LEFT);
  int rightIR = digitalRead(IR_RIGHT);
  int distance = sonar.ping_cm();

  if (leftIR == 0) {
    turnLeft();
    return;
  }

  if (rightIR == 0) {
    turnRight();
    return;
  }

  if (distance > 0 && distance < 30) {
    moveForward();
  } else {
    stopCar();
  }
}

// ---- MOTION LOGIC ----

void moveForward() {
  m1.run(BACKWARD);
  m2.run(FORWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void turnRight() {
  m1.run(FORWARD);
  m2.run(BACKWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void turnLeft() {
  m1.run(BACKWARD);
  m2.run(FORWARD);
  m3.run(BACKWARD);
  m4.run(FORWARD);
}

void stopCar() {
  m1.run(RELEASE);
  m2.run(RELEASE);
  m3.run(RELEASE);
  m4.run(RELEASE);
}
#include <Arduino.h>
#include "Motors.h"

const int TEST_STEPS = 100; 

void stepMotorForALl(int steps, bool dir, int D_STEPS, int D_DIR) {
  digitalWrite(D_DIR, dir);
  for (int i = 0; i < steps; i++) {
    digitalWrite(D_STEPS, HIGH);
    delayMicroseconds(3200);
    digitalWrite(D_STEPS, LOW);
    delayMicroseconds(3200);
  }
}

void turnClock(int M_STEP, int M_DIR, int M_EN) {
  pinMode(M_STEP, OUTPUT);
  pinMode(M_DIR, OUTPUT);
  pinMode(M_EN, OUTPUT);
  digitalWrite(M_EN, LOW);
  delay(2000); 
  stepMotorForALl(TEST_STEPS, LOW, M_STEP, M_DIR);
  digitalWrite(M_EN, HIGH);
}

void turnCounter(int M_STEP, int M_DIR, int M_EN) {
  pinMode(M_STEP, OUTPUT);
  pinMode(M_DIR, OUTPUT);
  pinMode(M_EN, OUTPUT);
  digitalWrite(M_EN, LOW);
  delay(2000); 
  stepMotorForALl(TEST_STEPS, HIGH, M_STEP, M_DIR);
  digitalWrite(M_EN, HIGH);
}

void turn180Clock(int M_STEP, int M_DIR, int M_EN) {
  pinMode(M_STEP, OUTPUT);
  pinMode(M_DIR, OUTPUT);
  pinMode(M_EN, OUTPUT);
  digitalWrite(M_EN, LOW);
  delay(2000); 
  stepMotorForALl(TEST_STEPS * 2, LOW, M_STEP, M_DIR);
  digitalWrite(M_EN, HIGH);
}





#include <Arduino.h>
#include "rubikTurn.h"

void setup() {
  Serial.begin(9600);
  delay(2000);

  allMoves("R");  // 90° clockwise
  delay(2000);

  allMoves("R'"); // 90° counterclockwise
  delay(2000);

  allMoves("R2"); // 180° clockwise
}

void loop() {

}

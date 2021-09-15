/*
  Emtpy Example
*/

#include <Arduino.h>

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  delay(500);
  Serial.println("loop");
}

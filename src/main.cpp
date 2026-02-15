#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(500);
  Serial.println("hello i am alive");
}

void loop() {
  delay(1000);
  Serial.println("still alive");
}
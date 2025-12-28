#include <Arduino.h>

void setup() {
  Serial.begin(115200); //using hardware serial
}

void loop() {
  Serial.println("AT+SEND=0,5,hello");
  delay(2000);
  Serial.flush();
}

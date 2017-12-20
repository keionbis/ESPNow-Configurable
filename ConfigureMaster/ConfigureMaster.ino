#include <WiFi.h>

#include "EEPROM.h"
byte comm[2]
byte mac[6];
int i = 0;
void setup() {
  pinMode(16,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    for(i = 0;i<6;i++){
      while (Serial.available()) {
        Serial.readBytes(comm,2);
        EEPROM.write(i,comm);
      }
      Serial.write(i);
    }
    EEPROM.commit();
    while(1)
    {
      digitalWrite(16,HIGH);
    }

}

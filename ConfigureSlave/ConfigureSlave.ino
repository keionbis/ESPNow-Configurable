#include <WiFi.h>
#include<softwareSerial.h>
byte mac[6];
byte comm[2];
int i = 0;
SoftwareSerial mySerial(35, 34);
void setup() {
pinMode(16,OUTPUT);
  mySerial.begin(9600);
  WiFi.macAddress(mac);
  sprintf(mac_addr, "%02x:%02x:%02x:%02x:%02x:%02x", mac[0],mac[1],mac[2],mac[3],mac[4],mac[5]);
}

void loop() {
    for(i = 0;i<6;i++){
      Serial.write(mac[i])
      Serial.readBytes(comm,2);
      while(comm != i)
      {
        Serial.readBytes(comm,2);
      }
    }
    while(1){
      digitalWrite(16,HIGH);
    }
}

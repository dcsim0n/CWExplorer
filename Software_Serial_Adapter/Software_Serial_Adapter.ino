#include <SoftwareSerial.h>

SoftwareSerial Xbee(2,3);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Xbee.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  { // If data comes in from serial monitor, send it out to XBee
    Xbee.write(Serial.read());
  }
  if (Xbee.available())
  { // If data comes in from XBee, send it out to serial monitor
    Serial.write(Xbee.read());
  }
}
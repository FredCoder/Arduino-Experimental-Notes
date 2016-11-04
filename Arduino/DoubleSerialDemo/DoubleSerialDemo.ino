#include <SoftwareSerial.h>

int port = 8;

SoftwareSerial serial(9 , 12);

void setup() {
  Serial.begin(115200);

}

void loop() {
  if (Serial.available()){
    Serial.write(Serial.read());
  }
}

#include <SoftwareSerial.h>

SoftwareSerial Photo (0, 1, 1);

void setup() {
  Serial.begin(9600);
  Photo.begin(4800);
}

void loop() {
  while( Photo.available() ){
   int v = Photo.read();
    Serial.write(v);
  }
}

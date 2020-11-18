#include "test.h";
#include "convert_color.h";

String packet;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (byte y = 0; y < 16; y++) {
    for (byte x = 0; x < 16; x++) {
      packet = "";
      packet += x;
      packet += ' ';
      packet += y;
      packet += ' ';
      packet += convert_color(&(frame00[y * 16 + x])); // red green blue 
      Serial.println(packet);
      delay(230);
    }
  }
}

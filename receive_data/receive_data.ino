#include <SoftwareSerial.h>

const int BT_RX = 12;
const int BT_TX = 11;
const int LS_RX = 0;
const int LS_TX = 1;

SoftwareSerial BTserial(BT_RX, BT_TX);
SoftwareSerial Laser(LS_RX, LS_TX, 1);

String receive_data = "";

void setup() {
  Serial.begin(9600);
  Laser.begin(9600);
  Laser.setTimeout(40);
  BTserial.begin(9600);
}

void loop() {
  Laser.listen();
  if( Laser.available() ){
    receive_data = Laser.readString();
    BTserial.print(receive_data);
  }
}

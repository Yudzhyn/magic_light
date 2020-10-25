int number = 0;
void setup() {
  Serial.begin(4800);
}

void loop() {
  number += 1;
  Serial.println(number);
  delay(200);
}

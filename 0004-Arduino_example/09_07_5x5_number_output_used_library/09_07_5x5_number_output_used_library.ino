#include <BigSerial.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  BigSerial.printSerialBigNumber(125);
  Serial.println();
  BigSerial.printSerialBigNumber(3);

  while(true);
}

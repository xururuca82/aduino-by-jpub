/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/
int ledPin = 13;		// LED는 13번 디지털 핀에 연결


void setup()
{
  pinMode(ledPin, OUTPUT);	// 디지털 핀을 출력으로 설정
}

void loop()
{
  digitalWrite(ledPin, HIGH);	// LED on
  delay(1000); 					// 1초 대기
  digitalWrite(ledPin, LOW);	// LED off
  delay(1000);					// 1초대기
}
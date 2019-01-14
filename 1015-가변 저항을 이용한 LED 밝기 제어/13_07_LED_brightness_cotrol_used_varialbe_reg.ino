int LED_pin = 3;			// LED 연결 핀

void setup()
{
  pinMode(LED_pin, OUTPUT);
}

void loop()
{
  int analogInput = analogRead(A0);		// 가변 저항 값 읽기
  int brightness = analogInput / 4;		// 0~1023 범위를 0~255사이 밝기로 바꿈
  analogWrite(LED_pin, brightness);		// PWM 신호 출력
}
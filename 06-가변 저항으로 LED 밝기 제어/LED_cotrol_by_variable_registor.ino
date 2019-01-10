int ledPin = 3;			// 3번 핀에 LED 연결
int analogPin = A0;		// 0번 핀에 가변 저항 연결
int val = 0;			// 입력값 저장을 위한 변수

void setup()
{
  pinMode(ledPin, OUTPUT);	// LED 연결 핀을 출력으로 설정
}

void loop()
{
  val = analogRead(analogPin);	// 가변 저항 값 입력(0dptj 1023사이)
  analogWrite(ledPin, val/4);	// 0에서 255 사이 값 출력을 위해 4로 나눔
}
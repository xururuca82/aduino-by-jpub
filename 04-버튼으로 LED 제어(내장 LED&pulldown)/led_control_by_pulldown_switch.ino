int ledPin = 13;		// 13번 핀에 연결된 LED
int inPin = 2;			// 2번 핀에 연결된 푸시 버튼
int val = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop()
{
  val = digitalRead(inPin);		// 버튼 상태 읽기
  digitalWrite(ledPin, val);	// 버튼 상태를 LED에 표시
}
int analogPin = A3;		// 가변 저항을 아날로그 3번 핀에 연결
						// 5V와 0V(GND)를 기준 전압으로 사용
int val = 0;			// 입력값 저장을 위한 변수

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(analogPin);	// 아날로그 입력값 읽기
  Serial.println(val);
}
int count = 0;							// 카운터

void setup()
{
  Serial.begin(9600);					// 시리얼 포트 초기화
}

void loop()
{
  count++;
  Serial.println(count);	// 카운터 값을 시리얼 포트로 출력
  delay(1000);
}
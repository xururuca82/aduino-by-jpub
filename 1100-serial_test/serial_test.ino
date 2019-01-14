void setup() {
  Serial.begin(9600);	// 시리얼 통신 초기화
}

void loop() {
  Serial.println("Hello World !!");	// 시리얼 전송
  delay(1000);						// 1초 대기
}
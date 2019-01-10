void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int A = 0;		// 일반 지역 변수
  static int B = 0; // 정적 지역 변수
  
  A = A + 1;		// 일반 지역 변수 1 증가
  B = B + 1;		// 정적 지역 변수 1 증가
  
  Serial.println("A = " + String(A));
  Serial.println("B = " + String(B));
  
  delay(1000);
}
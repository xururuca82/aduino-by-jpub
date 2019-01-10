void setup()
{
  Serial.begin(9600);
}

void function1(int a) {
  // a는 지역변수로 함수가 끝나면 사라진다.
  a = 0;
}

void function2(int *pa) {
  // pa는 지역변수이나 메모리에 직접 값을 기록하므로 함수가 끝나도 사라지지 않는다.
  *pa = 0;
}

void loop()
{
  int a = 3;
  
  Serial.println(a);
  
  function1(a); 		// 일반 변수를 이용한 함수 호출
  Serial.println(a);
  function2(&a);		// 포인터 변수를 이용한 함수 호출
  Serial.println(a);
  
  
  while(true);
}
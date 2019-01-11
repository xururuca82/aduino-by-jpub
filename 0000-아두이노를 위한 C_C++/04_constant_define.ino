#define CONST1 5		// 상수 정의(단순히 CONST1을 5로 대체한다.)

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  const int CONST2 = 10;	// 상수 변수, 이후 값을 변경할 수 없는 변수
  
  Serial.println("Constant 1 by #define : " + String(CONST1));
  Serial.println("Constant 2 by const keyword : " + String(CONST2));
  
  // CONST1 = CONST1 + 1;
  // CONST2 = CONST2 + 1;
  
  while(true);
}
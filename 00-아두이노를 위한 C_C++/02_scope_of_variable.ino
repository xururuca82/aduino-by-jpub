int A = 0;	// 전역변수. Level 0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // 전역변수 A 참조. 변수는 사용 이전에 선언되어야 하며
  // 동일한 레벨에서 선언되어 있지 않으면 상위 레벨의 변수를 사용한다.
  Serial.println("Level 0 : " + String(A));
  
  // loop 함수 내에서만 유효하다. Level 1
  int A = 1;
  
  Serial.println("Level 1 : " + String(A));
  
  if(A==1){
    // loop 함수 내의 if 블록에서만 유효하다. Level2
    int A = 2;
    Serial.println("Level 2 : " + String(A));
    {
      // loop 함수 내, if 블록 내의 중괄호({ }) 블록에서만 유효하다. Level 3
      int A = 3;
      Serial.println("Level 3 : " + String(A));
    }
  }
  
  // loop 함수 내에 정의된 변수 A를 참조한다.
  // 동일한 레벨의 블록 내에 선언된 변수를 먼저 참조한다.
  Serial.println("Level 1 : " + String(A));
  
  while(true);
}
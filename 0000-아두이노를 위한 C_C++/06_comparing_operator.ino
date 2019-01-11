void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a = 10;
  
  if(a==10) {						// a가 10인지 비교
    Serial.println("a is ten!!");
  }
  
  if(a=5) {
    // a에 5를 대입하면 a는 0이 아닌 값을 가지므로 논리값 true를 가진다.
    // 따라서 if 블록의 코드가 실행된다.
    Serial.println("a is five??");
  }
  
  while(true);
}
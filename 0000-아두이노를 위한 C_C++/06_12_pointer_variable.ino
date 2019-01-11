void setup()
{
  Serial.begin(9600);
}

void loop()
{
  char ch;
  char *pch;
  
  ch = 'A';
  pch = &ch;
  
  // char 형 변수가 필요로하는 메모리 크기
  Serial.println("Size of character type : " + String(sizeof(ch)));
  // char 포이터 형 변수가 필요로 하는 메모리 크기
  Serial.println("Size of character pointer type : " + String(sizeof(pch)));
  
  // char 형 변수에 저장되는 내용
  Serial.println("Value of character type varialbe : " + String(ch));
  // char 포인터 형 변수에 저장되는 내용 (메모리 주소가 저장됨)
  Serial.println("Value of character pointer type : " + String((int)pch, HEX));
  
  while(true);
}
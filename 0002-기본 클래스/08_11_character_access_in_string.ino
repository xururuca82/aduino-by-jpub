void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str = "012345678";
  String outputStr;
  
  for(int i = 0; i < str.length(); i++) {		// 문자열 끝까지 반복
    outputStr = String(i) + "th charactoer is " + str[i];		// 문자 읽기
    Serial.println(outputStr);
    str[i] = str[i] + 'A' - '0';								// 문자 쓰기
  }
  
  Serial.println(str);
  
  while(true);
}
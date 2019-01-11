void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str = "0123456789";
  String substr1, substr2;
  
  substr1 = str.substring(0,3);		// "012", 0은 inclusive, 3은 exclusive
  substr2 = str.substring(7);		// "789", 7부터 문자열 끝까지
  
  Serial.println(substr1);  
  Serial.println(substr2);
  
  while(true);
}
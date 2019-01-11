void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str1 = "0123";
  String str2 = "123a";
  String str3 = "abc";
  
  Serial.println(str1.toInt());
  Serial.println(str2.toInt());
  Serial.println(str3.toInt());
  
  while(true);
}
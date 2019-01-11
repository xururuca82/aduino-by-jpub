void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str1 = "ABC";
  String str2 = "EDF";
  int num = 999;
  
  str1.concat(str2);
  Serial.println(str1);
  str1.concat(num);
  Serial.println(str1);
  
  Serial.println();
  str1 = "ABC";
  str1 = str1 + str2;
  Serial.println(str1);
  str1 += num;
  Serial.println(str1);
  
  while(true);
}
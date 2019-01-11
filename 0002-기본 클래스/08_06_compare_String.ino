void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str1 = "ABC";
  String str2 = "EEF";
  
  Serial.println(str1 + " <=> " + str2 + " : " + str1.compareTo(str2));
  Serial.println(str2 + " <=> " + str1 + " : " + str2.compareTo(str1));
  Serial.println(str1 + " <=> " + str1 + " : " + str1.compareTo(str1));
  
  while(true);
}
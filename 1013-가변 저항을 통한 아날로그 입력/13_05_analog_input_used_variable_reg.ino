void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String echoStr;			
  int read = analogRead(A0);	// ADC를 통한 아날로그 값 입력
  
  echoStr = "Current analog input : " + String(read);
  
  Serial.println(echoStr);
  delay(10);
}
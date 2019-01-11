unsigned long time;		// 경과 시간 저장

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Time : ");
  time = millis();		// 경과시간
  Serial.println(time);
    
  delay(1000);
}
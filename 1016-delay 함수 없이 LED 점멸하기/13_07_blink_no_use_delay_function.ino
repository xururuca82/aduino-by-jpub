int ledPin = 13;
int ledState = LOW;
long previousMillis = 0;
long interval = 1000;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  unsigned long currentMillis = millis();	// 현재까지의 시간
  if(currentMillis - previousMillis > interval){
    previousMillis = currentMillis;    
    
    if(ledState == LOW)
      ledState = HIGH;
   	else
      ledState = LOW;
    
    // 상태가 바뀐 경우에만 디지털 핀으로 출력
    digitalWrite(ledPin, ledState);
  }
}
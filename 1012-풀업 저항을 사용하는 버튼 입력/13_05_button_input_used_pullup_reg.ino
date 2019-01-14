int ledOut = 8;		// LED 출력핀
int buttonIn = 9;

void setup()
{
  pinMode(ledOut, OUTPUT);
  pinMode(buttonIn, INPUT);
}

void loop()
{
  int buttonState = digitalRead(buttonIn);
  
  if(buttonState == LOW)
    digitalWrite(ledOut, HIGH);
  else
    digitalWrite(ledOut, LOW);
}
int buttonPin = 2;
int ledPin = 13;

int buttonPushCount = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if(buttonState != lastButtonState) {
    if(buttonState == HIGH) {
      buttonPushCount++;
      Serial.println("Button is pressed!");
      Serial.println("* Number of button pushses : "+ String(buttonPushCount));
    } else {
      Serial.println("Button is released.");
    }
  }
  
  lastButtonState = buttonState;
  digitalWrite(ledPin, buttonState);
}
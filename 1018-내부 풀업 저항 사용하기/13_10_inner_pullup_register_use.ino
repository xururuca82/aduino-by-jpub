int buttonPin = 2;
int LEDPin = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(LEDPin, OUTPUT);
}

void loop()
{
  int sensorVal = digitalRead(buttonPin);
  if(sensorVal){
    Serial.println("Button is in HIGH State");
    digitalWrite(LEDPin, LOW);
  } else {
    Serial.println("Button is in LOW state.");
    digitalWrite(LEDPin, HIGH);
  }
}
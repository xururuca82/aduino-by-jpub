int LED_pins[] = {8, 9, 10, 11, 12};
int currentVoltage = 0;
int previousVoltage = 0;

void setup()
{
  for(int i=0; i<sizeof(LED_pins)/sizeof(int); i++){
    pinMode(LED_pins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  int analogIn = analogRead(A0);
  currentVoltage = map(analogIn, 0, 1023, 0, 5);
  
  if(currentVoltage != previousVoltage){
    previousVoltage = currentVoltage;
    
    for(int i=0; i<currentVoltage; i++){
      digitalWrite(LED_pins[i], HIGH);
    }
    for(int i=currentVoltage; i<5; i++){
      digitalWrite(LED_pins[i], LOW);
    }
  }
}
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("boolean: "+String(sizeof(boolean)));          
  Serial.println("char: "+String(sizeof(char)));
  Serial.println("byte: "+String(sizeof(byte)));
  Serial.println("int: "+String(sizeof(int)));
  Serial.println("word: "+String(sizeof(word)));
  Serial.println("long: "+String(sizeof(long)));
  Serial.println("short: "+String(sizeof(short)));
  Serial.println("float: "+String(sizeof(float)));
  Serial.println("double: "+String(sizeof(double)));
  
  while(true);
}
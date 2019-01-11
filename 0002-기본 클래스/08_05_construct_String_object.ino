void setup()
{
  Serial.begin(9600);
  
  Serial.println("\n\nString Constructors:");
  Serial.println();
}

void loop()
{
  String stringOne = "Hello String";				// 문자열 배열에 의한 생성
  Serial.println(stringOne);
  
  stringOne = String('a');							// 문자에 의한 초기화
  Serial.println(stringOne);
  
  String stringTwo = String("This is a string");	// String 객체에 의한 초기화
  Serial.println(stringTwo);
  
  stringOne = String(stringTwo + " with more");		// 문자열 연결
  Serial.println(stringOne);
  
  stringOne = String(13);							// 정수형에 의한 초기화
  Serial.println(stringOne);
  
  stringOne = String(45, DEC);						// 정수형을 10진수로 초기화
  Serial.println(stringOne);
  
  stringOne = String(45, HEX);						// 정수형을 16진수로 초기화
  Serial.println(stringOne);
  
  stringOne = String(255, BIN);						// 정수형을 2진수로 초기화
  Serial.println(stringOne);
  
  stringOne = String(millis(), DEC);				// long 형에 의한 초기화
  Serial.println(stringOne);
  
  while(true);
}
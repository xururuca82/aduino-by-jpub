int ledPin = 9;				// LED 연결 핀
String inputString;			// 시리얼 통신을 통한 입력 문자열
boolean ledOnOff = false;	// LED 초깃값은 꺼진 상태

void setup()
{
  Serial.begin(9600);		// 시리얼 포트 초기화
  pinMode(ledPin, OUTPUT);	// LED 연결 포트 출력으로 설정
}

void loop()
{
  if(ledOnOff) 					// LED가 켜진 경우
    digitalWrite(ledPin, HIGH);
  else							// LED가 꺼진 경우
    digitalWrite(ledPin, LOW);
}

void serialEvent() {			// 시리얼 포트로 데이터 수신
  while(Serial.available()) {
    char inChar = (char)Serial.read();	// 한 바이트 읽기
    Serial.println(inChar);
    if(inChar == 'e') {	// 문자열 종료 검사
      if(inputString.equals("on")) {		// 'on'이 전송된 경우
        ledOnOff = true;					// LED 켜기
        Serial.println("LED on!");
        inputString = "";
      }
      else if(inputString.equals("off")) {	// 'off'가 전성된 경우
        ledOnOff = false;
        Serial.println("LED off!");
        inputString = "";
      }
      else
        inputString = "";
    }
    else
      inputString += inChar;				// 문자가 종료될 때가지 이어 붙임
    Serial.println(inputString);
  }
}
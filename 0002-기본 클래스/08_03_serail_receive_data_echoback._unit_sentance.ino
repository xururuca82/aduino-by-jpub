String inputString = "";				// 수신 데이터 저장 버퍼
boolean stringComplete = false;			// 수신 문자열이 개행 문자로 종료

void setup()
{
  Serial.begin(9600);					// 시리얼 포트 초기화
  inputString.reserve(200);				// 최대 200문자까지 보관
}

void loop()
{
  if(stringComplete) {					// 수신이 개행 문자로 끝난 경우
    Serial.println(inputString);		// 에코 백(echo back)
    inputString = "";					// 수신 버퍼 비움
    stringComplete = false;
  } 
  
}

void serialEvent() {					// 도착한 모든 데이터 읽음
  while(Serial.available()) {			// 1바이트 읽음
    char inChar = (char)Serial.read();
    inputString += inChar;				// 문자열 뒤에 붙임
    if(inChar == '\n') {
      stringComplete = true;
    }
  }
}
int ledPin = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  establishConnection();		// handshaking 설정
}

void loop()
{
  if(Serial.available()>0){
  	int brightness = Serial.parseInt();				// 첫 번재 유효한 정수 읽기
    brightness = constrain(brightness, 0, 255);		// 0에서 255 사이 값으로 제한
    analogWrite(ledPin, brightness);				// LED 밝기 조절
    // 현재 밝기 값을 컴퓨터로 전송
    Serial.println("Current brightness is " + String(brightness, DEC));
  }
}

void establishConnection(){
  char buffer[100] = "";
  Serial.println("Send me back \'OK\'");			// 'OK' 문자열 보내도록 알림
  
  while(true) {										// handshaking이 성립될 때까지
    if(Serial.available()){							// 수신 문자열이 있는 경우
      int readCount = Serial.readBytes(buffer, 99);	// 문자열 읽기
      buffer[readCount] = '\0';						// 종료 문자 추가
      // 수신 문자열을 컴퓨터로 재 전송
      Serial.println("Received message : " + String(buffer));
      // 'OK' 문자열이 수신될 때까지 대기
      if(String("OK").equals(buffer)) break;
    }
  }
  
  Serial.println("Now send me a brightness value.");	// 밝기 값 입력대기
}
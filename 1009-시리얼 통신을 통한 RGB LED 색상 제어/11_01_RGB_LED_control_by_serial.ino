int redPin = 6;			// RED 핀, PWM 출력 핀에 연결해야 밝기 조절이 가능하다.
int greenPin = 3;		// GREEN 핀
int bluePin = 5;		// BLUE 핀

void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  digitalWrite(redPin, 255);	// 꺼진 상태에서 시작
  digitalWrite(greenPin, 255);
  digitalWrite(bluePin, 255);
}

void loop()
{
  while(Serial.available()>0){		// 수신 데이터가 있는 경우 읽음
    int red = Serial.parseInt();	// 유효한 정수 읽기
    int green = Serial.parseInt();
    int blue = Serial.parseInt();
    
    Serial.println(String(red)+ String(green)+ String(blue));
    
    if(Serial.read() == 'e') {		// 개행 문자를 만난 경우
      // constrain 함수로 0과 255 사이 값으로 제한
      // common anode 타입의 경우 반전 시킴
      // common cathode 타입의 경우 반전시킬 필요 없음
      // red = 255 - constrain(red, 0, 255);
      // green = 255 - constrain(green, 0, 255);
      // blue = 255 - constrain(blue, 0, 255);
      
      Serial.println(String(red)+ String(green)+ String(blue));
      
      analogWrite(redPin, red);
	  analogWrite(greenPin, green);
      analogWrite(bluePin, blue);
      
      // 시리얼 모니터로 반전되지 않고
      // 시리어 통신으로 입력받은 값을 그대로 다시 출력
      Serial.print("Red : " + String(red));
      Serial.print(", Green : " + String(green));
      Serial.println(", Blue : " + String(blue));

    }
  }
}
int ledPins[] = {9, 10, 11, 12};    // LED 연결 핀
String inputString = "0";             // 초기 모든 LED 꺼진 상태

void setup()
{
  Serial.begin(9600);
  for(int i=0; i<4; i++){
    pinMode(ledPins[i], OUTPUT);
  }
  LEDOnOff();             // 초기 LED 상태 출력
}

void loop(){}               // 반복적인 작업은 없음

void LEDOnOff(){
  long no = inputString.toInt();
  String echoStr = "";          // LED 상태를 반환하는 문자열
  
  for(int i=0; i<4; i++){       // 4개 LED 상태 결정
    int on_off = no & (0x01 << i);    // LSB부터 8번 핀에 연결된 LED
    if(on_off){
      digitalWrite(ledPins[i], HIGH);
      echoStr = echoStr + "LED " + String(i + 1) + " : ON ";
    }
    else{
      digitalWrite(ledPins[i], LOW);
      echoStr = echoStr = "LED " + String(i + 1) + " : OFF";
    }
  }
  Serial.println(echoStr);        // LED 점멸 상태 전송
}

// 시리얼 포트로 데이터 수신 시 자동으로 실행되는 함수
void serialEvent(){
  char buffer[100];
  
  if(Serial.available()){
    int len = Serial.readBytesUntil('\n', buffer, 99); // 개행 문자까지 읽음
    buffer[len] = '\0';                 // 문자열 끝 표시
    inputString = buffer;               // 읽어 들인 문다를 전역변수에 저장
    LEDOnOff();                     // LED 점멸 및 상태 전송
  }
}

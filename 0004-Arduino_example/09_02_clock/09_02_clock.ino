#include <Time.h>
#include <TimeLib.h>

#define TIME_MSG_LEN    16    // 시간 지정 문자열의 길이
#define TIME_HEADER     'T'   // 시간 지정 문자열의 시작 문자

// 초기화 문자열 'Tyyyymmddhhmmss'
// 2013년 6월 1일 오후 2시 13분 00초 -> 'T20130601141300'


void setup() {
  Serial.begin(9600);

}

void loop() {
  if(Serial.available())          // 데이터가 도착하면
    processSyncMessage();         // 시간 초기화 문자열인지 검사하여 처리

  if(timeStatus() == timeNotSet)  // 시간 초기화가 되지 않은 경우
    Serial.println("waiting for sync message");
  else
    digitalClockDisplay();        // 현재 시간 전송
    
  delay(1000);
}

void digitalClockDisplay() {
  // 현재 시간을 시리얼 통신으로 전송
  Serial.print(String(year()) + "/");     // 년
  Serial.print(String(month()) + "/");    // 월
  Serial.print(String(day()) + "/");      // 일

  Serial.print(String(hour()) + ":");     // 시
  Serial.print(String(minute()) + ":");   // 분
  Serial.println(String(second()));         // 초
}

int readSerial(int count) {               // 지정한 길이의 문자를 읽어 숫자로 변환
  int val = 0;  

  for(int i=0; i<count; i++) {            // count 크기의 바이트를 읽음
    char c = Serial.read();               // 한 바이트 읽기
    val = val * 10 + (c - '0');             // 숫자로 변환
  }
  return val;
}

void processSyncMessage() {
  while(Serial.available() >= TIME_MSG_LEN) {
    char c = Serial.read();
    if(c == TIME_HEADER) {                // 'T'로 시작되는 문자열인지 검사
      int _hr, _min, _sec, _day, _month, _yr;
      _yr = readSerial(4);
      _month = readSerial(2);
      _day = readSerial(2);
      _hr = readSerial(2);
      _min = readSerial(2);
      _sec = readSerial(2);

      setTime(_hr, _min, _sec, _day, _month, _yr);      // 시간 초기화
    }
  }
}

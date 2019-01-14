int LED_pin = 9;		// LED 연결 핀
int brightness = 0;		// 밝기 값
int fadeAmount = 10;	// 밝기 변화량

void setup()
{
  
  pinMode(LED_pin, OUTPUT);		// 출력 모드 설정
}

void loop()
{
  analogWrite(LED_pin, brightness);		// 현재 밝기 값 출력
  
  brightness += fadeAmount;				// 밝기 값 변화
  if(brightness > 255){
    brightness = 255;
    fadeAmount *= -1;
  }
  if(brightness < 0){
    brightness = 0;
    fadeAmount *= -1;
  }  
  delay(50);
}
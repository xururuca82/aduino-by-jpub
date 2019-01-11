int ledOut = 8;		// LED 출력 핀
int buttonIn = 9;	// 버튼 입력 핀

void setup() {
  Serial.begin(9600);
  pinMode(ledOut, OUTPUT);	// LED 핀 출력으로 설정
  pinMode(buttonIn, INPUT);	// 버튼 핀 입력으로 설정
}

void loop(){
  int buttonState = digitalRead(buttonIn);	// 버튼 상태 읽기
  digitalWrite(ledOut, buttonState);		// 버튼 상태에 따라 LED on/off
  Serial.println(buttonState);
}
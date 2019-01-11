int pin = 13;
volatile int state = LOW;

void setup()
{
  pinMode(pin, OUTPUT);		// 13번 핀을 출력으로 설정
  // 0번 인터럽트 입력 신호의 상태가 변할 때 인터럽트 발생
  // 인터럽트 처리 함수로 blink 함수 연결
  attachInterrupt(0, blink, CHANGE);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(state);
  digitalWrite(pin, state);	// 인터럽트에 의해 바뀐 상태를 LED로 출력  
}

void blink() {
  state = !state;			// 인터럽트 발생 시 상태 반전
  
}
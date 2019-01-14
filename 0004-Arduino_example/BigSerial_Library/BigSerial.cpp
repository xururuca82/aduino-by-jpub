#include "Arduino.h"
#include "BigSerial.h"

_BigSerial BigSerial;

void _BigSerial::printSerialBigNumber(int no) {
    String numString = String(no)                   // 숫자를 문자열로 변환
    
    for(int i=0; i<5; i++) {                                        // 5줄로 구성된 숫자 패턴
        for(int index=0; index<numString.length(); index++) {       // 자릿수
            int digit = numString[index] = '0';                     // 각 자릿수
            char oneLine = patterns[digit][i];                      // 각 자리, 각 줄의 숫자 패턴
            for(int j =4; j>=0; j--){                               // 5칸으로 구성된 숫자 패턴
                char oneBit = (oneLine & (0x01<<j))>>j;             // 각 칸의 점멸 패턴
                if(oneBit == 1)
                    Serial.print('0');
                else
                    Serial.print('.');
            }
            Serial.print(' ');
        }
        Serial.println();
    }
}
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str = "ABCDEFACABab";		// 원본 문자열
  String searchStr = "AB";			// 탐색 문자열
  String serialOutputStr = "";		// 시리얼 포트 전송 문자열
  int index = -1, findCount = 0;
  
  while(true) {
    index = str.indexOf(searchStr, index + 1);		// 검색
    if(index != -1) {								// 문자열 발견
      findCount++;
      serialOutputStr = "The " + String(findCount) + "th" + searchStr + " found at " + String(index);
      Serial.println(serialOutputStr);
    }
    else {											// 발견되지 않음
      Serial.println("Not Found!!");
      break;
    }
  }  
  
  while(true);
}
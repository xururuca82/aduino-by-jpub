void setup()
{
  Serial.begin(9600);
}

boolean is_prime(int no) {
  int i; 
  
  for(i=2; i<no; i++) {
    if(no % i == 0) break;
  }
  
  if(i == no)
    return true;
  else
    return false;
}

void loop()
{
  int no[10], i;
  
  for(i=0; i<10; i++) {
    no[i] = i+1;
  }
  
  for(i=0; i<10; i++) {
    if(is_prime(no[i])) {
      Serial.println(String(no[i]) + " is a prime number.");
    } 
    else {
      Serial.println(String(no[i]) + " is NOT a prime number.");
    }
  }
  
  while(true);
}
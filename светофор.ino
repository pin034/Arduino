
void setup(){
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  pinMode(3, OUTPUT);  

}

void loop(){  
  if ((digitalRead(2) == HIGH)) {
    for(int i=1;i<=5;i++){
        delay(500);
        digitalWrite(7,HIGH);
        delay(500);
        digitalWrite(7,LOW);
    }
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(3000);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    delay(3000);
    
    for(int i=1;i<=10;i++){
      tone(3, 150);
      digitalWrite(11,LOW);
      delay(1500 - i * 150);
      noTone(3);
      digitalWrite(11,HIGH);
      delay(1500 - i * 150);
     

      
    }
    digitalWrite(11,LOW);
    digitalWrite(5,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(6,HIGH);
    delay(3000);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }


}

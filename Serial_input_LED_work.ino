void setup(){
  Serial.begin(9600);
}
void loop(){
  while(Serial.available()==0){
  }
  int val = Serial.read() - '0';
  if(val == 1){
    Serial.print(val);
    digitalWrite(10,HIGH);
    delay(4000);
  }
  else if(val == 0){
    Serial.print(val);
    digitalWrite(10,LOW);
    delay(4000);
  }
  else{
    Serial.print("Invalid");
  }
}

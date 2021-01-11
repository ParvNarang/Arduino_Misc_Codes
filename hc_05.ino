void setup(){
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}
void loop(){
  if(Serial.available()>0){
    char data = Serial.read();
    switch(data){
      case 'a': digitalWrite(8, HIGH);break; //when a is pressed on the app LED turns on.
      case 'b': digitalWrite(8, LOW);break; //when b is pressed on the app LED turns off.
      default : break;
    }
    Serial.println(data);
  }
  delay(50);
}

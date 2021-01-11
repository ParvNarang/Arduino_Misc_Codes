//this program is used for blinking 2 LEDs on the basis of input provided by the user.
int redpin = 7;
int yellowpin = 8;
int redblinks;
int yellowblinks;
String redmessage = "RED LED IS BLINKING";
String yellowmessage = "YELLOW LED IS BLINKING";

void setup(){
  pinMode(redpin,OUTPUT);
  pinMode(yellowpin,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println("How many times the red LED should blink ?");
  while(Serial.available()==0){}
  redblinks = Serial.parseInt();

  Serial.println("How many times the yellow LED should blink ?");
  while(Serial.available()==0){}
  yellowblinks = Serial.parseInt();

  Serial.println(redmessage);
  for(int j=1; j<=redblinks; j=j+1){
    Serial.print("You are on blink");
    Serial.println(j);
    digitalWrite(redpin,HIGH);
    delay(500);
    digitalWrite(redpin,LOW);
    delay(500);
  }
  Serial.print(" ");
  
  Serial.println(yellowmessage);
  for(int i=1; i<=yellowblinks; i=i+1){
    Serial.print("You are on blink");
    Serial.println(i);
    digitalWrite(yellowpin,HIGH);
    delay(500);
    digitalWrite(yellowpin,LOW);
    delay(500);
  }
  
  Serial.print(" ");
  
}

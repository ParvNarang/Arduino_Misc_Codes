//this program is used for blinking 2 LEDs on the basis of input provided by the user.
int redpin = 9;
int yellowpin = 10;
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
  Serial.println("How many times you want the red LED to blink ?");
  while(Serial.available()==0){}
  redblinks = Serial.parseInt();

  Serial.println("How many times you want the yellow LED to blink ?");
  while(Serial.available()==0){}
  yellowblinks = Serial.parseInt();

  Serial.println(redmessage);
  for(int j=1; j<=redblinks; j=j+1){
    Serial.print("You are on blink");
    Serial.println(j);
    digitalWrite(redpin,HIGH);
    delay(250);
    digitalWrite(redpin,LOW);
    delay(250);
  }
  Serial.print(" ");
  
  Serial.println(yellowmessage);
  for(int i=1; i<=yellowblinks; i=i+1){
    Serial.print("You are on blink");
    Serial.println(i);
    digitalWrite(yellowpin,HIGH);
    delay(250);
    digitalWrite(yellowpin,LOW);
    delay(250);
  }
  Serial.print(" ");
}

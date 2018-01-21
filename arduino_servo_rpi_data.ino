#include<Servo.h>

int userOpt = 0;

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  userOpt=Serial.read();
  userOpt-=48;
  switch(userOpt){
    case 1:
    myservo.write(30);
    delay(500);
    break;
    case 2:
    myservo.write(60);
    delay(500);
    break;
    case 3:
    myservo.write(90);
    delay(500);
    break;
    case 4:
    myservo.write(180);
    delay(500);
    break;
    default:
    break;
    }
    Serial.println(userOpt);
  }
  
}



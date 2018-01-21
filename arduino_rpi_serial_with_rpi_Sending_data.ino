const int ledPin = 7;
int a;
void setup(){
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop(){
if (Serial.available()) {
  a = Serial.read();
  Serial.println(a-'0');
light(a - '0');
}
delay(1000);
}

void light(int n){
for (int i = 0; i < n; i++) {
digitalWrite(ledPin, HIGH);
delay(100);
digitalWrite(ledPin, LOW);
delay(100);
}
}

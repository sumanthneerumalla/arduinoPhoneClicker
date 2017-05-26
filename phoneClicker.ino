int pinIN = 13;
int value = 0;

void setup() {
  // put your setup code here, to run once:
//  pinMode(7,OUTPUT);
pinMode(pinIN,INPUT);
//digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
 value = digitalRead(pinIN); 
 delay(30);
pinMode(pinIN,OUTPUT);
delay(30);
pinMode(pinIN,INPUT);
}

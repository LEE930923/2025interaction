void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for(int i=10;i<=13;i++){
    digitalWrite(13,LOW);
    digitalWrite(i-1,LOW);
    digitalWrite(i,HIGH);
    delay(500);
  }
  // put your main code here, to run repeatedly:

}

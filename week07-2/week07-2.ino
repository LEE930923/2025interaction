void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13,HIGH);//發亮
  delay(500);
  digitalWrite(13,LOW);//暗掉
  digitalWrite(12,HIGH);//發亮
  delay(500);
  digitalWrite(12,LOW);//暗掉
  // put your main code here, to run repeatedly:

}

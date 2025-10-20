//week07_1_arduino_blink
void setup() {
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13,HIGH);//發亮
  delay(500);
  digitalWrite(13,LOW);//暗掉
  delay(500);

}

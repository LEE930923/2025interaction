void setup(){
  pinMode(8,OUTPUT);
}

void loop(){
  tone(8,780,60);
  delay(333);
  tone(8,320,60);
  delay(333);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(30);
  int now=analogRead(A3)/4;
  Serial.write(now);
  if(now>200) tone(8,784,100);
  if(now<50) tone(8,523,100);
}

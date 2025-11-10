void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  //pinMode(3,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  int now=analogRead(A3);
  Serial.println(now);

  if(now>800){
    tone(8,523,100);
    delay(100);
    tone(8,784,100);
    delay(200);
  }else if(now<200){
    tone(8,784,100);
    delay(100);
    tone(8,523,100);
    delay(200);
  }
}

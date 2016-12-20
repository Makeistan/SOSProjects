int lm35Pin=A5;
int motorPin=10;
int lm35Val=0;
int motorVal=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(lm35Pin,INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  lm35Val=analogRead(lm35Pin);
  if(lm35Val>=50)
  motorVal=map(lm35Val, 50, 220, 50, 255);
  else
  motorVal=0;
  Serial.println(lm35Val);
  analogWrite(motorPin,motorVal);

  

}

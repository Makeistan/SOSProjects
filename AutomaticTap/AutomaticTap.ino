#include <Servo.h>

Servo myservo;
int pos = 0;
int bottomPin=6;
int topPin=5;

void setup()
{
  myservo.attach(9);
  pinMode(bottomPin,INPUT);
  pinMode(topPin,INPUT);
}
void loop()
{
  if(digitalRead(bottomPin)==LOW && digitalRead(topPin)==LOW)
  {
    myservo.write(90); //turn the tap open
  }
  if(digitalRead(bottomPin)==HIGH && digitalRead(topPin)==HIGH)
  {
    myservo.write(0); //turn the tap close
  }
  
  //delay(60*1000);

}

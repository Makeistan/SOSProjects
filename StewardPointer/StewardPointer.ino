#include <Servo.h>

Servo ahmed;
Servo sufiyan;

int x=0;
int y=0;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  ahmed.attach(9);
  sufiyan.attach(10);  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  x=analogRead(A0);
  y=analogRead(A1);
//  Serial.print(x);
//  Serial.print(",");
//  Serial.println(y);
  x = map(x, 0, 1023, 45, 135);     // sfgfhdgfhgrsefagjsddfghmgsdfghv
  y = map(y, 0, 1023, 45, 135);     // sfgfhdgfhgrsefagjsddfghmgsdfghv
  ahmed.write(x);
  sufiyan.write(y);
  delay(100);
  
}

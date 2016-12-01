/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/


#include <Servo.h>

Servo myservo1;  // create servo object to control a servo

Servo myservo2;  // create servo object to control a servo

Servo myservo3;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int pos=0;


void setup() 
{
  myservo1.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 10 to the servo object
  myservo3.attach(11);  // attaches the servo on pin 11 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
     myservo3.write(pos);            // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}


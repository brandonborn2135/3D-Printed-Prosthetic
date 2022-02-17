#include <Servo.h>
Servo myservo0, myservo1, myservo2, myservo3;
void setup() 
{ 
  Serial.begin(9600);
    myservo0.attach(3);
    myservo1.attach(4);
    myservo2.attach(5);
    myservo3.attach(6);
}

void loop() {

int analogValue = analogRead(A0);

int angle = map(analogValue, 0,1023, 0, 180); 

myservo0.write(angle);
myservo1.write(angle);
myservo2.write(angle);
myservo3.write(angle);

}

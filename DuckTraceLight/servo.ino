#include <Servo.h>

Servo myservo;

void servoInitial(Chain *ptrchain){
    myservo.attach(ptrchain->servoPin);
    servoTrun(0);
    delay(1500);
    servoTrun(90);
    delay(1500);
    servoTrun(180);
    delay(1500);
}

void servoTrun(int angle){
    myservo.write(angle);
}

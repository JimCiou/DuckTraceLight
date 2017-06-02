#include "include/jimToy.h" 
void actionCar(int);
void stopCar(void);

int angle=90;

void setup() {
    start();
}

void loop() {
    if(waitUp()){
        ledBlink();
        angle=cellResult();
        actionCar(angle);
        if (angle<180){
            servoTrun(angle);} 
        delay(15);}
    else{
        stopCar();
        ledDown();
        servoTrun(90);}
}

#include "include/photocell.h"

void photocellInitial(Chain *ptrchain){
  sensorPin[0] = ptrchain->sensorPin.sensorLeftPin;
  sensorPin[1] = ptrchain->sensorPin.sensorRightPin;
  sensorPin[2] = ptrchain->sensorPin.sensorBackPin;
  waitUpThre = ptrchain->waitUpThre;
  sensorRange[0] = ptrchain->sensorRange.left;
  sensorRange[1] = ptrchain->sensorRange.right;
}

boolean waitUp(){
    boolean result = false;
    int readingLeft, readingRight, readingBack;
    readingLeft = analogRead(sensorPin[0]);
    readingRight = analogRead(sensorPin[1]); 
    readingBack = analogRead(sensorPin[2]); 
    if((readingLeft > waitUpThre) || (readingRight > waitUpThre) || (readingBack > waitUpThre))
          result=true;

    return result;
}

int cellResult(){
    int readingLeft, readingRight, readingBack, angle;
    readingLeft = analogRead(sensorPin[0]);
    readingRight = analogRead(sensorPin[1]);
    readingBack = analogRead(sensorPin[2]); 
    Serial.println(readingLeft);
    Serial.println(readingRight);
    Serial.println(readingBack);
    if (((readingLeft+100)>readingBack) || ((readingRight+100)>readingBack)){
        Serial.println("Light in front");
        angle = map(readingLeft-readingRight, sensorRange[0], sensorRange[1], 0, 179);}
    else{
        Serial.println("Light in Back");
        angle =270;}
    return angle;
}

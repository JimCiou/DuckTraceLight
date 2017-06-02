#include "include/start.h"

void start(void){
    Chain toyChain=Porting();
    Chain *ptrchain=&toyChain;
    log4a("Initial device START.");
    log4aInitial(ptrchain);
    ledInitial(ptrchain);
    ledBlink();
    buzzerON(ptrchain);
    ledDown();
    servoInitial(ptrchain);
    photocellInitial(ptrchain);
    l298NInitial(ptrchain);
    log4a("Initial device OVER.");
}


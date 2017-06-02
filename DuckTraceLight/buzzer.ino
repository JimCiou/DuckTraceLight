#include "include/pitches.h"
#include "include/buzzer.h"

void buzzerON(Chain *ptrchain) { 
    for (int thisNote = 0; thisNote < 5; thisNote++) {
      tone(ptrchain->buzzerPin, melody[thisNote], duration);
      delay(delayTime);
    }
}


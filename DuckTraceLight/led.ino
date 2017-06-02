int ledPin;

void ledInitial(Chain *ptrchain){
    ledPin = ptrchain->ledPin;
    pinMode(ledPin, OUTPUT);
}

void ledBlink(void){
    digitalWrite(ledPin, HIGH);
}

void ledDown(void){
    digitalWrite(ledPin, LOW);
}

void log4aInitial(Chain *ptrchain){
    Serial.begin(ptrchain->moniPort);
}

void log4a(String message){
    Serial.println(message);
}

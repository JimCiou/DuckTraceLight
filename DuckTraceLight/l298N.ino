int motoSpeed;
int motor1In1;
int motor1In2; 
int motor2In1;
int motor2In2;

void l298NInitial(Chain *ptrchain){
    motoSpeed = ptrchain->motoSpeed;
    motor1In1 = ptrchain->motoPin.motoRightIn1;
    motor1In2 = ptrchain->motoPin.motoRightIn2; 
    motor2In1 = ptrchain->motoPin.motoLeftIn1;
    motor2In2 = ptrchain->motoPin.motoLeftIn2;
    pinMode(motor1In1, OUTPUT);
    pinMode(motor1In2, OUTPUT);  
    pinMode(motor2In1, OUTPUT);
    pinMode(motor2In2, OUTPUT); 
} 

void actionCar(int angle){
    if((angle>45)&&(angle<135)){forward();}
    else if((angle<45)&&(angle>0)){trunRight();}
    else if((angle<180)&&(angle>135)){trunLeft();}
    else{turnback();}
}

void stopCar(void){
    analogWrite(motor1In1, 0);
    analogWrite(motor1In2, 0);
    analogWrite(motor2In1, 0);
    analogWrite(motor2In2, 0);
}

void forward(){
    log4a("forward");
    analogWrite(motor1In1, motoSpeed);
    analogWrite(motor1In2, 0);
    analogWrite(motor2In1, motoSpeed);
    analogWrite(motor2In2, 0);
}

void trunRight(){
    log4a("turnRight");
    analogWrite(motor1In1, 0);
    analogWrite(motor1In2, 0);
    analogWrite(motor2In1, motoSpeed);
    analogWrite(motor2In2, 0);
}

void trunLeft(){
    log4a("turnLeft");
    analogWrite(motor1In1, motoSpeed);
    analogWrite(motor1In2, 0);
    analogWrite(motor2In1, 0);
    analogWrite(motor2In2, 0);
}

void turnback(){  
    log4a("turnBack"); 
    analogWrite(motor1In1, motoSpeed);
    analogWrite(motor1In2, 0);
    analogWrite(motor2In1, 0);
    analogWrite(motor2In2, motoSpeed);
}

Chain Porting(void){
   /*Please full up the index to customize your product*/
   Chain toyChain {
      9600,         /*Port for monitor*/
      13,           /*Digital Pin for led*/
      8,            /*Digital Pin for buzzer*/
      11,           /*PWM Pin for servo*/
      {0,1,3},      /*{sensorRight, sensorLeft, sensorBack}*/
      750,          /*Threshold for wait up*/
      {-230,230},   /*{fully left, fully right}*/
      150,          /*Speed 0~255*/
      {5,6,9,10},   /*These Arduino Pins must connect to Motor Driver:L298N, map to those pins {N1, N2, N3, N4}.
      In L298N Field, OUT1 & OUT2 connect to Left Motor, also OUT3 & OUT4 connect to Right Motor. Please aware 
      the incorrect direction of rotating motor, it can be repaired by exchanged with the adjacent pin.
      */
    };
    /*Please full up the index to customize your product*/
    return toyChain;
}

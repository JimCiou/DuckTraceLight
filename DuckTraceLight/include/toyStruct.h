typedef struct {
  int left;            /*Sensor-differential value when fully left*/
  int right;           /*Sensor-differential value when fully right*/
} Range;

typedef struct {
  int sensorRightPin;  /*Analog Pin for sensorRight*/
  int sensorLeftPin;   /*Analog Pin for sensorLeft*/
  int sensorBackPin;   /*Analog Pin for sensorBack*/
} SensorPin;

typedef struct {
  int motoRightIn1;   /*PWM Pin for motoRight1 connect to L298N-N1*/
  int motoRightIn2;   /*PWM Pin for motoRight2 connect to L298N-N2*/
  int motoLeftIn1;    /*PWM Pin for motoLeft1 connect to L298N-N3*/
  int motoLeftIn2;    /*PWM Pin for motoLeft1 connect to L298N-N4*/
} MotoPin;

typedef struct {
  int moniPort;        /*Port for monitor*/
  int ledPin;          /*Digital Pin for led*/
  int buzzerPin;       /*Digital Pin for busser*/
  int servoPin;        /*PWM Pin for servo*/
  SensorPin sensorPin;
  int waitUpThre;      /*Threshold for wait up*/
  Range sensorRange;   /*Sensor characteristic*/
  int motoSpeed;
  MotoPin motoPin;
} Chain;

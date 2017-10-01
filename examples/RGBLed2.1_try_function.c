//------------ DEFINE PIN VARS ------------
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void ledShow(uint8_t redState, uint8_t greenState, uint8_t blueState)
{
  digitalWrite(redPin, redState);
  digitalWrite(greenPin, greenState);
  digitalWrite(bluePin, blueState);
}

void loop(){
  //TURN ON RED LED AND GREEN LED
  ledShow(HIGH,HIGH,LOW);
  delay(1000);

  //TURN ON RED LED AND BLUE LED
  ledShow(HIGH,LOW,HIGH);
  delay(2000);
  
  //TURN ON GREEN LED AND BLUE LED
  ledShow(LOW,HIGH,HIGH);
  delay(1000);
  
  //TURN ON ALL LEDs 
  ledShow(HIGH,HIGH,HIGH);
  delay(1000);
  
  //------------ COMMENT YOUR WORK ------------
  /*
    //TURN OFF ALL LEDs 
    ledShow(LOW,LOW,LOW);
    delay(1000);
  */
}
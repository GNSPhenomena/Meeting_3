//------------ DEFINE PIN VARS ------------
int redPin = 9;
int greenPin = 10;
int bluePin =11;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void ledShow1Sec(uint8_t redState, uint8_t greenState, uint8_t blueState)
{
  digitalWrite(redPin, redState);
  digitalWrite(greenPin, greenState);
  digitalWrite(bluePin, blueState);
  delay(1000);
}

void turnOffLed1Sec()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(1000);
}

void loop(){
  //------------ RED ------------

  //TURN ON RED LED; TURN OFF OTHERS
  ledShow1Sec(HIGH, LOW, LOW);
  //TURN OFF ALL LEDs
  turnOffLed1Sec();

  //------------ GREEN ------------

  //TURN ON GREEN LED; TURN OFF OTHERS
  ledShow1Sec(LOW, HIGH, LOW);
  ledShow1Sec(LOW, HIGH, LOW);
  //TURN OFF GREEN LED
  turnOffLed1Sec();
  delay(1000);

  //------------ BLUE ------------

  //TURN ON BLUE LED; TURN OFF OTHERS
  ledShow1Sec(LOW, LOW, HIGH);
  //TURN OFF BLUE LED
  ledShow1Sec(LOW, LOW, LOW);
}
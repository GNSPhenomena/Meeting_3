//------------ DEFINE PIN VARS ------------
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
//------------ DEFINE LOOP VARS ------------
int counterRed = 0;
int counterGreen = 0;
int counterBlue = 0;

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
  //------------ FOR LOOP ------------

  for(counterRed = 0; counterRed < 3; counterRed++)
  {
    //TURN ON RED LED
    ledShow(HIGH,LOW,LOW);
    delay(1000);
    //TURN OFF RED LED
    ledShow(LOW,LOW,LOW);
    delay(1000);
  }

  //------------ WHILE LOOP ------------
  while(counterGreen < 3)
  {
    //TURN ON GREEN LED
    ledShow(LOW,HIGH,LOW);
    delay(2000);
    //TURN OFF GREEN LED
    ledShow(LOW,LOW,LOW);
    delay(2000);
    //counterGreen INCREASES BY 1
    counterGreen++; // counterGreen = counterGreen + 1; counterGreen += 1;
  }

  //------------ DO WHILE LOOP ------------
  do
  {
    //TURN ON BLUE LED
    ledShow(LOW,LOW,HIGH);
    delay(1000);
    //TURN OFF BLUE LED
    ledShow(LOW,LOW,LOW);
    delay(1000);
    //counterBlue INCREASES BY 1
    counterBlue++; // counterBlue = counterBlue + 1; counterBlue += 1;
  }
  while(counterBlue < 3);
}

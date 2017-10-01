//------------ DEFINE PIN VARS ------------
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
//------------ DEFINE VALUE VARS ------------
int blueV;
int redV;
int greenV;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
  //------------ ANALOG WRITE ------------
  for(redV = 0; redV < 256; redV++)
  {
    greenV = 0;
    blueV = 0;
    analogWrite(redPin, redV);
    analogWrite(greenPin, greenV);
    analogWrite(bluePin, blueV);
    delay(10); // important
  }

  while(greenV < 256)
  {
    redV = 0;
    blueV = 0;
    analogWrite(redPin, redV);
    analogWrite(greenPin, greenV);
    analogWrite(bluePin, blueV);
    delay(10); // important
    greenV++;
  }

  do
  {
    redV = 0;
    greenV = 0;
    analogWrite(redPin, redV);
    analogWrite(greenPin, greenV);
    analogWrite(bluePin, blueV);
    delay(10); // important
    blueV++;
  }
  while(blueV < 255)
}
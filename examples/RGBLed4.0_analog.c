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
  //------------ ANALOGWRITE ------------
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  
/*
  redV = 255;
  greenV = 255;
  blueV = 255;
  analogWrite(redPin, redV);
  analogWrite(greenPin, greenV);
  analogWrite(bluePin, blueV);
*/

/*
  redV = 0;
  greenV = 0;
  blueV = 0;
  analogWrite(redPin, redV);
  analogWrite(greenPin, greenV);
  analogWrite(bluePin, blueV);
*/

/*
  redV = 127;
  greenV = 127;
  blueV = 127;
  analogWrite(redPin, redV);
  analogWrite(greenPin, greenV);
  analogWrite(bluePin, blueV);
*/
}
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

void writeValue(int a, int b, int c)
{
  analogWrite(redPin, a);
  analogWrite(greenPin, b);
  analogWrite(bluePin, c);
}

void loop(){
  //------------ ANALOGWRITE ------------
  writeValue(255,255,255);
  
/*
  redV = 255;
  greenV = 255;
  blueV = 255;
*/

/*
  redV = 0;
  greenV = 0;
  blueV = 0;
*/

/*
  redV = 127;
  greenV = 127;
  blueV = 127;
*/
  writeValue(redV,greenV,blueV);
}
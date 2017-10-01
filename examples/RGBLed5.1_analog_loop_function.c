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
  //------------ ANALOG WRITE ------------
  for(redV = 0; redV < 256; redV++)
  {
    writeValue(redV,0,0);
    delay(10); // important
  }

  while(greenV < 256)
  {
    writeValue(0,greenV,0);
    delay(10); // important
    greenV++;
  }

  do
  {
    writeValue(0,0,blueV);
    delay(10); // important
    blueV++;
  }
  while(blueV < 255)
}
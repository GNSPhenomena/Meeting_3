//------------ DEFINE PIN VARS ------------
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
//------------ DEFINE VALUE VARS ------------
int blueV;
int redV;
int greenV;
//------------ DEFINE LED PINs ------------
int pin;
int otherPin_0;
int otherPin_1;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
  for(int i = 0; i<3; i++)
  {
    if(i==0)
    {
      pin = redPin;
      otherPin_0 = greenPin;
      otherPin_1 = bluePin;
    }
    else if(i==1)
    {
      pin = greenPin;
      otherPin_0 = redPin;
      otherPin_1 = bluePin;
    }
    else if(i==2)
    {
      pin = bluePin;
      otherPin_0 = redPin;
      otherPin_1 = greenPin;
    }
    for(int j = 0; j < 256; j++)
    {
      analogWrite(pin, j);
      analogWrite(otherPin_0, 0);
      analogWrite(otherPin_1, 0);
      delay(10);
    }
  }
}
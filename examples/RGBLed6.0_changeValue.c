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
  for(int i = 0; i<3; i++)
  {
    for(int j = 0; j < 256; j++)
    {
      if(i == 0)
      {
        redV = j;
        greenV = 0;
        blueV = 0;
      }
      else if(i == 1)
      {
        greenV = j;
        redV = 0;
        blueV = 0;
      }
      else if(i == 2)
      {
        blueV = j;
        redV = 0;
        greenV = 0;
      }
      analogWrite(redPin,redV);
      analogWrite(greenPin,greenV);
      analogWrite(bluePin,blueV);
      delay(10);
    }
  }
}
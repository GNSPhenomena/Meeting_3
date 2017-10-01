int redPin = 9,greenPin = 10,bluePin = 11;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void writeValue(int redValue,int greenValue,int blueValue){
    analogWrite(redPin,redValue);
    analogWrite(greenPin,greenValue);
    analogWrite(bluePin,blueValue);
    delay(10);
}

void loop(){
  for(int i = 0; i<3; i++)
    for(int j = 0; j < 256; j++)
    {
      if(i == 0)  writeValue(j,0,0);
      else if(i == 1) writeValue(0,j,0);
      else if(i == 2) writeValue(0,0,j);
    }
}

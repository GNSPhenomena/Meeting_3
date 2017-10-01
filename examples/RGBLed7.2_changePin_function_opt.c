int redPin = 9,greenPin = 10,bluePin = 11;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void writePin(int pin, int otherPin_0, int otherPin_1){
  for(int j = 0; j < 256; j++){
    analogWrite(pin, j);
    analogWrite(otherPin_0, 0);
    analogWrite(otherPin_1, 0);
    delay(10);
  }
}

void loop(){
  for(int i = 0; i<3; i++)
    if(i==0)  writePin(redPin,greenPin,bluePin);
    else if(i==1) writePin(greenPin,redPin,bluePin);
    else if(i==2) writePin(bluePin,redPin,greenPin);
}

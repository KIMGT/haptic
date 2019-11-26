
int sensorPosPin = A2; // input pin for MR sensor
int rawPos=0;

int t;
int mode =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//9600
  pinMode(sensorPosPin, INPUT); // set MR sensor pin to be an input

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) { //if pressed
    int inByte = Serial.read();
    
    if(inByte=='1'){
      mode = 1;
      
    }else if(inByte == '2'){
      mode =2;
     
    }
  }
  //////////////////////////////////

  if (mode==1)
  {
    calculatePosition();  
  }
  else
  {
    calculateVirtualPosition();
  }

  Serial.println(rawPos);
  
  delay(10);
}
void calculatePosition(){
  rawPos = analogRead(sensorPosPin);
}

void calculateVirtualPosition()
{
  t=t+1;
  rawPos = 512+512.0*sin(0.1*t);
}

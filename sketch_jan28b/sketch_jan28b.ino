int apin[16]={A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15};
//int dpin[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int sensorValue[16];
//int flag[16];
int pressure[16];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      // open the serial port at 9600 bps:    
  for(int i=0;i<16;i++)
  {
    pinMode(i,INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<16;i++)
  {
    sensorValue[i] = analogRead(apin[i]);
    switch(i)
    {
      case 0:
      pressure[i]=
      break;
      
    }
    Serial.print(pressure[i]);
    Serial.print('\t');
    //Serial.print(digitalRead(i));
    //Serial.print('\t');
  }
  Serial.println('\r');
  delay(10);
}

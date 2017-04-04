int servopin1=10;
int servopin2=11;
int servopin3=9;
int servopin4=6;

//40mm 1350
// 1600 near 40mm part  1100

//1520 middle
//1300 near 1700 far

void setup(){
  pinMode(servopin1,OUTPUT);
  //pinMode(servopin2,OUTPUT);
  //pinMode(servopin3,OUTPUT);
  //pinMode(servopin4,OUTPUT);
  Serial.begin(9600);
}
int l=700;
int i=0;
int j=0;
int k=0;
void loop(){
  for(i=0;i<100;){
    if (Serial.available() > 0) {
      // read the incoming byte:
                l = Serial.parseInt();
                // say what you got:
                Serial.print("I received: ");
                Serial.println(l, DEC);
        if(l==1){
          l=830;
        }else{
          l=l;
        }
       
      for(j=0;j<20;j++){
        digitalWrite(servopin1,HIGH);
        delayMicroseconds(l);
        digitalWrite(servopin1,LOW);
      }
      Serial.println(l);
    }
    for(j=0;j<20;j++){
      
    }
  }
}


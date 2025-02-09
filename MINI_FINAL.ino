
int sensor=4,relay=8;                         //obj present=>0 otherwise=>1 assumed dcv and cylinder in retracted
void setup(){
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(relay,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sense=digitalRead(sensor);
Serial.println(sense);
delay(500);
if(sense==1)
{digitalWrite(relay,HIGH);
 if(sense==0)
{digitalWrite(relay,LOW);
 delay(4000); 
  
  }
  else{delay(4000);
    } 
  }

}

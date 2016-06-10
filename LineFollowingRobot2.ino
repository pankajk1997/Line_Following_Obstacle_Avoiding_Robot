#include <NewPing.h>

int x,y,t1=0,t2=0;
unsigned int D;

NewPing sonar(12,11,5);

void setup() {

  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {

  D=sonar.ping();
  
  x=digitalRead(2);
  y=digitalRead(3);

  if((x==1)&&(y==1))
  {
  digitalWrite(5,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  t1=0;
  t2=0;
  }
  else if((x==1)&&(y==0))
  {
    if(t1>=20)
    {
  digitalWrite(5,LOW);
  digitalWrite(10,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(5,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
   delay(1000);
    }
    else
    {
  digitalWrite(5,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
   delay(500);
   t1+=1;
    }
   
  }
  else if((x==0)&&(y==1))
  {
    if(t2>=20)
    {
  digitalWrite(5,LOW);
  digitalWrite(10,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
   delay(1000);
    }
    else
    {
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
   delay(500);
   t2+=1;
    }
  }
    else if((x==0)&&(y==0))
  {
  digitalWrite(5,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
   t1=0;
   t2=0;
  }

  if(D!=0)
  {
  digitalWrite(5,LOW);
  digitalWrite(10,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(1000); 
  }
  
  }


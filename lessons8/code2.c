#include <MsTimer2.h> 
int pinInterrupt = 2;
int tick = 0; //计数值
#define IN1 6
#define IN2 3
#define IN3 4
#define IN4 5

void write(byte input)
{
  digitalWrite(IN1,input&0x1);
  digitalWrite(IN2,(input>>1)&0x1);
  digitalWrite(IN3,(input>>2)&0x1);
  digitalWrite(IN4,(input>>3)&0x1);
}

void myfunc()
{
  tick = 0;
  write(byte(tick));
  MsTimer2::start();
}

void onTimer()
{
  write(byte(tick));
  if(tick<9)
    tick = tick + 1;
  else
    tick = 0;
}
 
void setup()
{  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pinInterrupt),myfunc,CHANGE);
  MsTimer2::set(1000, onTimer); 
  MsTimer2::start(); 
}
 
void loop()
{
}

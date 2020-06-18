char ch=' ';
void dw(int a,int b,int c,int d);
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    ch=Serial.read();
    switch(ch)
    {
      case 'f':
      	dw(6,7,8,9);
      	break;
      case 'b':
      	dw(7,6,9,8);
      	break;
      case 'r':
      	dw(7,6,8,9);
      	break;
      case 'l':
      	dw(6,7,9,8);
      	break;
      case 's':
      	digitalWrite(6,LOW);
  		digitalWrite(7,LOW);
  		digitalWrite(8,LOW);
  		digitalWrite(9,LOW);
      	break;
      default:
      	break;
    }
  }
}
void dw(int a,int b,int c,int d)
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
}

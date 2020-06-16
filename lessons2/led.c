int i = 0;
int k = 1;
void setup()
{
  while(i<9)
  {
    pinMode(i, OUTPUT);
    i++;
  }
  i = 0;
}

void loop()
{
  while(i<9&i>=0)
  {
    digitalWrite(i, HIGH);
  	delay(233);
  	digitalWrite(i, LOW);
  	delay(233);
    i = i + k;
  }
  k = -k;
  i = i + k;
}
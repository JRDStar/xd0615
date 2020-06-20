/*
一次性完成全部：
1. 每次输入1位数字，显示在最低位数码管。
2. 每次输入四位数字，分别显示在四个数码管上。
3. 每次输入一串数字，滚动在4位数码管上显示。
*/
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define LT 6
#define BT 7
String read = "";//声明字符串变量
int flag = 0;
int i = 0;
int k = 0;
int S[]={11,10,9,8};

void write(int a,byte b);
void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S[0], OUTPUT);//片选1
  pinMode(S[1], OUTPUT);//片选2
  pinMode(S[2], OUTPUT);//片选3
  pinMode(S[3], OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S[0],HIGH);
  digitalWrite(S[1],HIGH);
  digitalWrite(S[2],HIGH);
  digitalWrite(S[3],HIGH);
}

void loop()
{
  if(Serial.available() > 0)
  {
    read = "";
  while (Serial.available() > 0)  
    {
        read += char(Serial.read());
        delay(2);
    }
    
  }
  byte r[read.length()];
  for(i=0;i<read.length();i++)
  {
    r[i]=byte(read.charAt(i)-'0');
  }
  if(read.length()>4)
    if(k+3<read.length())
    {
      for(i=0;i<4;i++)
      	write(i,r[i+k]);
      k++;
      delay(500);
    }
    else
      k = 0;
  else
  {
    for(i=read.length();i>0;i--)
      write(read.length()-i,r[i-1]);
    delay(100);
  }
  
}

void write(int a,byte input)
{
  digitalWrite(S[a],LOW);
  digitalWrite(IN1,input&0x1);
  digitalWrite(IN2,(input>>1)&0x1);
  digitalWrite(IN3,(input>>2)&0x1);
  digitalWrite(IN4,(input>>3)&0x1);
  digitalWrite(S[a],HIGH);
}
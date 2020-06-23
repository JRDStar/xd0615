/*
  AnalogReadSerial
  Reads an analog input (potentiometer) on pin 0,
  prints the result to the serial monitor.

  OPEN THE SERIAL MONITOR TO VIEW THE OUTPUT FROM
  THE POTENTIOMETER >>

  Attach the center pin of a potentiometer to pin
  A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

int sensorValue = 0; //定义并初始化电压记录

void setup()
{
  pinMode(A0, INPUT);	//将A0口设为输入，A0~A5口可以读取模拟值
  Serial.begin(9600);	//定义串口通信波特率

}

void loop()
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);	//读取A0口的模拟电压并赋值，将5V分成1024段，速率最高10000次/s
  // print out the value you read:
  Serial.println(sensorValue);	//向串口打印读取的模拟值
  delay(10); //延时10ms
}
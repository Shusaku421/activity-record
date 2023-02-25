#include <SoftwareSerial.h> /*シリアル通信を行うためのライブラリ*/
/***************送受信ピン*************************/
#define rxpin 8 // Arduino の受信ピンとして設定した pin 番号を X と置き換える
#define txpin 6 // Arduino の送信ピンとして設定した pin 番号を Y と置き換える
/***************送受信ピン*************************/

/**********走行関係*************/
#define RIGHT 1
#define LEFT -1
#define DRIVE 145 //(右回転速度,左回転速度)
/**********走行関係*************/

/******センサーパケットナンバー********/
#define CL 9
#define CFL 10
#define CFR 11
#define CR 12
#define BUMPSDROPS 7
#define IR 17
/******センサーパケットナンバー********/

// RX,TXピンの割り当て
SoftwareSerial softSerial = SoftwareSerial(rxpin, txpin);

int ledPin = 13; // LED on pin 13 of Arduino
int pirPin = 7;  // Input for HC-S501
int buzzer = 10;

void setup()
{
  delay(2000);
  pinMode(rxpin, INPUT);
  pinMode(txpin, OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  softSerial.begin(57600);
  Serial.begin(57600);   // シリアルモニターのボーレートもこれと一致させてください
  softSerial.write(128); // This command starts the OI. //irobot への書き込み オープンインターフェイス開始のコマンド（Open Interface マニュアル参照
  softSerial.write(132); // set mode to full
}
/*************************************************************
  LOOP
*************************************************************/
void loop()
{
    int CLFFlag=0, BMPFlag=0, IRFlag=0, PIRFlag=0;
    int preState=0, state = 0;
    int bump, drops, ir;
    /*データの読み取り（バンパーとホイールドロップ）*/
    drops = get_1byteData(BUMPSDROPS) & 0x1C;
    ir = get_1byteData(IR);
  
    /*フラグの操作*/
    if ((get_1byteData(CL) == 1) || (get_1byteData(CFL) == 1) || (get_1byteData(CFR) == 1) || (get_1byteData(CR) == 1))CLFFlag = 1;
    if (0<(get_1byteData(BUMPSDROPS)&0x03) && (get_1byteData(BUMPSDROPS)&0x03)<4)BMPFlag = 1;
    if ((ir==248) || (ir==244) || (ir==252) || (ir==250) || (ir==246) || (ir==254))IRFlag = 1;
    if (get_PIR() == 1)PIRFlag = 1;
    /*優先順位確定*/
    preState = set_priority(CLFFlag, BMPFlag, IRFlag, PIRFlag);
    state = subdivide(preState);
    subSumption(state);
}

byte get_1byteData(int op)
{
  byte sensor;

  softSerial.write(142);
  softSerial.write(op);
  delay(100);
  if (softSerial.available() > 0)
  {
    sensor = softSerial.read();
  }
  // Serial.print(op  );
  //Serial.println(sensor);
  return sensor;
}

int get_PIR(void)
{
  int pirVal;
  pirVal= digitalRead(pirPin);
  digitalWrite(ledPin, pirVal);
  //Serial.println(pirVal);
  return pirVal;
}

int set_priority(int flg1, int flg2, int flg3, int flg4)
{
  int priority = 0;
  /*
     1位：崖回避
     2位：障害物回避
     3位：ホームベースを追跡
     4位：人感センサを読み取り音楽を鳴らす
  */
  /*優先順位が高い行動を下に*/
  if (flg4 == 1)priority = 4;/*PIR*/
  if (flg3 == 1)priority = 3;/*IR*/
  if (flg2 == 1)priority = 2;/*BUMPER*/
  if (flg1 == 1) priority = 1;/*CLIF*/
  Serial.print("優先度=");
  Serial.println(priority);
  return priority;
}

int subdivide(int preState)
{
  int sstate = 0;
  int bumper = 0, infRays = 0;

  switch (preState)
  {
    case 0:
      sstate = 0;
      break;

    case 1: /*崖検知*/
      if ((get_1byteData(CFL) == 1) || (get_1byteData(CFR) == 1))sstate = 1;
      if (get_1byteData(CL) == 1)sstate = 2;
      if (get_1byteData(CR) == 1)sstate = 3;
      break;

    case 2: /*障害物検知*/
      bumper = get_1byteData(BUMPSDROPS) & 0x03;
      if (bumper == 3)sstate = 1;
      if (bumper == 2)sstate = 2;
      if (bumper == 1)sstate = 3;
      break;

    case 3:
      infRays = get_1byteData(IR);

      if (infRays == 248)sstate = 4;
      if (infRays == 244)sstate = 5;
      // if (infRays == 242)
      // {
      //   sstate = 6;
      // }
      if (infRays == 252)sstate = 7;
      if (infRays == 250)sstate = 8;
      if (infRays == 246)sstate = 9;
      if (infRays == 254)sstate = 10;
      break;

    case 4:
      sstate = 11;
      break;
  }
  return sstate;
}

/*pram1=右車輪速度, pram2=左車輪速度*/
void behave(int opecode, int param1, int param2)
{
  softSerial.write(opecode);
  softSerial.write((param1 & (0xFF << 8)) >> 8);
  softSerial.write(param1 & 0xFF);
  softSerial.write((param2 & (0xFF << 8)) >> 8);
  softSerial.write(param2 & 0xFF);
}

void turn(int direction, int time)
{
  behave(DRIVE, -200, -200);
  delay(500);
  if (direction == RIGHT)
  {
    behave(DRIVE, -350, 350);
  }
  else if (direction == LEFT)
  {
    behave(DRIVE, 350, -350);
  }
  delay(time);
  behave(DRIVE, 0, 0);
}

void subSumption(int state)
{
  switch (state)
  {
    /*何もしない=どのフラグも立ってない*/
    case 0:
      Serial.println("何もしない");
      break;

    case 1: /*正面に崖・障害物*/
      Serial.println("正面に崖・障害物");
      turn(RIGHT, 1252);
      break;

    case 2: /*左側に崖・障害物*/
      Serial.println("左側に崖・障害物");
      turn(RIGHT, 300);
      break;

    case 3: /*右側に崖・障害物*/
      Serial.println("右側に崖・障害物");
      turn(LEFT, 300);
      break;

    case 4: /*red bouy*/
      Serial.println("red bouy");
      behave(DRIVE, 115, 95);
      break;

    case 5: /*green bouy*/
      Serial.println("green bouy");
      behave(DRIVE, 95, 115);
      break;

    // case 6: /*force field*/
    // break;

    case 7: /*red and green*/
      Serial.println("red and breen");
      behave(DRIVE, 115, 115);
      break;

    case 8: /*red and force*/
      Serial.println("red and force");
      behave(DRIVE, 75, 67);
      break;

    case 9: /*green and force*/
      Serial.println("green and force");
      behave(DRIVE, 67, 75);
      break;

    case 10: /*red and green and force*/
      Serial.println("red green force");
      behave(DRIVE, 75, 75);
      break;

    case 11:
      Serial.println("歌を歌う");
      behave(DRIVE, 0, 0);
      tone(buzzer, 330, 300);//ミ
      delay(300);
      tone(buzzer, 294, 300);//れ
      delay(300);
      tone(buzzer, 262, 600);
      delay(600);
      tone(buzzer, 294, 600);
      delay(600);
      tone(buzzer, 330, 600);
      delay(600);
      tone(buzzer, 440, 600);
      delay(600);
      tone(buzzer, 392, 300);
      delay(600);
      break;
  }
}

int get_2byteData(int op)
{
  int data;
  byte high, low;

  softSerial.write(142);
  softSerial.write(op);
  delay(150);
  high = softSerial.read();
  low = softSerial.read();
  data = (int)(high << 8) + low;
  // Serial.print(op);
  // Serial.println(data);
  return data;
}

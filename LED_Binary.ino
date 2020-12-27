int pinR = 11;
int pinB = 8;
int pinW = 3;
int dtime = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(pinR,OUTPUT);
pinMode(pinB,OUTPUT);
pinMode(pinW,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// 0,0,0
digitalWrite(pinR,LOW);
digitalWrite(pinB,LOW);
digitalWrite(pinW,LOW);
delay(dtime);

// 0,0,1
digitalWrite(pinR,LOW);
digitalWrite(pinB,LOW);
digitalWrite(pinW,HIGH);
delay(dtime);

//0,1,1
digitalWrite(pinR,LOW);
digitalWrite(pinB,HIGH);
digitalWrite(pinW,HIGH);
delay(dtime);

//1,0,0
digitalWrite(pinR,HIGH);
digitalWrite(pinB,LOW);
digitalWrite(pinW,LOW);
delay(dtime);

// 0,0,0
digitalWrite(pinR,LOW);
digitalWrite(pinB,LOW);
digitalWrite(pinW,LOW);
delay(dtime);

// 1,1,1
digitalWrite(pinR,HIGH);
digitalWrite(pinB,HIGH);
digitalWrite(pinW,HIGH);
delay(dtime);
}

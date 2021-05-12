int pinG = 3;
int pinR = 5;
int pinB = 9;
int d_time = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(pinG,OUTPUT);
pinMode(pinR,OUTPUT);
pinMode(pinB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// analog signal produces 0 (OV) to 255 bits (5V)
// analog pins are with a ~ (PMW)

// low brightness
analogWrite(pinG,10);
delay(d_time);
analogWrite(pinR,10);
delay(d_time);
analogWrite(pinB,10);
delay(d_time);

// brighter
analogWrite(pinG,100);
delay(d_time);
analogWrite(pinR,100);
delay(d_time);
analogWrite(pinB,100);
delay(d_time);

// brightest
analogWrite(pinG,255);
delay(d_time);
analogWrite(pinR,255);
delay(d_time);
analogWrite(pinB,255);
delay(d_time);
}

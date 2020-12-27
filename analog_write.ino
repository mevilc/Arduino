int pin=11;
int value1=5;
int value2=100;
int value3=255;
int dtime=500;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // output voltage is from 0 to 255. 0 is 0V, 255 is 5V.
  // Midvoltage is achieved by Pulse Width Modulation.
  // 127 averages 2.5 V by switching from 0-5V
analogWrite(pin,value1);
delay(dtime);

analogWrite(pin,value2);
delay(dtime);

analogWrite(pin,value3);
delay(dtime);
}

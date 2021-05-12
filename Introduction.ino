// all variables are setup before void setup()
int pinR = 7;
int pinG = 2;
int pinB = 9;

void setup() {
  // put your setup code here, to run once:

// OUTPUT = sends a signal, INPUT = recieves a signal.
// pinMode initializes a pin

pinMode(pinR,OUTPUT); 
pinMode(pinG,OUTPUT);
pinMode(pinB,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// digitalWrite sends a digital (1/HIGH/5V, 0/LOW/0V) signal.

// blinks red LED 3 times
digitalWrite(pinR,HIGH);
delay(500); // delays the previous statement (microseconds)
digitalWrite(pinR,LOW);
delay(500);

digitalWrite(pinR,HIGH);
delay(500); // delays the previous statement (microseconds)
digitalWrite(pinR,LOW);
delay(500);

digitalWrite(pinR,HIGH);
delay(500); // delays the previous statement (microseconds)
digitalWrite(pinR,LOW);
delay(500);

// blinks blue LED 5 times
digitalWrite(pinB,HIGH);
delay(50); // delays the previous statement (microseconds)
digitalWrite(pinB,LOW);
delay(1000);

digitalWrite(pinB,HIGH);
delay(500); // delays the previous statement (microseconds)
digitalWrite(pinB,LOW);
delay(1000);

digitalWrite(pinB,HIGH);
delay(1000); // delays the previous statement (microseconds)
digitalWrite(pinB,LOW);
delay(1000);

digitalWrite(pinB,HIGH);
delay(1000); // delays the previous statement (microseconds)
digitalWrite(pinB,LOW);
delay(1000);

digitalWrite(pinB,HIGH);
delay(1000); // delays the previous statement (microseconds)
digitalWrite(pinB,LOW);
delay(1000);

// blinks green LED one time
digitalWrite(pinG,HIGH);
delay(500); // delays the previous statement (microseconds)
digitalWrite(pinG,LOW);
delay(500);
}

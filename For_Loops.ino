int pinR = 5;
int pinG = 9;
int d_time = 500;
int i;
int j;
int k;
String textR = "This is red blink number: ";
String textG = "This is green blink number: ";

void setup() {
  // put your setup code here, to run once:
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // for loop (start, end, step). Can write as i = i + 1
  
  // blinks red LED 3 times
  for (i=0;i<3;i++) {

    // better to have defined "String" above than simple concatenation
    Serial.println(textR + i); 
    digitalWrite(pinR,HIGH);
    delay(d_time);
    digitalWrite(pinR,LOW);
    delay(d_time);
  }

  Serial.println(); // prints empty line
  
  // blinks yellow LED 3 times
  for (j=0;j<5;j++) {
    Serial.println(textG + j);
    digitalWrite(pinG,HIGH);
    delay(d_time);
    digitalWrite(pinG,LOW);
    delay(d_time);
}

  Serial.println(); // prints empty line

  // loops from 10 to 1
  for (k=10;k>0;k=k-1) {
    Serial.println(k);
    delay(d_time);
  }
}

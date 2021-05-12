int pin = A1;
int potV;
int pinG = 2;
int pinY = 4;
int pinR = 6;
float vol;
String text = "The voltage is: ";

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,INPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinY,OUTPUT);
  pinMode(pinR,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potV = analogRead(pin);
  vol = (5./1023.) * potV;
  Serial.println(text + vol);
  delay(500);

  // Below 3 V, green LED
  if (vol < 3.0){
    digitalWrite(pinG,HIGH);
    digitalWrite(pinY,LOW);
    digitalWrite(pinR,LOW);
  }

  // if between 3 and 4V, yellow LED
  if (vol >= 3.0 and vol <= 4.0) {
    digitalWrite(pinG,LOW);
    digitalWrite(pinY,HIGH);
    digitalWrite(pinR,LOW);
  }

  // if above 4V, red LED
  if (vol >= 4.0) {
    digitalWrite(pinY,LOW);
    digitalWrite(pinR,HIGH);
    digitalWrite(pinG,LOW);
    
  }
  
}

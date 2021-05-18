int pinR = 9;
int read_pin = A0;
int pot_val; 

void setup() {
  // put your setup code here, to run once:
  pinMode(pinR, OUTPUT);
  pinMode(read_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val = analogRead(read_pin); // 0 to 1023 bytes
  Serial.println(pot_val);
  delay(500);
  
  // while (condition)
  // read the voltage again inside the while loop, otherwise pot_val will always be above 1000 once it gets there.
  while (pot_val > 1000) {
    digitalWrite(pinR,HIGH);
    pot_val = analogRead(read_pin);
    Serial.println(pot_val);
    delay(500);

  // if not in while loop, keep LED off.
  digitalWrite(pinR,LOW);
  }
  
}

 int pinG = 9;
 int read_pin = A1;
 int pot_val;
 float analog_vol;
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(read_pin,INPUT);
  pinMode(pinG,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val = analogRead(read_pin); // 0 to 1023 bytes
  analog_vol = (255./1023.) * pot_val;
  analogWrite(pinG,analog_vol);
  //delay(50);
  Serial.println(analog_vol);
  delay(500);
}

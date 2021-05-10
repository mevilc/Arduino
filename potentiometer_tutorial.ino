int pinRead=A1;
float V0;
int dtime=700;
string title="Potentiometer Voltage: ";

void setup() {
  // put your setup code here, to run once:
pinMode(pinRead,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
V0=analogRead(pinRead);
V0=(5./1023.)*V0;
Serial.print(title);
Serial.println(V0);
delay(dtime);

}

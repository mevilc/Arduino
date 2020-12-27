// Read analog input from A0 - A5

int pin = A2;
float V2;
int dtime = 1000;
int readVal; // just declaring

void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
Serial.begin(9600); // Setting up serial monitor to print voltage
}

void loop() {
  // put your main code here, to run repeatedly:

// reads voltage from A3 into 'readVal' in terms of 0-1023
readVal = analogRead(pin); // 

// point after number makes the num float. otherwise int 5/1023 = 0
// converting from 0 -1023 to 0-5V
V2 = (5./1023.)*readVal; 

Serial.println(V2); // print new line everytime
delay(dtime); // to slowly get the results

// Voltage near 1023 is closer to 5V
// Voltage near 0 is 0V
// 0 - 1023 is 2^10

}

int pin = A1;
float V2;
int d_time = 1000;
int read_val;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pin,INPUT); // INPUT = getting voltage from pin, instead of puttting out voltage
  Serial.begin(9600); // initializes the serial monitor with 9600 baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  read_val = analogRead(pin); // analogRead reads voltage from 0 (0V) to 1023 (5V) bits

  // change from bits to V
  // why V2? at the resistor junction, the voltage measured is the difference from the resistor to the ground - aka across resistor 2
  // the "." keeps the value a float. Otherwise, treats like an integer
  V2 = (5./1023.) * read_val; 
  Serial.println(V2); // "println" prints a new line in the serial monitor
  delay(d_time); // prints at some delay time
}

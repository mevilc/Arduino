int a = 1;
int b = 2;
int sum;
int d_time = 750;
String text = "sum of ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // without "ln", prints on one line

  // string concatenation is possible with string and int types
  sum = a + b;
  Serial.println(text + a + " + " + b + " is: " + sum); 
  a = a + 1;
  delay(d_time);
}

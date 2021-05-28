int user_input, blink_times, i, pinR = 9, pinG = 11, pinB = 3, d_time = 500;
String user_LED;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);
  Serial.begin(2000000);
}

void loop() {
  // put your main code here, to run repeatedly:

  // ASK
  Serial.println("1) Blink all LEDs, or 2) Choose a LED to blink: \n");
  // wait
  // while no data is on the serial port
  while (Serial.available() == 0) { }

  // reads from serial monitor as an int
  user_input = Serial.parseInt(); // floats (.parseFloat())

  // if user chooses 1, do da LED show
  if (user_input == 1) {
    digitalWrite(pinB,HIGH);
    delay(d_time);
    digitalWrite(pinB, LOW);
    delay(d_time);
    
    digitalWrite(pinR,HIGH);
    delay(d_time);
    digitalWrite(pinR, LOW);
    delay(d_time);

    digitalWrite(pinG,HIGH);
    delay(d_time);
    digitalWrite(pinG, LOW);
    delay(d_time);

    digitalWrite(pinB,HIGH);
    delay(1000);
    digitalWrite(pinG,HIGH);
    delay(1000);
    digitalWrite(pinR,HIGH);
    delay(1000);

    digitalWrite(pinB,LOW);
    digitalWrite(pinG,LOW);
    digitalWrite(pinR,LOW);
    
  } 

  // if user chooses 2, ask which LED to turn on and how many times
  else if (user_input == 2) {
    Serial.println("Which LED (R, B, G)? \n");
    while (Serial.available() == 0) { }
    user_LED = Serial.readString(); // reads the input as a string

    Serial.println("Enter how many times LED blinks: \n");
    while (Serial.available() == 0) { }
    blink_times = Serial.parseInt(); 
    
    if (user_LED == "R")
    {
      Serial.println("You chose the red LED");
      for (i = 0; i < blink_times; i++)  // blinks as many times as user wants
      {
      digitalWrite(pinR,HIGH);
      delay(d_time);
      digitalWrite(pinR, LOW);
      delay(d_time);
      }
    } 
    else if (user_LED == "B")
    {
      for (i = 0; i < blink_times; i++) 
      {
        digitalWrite(pinB,HIGH);
        delay(d_time);
        digitalWrite(pinB, LOW);
        delay(d_time);
      }
    }
    else if (user_LED == "G") 
    { 
      for (i = 0; i < blink_times; i++)
      {
      digitalWrite(pinG,HIGH);
      delay(d_time);
      digitalWrite(pinG, LOW);
      delay(d_time);
      }
    }
  }
}

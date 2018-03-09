/*
This code is an attempt to make a cycle between 3 LEDs on pins 2, 3, 4, with a button on pin 12. The val variable determines
the state of the button. According to this value (HIGH or LOW), the count variable is incremented by 1 each time the button
is pressed, and reset to zero when it exceeds 3.
*/
int led1 = 2;
int led2 = 3;
int led3 = 4;
int inPin = 12;
int val = 0;
int count = 0;

void setup() {
  pinMode(led1, OUTPUT)
  pinMode(led2, OUTPUT)
  pinMode(led3, OUTPUT)
  pinMode(inPin, INPUT)
}

void loop() {
  val = digitalRead(inPin)
  if (val == HIGH) {  //adds 1 to the count each time the button is pressed
    count = count + 1;
    if (count == 4){  //reset the count back to zero if it exceeds 3
      count = 0;
    }
  }
   if (count == 1) {
     digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
  }
  if (count == 2) {
     digitalWrite(led1, LOW);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, LOW);
  }
  if (count == 3) {
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, HIGH);
  }
}

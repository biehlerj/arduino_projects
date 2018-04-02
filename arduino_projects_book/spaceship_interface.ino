/**
 * Code to create a spaceship like interface
 * When a switch is pressed the two red LEDs will alternate flashing
 * When a switch is not pressed the green LED will stay on constant
 */
int switchState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  if (switchState == LOW) {
    // the button is not pressed
    digitalWrite(3, HIGH); // green LED
    digitalWrite(4, LOW);  // red LED
    digitalWrite(5, LOW);  // red LED
  }
  else { // the button is pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250); // wait for a quarter second
    // toggle LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // wait for a quarter second
  }
} // continues the loop

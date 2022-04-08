/*
  Input Pull-up Serial

  This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital
  input on pin 2 and prints the results to the Serial Monitor.

  
  Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
  20K-ohm resistor is pulled to 5V. This configuration causes the input to read
  HIGH when the switch is open, and LOW when it is closed.

*/

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable 
  int ButtonPressed = digitalRead(2);


  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
 
  if (ButtonPressed == HIGH) {
    digitalWrite(13, LOW);
    Serial.println("NOPE");
    
  } else {
    digitalWrite(13, HIGH);
    Serial.println("Button is Pressed");       //print out the value of the pushbutton
  }



void loop() {
  //read the pushbutton value into a variable 
  int ButtonPressed = digitalRead(3);


  // Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
  // HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
 
  if (ButtonPressed == HIGH) {
    digitalWrite(13, LOW);
    Serial.println("NOPE");
    
  } else {
    digitalWrite(13, HIGH);
    Serial.println("Button is Pressed");       //print out the value of the pushbutton
  }

  
}

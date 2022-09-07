//Displaying my first name using the inbuilt led in morse code.
// My name is Angad. Translating it into morse code it becomes ".- -. --. .- -.." 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void line(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(450);                       // wait for 0.45 second to represent a line with longer blink
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(150);
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(150);                       // wait for 0.15 second to represent a dot with shorter blink
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(150);
}
// the loop function runs over and over again forever
void loop() {
//A
dot();
line();
delay(300);

//N
line();
dot();
delay(300);

//G
line();
line();
dot();
delay(300);

//A
dot();
line();
delay(300);

//D
line();
dot();
dot();
delay(300);
}

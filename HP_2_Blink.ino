/* Home Project #2 
EML 4804
6250452 
Steven Rodriguez*/


#define blueLED 2 /* stored the value 2  in the variable blueLED which will facilitate changing the pin number throughout the code if needed.*/


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(blueLED, OUTPUT); //initialized digital pin 2 using blueLED,which has a stored value of 2, as an output. 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(blueLED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // keep LED on for half a second 
  digitalWrite(blueLED, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // keep LED off for half a second
}

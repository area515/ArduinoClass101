/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int led2 = 12;
int button = 3; 

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  if(digitalRead(button) == HIGH){
    
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH);
  delay(1000); 
  }  // wait for a second
}

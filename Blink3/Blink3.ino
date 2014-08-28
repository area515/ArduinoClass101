/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
// Pin 2 has a button, remember to add a BIG pull down resistor to ground.
int button = 2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT); 
  // initialize the button pin as an input.  
  pinMode(button, INPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  //we want it to blink only when the button is pushed
  if(digitalRead(button) == HIGH){ //button is high when the power is connected to the pin (pushed)
    //do code if true
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);               // wait for a second
  }
  
  //do more stuff ... always
  
}

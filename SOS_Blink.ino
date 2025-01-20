/*
  SOS Blink

  Blinks SOS signal on pin set in constant (LED_PIN_1).  3 fast blinks, 3 slow blinks, 3 fast blinks again.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 1 Jan 2025
  by Brad Kivett

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board

const int LED_PIN_1 = 10;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  threeShortBlinks(LED_PIN_1);
  delay(500);

  threeLongBlinks(LED_PIN_1);
  
  threeShortBlinks(LED_PIN_1);
  delay(2500);             
  
}

void threeShortBlinks(int ledPin) {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(500);                      
    digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
    delay(500);
  }
}

void threeLongBlinks(int ledPin) {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH); 
    delay(2000);                        
    digitalWrite(ledPin, LOW); 
    delay(1000);   
  }
}

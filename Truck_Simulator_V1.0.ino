// File: Truck_Simulator_V1.0.ino
// Author: Ingmar Kroon
// Instructions are found at https://github.com/ingmar12345/rangesplitter_arduino_leonardo

#include "Keyboard.h"

const int rangePin = 4; // or whatever pin you like
const int splitterPin = 5;
int rangeFlag = LOW;
int splitterFlag = LOW;
int rangeState = LOW;
int splitterState = LOW;

void setup() {
  pinMode(rangePin, INPUT_PULLUP);
  pinMode(splitterPin, INPUT_PULLUP);

  if(digitalRead(rangePin) == LOW) rangeFlag = LOW;
    else rangeFlag = LOW;
    
  if(digitalRead(splitterPin) == LOW) splitterFlag = LOW;
    else splitterFlag = LOW;
  
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the buttons:
  rangeState = digitalRead(rangePin);
  splitterState = digitalRead(splitterPin);

  // splitter switch (keyboard F13)
  if((splitterState == HIGH) && (splitterFlag == LOW))
  {
    //Keyboard.println("Splitter switch is HIGH"); // do not uncomment while playing ETS2 and ATS, only for testing purposes
    Keyboard.print("Z");
    //Keyboard.write(0x68); // F13, ETS2 and ATS currently don't support function keys that do not appear on the keyboard (F13 to F14)
    splitterFlag = HIGH;
    delay(100);
  }
  if((splitterState == LOW) && (splitterFlag == HIGH))
  {
    //Keyboard.println("Splitter switch is LOW");
    Keyboard.print("Z");
    //Keyboard.write(0x68); // F13
    splitterFlag = LOW;
    delay(100);
  }

  // range switch (keyboard F14)
  if((rangeState == HIGH) && (rangeFlag == LOW))
  { 
    //Keyboard.println("Range switch is HIGH");
    Keyboard.print("X");
    //Keyboard.write(0x69); // F14
    rangeFlag = HIGH;
    delay(100);
  }
  if((rangeState == LOW) && (rangeFlag == HIGH))
  {
    //Keyboard.println("Range switch is LOW");
    Keyboard.print("X");
    //Keyboard.write(0x69); // F14
    rangeFlag = LOW;
    delay(100);
  }
}

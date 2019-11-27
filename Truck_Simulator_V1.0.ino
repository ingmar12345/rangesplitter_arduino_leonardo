// File: Truck_Simulator_V1.0.ino
// Author: Ingmar Kroon
// Instructions are found at https://github.com/ingmar12345/rangesplitter_arduino_leonardo

#include "Keyboard.h"

const int rangePin = 4; // or whatever pin you like
const int splitterPin = 5;
// const int easyjakePin = 6; // my knob does not have an easy jake button, uncomment if you do have one

int rangeFlag = LOW;
int splitterFlag = LOW;
int rangeState = LOW;
int splitterState = LOW;
// int easyjakeFlag = LOW;
// int easyjakeState = LOW;

void setup() {
  pinMode(rangePin, INPUT_PULLUP);
  pinMode(splitterPin, INPUT_PULLUP);

  if(digitalRead(rangePin) == LOW) rangeFlag = LOW;
    else rangeFlag = LOW;
    
  if(digitalRead(splitterPin) == LOW) splitterFlag = LOW;
    else splitterFlag = LOW;
  
  /*
  if(digitalRead(easyjakePin) == LOW) easyjakeFlag = LOW;
    else easyjakeFlag = LOW;
  */
  
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the buttons:
  rangeState = digitalRead(rangePin);
  splitterState = digitalRead(splitterPin);

  // splitter switch
  if((splitterState == HIGH) && (splitterFlag == LOW))
  {
    //Keyboard.println("Splitter switch is HIGH"); // do not uncomment while playing ETS2 and ATS, only for testing purposes
    Keyboard.print("Z");
    splitterFlag = HIGH;
    delay(100);
  }
  if((splitterState == LOW) && (splitterFlag == HIGH))
  {
    //Keyboard.println("Splitter switch is LOW");
    Keyboard.print("Z");
    splitterFlag = LOW;
    delay(100);
  }

  // range switch
  if((rangeState == HIGH) && (rangeFlag == LOW))
  { 
    //Keyboard.println("Range switch is HIGH");
    Keyboard.print("X");
    rangeFlag = HIGH;
    delay(100);
  }
  if((rangeState == LOW) && (rangeFlag == HIGH))
  {
    //Keyboard.println("Range switch is LOW");
    Keyboard.print("X");
    rangeFlag = LOW;
    delay(100);
  }
  
  // easyjake switch
  /*
  if((easyjakeState == HIGH) && (easyjakeFlag == LOW))
  { 
    //Keyboard.println("easyjake switch is HIGH");
    Keyboard.print("V");
    easyjakeFlag = HIGH;
    delay(100);
  }
  if((easyjakeState == LOW) && (easyjakeFlag == HIGH))
  {
    //Keyboard.println("easyjake switch is LOW");
    Keyboard.print("V");
    easyjakeFlag = LOW;
    delay(100);
  }
  */
}

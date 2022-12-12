#include <Arduino.h>
#include "Trappe.hpp"

Trappe trappe(6);

void setup (){
  trappe.init();
  
}

void loop ()
{
  
  trappe.ouvrir();
  delay(1000);
  trappe.fermer();
  delay(1000);

  
}


/*
#include <Servo.h>
#include <Arduino.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  myservo.write(0);
  delay(1000);
    myservo.write(180);
  delay(1000);
  

}
*/
//== Ship ==//
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);
void setup()
{
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(10, OUTPUT); //LED headLight
  pinMode(6, OUTPUT); //DC motor_left
  pinMode(7, OUTPUT); //DC motor_right
}
void loop()
{
  char c;
  if ( mySerial.available() ) {
    c = mySerial.read();
    if ( c == 'a') { //if signal a comes 
      if(digitalRead(10) == LOW){ //if LED is off
        digitalWrite(10, HIGH); 
        }
        else { //if LED is on
          digitalWrite(10, LOW);
        }
    }
    if ( c == 'c') { //if signal c comes, buzzer works
      tone(8,300,1000);
      delay(3000);
      noTone(8);
    }
    if( c =='d'){ //Go straight
      analogWrite(6, 130);
      analogWrite(7, 110);
    }
    if( c =='e'){ //Go right
      analogWrite(6, 130);
      analogWrite(7, 0);
    }
    if( c =='f'){ //Go left
      analogWrite(6, 0);
      analogWrite(7, 110);
    }
     if( c =='g'){ //Stop
      analogWrite(6, 0);
      analogWrite(7, 0);
    }
  }

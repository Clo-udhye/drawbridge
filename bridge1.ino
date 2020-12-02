#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);
int degree_BR;
int degree_CB;
Servo servo_stop;
Servo servo_bridge;

void setup()
{
  mySerial.begin(9600);
  Serial.begin(9600);
  servo_stop.attach(13);
  servo_bridge.attach(12);
}

void loop()
{
  char c;
  
  if ( mySerial.available() ) {

    c = mySerial.read();
    if ( c == 'a') { //Block the road
      digitalWrite(10, HIGH);
       for(degree_CB = 90; degree_CB >= 0; degree_CB -= 1){ 
      servo_stop.write(degree_CB); 
      delay(50);      
        }
        digitalWrite(10, LOW);
    }

   else if ( c == 'b') { //Bridge up
      digitalWrite(10, HIGH);
        for(degree_BR = 0; degree_BR <= 90; degree_BR += 1){ 
      servo_bridge.write(degree_BR);
      delay(50);  
         }
         digitalWrite(10, LOW);
    }

    else if (c == 'c') { //Bridge down
      digitalWrite(10, HIGH);
        for(degree_BR = 90; degree_BR >= 0; degree_BR -= 1){ 
      servo_bridge.write(degree_BR);
      delay(50);  
      }
      digitalWrite(10, LOW);
  }

  else if ( c == 'd') { //Block the road
    digitalWrite(10, HIGH);
       for(degree_CB = 0; degree_CB <= 90; degree_CB += 1){ 
      servo_stop.write(degree_CB);
      delay(50);       
        }
        digitalWrite(10, LOW);
    }
}
}
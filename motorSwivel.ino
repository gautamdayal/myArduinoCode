// A mounted motor turns clockwise or anticlockwise based on input from an android phone connected via bluetooth

#include <SoftwareSerial.h>

int delaytime = 10;
char input;
SoftwareSerial BlueTooth(5, 6);

void setup() {
  
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);

  BlueTooth.begin(9600);

}

void loop() {
  
  if(BlueTooth.available()){
      input = BlueTooth.read();

      if(input == 'a'){
        
        digitalWrite(12, HIGH);
        digitalWrite(9, LOW);
        analogWrite(3, 123);
        delay(100);

        digitalWrite(9, HIGH);
        delay(100);
        
        }
       else if(input == 'd'){
        
        digitalWrite(12, LOW);
        digitalWrite(9, LOW);
        analogWrite(3, 123);
        delay(100);

        digitalWrite(9, HIGH);
        delay(100);
        
        }
    }

}

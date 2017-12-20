/*
      Program that fades an LED on and off using PWM(Pulse width modulation)
*/

// Assigning pin number to LED and creating variable for delay interval.

const int LED = 3;          
const int delTime = 2;

void setup() {

  // Setting LED as output.
  pinMode(LED, OUTPUT);
  
}

void loop() {
  
// Calling function defined below.
flash();
 
}

// Defining function
void flash() {
  // For loop switches value of i by 1 until 256
  for(int i=0; i<256; i++){
    // LED shines with brightness according to i
    analogWrite(LED, i);
    delay(delTime);
    }
  // For loop switches value of i by -1 till 0
  for(int i=255; i>=0; i--){
    // LED shines with brightness according to i
    analogWrite(LED, i);
    delay(delTime);
    }
  
  }

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


int pos = 0;
unsigned long startTime;
bool sweepPhase = true;

void setup() {

  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);


  startTime = millis();

}

void loop() {
  
  if (sweepPhase && (millis() - startTime < 2000)) {
    performSweep();
  }

  else  {
    holdAt90Degrees();
    sweepPhase = false;
  }


}

void performSweep() {

  for (pos = 0; pos <= 180; pos += 1) {

    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    delay(10);


    if (millis() - startTime >= 2000) {
      return;
    }
  }


  for (pos = 180; pos >= 0; pos -= 1) {

    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    delay(10);


    if (millis() - startTime >= 2000) {
      return;
    }
  }
}


void holdAt90Degrees() {
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

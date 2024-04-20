#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void setup() {
  
}

void loop() {
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
}

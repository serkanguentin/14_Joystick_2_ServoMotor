#include <Servo.h>
Servo motor1;
Servo motor2;
void setup() {
  motor1.attach(5);
  motor2.attach(6);
}
void loop() {
  int x=analogRead(A0);
  int y=analogRead(A1);

  int xmap=map(x,0,1023,0,180);
  int ymap=map(y,0,1023,0,180);

  motor1.write(xmap);
  motor2.write(ymap);
  }
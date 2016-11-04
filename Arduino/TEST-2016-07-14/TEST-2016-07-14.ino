#include<Servo.h>

int inp = A0;
int out_up = 5;
int out_down = 3;

Servo servo_up;
Servo servo_down;

//void servopulse(int val1) {
//  int myangle1 = map(val1, 0, 180, 500, 2480);
//  servo_up.write(myangle1);
//  servo_down.write(myangle1);
//  delay(20 - val1 / 1000);
//}


void servopulse(int val1) {
  int myangle1 = map(val1, 500, 2500, 0, 180);
  servo_up.write(myangle1);
  servo_down.write(myangle1);
  delay(15 - val1 / 1000);
}

void setup() {
  Serial.begin(9600);
  servo_up.attach(out_up);
  servo_down.attach(out_down);
  pinMode(inp, INPUT);

}

void loop() {
  int dur = pulseIn(inp,HIGH);
  //Serial.print("dur:");
  //Serial.println(dur , DEC);
  //dur = (dur - 960) / 4;
  Serial.print("dur2:");
  Serial.println(dur , DEC);
  servopulse(dur);
  //delay(30);
  
  /*TEST*/
  //delay(3000);
  //int dur = 1100;
  //dur = (dur - 960)/4;
  //servopulse(dur);
}

//commit

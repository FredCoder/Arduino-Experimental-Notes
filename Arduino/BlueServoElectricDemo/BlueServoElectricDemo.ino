#include<Servo.h>

int sp1 = 5;
int val;
int val1;
int myangle1;
int port = A0;
int bspl = 0;

Servo servo;

void servopulse(int sp1 , int val1) {
  myangle1 = map(val1, 0, 180, 500, 2480);
  servo.write(myangle1);
  delay(20 - val1 / 1000);
}

void setup() {
  servo.attach(sp1);
  Serial.begin(9600);
  Serial.println("servu=o_seral_simple ready");
  pinMode(port , INPUT);

  for (int i = 0; i <= 110 ; ++i) {
    servopulse(sp1 , 150);
  }

  for (int i = 0 ; i <= 55; ++i) {
    servopulse(sp1 , 20);
  }

  for (int i = 0 ; i < 150 ; ++i) {
    servopulse(sp1 , 10);
  }
  Serial.println("Hello world");
}

void loop() {
  if (Serial.available()) {
    bspl = Serial.read();
  }

  if (bspl != 0) {
    Serial.println("BlueTooth:");
    Serial.println(bspl, DEC);
    servopulse(sp1, bspl);
  } else {
    int dur = pulseIn(port , HIGH);
    dur = (dur - 960) / 4;

    Serial.println("Receiver:");
    Serial.println(dur, DEC);
    Serial.println();
    servopulse(sp1, dur);
  }
  delay(500);
}

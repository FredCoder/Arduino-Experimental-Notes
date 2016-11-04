int brightness = 0;
int fadeAmount = 5;
int point = 5;

void setup() {
  pinMode(point , OUTPUT);
}

void loop() {
  analogWrite(point , brightness);
  brightness = brightness + fadeAmount;
  if (brightness == 0 || brightness == 255){
    fadeAmount = -fadeAmount;
  }

  delay(30);
}

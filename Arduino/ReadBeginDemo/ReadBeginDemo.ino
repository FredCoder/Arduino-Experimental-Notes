int sp1 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(sp1, INPUT);
}

void loop() {
  int dur;
  int r;
  dur = pulseIn(sp1,HIGH);
  r = (dur-960)/4;
  Serial.println(r , DEC);
  delay(500);

}

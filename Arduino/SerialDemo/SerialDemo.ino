int port = 8;

void setup() {
  Serial.begin(9600);
  pinMode(port , INPUT);
}

void loop() {
  int dur = pulseIn(port , HIGH);
  dur = (dur - 960) / 4;
  Serial.println(dur , DEC);

  if (Serial.available()){
    Serial.print("BlueTooth:");
    Serial.write(Serial.read());
    Serial.println();
  }

  delay(500);

}

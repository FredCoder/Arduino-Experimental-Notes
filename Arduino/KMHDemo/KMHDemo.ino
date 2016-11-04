int pin = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin , INPUT);
}

void loop() {
  int value = digitalRead(pin);

  Serial.println(value , DEC);
}

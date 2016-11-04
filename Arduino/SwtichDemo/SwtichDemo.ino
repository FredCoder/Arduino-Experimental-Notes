int point = 5;
int keyNumber = 5;

void setup() {
  pinMode(point , OUTPUT);
}

void loop() {
  int i;
  while(1){
    i = analogRead(keyNumber);
    if (i > 1000){
      digitalWrite(point , HIGH);
    } else {
      digitalWrite(point , LOW);
    }
  }
}

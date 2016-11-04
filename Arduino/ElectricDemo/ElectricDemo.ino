int sp1 = 9;
int pulsewidth;
int val;
int val1;
int myangle1;

void servopulse(int sp1 , int val1) {
  myangle1 = map(val1, 0, 180, 500, 2480);
  digitalWrite(sp1, HIGH);
  delayMicroseconds(myangle1);
  digitalWrite(sp1, LOW);
  delay(20 - val1 / 1000);
}

void setup() {
  pinMode(sp1, OUTPUT);
  Serial.begin(9600);
  Serial.println("servu=o_seral_simple ready");

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
  val = '8';
  if (val > '0' && val <= '9') {
    val1 = val - '0';
    val1 = map(val1 , 0, 9 , 0 , 180);
    Serial.println("moving servo to");
    Serial.println(val1, DEC);
    Serial.println();
    for (int i = 0; i <= 50 ; ++i) {
      servopulse(sp1, val1);
    }
  }
}

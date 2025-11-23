void setup() {
  Serial.begin(115200);
}

void loop() {
  // left: 700 | right: 2350 
  int pot1 = analogRead(32);
  // down: 1700 | up: 2800
  int pot2 = analogRead(33);
  pot1 = constrain(pot1, 700, 2350);
  pot2 = constrain(pot2, 1700, 2800);

  int leftRight = map(pot1, 700, 2350, -5, 5);
  Serial.print("left - right: ");
  Serial.println(leftRight);

  int upDown = map(pot2, 1700, 2800, 5, -5);
  Serial.print("up - down: ");
  Serial.println(upDown);

  delay(500);
}

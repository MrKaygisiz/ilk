void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT); // LED bağlı pin
}

void loop() {
  if (Serial.available()) {
    String komut = Serial.readStringUntil('\n');

    if (komut == "LED_YAK") {
      digitalWrite(3, HIGH);
    } else if (komut == "LED_SONDUR") {
      digitalWrite(3, LOW);
    }
  }
}
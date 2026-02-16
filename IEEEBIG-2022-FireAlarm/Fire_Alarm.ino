void setup() {
  pinMode(19, OUTPUT);  // Atur pin 19 sebagai output untuk LED 1
  pinMode(21, OUTPUT);  // Atur pin 21 sebagai output untuk LED 2
}

void loop() {
  digitalWrite(19, HIGH);  // Hidupkan LED 1
  digitalWrite(21, LOW);   // Matikan LED 2
  delay(1000);             // Tunggu 1 detik

  digitalWrite(19, LOW);   // Matikan LED 1
  digitalWrite(21, HIGH);  // Hidupkan LED 2
  delay(1000);             // Tunggu 1 detik
}

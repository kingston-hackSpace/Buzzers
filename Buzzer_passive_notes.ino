int passiveBuzzer = 8;

void setup() {
  pinMode(passiveBuzzer, OUTPUT);

  tone(passiveBuzzer, 1000, 2000);
}

void loop() {
  tone(passiveBuzzer, 440); // A4
  delay(1000);

  tone(passiveBuzzer, 494); // B4
  delay(1000);

  tone(passiveBuzzer, 523); // C4
  delay(1000);

  tone(passiveBuzzer, 587); // D4
  delay(1000);

  tone(passiveBuzzer, 659); // E4
  delay(1000);

  tone(passiveBuzzer, 698); // F4
  delay(1000);

  tone(passiveBuzzer, 784); // G4
  delay(1000);

  noTone(passiveBuzzer);
  delay(1000);
}

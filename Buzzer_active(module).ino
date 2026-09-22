int activeBuzzer = 8;

void setup () {
  pinMode (activeBuzzer, OUTPUT);
}
void loop () {
  analogWrite (activeBuzzer, 255);
  delay (500);
  analogWrite (activeBuzzer, 0);
  delay (100);
}

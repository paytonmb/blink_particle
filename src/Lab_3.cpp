

// Particle Argon SOS Morse Code
int led = D7; // Onboard LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // S (Three dots)
  for (int i = 0; i < 3; i++) {
    digitalWrite(led, HIGH);
    delay(200); // Short blink
    digitalWrite(led, LOW);
    delay(200);
  }

  delay(200); // Gap between letters

  // O (Three dashes)
  for (int i = 0; i < 3; i++) {
    digitalWrite(led, HIGH);
    delay(600); // Long blink
    digitalWrite(led, LOW);
    delay(200);
  }

  delay(200); // Gap between letters

  // S (Three dots)
  for (int i = 0; i < 3; i++) {
    digitalWrite(led, HIGH);
    delay(200); // Short blink
    digitalWrite(led, LOW);
    delay(200);
  }

  delay(2000); // Wait 2 seconds before repeating
}

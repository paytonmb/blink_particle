/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

// Random note to show git tools

// The setup() method is called once when the device boots.

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

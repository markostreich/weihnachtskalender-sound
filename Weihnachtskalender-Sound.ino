#include "ButtonMatrix.h"
#include "Mp3Player.h"

void setup() {
  Serial.begin(115200);
  initMp3Player();
}

void loop() {
  const byte key = checkButton();  // Knopf auslesen
  makeSound(key);                  // Ton spielen
}
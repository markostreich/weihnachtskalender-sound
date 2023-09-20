#include "ButtonMatrix.h"
#include "Mp3Player.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  const byte key = checkButton(); // Knopf auslesen
  makeSound(key); // Ton spielen
}
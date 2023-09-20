#ifndef MP3_PLAYER_H
#define MP3_PLAYER_H

/* Definition der Sound-Komponente */

void makeSound(const byte key) {
  if (key) {
    Serial.print("Türchen ");
    Serial.print(key);
    Serial.println(" wurde geöffnet.");

    switch (key) {
      case 6:
        Serial.println("Heute kommt der Nikolaus!");
        break;
      case 24:
        Serial.println("Frohe Weihnachten!");
        break;
      default: Serial.println("Schöne Adventszeit!");
    }
  }
}

#endif  //MP3_PLAYER_H
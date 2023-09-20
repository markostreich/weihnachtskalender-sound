#ifndef BUTTON_MATRIX_H
#define BUTTON_MATRIX_H

#include <Keypad.h> //Bibliothek zum auslesen der Matrix Tastatur

//Definieren der Zeilen und Spalten.
const byte COLS = 5;
const byte ROWS = 5;

//Definieren der Pins, ueber welche die Matrix Tastatur
//mit dem Microcontroller verbunden wurde.
const byte COL_PINS[COLS] = { 2, 3, 4, 5, 6 }; 
const byte ROW_PINS[ROWS] = { 11, 10, 9, 8, 7 };

//Aufbau der Tastatur als mehrdimensionales Array abbilden.
const byte KEYS[ROWS][COLS]={
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,0}
};

//Initialisieren des KeyPad Objektes 
Keypad myKeypad = Keypad(makeKeymap(KEYS), ROW_PINS, COL_PINS, ROWS, COLS);

byte checkButton() {
  //lesen, ob eine Taste gedrueckt wurde
  return myKeypad.getKey();
}

#endif //BUTTON_MATRIX_H
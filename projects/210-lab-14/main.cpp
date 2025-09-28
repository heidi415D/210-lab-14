// COMSC-210 | Lab 14 | Heidi Pico
// IDE: VS CODE
#include <iostream>
#include "Color.h"
using namespace std;

// constants - no hardcoded literals
const int ZERO_VAL = 0;
const int RED_VAL = 255;
const int GREEN_VAL = 255;
const int BLUE_VAL = 255;
const int MID_VAL = 128;

int main() {
   // create colors
   Color black(ZERO_VAL, ZERO_VAL, ZERO_VAL);
   Color red(RED_VAL, ZERO_VAL, ZERO_VAL);
   Color green(ZERO_VAL, GREEN_VAL, ZERO_VAL);
   Color blue(ZERO_VAL, ZERO_VAL, BLUE_VAL);

    // test using setters
    Color custom;
    custom.setRed(MID_VAL);
    custom.setGreen(MID_VAL);
    custom.setBlue(MID_VAL);

    // print colors
    cout << "Colors in project:" << endl;
    black.print();
    red.print();
    green.print();
    blue.print();
    custom.print();

    return 0;
}


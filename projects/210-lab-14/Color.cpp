#include "Color.h"
#include <iostream>
using namespace std;


// constants - no hardcoded literals
const int ZERO_VAL = 0;
const int RED_VAL = 255;
const int GREEN_VAL = 255;
const int BLUE_VAL = 255;
const int MID_VAL = 128;

// default constructor
Color::Color() {
    r = ZERO_VAL;
    g = ZERO_VAL;
    b = ZERO_VAL;
}
 
// constructor with parameters
Color::Color(int rr, int gg, int bb){
    r = rr;
    g = gg;
    b = bb;
    }

void Color::setRed(int value) { r = value }
void Color::setGreen(int value) { g = value; }
void Color::setBlue(int value) { b = value; }
    
int Color::getRed() { return r;}
int Color::getGreen() { return g; }
int Color::getBlue() { return b; }
     
   // print color values
void Color::print() {
     cout << "Red: " << r
          << "  Green: " << g
          << "  Blue: " << b << endl;
    }
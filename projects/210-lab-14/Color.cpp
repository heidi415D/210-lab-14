#include "Color.h"
#include <iostream>
using namespace std;

// default constructor
Color::Color() {
    r = 0;
    g = 0;
    b = 0;
}
 
// constructor with parameters
Color::Color(int rr, int gg, int bb){
    r = rr;
    g = gg;
    b = bb;
    }

void Color::setRed(int value) { r = value; }
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
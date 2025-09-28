#include <iostream>
using namespace std;

const int ZERO_VAL = 0;
const int RED_VAL = 255;
const int GREEN_VAL = 255;
const int BLUE_VAL = 255;
const int MID_VAL = 128;

// starting w struct, will change to class
class Color {
    private:
    int r, g, b;
    
    public:
    Color() {
        r = ZERO_VAL;
        g = ZERO_VAL;
        b = ZERO_VAL;
    } 

    Color(int rr, int gg, int b){
        r = rr;
        g = gg;
        b = bb;
    }
    
    void setRed(int value) { r = value }
    void setGreen(int value) { g = value; }
    void setBlue(int value) { b = value; }
    
    int getRed() { return r;}
    int getGreen() { return g; }
    int getBlue() { return b; }
     
   // print color values
   void print() {
        cout << "Red: " << r
             << "  Green: " << g
             << "  Blue: " << b << endl;
    }
};

int main() {
   Color c1(MID_VAL, MID_VAL, MID_VAL);
    c1.print();
    return 0;
}


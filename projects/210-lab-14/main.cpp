#include <iostream>
using namespace std;

// starting w struct, will change to class
class Color {
    private:
    int r, g, b;
    
    public:
    Color() { r = 0; g = 0; b = 0; } 

    Color(int r, int g, int b){
        r = r; // using same parameter names here
        g = g;
        b = b;
    }
    void setRed(int value) { r = value }
    void setGreen(int value) { g = value; }
    void setBlue(int value) { b = value; }
    
    int getRed() { return r;}
    int getGreen() { return g; }
    int getBlue() { return b; }
     
    void print() {
        cout << "Color(" << r << ", " << g << ", " << b << ")\n";
    }
};

int main() {
    Color c1{255, 0, 0}; // testing colors
    Color c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);

    c1.print();
    c2.print();
    return 0;
}


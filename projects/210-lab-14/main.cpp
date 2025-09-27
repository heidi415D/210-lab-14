#include <iostream>
using namespace std;

// starting w struct, will change to class
struct Color {
    int r, g, b;
    void print() {
        cout << "Color(" << r << ", " << g << ", " << b << ")\n";
    }
};

int main() {
    Color c1{255, 0, 0}; // testing colors
    Color c2{0, 255, 0};
    c1.print();
    c2.print();
    return 0;
}


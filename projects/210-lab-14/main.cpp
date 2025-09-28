#include <iostream>
using namespace std;

const int ZERO_VAL = 0;
const int RED_VAL = 255;
const int GREEN_VAL = 255;
const int BLUE_VAL = 255;
const int MID_VAL = 128;

};

int main() {
   Color black(ZERO_VAL, ZERO_VAL, ZERO_VAL);
   Color red(RED_VAL, ZERO_VAL, ZERO_VAL);
   Color green(ZERO_VAL, GREEN_VAL, ZERO_VAL);
   Color blue(ZERO_VAL, ZERO_VAL, BLUE_VAL);

    black.print();
    red.print();
    green.print();
    blue.print();

    return 0;
}


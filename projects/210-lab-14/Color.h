#ifndef COLOR_H
#define COLOR_H

class Color {
private:
    int r; // red value
    int g; // green value
    int b; // blue value

public:
    Color(); // default constructor
    Color(int rr, int gg, int bb); // constructor with parameters

    void setRed(int value);
    void setGreen(int value);
    void setBlue(int value);

    int getRed(); // getters
    int getGreen();
    int getBlue();

    void print(); // print color values
};

#endif
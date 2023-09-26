#include<iostream>
#include"triangle.h"

int main() {
    // Create a Triangle object with base 5.0 units and height 4.0 units
    Triangle myTriangle(3.0, 4.0);
    myTriangle.area();
    myTriangle.hypot();
    // Display the triangle's properties
    myTriangle.display();

    return 0;
}

#include "triangle.h"
#include <iostream>

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::area() {
    std::cout << "called area()\n";
    return 0.5 * base * height;
}

double Triangle::hypot() {
    return (std::hypot(base, height));
}

void Triangle::display() {
    std::cout << "Base: " << base << " units" << std::endl;
    std::cout << "Height: " << height << " units" << std::endl;
    std::cout << "Area: " << area() << " square units" << std::endl;
    std::cout << "?Hypot: " << hypot() << " units" << std::endl;
}

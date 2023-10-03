// In Circle.cpp
#include "Circle.h"

// Constructor
Circle::Circle(double radius) : radius(radius) {}

// Member function to calculate the area of the circle
double Circle::calculateArea() const {
    return std::numbers::pi_v<double> *radius * radius;
}

// Getter function to access the radius
double Circle::getRadius() const {
    return radius;
}

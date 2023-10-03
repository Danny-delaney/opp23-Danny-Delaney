// In Circle.h
#pragma once
#include <numbers>

class Circle {
public:
    // Constructor
    Circle(double radius);

    // Member function to calculate the area of the circle
    double calculateArea() const;

    // Getter function to access the radius
    double getRadius() const; // Add this getter method

private:
    double radius;
};

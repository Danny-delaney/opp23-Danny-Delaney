#pragma once
#include "Circle.h"

class Cylinder {
public:
    // Default constructor
    Cylinder() = default;

    // Constructor that accepts height and radius
    Cylinder(double height, double radius);

    // Member function to calculate the volume of the cylinder
    double calculateVolume() const;

    // Member function to calculate the surface area of the cylinder
    double calculateSurfaceArea() const;

private:
    double height;
    Circle base; // Composed Circle object
};

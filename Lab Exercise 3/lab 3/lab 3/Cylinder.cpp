// In Cylinder.cpp
#include "Cylinder.h"

// Constructor that accepts height and radius
Cylinder::Cylinder(double height, double radius) : height(height), base(radius) {}

// Member function to calculate the volume of the cylinder
double Cylinder::calculateVolume() const {
    return base.calculateArea() * height;
}

// Member function to calculate the surface area of the cylinder
double Cylinder::calculateSurfaceArea() const {
    double baseArea = base.calculateArea();
    double lateralSurfaceArea = 2 * baseArea; // Two identical circular bases
    double sideArea = 2 * std::numbers::pi_v<double> *base.getRadius() * height;
    return lateralSurfaceArea + sideArea;
}

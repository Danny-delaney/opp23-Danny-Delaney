#include <iostream>
#include "Circle.h"
#include "Cylinder.h"

int main() {
    // Create a Cylinder object with a height of 10.0 and a radius of 5.0
    Cylinder myCylinder(10.0, 5.0);

    // Calculate and print the volume of the cylinder
    double volume = myCylinder.calculateVolume();
    std::cout << "Volume of the cylinder: " << volume << std::endl;

    // Calculate and print the surface area of the cylinder
    double surfaceArea = myCylinder.calculateSurfaceArea();
    std::cout << "Surface area of the cylinder: " << surfaceArea << std::endl;

    return 0;
}

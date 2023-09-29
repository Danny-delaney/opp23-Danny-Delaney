#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;

public:
    Triangle(double b, double h, TriangleColor c);
    double hypot();
    double area();
    void display();
};

#endif // TRIANGLE_H

enum class TriangleColor {
    red,
    green,
    blue,
    white,
    black
};

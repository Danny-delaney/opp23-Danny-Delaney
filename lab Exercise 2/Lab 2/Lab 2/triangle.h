#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;

public:
    Triangle(double b, double h);
    double hypot();
    double area();
    void display();
};

#endif // TRIANGLE_H

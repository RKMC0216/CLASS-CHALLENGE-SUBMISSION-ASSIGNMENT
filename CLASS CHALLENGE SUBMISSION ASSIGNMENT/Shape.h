#include <iostream>
using namespace std;

// Base class (Superclass)
class Shape {
protected:
    string color;
public:
    Shape(string col) : color(col) {}
    double getArea() { return 0; } // Default implementation
    string getColor() { return color; }
};

//Rectangle
class Rectangle : public Shape {
private:
    double height, width;
public:
    Rectangle(string col, double h, double w) : Shape(col), height(h), width(w) {}
    double getArea() {
        return height * width;
    }
};

//Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(string col, double b, double h) : Shape(col), base(b), height(h) {}
    double getArea() {
        return 0.5 * base * height;
    }
};

//Circle
class Circle : public Shape {
private:
    double r;
public:
    Circle(string col, double radius) : Shape(col), r(radius) {}
    double getArea() {
        return (22.0 / 7.0) * r * r;
    }
};

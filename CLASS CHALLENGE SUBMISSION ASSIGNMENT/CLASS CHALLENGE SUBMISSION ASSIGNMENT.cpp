#include <iostream>
#include "Shape.h"
int main()
{
    // Create objects of each shape
    Rectangle rect("Red", 10, 5);
    Triangle tri("Blue", 6, 8);
    Circle circ("Green", 7);

    // Display areas
    cout << "Rectangle Color: " << rect.getColor() << ", Area: " << rect.getArea() << endl;
    cout << "Triangle Color: " << tri.getColor() << ", Area: " << tri.getArea() << endl;
    cout << "Circle Color: " << circ.getColor() << ", Area: " << circ.getArea() << endl;

    return 0;
}


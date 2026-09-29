#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    cout << "Circle area: " << circle.CalculateArea() << endl;
    cout << "Circle perimeter: " << circle.CalculatePerimeter() << endl;

    cout << "Rectangle area: " << rectangle.CalculateArea() << endl;
    cout << "Rectangle perimeter: " << rectangle.CalculatePerimeter() << endl;

    cout << "Triangle area: " << triangle.CalculateArea() << endl;
    cout << "Triangle perimeter: " << triangle.CalculatePerimeter() << endl;

    return 0;
}
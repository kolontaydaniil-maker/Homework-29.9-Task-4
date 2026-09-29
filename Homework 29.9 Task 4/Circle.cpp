#include "Circle.h"

Circle::Circle(double r)
{
    radius = r;
}

double Circle::CalculateArea()
{
    return 3.14 * radius * radius;
}

double Circle::CalculatePerimeter()
{
    return 2 * 3.14 * radius;
}
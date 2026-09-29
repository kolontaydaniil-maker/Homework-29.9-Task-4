#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double x, double y, double z)
{
    a = x;
    b = y;
    c = z;
}

double Triangle::CalculateArea()
{
    double p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::CalculatePerimeter()
{
    return a + b + c;
}
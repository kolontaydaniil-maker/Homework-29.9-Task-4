#include "Rectangle.h"

Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

double Rectangle::CalculateArea()
{
    return width * height;
}

double Rectangle::CalculatePerimeter()
{
    return 2 * (width + height);
}
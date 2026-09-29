#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h);

    double CalculateArea() override;
    double CalculatePerimeter() override;
};
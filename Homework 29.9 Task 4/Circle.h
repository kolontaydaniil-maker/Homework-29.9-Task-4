#pragma once
#include "IShape.h"

class Circle : public IShape
{
private:
    double radius;

public:
    Circle(double r);

    double CalculateArea() override;
    double CalculatePerimeter() override;
};
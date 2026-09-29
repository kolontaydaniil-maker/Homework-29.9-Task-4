#pragma once
#include "IShape.h"

class Triangle : public IShape
{
private:
    double a;
    double b;
    double c;

public:
    Triangle(double x, double y, double z);

    double CalculateArea() override;
    double CalculatePerimeter() override;
};
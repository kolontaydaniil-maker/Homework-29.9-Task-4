#pragma once

class IShape
{
public:
    virtual double CalculateArea() = 0;
    virtual double CalculatePerimeter() = 0;
};
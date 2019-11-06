#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(double diameter)
{
    init(diameter);
}
double Circle::getArea()
{
    if(!_isAreaCalculated)
    {
        _area = (_diameter * 0.5) * (_diameter * 0.5) * PI;
    }
    return _area;
}

double Circle::getGirth()
{
    if(!_isGirthCalculated)
    {
        _girth = _diameter * PI;
    }
    return _girth;
}

void Circle::init(double diameter)
{
    _diameter = diameter;
    _radius = diameter * 0.5;
}
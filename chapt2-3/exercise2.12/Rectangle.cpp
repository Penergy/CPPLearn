#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double width, double height )
{
    init(width, height);
}
double Rectangle::getArea()
{
    if(!_isAreaCalculated)
    {
        _area = _width *_height;
    }
    return _area;
}

double Rectangle::getGirth()
{
    if(!_isGirthCalculated)
    {
        _girth = (_height + _width) * 2;
    }
    return _girth;
}

void Rectangle::init(double width, double height )
{
    _width = width;
    _height = height;
}
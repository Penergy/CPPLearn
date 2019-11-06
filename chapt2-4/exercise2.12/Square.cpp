#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(double side_length )
{
    init(side_length, side_length);
}
double Square::getArea()
{
    if(!_isAreaCalculated)
    {
        _area = _width *_height;
    }
    return _area;
}

double Square::getGirth()
{
    if(!_isGirthCalculated)
    {
        _girth = (_height + _width) * 2;
    }
    return _girth;
}
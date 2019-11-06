#ifndef __SHAPE_H
#define __SHAPE_H
class Shape
{
public:
    Shape();
    virtual double getArea() = 0;
    virtual double getGirth() = 0;

protected:
    double _area;
    double _girth;
    bool _isAreaCalculated = false;
    bool _isGirthCalculated = false;
};
#endif
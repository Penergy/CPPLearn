#ifndef __SHAPE_H
#define __SHAPE_H
namespace exe212
{
class Shape
{
public:
    virtual double getArea();
    virtual double getGirth();

private:
    double _area;
    double _girth;
};
} // namespace exe212
#endif
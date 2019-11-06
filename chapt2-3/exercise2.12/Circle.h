#ifndef __CIRCLE_H
#define __CIRCLE_H

#include <iostream>
#include "Shape.h"
static const double PI = 3.1415926535898;

class Circle: public Shape
{
public:
    // 构造函数
    explicit Circle(double diameter = 1);
    virtual double getArea();
    virtual double getGirth();

private:
    void init(double diameter);
    double _diameter;
    double _radius;
};
#endif
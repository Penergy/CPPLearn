#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include <iostream>
#include "Shape.h"

class Rectangle : public Shape
{
public:
    // 构造函数
    explicit Rectangle(double width = 0, double height = 0);
    virtual double getArea();
    virtual double getGirth();

protected:
    void init(double width, double height);
    double _width;
    double _height;
};
#endif
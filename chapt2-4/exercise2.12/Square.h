#ifndef __SQUARE_H
#define __SQUARE_H

#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle
{
public:
    // 构造函数
    explicit Square(double side_length = 0);
    virtual double getArea();
    virtual double getGirth();
};
#endif
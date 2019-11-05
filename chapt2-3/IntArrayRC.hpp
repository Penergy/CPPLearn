#ifndef IntArrayRC_H
#define IntArrayRC_H

#include "IntArray.hpp"

class IntArrayRC : public IntArray
{
public:
    // 构造函数
    explicit IntArrayRC(int sz = DefaultArraySize);
    IntArrayRC(int *array, int array_size);
    IntArrayRC(const IntArray &rhs); // 拷贝构造函数（copy constructor）
    virtual int &operator[](int);

private:
    void check_range(int);
};

#endif
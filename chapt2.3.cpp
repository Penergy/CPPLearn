#include <iostream>
#include <cassert>
#include "chapt2.3.hpp"

IntArray::IntArray(int sz)
{
    // 设置数据成员
    _size = sz;
    ia = new int[_size];

    // 初始化内存
    for (int ix = 0; ix < _size; ++ix)
    {
        ia[ix] = 0;
    }
}

IntArray::IntArray(int *array, int sz)
{
    // 设置数据成员
    _size = sz;
    ia = new int[_size];

    // 初始化内存
    for (int ix = 0; ix < _size; ++ix)
    {
        ia[ix] = array[ix];
    }
}

IntArray::IntArray(const IntArray &rhs)
{
    // 拷贝构造函数
    _size = rhs._size;
    ia = new int [_size];
    for (int ix = 0; ix < _size; ++ix)
    {
        ia[ix] = rhs.ia[ix];
    }
}

int IntArray::max() const
{
    if (_size == 0)
    {
        return -1;
    }
    int max = ia[0];
    for (int ix = 1; ix < _size; ++ix)
    {
        if (max < ia[ix])
        {
            max = ia[ix];
        }
    }
    return max;
}



int IntArray::min() const
{
    if (_size == 0)
    {
        return -1;
    }
    int min = ia[0];
    for (int ix = 1; ix < _size; ++ix)
    {
        if (min >= ia[ix])
        {
            min = ia[ix];
        }
    }
    return min;
}

bool IntArray::operator==(const IntArray &lft) const
{
    for (int ix = 1; ix < _size; ++ix)
    {
        if (ia[ix] != lft.ia[ix])
        {
            return false;
        }
    }
    return true;
}

bool IntArray::operator!=(const IntArray &lft) const
{
    for (int ix = 1; ix < _size; ++ix)
    {
        if (ia[ix] == lft.ia[ix])
        {
            return true;
        }
    }
    return false;
}

IntArray& IntArray::operator=(const IntArray &lft)
{

    _size = lft._size;
    ia = lft.ia;

    return *this;
}

int& IntArray::operator[] (int index)
{
    assert( index >= 0 && index < _size);
    return ia[index];
}
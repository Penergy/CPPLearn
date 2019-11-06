#include <iostream>
#include <cassert>
#include "IntArray.h"

IntArray::IntArray(int sz)
{
   init(sz, 0) ;
}

IntArray::IntArray(int *array, int sz)
{
    init(sz, array);
}

IntArray::IntArray(const IntArray &rhs)
{
    init(rhs._size, rhs.ia);
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

// int& IntArray::operator[] (int index)
// {
//     assert( index >= 0 && index < _size);
//     return ia[index];
// }

void IntArray::init(int sz, int *array)
{
    _size = sz;
    ia = new int[ _size ];
    for( int ix = 0; ix < _size; ++ix)
    {
        if(!array)
        {
            ia[ix] = 0;
        }
        else
        {
            ia[ix] = array[ix];
        }
    }
}

void IntArray::sort()
{

}

int IntArray::find(int index) const
{
    return -1;
}
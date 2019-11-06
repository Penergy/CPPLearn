#include <iostream>
#include <cassert>
#include "IntArrayRC.h"

IntArrayRC::IntArrayRC(int sz): IntArray(sz){}
IntArrayRC::IntArrayRC(int *iar, int sz): IntArray(iar, sz){}
IntArrayRC::IntArrayRC(const IntArrayRC &rhs): IntArray(rhs){}

inline int& IntArrayRC::operator[](int index)
{
    check_range(index);
    return ia[index];
}

inline void IntArrayRC::check_range (int index)
{
    assert(index >= 0 && index < _size);
}
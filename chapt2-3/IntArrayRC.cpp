#include <iostream>
#include <cassert>
#include "IntArrayRC.hpp"

inline IntArrayRC::IntArrayRC(int sz): IntArray(sz){}

inline IntArrayRC::IntArrayRC(int *iar, int sz): IntArray(iar, sz){}

inline int& IntArrayRC::operator[](int index)
{
    check_range(index);
    return ia[index];
}

inline void IntArrayRC::check_range (int index)
{
    assert(index >= 0 && index < _size);
}